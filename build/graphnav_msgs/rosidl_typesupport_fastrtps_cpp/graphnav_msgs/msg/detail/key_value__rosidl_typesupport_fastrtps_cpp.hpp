// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from graphnav_msgs:msg/KeyValue.idl
// generated code does not contain a copyright notice

#ifndef GRAPHNAV_MSGS__MSG__DETAIL__KEY_VALUE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define GRAPHNAV_MSGS__MSG__DETAIL__KEY_VALUE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "graphnav_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "graphnav_msgs/msg/detail/key_value__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace graphnav_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_graphnav_msgs
cdr_serialize(
  const graphnav_msgs::msg::KeyValue & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_graphnav_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  graphnav_msgs::msg::KeyValue & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_graphnav_msgs
get_serialized_size(
  const graphnav_msgs::msg::KeyValue & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_graphnav_msgs
max_serialized_size_KeyValue(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_graphnav_msgs
cdr_serialize_key(
  const graphnav_msgs::msg::KeyValue & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_graphnav_msgs
get_serialized_size_key(
  const graphnav_msgs::msg::KeyValue & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_graphnav_msgs
max_serialized_size_key_KeyValue(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace graphnav_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_graphnav_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, graphnav_msgs, msg, KeyValue)();

#ifdef __cplusplus
}
#endif

#endif  // GRAPHNAV_MSGS__MSG__DETAIL__KEY_VALUE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
