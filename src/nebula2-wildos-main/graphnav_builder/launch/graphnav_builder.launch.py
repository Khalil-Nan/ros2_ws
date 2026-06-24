from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description():
    ns = LaunchConfiguration('ns')
    use_sim_time = LaunchConfiguration('use_sim_time')
    grid_map_topic = LaunchConfiguration('grid_map_topic')

    return LaunchDescription([
        DeclareLaunchArgument('ns', default_value=''),
        DeclareLaunchArgument('use_sim_time', default_value='False'),
        DeclareLaunchArgument('grid_map_topic', default_value='traversability_map'),
        Node(
            package='graphnav_builder',
            executable='graphnav_builder',
            name='graphnav_builder',
            namespace=ns,
            output='screen',
            parameters=[{
                'use_sim_time': use_sim_time,
                'odom_topic': 'odom',
                'grid_map_topic': grid_map_topic,
                'nav_graph_topic': 'nav_graph',
                'traversability_layer': '',
                'trav_class': 'default',
                'safe_threshold': 0.5,
                'planning_radius': 10.0,
                'local_map_resolution': 0.1,
                'max_free_radius': 4.0,
                'traversable_radius': 0.5,
                'edge_radius': 8.0,
                'num_samples': 1000,
                'graph_update_min_travel': 0.75,
                'graph_update_free_radius_fraction': 0.8,
                'publish_edge_debug_markers': True,
                'edge_debug_marker_topic': 'graphnav_edge_debug_markers',
                'edge_debug_z_offset': 0.12,
                'edge_debug_max_segments_per_class': 20000,
                'random_seed': 7,
            }],
        ),
    ])
