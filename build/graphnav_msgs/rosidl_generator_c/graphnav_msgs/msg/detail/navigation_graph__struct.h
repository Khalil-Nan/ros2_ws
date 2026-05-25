// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from graphnav_msgs:msg/NavigationGraph.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "graphnav_msgs/msg/navigation_graph.h"


#ifndef GRAPHNAV_MSGS__MSG__DETAIL__NAVIGATION_GRAPH__STRUCT_H_
#define GRAPHNAV_MSGS__MSG__DETAIL__NAVIGATION_GRAPH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'trav_classes'
#include "rosidl_runtime_c/string.h"
// Member 'nodes'
#include "graphnav_msgs/msg/detail/node__struct.h"
// Member 'edges'
#include "graphnav_msgs/msg/detail/edge__struct.h"

/// Struct defined in msg/NavigationGraph in the package graphnav_msgs.
typedef struct graphnav_msgs__msg__NavigationGraph
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String__Sequence trav_classes;
  graphnav_msgs__msg__Node__Sequence nodes;
  graphnav_msgs__msg__Edge__Sequence edges;
  /// the node that the robot is currently at
  uint32_t current_node_idx;
} graphnav_msgs__msg__NavigationGraph;

// Struct for a sequence of graphnav_msgs__msg__NavigationGraph.
typedef struct graphnav_msgs__msg__NavigationGraph__Sequence
{
  graphnav_msgs__msg__NavigationGraph * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} graphnav_msgs__msg__NavigationGraph__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GRAPHNAV_MSGS__MSG__DETAIL__NAVIGATION_GRAPH__STRUCT_H_
