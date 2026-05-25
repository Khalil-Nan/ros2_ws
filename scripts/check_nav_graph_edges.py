#!/usr/bin/env python3
import math
import sys
from typing import List, Optional, Tuple

import rclpy
from graphnav_msgs.msg import NavigationGraph
from grid_map_msgs.msg import GridMap
from rclpy.node import Node


Cell = Tuple[int, int]


class NavGraphEdgeCheck(Node):
    def __init__(self):
        super().__init__('nav_graph_edge_check')
        self.declare_parameter('grid_topic', '/elevation_mapping_node/elevation_map_raw')
        self.declare_parameter('graph_topic', '/nav_graph')
        self.declare_parameter('traversability_layer', 'traversability')
        self.declare_parameter('observed_layer', 'elevation')
        self.declare_parameter('safe_threshold', 0.2)

        self.grid_topic = self.get_parameter('grid_topic').value
        self.graph_topic = self.get_parameter('graph_topic').value
        self.trav_layer = self.get_parameter('traversability_layer').value
        self.observed_layer = self.get_parameter('observed_layer').value
        self.safe_threshold = float(self.get_parameter('safe_threshold').value)

        self.grid: Optional[GridMap] = None
        self.graph: Optional[NavigationGraph] = None

        self.create_subscription(GridMap, self.grid_topic, self.grid_callback, 10)
        self.create_subscription(NavigationGraph, self.graph_topic, self.graph_callback, 10)

    def grid_callback(self, msg: GridMap):
        self.grid = msg
        self.try_report()

    def graph_callback(self, msg: NavigationGraph):
        self.graph = msg
        self.try_report()

    def try_report(self):
        if self.grid is None or self.graph is None:
            return

        grid = GridView(self.grid, self.trav_layer, self.observed_layer, self.safe_threshold)
        graph = self.graph

        valid = 0
        bad = []
        bad_reasons = {'unknown': 0, 'obstacle': 0, 'out_of_grid': 0, 'bad_index': 0}
        total_length = 0.0
        bad_length = 0.0

        for edge_idx, edge in enumerate(graph.edges):
            if edge.from_idx >= len(graph.nodes) or edge.to_idx >= len(graph.nodes):
                bad_reasons['bad_index'] += 1
                bad.append((edge_idx, edge.from_idx, edge.to_idx, 'bad_index', 0, 0.0, None))
                continue

            start = graph.nodes[edge.from_idx].pose.position
            end = graph.nodes[edge.to_idx].pose.position
            start_xy = (float(start.x), float(start.y))
            end_xy = (float(end.x), float(end.y))
            length = math.hypot(end_xy[0] - start_xy[0], end_xy[1] - start_xy[1])
            total_length += length

            cells = grid.line_cells(start_xy, end_xy)
            if cells is None:
                bad_reasons['out_of_grid'] += 1
                bad_length += length
                bad.append((edge_idx, edge.from_idx, edge.to_idx, 'out_of_grid', 0, length, None))
                continue

            first_bad = None
            reason = None
            bad_cell_count = 0
            for cell in cells:
                status = grid.cell_status(cell)
                if status != 'free':
                    bad_cell_count += 1
                    if first_bad is None:
                        first_bad = (cell, status, grid.cell_values(cell))
                        reason = status

            if bad_cell_count:
                bad_reasons[reason] = bad_reasons.get(reason, 0) + 1
                bad_length += length
                bad.append((edge_idx, edge.from_idx, edge.to_idx, reason, bad_cell_count, length, first_bad))
            else:
                valid += 1

        print('=== NavGraph Edge Check ===')
        print(f'grid_topic: {self.grid_topic}')
        print(f'graph_topic: {self.graph_topic}')
        print(f'frame: grid={self.grid.header.frame_id}, graph={graph.header.frame_id}')
        print(f'grid: {grid.width}x{grid.height}, resolution={grid.resolution:.3f}, origin=({grid.origin_x:.3f}, {grid.origin_y:.3f})')
        print(f'layers: observed={self.observed_layer}, traversability={self.trav_layer}, threshold={self.safe_threshold}')
        print(f'nodes={len(graph.nodes)}, edges={len(graph.edges)}')
        print(f'edges: valid={valid}, bad={len(bad)}')
        print(f'bad reasons: {bad_reasons}')
        print(f'edge length: total={total_length:.2f}m, bad={bad_length:.2f}m')

        if bad:
            print('bad edge samples: edge from to reason bad_cells length first_bad_cell(row,col,status,elevation,traversability)')
            for item in bad[:30]:
                edge_idx, from_idx, to_idx, reason, bad_cell_count, length, first_bad = item
                if first_bad is None:
                    print(f'  {edge_idx:04d} {from_idx:04d}->{to_idx:04d} {reason} bad_cells={bad_cell_count} length={length:.2f}')
                    continue
                (row, col), status, (obs_val, trav_val) = first_bad
                print(
                    f'  {edge_idx:04d} {from_idx:04d}->{to_idx:04d} {reason} '
                    f'bad_cells={bad_cell_count} length={length:.2f} '
                    f'first=({row},{col},{status},{obs_val:.4g},{trav_val:.4g})'
                )

        rclpy.shutdown()


class GridView:
    def __init__(self, msg: GridMap, trav_layer: str, observed_layer: str, safe_threshold: float):
        if trav_layer not in msg.layers:
            raise RuntimeError(f'GridMap missing traversability layer {trav_layer!r}; layers={msg.layers}')
        if observed_layer not in msg.layers:
            raise RuntimeError(f'GridMap missing observed layer {observed_layer!r}; layers={msg.layers}')

        self.header = msg.header
        self.safe_threshold = safe_threshold
        self.resolution = float(msg.info.resolution)
        self.width = max(1, int(round(float(msg.info.length_x) / self.resolution)))
        self.height = max(1, int(round(float(msg.info.length_y) / self.resolution)))
        self.origin_x = float(msg.info.pose.position.x) - 0.5 * float(msg.info.length_x)
        self.origin_y = float(msg.info.pose.position.y) - 0.5 * float(msg.info.length_y)
        self.expected = self.width * self.height

        self.trav = self.decode_layer(msg.data[msg.layers.index(trav_layer)], self.height, self.width)
        self.observed = self.decode_layer(msg.data[msg.layers.index(observed_layer)], self.height, self.width)

    @staticmethod
    def decode_layer(array_msg, rows: int, cols: int):
        data = list(array_msg.data)
        expected = rows * cols
        dims = array_msg.layout.dim
        if len(dims) >= 2 and dims[0].label == 'column_index' and dims[1].label == 'row_index':
            source_cols = dims[0].size or cols
            source_rows = dims[1].size or rows
            out = [float('nan')] * expected
            for col in range(min(source_cols, cols)):
                for row in range(min(source_rows, rows)):
                    src_idx = col * source_rows + row
                    if src_idx < len(data):
                        out[row * cols + col] = data[src_idx]
            return out

        if len(dims) >= 2 and dims[0].label == 'row_index' and dims[1].label == 'column_index':
            source_rows = dims[0].size or rows
            source_cols = dims[1].size or cols
            out = [float('nan')] * expected
            for row in range(min(source_rows, rows)):
                for col in range(min(source_cols, cols)):
                    src_idx = row * source_cols + col
                    if src_idx < len(data):
                        out[row * cols + col] = data[src_idx]
            return out

        if len(data) < expected:
            data.extend([float('nan')] * (expected - len(data)))
        return data[:expected]

    def flat_index(self, cell: Cell) -> int:
        row, col = cell
        return row * self.width + col

    def in_bounds(self, cell: Cell) -> bool:
        row, col = cell
        return 0 <= row < self.height and 0 <= col < self.width

    def xy_to_cell(self, xy) -> Optional[Cell]:
        x, y = xy
        col = int(math.floor((x - self.origin_x) / self.resolution))
        row = int(math.floor((y - self.origin_y) / self.resolution))
        cell = (row, col)
        return cell if self.in_bounds(cell) else None

    def cell_status(self, cell: Cell) -> str:
        if not self.in_bounds(cell):
            return 'out_of_grid'
        idx = self.flat_index(cell)
        obs_val = self.observed[idx]
        trav_val = self.trav[idx]
        if not math.isfinite(obs_val) or not math.isfinite(trav_val):
            return 'unknown'
        if trav_val < self.safe_threshold:
            return 'obstacle'
        return 'free'

    def cell_values(self, cell: Cell):
        if not self.in_bounds(cell):
            return float('nan'), float('nan')
        idx = self.flat_index(cell)
        return self.observed[idx], self.trav[idx]

    def line_cells(self, start_xy, end_xy) -> Optional[List[Cell]]:
        start_cell = self.xy_to_cell(start_xy)
        end_cell = self.xy_to_cell(end_xy)
        if start_cell is None or end_cell is None:
            return None

        r0, c0 = start_cell
        r1, c1 = end_cell
        dr = abs(r1 - r0)
        dc = abs(c1 - c0)
        step_r = 1 if r0 < r1 else -1
        step_c = 1 if c0 < c1 else -1
        cells = []

        if dc > dr:
            err = dc / 2
            row = r0
            for col in range(c0, c1 + step_c, step_c):
                cells.append((row, col))
                err -= dr
                if err < 0:
                    row += step_r
                    err += dc
        else:
            err = dr / 2
            col = c0
            for row in range(r0, r1 + step_r, step_r):
                cells.append((row, col))
                err -= dc
                if err < 0:
                    col += step_c
                    err += dr
        return cells


def main():
    rclpy.init()
    node = NavGraphEdgeCheck()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        if rclpy.ok():
            node.destroy_node()
            rclpy.shutdown()


if __name__ == '__main__':
    sys.exit(main())
