// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from graphnav_msgs:msg/Edge.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "graphnav_msgs/msg/detail/edge__rosidl_typesupport_introspection_c.h"
#include "graphnav_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "graphnav_msgs/msg/detail/edge__functions.h"
#include "graphnav_msgs/msg/detail/edge__struct.h"


// Include directives for member types
// Member `traversability`
#include "graphnav_msgs/msg/edge_traversability.h"
// Member `traversability`
#include "graphnav_msgs/msg/detail/edge_traversability__rosidl_typesupport_introspection_c.h"
// Member `properties`
#include "graphnav_msgs/msg/key_value.h"
// Member `properties`
#include "graphnav_msgs/msg/detail/key_value__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void graphnav_msgs__msg__Edge__rosidl_typesupport_introspection_c__Edge_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  graphnav_msgs__msg__Edge__init(message_memory);
}

void graphnav_msgs__msg__Edge__rosidl_typesupport_introspection_c__Edge_fini_function(void * message_memory)
{
  graphnav_msgs__msg__Edge__fini(message_memory);
}

size_t graphnav_msgs__msg__Edge__rosidl_typesupport_introspection_c__size_function__Edge__traversability(
  const void * untyped_member)
{
  const graphnav_msgs__msg__EdgeTraversability__Sequence * member =
    (const graphnav_msgs__msg__EdgeTraversability__Sequence *)(untyped_member);
  return member->size;
}

const void * graphnav_msgs__msg__Edge__rosidl_typesupport_introspection_c__get_const_function__Edge__traversability(
  const void * untyped_member, size_t index)
{
  const graphnav_msgs__msg__EdgeTraversability__Sequence * member =
    (const graphnav_msgs__msg__EdgeTraversability__Sequence *)(untyped_member);
  return &member->data[index];
}

void * graphnav_msgs__msg__Edge__rosidl_typesupport_introspection_c__get_function__Edge__traversability(
  void * untyped_member, size_t index)
{
  graphnav_msgs__msg__EdgeTraversability__Sequence * member =
    (graphnav_msgs__msg__EdgeTraversability__Sequence *)(untyped_member);
  return &member->data[index];
}

void graphnav_msgs__msg__Edge__rosidl_typesupport_introspection_c__fetch_function__Edge__traversability(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const graphnav_msgs__msg__EdgeTraversability * item =
    ((const graphnav_msgs__msg__EdgeTraversability *)
    graphnav_msgs__msg__Edge__rosidl_typesupport_introspection_c__get_const_function__Edge__traversability(untyped_member, index));
  graphnav_msgs__msg__EdgeTraversability * value =
    (graphnav_msgs__msg__EdgeTraversability *)(untyped_value);
  *value = *item;
}

void graphnav_msgs__msg__Edge__rosidl_typesupport_introspection_c__assign_function__Edge__traversability(
  void * untyped_member, size_t index, const void * untyped_value)
{
  graphnav_msgs__msg__EdgeTraversability * item =
    ((graphnav_msgs__msg__EdgeTraversability *)
    graphnav_msgs__msg__Edge__rosidl_typesupport_introspection_c__get_function__Edge__traversability(untyped_member, index));
  const graphnav_msgs__msg__EdgeTraversability * value =
    (const graphnav_msgs__msg__EdgeTraversability *)(untyped_value);
  *item = *value;
}

bool graphnav_msgs__msg__Edge__rosidl_typesupport_introspection_c__resize_function__Edge__traversability(
  void * untyped_member, size_t size)
{
  graphnav_msgs__msg__EdgeTraversability__Sequence * member =
    (graphnav_msgs__msg__EdgeTraversability__Sequence *)(untyped_member);
  graphnav_msgs__msg__EdgeTraversability__Sequence__fini(member);
  return graphnav_msgs__msg__EdgeTraversability__Sequence__init(member, size);
}

size_t graphnav_msgs__msg__Edge__rosidl_typesupport_introspection_c__size_function__Edge__properties(
  const void * untyped_member)
{
  const graphnav_msgs__msg__KeyValue__Sequence * member =
    (const graphnav_msgs__msg__KeyValue__Sequence *)(untyped_member);
  return member->size;
}

const void * graphnav_msgs__msg__Edge__rosidl_typesupport_introspection_c__get_const_function__Edge__properties(
  const void * untyped_member, size_t index)
{
  const graphnav_msgs__msg__KeyValue__Sequence * member =
    (const graphnav_msgs__msg__KeyValue__Sequence *)(untyped_member);
  return &member->data[index];
}

void * graphnav_msgs__msg__Edge__rosidl_typesupport_introspection_c__get_function__Edge__properties(
  void * untyped_member, size_t index)
{
  graphnav_msgs__msg__KeyValue__Sequence * member =
    (graphnav_msgs__msg__KeyValue__Sequence *)(untyped_member);
  return &member->data[index];
}

void graphnav_msgs__msg__Edge__rosidl_typesupport_introspection_c__fetch_function__Edge__properties(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const graphnav_msgs__msg__KeyValue * item =
    ((const graphnav_msgs__msg__KeyValue *)
    graphnav_msgs__msg__Edge__rosidl_typesupport_introspection_c__get_const_function__Edge__properties(untyped_member, index));
  graphnav_msgs__msg__KeyValue * value =
    (graphnav_msgs__msg__KeyValue *)(untyped_value);
  *value = *item;
}

void graphnav_msgs__msg__Edge__rosidl_typesupport_introspection_c__assign_function__Edge__properties(
  void * untyped_member, size_t index, const void * untyped_value)
{
  graphnav_msgs__msg__KeyValue * item =
    ((graphnav_msgs__msg__KeyValue *)
    graphnav_msgs__msg__Edge__rosidl_typesupport_introspection_c__get_function__Edge__properties(untyped_member, index));
  const graphnav_msgs__msg__KeyValue * value =
    (const graphnav_msgs__msg__KeyValue *)(untyped_value);
  *item = *value;
}

bool graphnav_msgs__msg__Edge__rosidl_typesupport_introspection_c__resize_function__Edge__properties(
  void * untyped_member, size_t size)
{
  graphnav_msgs__msg__KeyValue__Sequence * member =
    (graphnav_msgs__msg__KeyValue__Sequence *)(untyped_member);
  graphnav_msgs__msg__KeyValue__Sequence__fini(member);
  return graphnav_msgs__msg__KeyValue__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember graphnav_msgs__msg__Edge__rosidl_typesupport_introspection_c__Edge_message_member_array[4] = {
  {
    "to_idx",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graphnav_msgs__msg__Edge, to_idx),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "from_idx",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graphnav_msgs__msg__Edge, from_idx),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "traversability",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graphnav_msgs__msg__Edge, traversability),  // bytes offset in struct
    NULL,  // default value
    graphnav_msgs__msg__Edge__rosidl_typesupport_introspection_c__size_function__Edge__traversability,  // size() function pointer
    graphnav_msgs__msg__Edge__rosidl_typesupport_introspection_c__get_const_function__Edge__traversability,  // get_const(index) function pointer
    graphnav_msgs__msg__Edge__rosidl_typesupport_introspection_c__get_function__Edge__traversability,  // get(index) function pointer
    graphnav_msgs__msg__Edge__rosidl_typesupport_introspection_c__fetch_function__Edge__traversability,  // fetch(index, &value) function pointer
    graphnav_msgs__msg__Edge__rosidl_typesupport_introspection_c__assign_function__Edge__traversability,  // assign(index, value) function pointer
    graphnav_msgs__msg__Edge__rosidl_typesupport_introspection_c__resize_function__Edge__traversability  // resize(index) function pointer
  },
  {
    "properties",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graphnav_msgs__msg__Edge, properties),  // bytes offset in struct
    NULL,  // default value
    graphnav_msgs__msg__Edge__rosidl_typesupport_introspection_c__size_function__Edge__properties,  // size() function pointer
    graphnav_msgs__msg__Edge__rosidl_typesupport_introspection_c__get_const_function__Edge__properties,  // get_const(index) function pointer
    graphnav_msgs__msg__Edge__rosidl_typesupport_introspection_c__get_function__Edge__properties,  // get(index) function pointer
    graphnav_msgs__msg__Edge__rosidl_typesupport_introspection_c__fetch_function__Edge__properties,  // fetch(index, &value) function pointer
    graphnav_msgs__msg__Edge__rosidl_typesupport_introspection_c__assign_function__Edge__properties,  // assign(index, value) function pointer
    graphnav_msgs__msg__Edge__rosidl_typesupport_introspection_c__resize_function__Edge__properties  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers graphnav_msgs__msg__Edge__rosidl_typesupport_introspection_c__Edge_message_members = {
  "graphnav_msgs__msg",  // message namespace
  "Edge",  // message name
  4,  // number of fields
  sizeof(graphnav_msgs__msg__Edge),
  false,  // has_any_key_member_
  graphnav_msgs__msg__Edge__rosidl_typesupport_introspection_c__Edge_message_member_array,  // message members
  graphnav_msgs__msg__Edge__rosidl_typesupport_introspection_c__Edge_init_function,  // function to initialize message memory (memory has to be allocated)
  graphnav_msgs__msg__Edge__rosidl_typesupport_introspection_c__Edge_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t graphnav_msgs__msg__Edge__rosidl_typesupport_introspection_c__Edge_message_type_support_handle = {
  0,
  &graphnav_msgs__msg__Edge__rosidl_typesupport_introspection_c__Edge_message_members,
  get_message_typesupport_handle_function,
  &graphnav_msgs__msg__Edge__get_type_hash,
  &graphnav_msgs__msg__Edge__get_type_description,
  &graphnav_msgs__msg__Edge__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_graphnav_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, graphnav_msgs, msg, Edge)() {
  graphnav_msgs__msg__Edge__rosidl_typesupport_introspection_c__Edge_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, graphnav_msgs, msg, EdgeTraversability)();
  graphnav_msgs__msg__Edge__rosidl_typesupport_introspection_c__Edge_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, graphnav_msgs, msg, KeyValue)();
  if (!graphnav_msgs__msg__Edge__rosidl_typesupport_introspection_c__Edge_message_type_support_handle.typesupport_identifier) {
    graphnav_msgs__msg__Edge__rosidl_typesupport_introspection_c__Edge_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &graphnav_msgs__msg__Edge__rosidl_typesupport_introspection_c__Edge_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
