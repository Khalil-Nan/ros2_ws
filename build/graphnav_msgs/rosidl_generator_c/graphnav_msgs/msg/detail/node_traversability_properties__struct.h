// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from graphnav_msgs:msg/NodeTraversabilityProperties.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "graphnav_msgs/msg/node_traversability_properties.h"


#ifndef GRAPHNAV_MSGS__MSG__DETAIL__NODE_TRAVERSABILITY_PROPERTIES__STRUCT_H_
#define GRAPHNAV_MSGS__MSG__DETAIL__NODE_TRAVERSABILITY_PROPERTIES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'frontier_points'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'properties'
#include "graphnav_msgs/msg/detail/key_value__struct.h"

/// Struct defined in msg/NodeTraversabilityProperties in the package graphnav_msgs.
typedef struct graphnav_msgs__msg__NodeTraversabilityProperties
{
  bool is_frontier;
  geometry_msgs__msg__Point__Sequence frontier_points;
  float explored_radius;
  float free_radius;
  graphnav_msgs__msg__KeyValue__Sequence properties;
} graphnav_msgs__msg__NodeTraversabilityProperties;

// Struct for a sequence of graphnav_msgs__msg__NodeTraversabilityProperties.
typedef struct graphnav_msgs__msg__NodeTraversabilityProperties__Sequence
{
  graphnav_msgs__msg__NodeTraversabilityProperties * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} graphnav_msgs__msg__NodeTraversabilityProperties__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GRAPHNAV_MSGS__MSG__DETAIL__NODE_TRAVERSABILITY_PROPERTIES__STRUCT_H_
