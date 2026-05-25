// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from graphnav_msgs:msg/KeyValue.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "graphnav_msgs/msg/key_value.h"


#ifndef GRAPHNAV_MSGS__MSG__DETAIL__KEY_VALUE__STRUCT_H_
#define GRAPHNAV_MSGS__MSG__DETAIL__KEY_VALUE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'key'
#include "rosidl_runtime_c/string.h"
// Member 'value'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/KeyValue in the package graphnav_msgs.
typedef struct graphnav_msgs__msg__KeyValue
{
  rosidl_runtime_c__String key;
  rosidl_runtime_c__float__Sequence value;
} graphnav_msgs__msg__KeyValue;

// Struct for a sequence of graphnav_msgs__msg__KeyValue.
typedef struct graphnav_msgs__msg__KeyValue__Sequence
{
  graphnav_msgs__msg__KeyValue * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} graphnav_msgs__msg__KeyValue__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GRAPHNAV_MSGS__MSG__DETAIL__KEY_VALUE__STRUCT_H_
