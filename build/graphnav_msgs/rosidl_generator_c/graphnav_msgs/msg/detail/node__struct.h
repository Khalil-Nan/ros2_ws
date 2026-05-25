// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from graphnav_msgs:msg/Node.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "graphnav_msgs/msg/node.h"


#ifndef GRAPHNAV_MSGS__MSG__DETAIL__NODE__STRUCT_H_
#define GRAPHNAV_MSGS__MSG__DETAIL__NODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'uuid'
#include "graphnav_msgs/msg/detail/uuid__struct.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'trav_properties'
#include "graphnav_msgs/msg/detail/node_traversability_properties__struct.h"
// Member 'properties'
#include "graphnav_msgs/msg/detail/key_value__struct.h"

/// Struct defined in msg/Node in the package graphnav_msgs.
typedef struct graphnav_msgs__msg__Node
{
  graphnav_msgs__msg__UUID uuid;
  geometry_msgs__msg__Pose pose;
  /// same order as NavigationGraph::trav_classes
  graphnav_msgs__msg__NodeTraversabilityProperties__Sequence trav_properties;
  graphnav_msgs__msg__KeyValue__Sequence properties;
} graphnav_msgs__msg__Node;

// Struct for a sequence of graphnav_msgs__msg__Node.
typedef struct graphnav_msgs__msg__Node__Sequence
{
  graphnav_msgs__msg__Node * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} graphnav_msgs__msg__Node__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GRAPHNAV_MSGS__MSG__DETAIL__NODE__STRUCT_H_
