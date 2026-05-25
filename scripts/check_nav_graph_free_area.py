#!/usr/bin/env python3
import math
import sys
from typing import Optional

import rclpy
from graphnav_msgs.msg import NavigationGraph
from grid_map_msgs.msg import GridMap
from rclpy.node import Node


class NavGraphFreeAreaCheck(Node):
    def __init__(self):
        super().__init__('nav_graph_free_area_check')
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

        msg = self.grid
        graph = self.graph
        if self.trav_layer not in msg.layers:
            print(f'ERROR: grid has no traversability layer {self.trav_layer!r}; layers={msg.layers}')
            rclpy.shutdown()
            return
        if self.observed_layer not in msg.layers:
            print(f'ERROR: grid has no observed layer {self.observed_layer!r}; layers={msg.layers}')
            rclpy.shutdown()
            return

        trav_idx = msg.layers.index(self.trav_layer)
        observed_idx = msg.layers.index(self.observed_layer)
        resolution = float(msg.info.resolution)
        width = max(1, int(round(float(msg.info.length_x) / resolution)))
        height = max(1, int(round(float(msg.info.length_y) / resolution)))
        origin_x = float(msg.info.pose.position.x) - 0.5 * float(msg.info.length_x)
        origin_y = float(msg.info.pose.position.y) - 0.5 * float(msg.info.length_y)
        expected = width * height

        trav = self.decode_layer(msg.data[trav_idx], height, width)
        observed = self.decode_layer(msg.data[observed_idx], height, width)

        free_cells = 0
        observed_cells = 0
        for i in range(expected):
            obs_ok = math.isfinite(observed[i])
            trav_ok = math.isfinite(trav[i]) and trav[i] >= self.safe_threshold
            if obs_ok:
                observed_cells += 1
            if obs_ok and trav_ok:
                free_cells += 1

        ok = 0
        bad = []
        out_of_grid = []
        for idx, node in enumerate(graph.nodes):
            x = float(node.pose.position.x)
            y = float(node.pose.position.y)
            col = int(math.floor((x - origin_x) / resolution))
            row = int(math.floor((y - origin_y) / resolution))
            if row < 0 or row >= height or col < 0 or col >= width:
                out_of_grid.append((idx, x, y))
                continue

            cell_idx = row * width + col
            obs_val = observed[cell_idx]
            trav_val = trav[cell_idx]
            obs_ok = math.isfinite(obs_val)
            trav_ok = math.isfinite(trav_val) and trav_val >= self.safe_threshold
            if obs_ok and trav_ok:
                ok += 1
            else:
                bad.append((idx, x, y, row, col, obs_val, trav_val))

        total = len(graph.nodes)
        print('=== NavGraph Free Area Check ===')
        print(f'grid_topic: {self.grid_topic}')
        print(f'graph_topic: {self.graph_topic}')
        print(f'frame: grid={msg.header.frame_id}, graph={graph.header.frame_id}')
        print(f'grid: {width}x{height}, resolution={resolution:.3f}, origin=({origin_x:.3f}, {origin_y:.3f})')
        print(f'layers: observed={self.observed_layer}, traversability={self.trav_layer}, threshold={self.safe_threshold}')
        print(f'cells: observed={observed_cells}/{expected}, free={free_cells}/{expected}')
        print(f'nodes: total={total}, in_free_area={ok}, bad={len(bad)}, out_of_grid={len(out_of_grid)}')

        if bad:
            print('bad node samples: idx x y row col elevation traversability')
            for item in bad[:20]:
                idx, x, y, row, col, obs_val, trav_val = item
                print(f'  {idx:04d} {x:.3f} {y:.3f} {row} {col} {obs_val:.4g} {trav_val:.4g}')
        if out_of_grid:
            print('out-of-grid node samples: idx x y')
            for idx, x, y in out_of_grid[:20]:
                print(f'  {idx:04d} {x:.3f} {y:.3f}')

        rclpy.shutdown()

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


def main():
    rclpy.init()
    node = NavGraphFreeAreaCheck()
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
