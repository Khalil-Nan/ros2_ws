// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from graphnav_msgs:msg/UUID.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "graphnav_msgs/msg/uuid.h"


#ifndef GRAPHNAV_MSGS__MSG__DETAIL__UUID__STRUCT_H_
#define GRAPHNAV_MSGS__MSG__DETAIL__UUID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/UUID in the package graphnav_msgs.
typedef struct graphnav_msgs__msg__UUID
{
  uint8_t id[16];
} graphnav_msgs__msg__UUID;

// Struct for a sequence of graphnav_msgs__msg__UUID.
typedef struct graphnav_msgs__msg__UUID__Sequence
{
  graphnav_msgs__msg__UUID * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} graphnav_msgs__msg__UUID__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GRAPHNAV_MSGS__MSG__DETAIL__UUID__STRUCT_H_
