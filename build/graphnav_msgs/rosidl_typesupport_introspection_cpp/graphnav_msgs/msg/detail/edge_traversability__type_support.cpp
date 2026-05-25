// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from graphnav_msgs:msg/EdgeTraversability.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "graphnav_msgs/msg/detail/edge_traversability__functions.h"
#include "graphnav_msgs/msg/detail/edge_traversability__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace graphnav_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void EdgeTraversability_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) graphnav_msgs::msg::EdgeTraversability(_init);
}

void EdgeTraversability_fini_function(void * message_memory)
{
  auto typed_message = static_cast<graphnav_msgs::msg::EdgeTraversability *>(message_memory);
  typed_message->~EdgeTraversability();
}

size_t size_function__EdgeTraversability__properties(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<graphnav_msgs::msg::KeyValue> *>(untyped_member);
  return member->size();
}

const void * get_const_function__EdgeTraversability__properties(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<graphnav_msgs::msg::KeyValue> *>(untyped_member);
  return &member[index];
}

void * get_function__EdgeTraversability__properties(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<graphnav_msgs::msg::KeyValue> *>(untyped_member);
  return &member[index];
}

void fetch_function__EdgeTraversability__properties(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const graphnav_msgs::msg::KeyValue *>(
    get_const_function__EdgeTraversability__properties(untyped_member, index));
  auto & value = *reinterpret_cast<graphnav_msgs::msg::KeyValue *>(untyped_value);
  value = item;
}

void assign_function__EdgeTraversability__properties(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<graphnav_msgs::msg::KeyValue *>(
    get_function__EdgeTraversability__properties(untyped_member, index));
  const auto & value = *reinterpret_cast<const graphnav_msgs::msg::KeyValue *>(untyped_value);
  item = value;
}

void resize_function__EdgeTraversability__properties(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<graphnav_msgs::msg::KeyValue> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember EdgeTraversability_message_member_array[2] = {
  {
    "traversability_cost",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graphnav_msgs::msg::EdgeTraversability, traversability_cost),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "properties",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<graphnav_msgs::msg::KeyValue>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graphnav_msgs::msg::EdgeTraversability, properties),  // bytes offset in struct
    nullptr,  // default value
    size_function__EdgeTraversability__properties,  // size() function pointer
    get_const_function__EdgeTraversability__properties,  // get_const(index) function pointer
    get_function__EdgeTraversability__properties,  // get(index) function pointer
    fetch_function__EdgeTraversability__properties,  // fetch(index, &value) function pointer
    assign_function__EdgeTraversability__properties,  // assign(index, value) function pointer
    resize_function__EdgeTraversability__properties  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers EdgeTraversability_message_members = {
  "graphnav_msgs::msg",  // message namespace
  "EdgeTraversability",  // message name
  2,  // number of fields
  sizeof(graphnav_msgs::msg::EdgeTraversability),
  false,  // has_any_key_member_
  EdgeTraversability_message_member_array,  // message members
  EdgeTraversability_init_function,  // function to initialize message memory (memory has to be allocated)
  EdgeTraversability_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t EdgeTraversability_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &EdgeTraversability_message_members,
  get_message_typesupport_handle_function,
  &graphnav_msgs__msg__EdgeTraversability__get_type_hash,
  &graphnav_msgs__msg__EdgeTraversability__get_type_description,
  &graphnav_msgs__msg__EdgeTraversability__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace graphnav_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<graphnav_msgs::msg::EdgeTraversability>()
{
  return &::graphnav_msgs::msg::rosidl_typesupport_introspection_cpp::EdgeTraversability_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, graphnav_msgs, msg, EdgeTraversability)() {
  return &::graphnav_msgs::msg::rosidl_typesupport_introspection_cpp::EdgeTraversability_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
