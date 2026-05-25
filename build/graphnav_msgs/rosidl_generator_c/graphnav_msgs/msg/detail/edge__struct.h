// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from graphnav_msgs:msg/Edge.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "graphnav_msgs/msg/edge.h"


#ifndef GRAPHNAV_MSGS__MSG__DETAIL__EDGE__STRUCT_H_
#define GRAPHNAV_MSGS__MSG__DETAIL__EDGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'traversability'
#include "graphnav_msgs/msg/detail/edge_traversability__struct.h"
// Member 'properties'
#include "graphnav_msgs/msg/detail/key_value__struct.h"

/// Struct defined in msg/Edge in the package graphnav_msgs.
typedef struct graphnav_msgs__msg__Edge
{
  uint32_t to_idx;
  uint32_t from_idx;
  /// same order as NavigationGraph::trav_classes
  graphnav_msgs__msg__EdgeTraversability__Sequence traversability;
  graphnav_msgs__msg__KeyValue__Sequence properties;
} graphnav_msgs__msg__Edge;

// Struct for a sequence of graphnav_msgs__msg__Edge.
typedef struct graphnav_msgs__msg__Edge__Sequence
{
  graphnav_msgs__msg__Edge * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} graphnav_msgs__msg__Edge__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GRAPHNAV_MSGS__MSG__DETAIL__EDGE__STRUCT_H_
