// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from graphnav_msgs:msg/NodeTraversabilityProperties.idl
// generated code does not contain a copyright notice
#ifndef GRAPHNAV_MSGS__MSG__DETAIL__NODE_TRAVERSABILITY_PROPERTIES__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define GRAPHNAV_MSGS__MSG__DETAIL__NODE_TRAVERSABILITY_PROPERTIES__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "graphnav_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "graphnav_msgs/msg/detail/node_traversability_properties__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_graphnav_msgs
bool cdr_serialize_graphnav_msgs__msg__NodeTraversabilityProperties(
  const graphnav_msgs__msg__NodeTraversabilityProperties * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_graphnav_msgs
bool cdr_deserialize_graphnav_msgs__msg__NodeTraversabilityProperties(
  eprosima::fastcdr::Cdr &,
  graphnav_msgs__msg__NodeTraversabilityProperties * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_graphnav_msgs
size_t get_serialized_size_graphnav_msgs__msg__NodeTraversabilityProperties(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_graphnav_msgs
size_t max_serialized_size_graphnav_msgs__msg__NodeTraversabilityProperties(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_graphnav_msgs
bool cdr_serialize_key_graphnav_msgs__msg__NodeTraversabilityProperties(
  const graphnav_msgs__msg__NodeTraversabilityProperties * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_graphnav_msgs
size_t get_serialized_size_key_graphnav_msgs__msg__NodeTraversabilityProperties(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_graphnav_msgs
size_t max_serialized_size_key_graphnav_msgs__msg__NodeTraversabilityProperties(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_graphnav_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, graphnav_msgs, msg, NodeTraversabilityProperties)();

#ifdef __cplusplus
}
#endif

#endif  // GRAPHNAV_MSGS__MSG__DETAIL__NODE_TRAVERSABILITY_PROPERTIES__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
