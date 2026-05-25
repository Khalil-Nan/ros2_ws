// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from graphnav_msgs:msg/Node.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "graphnav_msgs/msg/detail/node__functions.h"
#include "graphnav_msgs/msg/detail/node__struct.hpp"
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

void Node_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) graphnav_msgs::msg::Node(_init);
}

void Node_fini_function(void * message_memory)
{
  auto typed_message = static_cast<graphnav_msgs::msg::Node *>(message_memory);
  typed_message->~Node();
}

size_t size_function__Node__trav_properties(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<graphnav_msgs::msg::NodeTraversabilityProperties> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Node__trav_properties(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<graphnav_msgs::msg::NodeTraversabilityProperties> *>(untyped_member);
  return &member[index];
}

void * get_function__Node__trav_properties(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<graphnav_msgs::msg::NodeTraversabilityProperties> *>(untyped_member);
  return &member[index];
}

void fetch_function__Node__trav_properties(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const graphnav_msgs::msg::NodeTraversabilityProperties *>(
    get_const_function__Node__trav_properties(untyped_member, index));
  auto & value = *reinterpret_cast<graphnav_msgs::msg::NodeTraversabilityProperties *>(untyped_value);
  value = item;
}

void assign_function__Node__trav_properties(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<graphnav_msgs::msg::NodeTraversabilityProperties *>(
    get_function__Node__trav_properties(untyped_member, index));
  const auto & value = *reinterpret_cast<const graphnav_msgs::msg::NodeTraversabilityProperties *>(untyped_value);
  item = value;
}

void resize_function__Node__trav_properties(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<graphnav_msgs::msg::NodeTraversabilityProperties> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Node__properties(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<graphnav_msgs::msg::KeyValue> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Node__properties(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<graphnav_msgs::msg::KeyValue> *>(untyped_member);
  return &member[index];
}

void * get_function__Node__properties(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<graphnav_msgs::msg::KeyValue> *>(untyped_member);
  return &member[index];
}

void fetch_function__Node__properties(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const graphnav_msgs::msg::KeyValue *>(
    get_const_function__Node__properties(untyped_member, index));
  auto & value = *reinterpret_cast<graphnav_msgs::msg::KeyValue *>(untyped_value);
  value = item;
}

void assign_function__Node__properties(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<graphnav_msgs::msg::KeyValue *>(
    get_function__Node__properties(untyped_member, index));
  const auto & value = *reinterpret_cast<const graphnav_msgs::msg::KeyValue *>(untyped_value);
  item = value;
}

void resize_function__Node__properties(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<graphnav_msgs::msg::KeyValue> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Node_message_member_array[4] = {
  {
    "uuid",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<graphnav_msgs::msg::UUID>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graphnav_msgs::msg::Node, uuid),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pose",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graphnav_msgs::msg::Node, pose),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "trav_properties",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<graphnav_msgs::msg::NodeTraversabilityProperties>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graphnav_msgs::msg::Node, trav_properties),  // bytes offset in struct
    nullptr,  // default value
    size_function__Node__trav_properties,  // size() function pointer
    get_const_function__Node__trav_properties,  // get_const(index) function pointer
    get_function__Node__trav_properties,  // get(index) function pointer
    fetch_function__Node__trav_properties,  // fetch(index, &value) function pointer
    assign_function__Node__trav_properties,  // assign(index, value) function pointer
    resize_function__Node__trav_properties  // resize(index) function pointer
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
    offsetof(graphnav_msgs::msg::Node, properties),  // bytes offset in struct
    nullptr,  // default value
    size_function__Node__properties,  // size() function pointer
    get_const_function__Node__properties,  // get_const(index) function pointer
    get_function__Node__properties,  // get(index) function pointer
    fetch_function__Node__properties,  // fetch(index, &value) function pointer
    assign_function__Node__properties,  // assign(index, value) function pointer
    resize_function__Node__properties  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Node_message_members = {
  "graphnav_msgs::msg",  // message namespace
  "Node",  // message name
  4,  // number of fields
  sizeof(graphnav_msgs::msg::Node),
  false,  // has_any_key_member_
  Node_message_member_array,  // message members
  Node_init_function,  // function to initialize message memory (memory has to be allocated)
  Node_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Node_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Node_message_members,
  get_message_typesupport_handle_function,
  &graphnav_msgs__msg__Node__get_type_hash,
  &graphnav_msgs__msg__Node__get_type_description,
  &graphnav_msgs__msg__Node__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace graphnav_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<graphnav_msgs::msg::Node>()
{
  return &::graphnav_msgs::msg::rosidl_typesupport_introspection_cpp::Node_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, graphnav_msgs, msg, Node)() {
  return &::graphnav_msgs::msg::rosidl_typesupport_introspection_cpp::Node_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
