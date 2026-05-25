// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from graphnav_msgs:msg/KeyValue.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "graphnav_msgs/msg/detail/key_value__rosidl_typesupport_introspection_c.h"
#include "graphnav_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "graphnav_msgs/msg/detail/key_value__functions.h"
#include "graphnav_msgs/msg/detail/key_value__struct.h"


// Include directives for member types
// Member `key`
#include "rosidl_runtime_c/string_functions.h"
// Member `value`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void graphnav_msgs__msg__KeyValue__rosidl_typesupport_introspection_c__KeyValue_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  graphnav_msgs__msg__KeyValue__init(message_memory);
}

void graphnav_msgs__msg__KeyValue__rosidl_typesupport_introspection_c__KeyValue_fini_function(void * message_memory)
{
  graphnav_msgs__msg__KeyValue__fini(message_memory);
}

size_t graphnav_msgs__msg__KeyValue__rosidl_typesupport_introspection_c__size_function__KeyValue__value(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * graphnav_msgs__msg__KeyValue__rosidl_typesupport_introspection_c__get_const_function__KeyValue__value(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * graphnav_msgs__msg__KeyValue__rosidl_typesupport_introspection_c__get_function__KeyValue__value(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void graphnav_msgs__msg__KeyValue__rosidl_typesupport_introspection_c__fetch_function__KeyValue__value(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    graphnav_msgs__msg__KeyValue__rosidl_typesupport_introspection_c__get_const_function__KeyValue__value(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void graphnav_msgs__msg__KeyValue__rosidl_typesupport_introspection_c__assign_function__KeyValue__value(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    graphnav_msgs__msg__KeyValue__rosidl_typesupport_introspection_c__get_function__KeyValue__value(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool graphnav_msgs__msg__KeyValue__rosidl_typesupport_introspection_c__resize_function__KeyValue__value(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember graphnav_msgs__msg__KeyValue__rosidl_typesupport_introspection_c__KeyValue_message_member_array[2] = {
  {
    "key",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graphnav_msgs__msg__KeyValue, key),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graphnav_msgs__msg__KeyValue, value),  // bytes offset in struct
    NULL,  // default value
    graphnav_msgs__msg__KeyValue__rosidl_typesupport_introspection_c__size_function__KeyValue__value,  // size() function pointer
    graphnav_msgs__msg__KeyValue__rosidl_typesupport_introspection_c__get_const_function__KeyValue__value,  // get_const(index) function pointer
    graphnav_msgs__msg__KeyValue__rosidl_typesupport_introspection_c__get_function__KeyValue__value,  // get(index) function pointer
    graphnav_msgs__msg__KeyValue__rosidl_typesupport_introspection_c__fetch_function__KeyValue__value,  // fetch(index, &value) function pointer
    graphnav_msgs__msg__KeyValue__rosidl_typesupport_introspection_c__assign_function__KeyValue__value,  // assign(index, value) function pointer
    graphnav_msgs__msg__KeyValue__rosidl_typesupport_introspection_c__resize_function__KeyValue__value  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers graphnav_msgs__msg__KeyValue__rosidl_typesupport_introspection_c__KeyValue_message_members = {
  "graphnav_msgs__msg",  // message namespace
  "KeyValue",  // message name
  2,  // number of fields
  sizeof(graphnav_msgs__msg__KeyValue),
  false,  // has_any_key_member_
  graphnav_msgs__msg__KeyValue__rosidl_typesupport_introspection_c__KeyValue_message_member_array,  // message members
  graphnav_msgs__msg__KeyValue__rosidl_typesupport_introspection_c__KeyValue_init_function,  // function to initialize message memory (memory has to be allocated)
  graphnav_msgs__msg__KeyValue__rosidl_typesupport_introspection_c__KeyValue_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t graphnav_msgs__msg__KeyValue__rosidl_typesupport_introspection_c__KeyValue_message_type_support_handle = {
  0,
  &graphnav_msgs__msg__KeyValue__rosidl_typesupport_introspection_c__KeyValue_message_members,
  get_message_typesupport_handle_function,
  &graphnav_msgs__msg__KeyValue__get_type_hash,
  &graphnav_msgs__msg__KeyValue__get_type_description,
  &graphnav_msgs__msg__KeyValue__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_graphnav_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, graphnav_msgs, msg, KeyValue)() {
  if (!graphnav_msgs__msg__KeyValue__rosidl_typesupport_introspection_c__KeyValue_message_type_support_handle.typesupport_identifier) {
    graphnav_msgs__msg__KeyValue__rosidl_typesupport_introspection_c__KeyValue_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &graphnav_msgs__msg__KeyValue__rosidl_typesupport_introspection_c__KeyValue_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
