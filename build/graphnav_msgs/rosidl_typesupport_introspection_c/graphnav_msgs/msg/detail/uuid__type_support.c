// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from graphnav_msgs:msg/UUID.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "graphnav_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
#include "graphnav_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "graphnav_msgs/msg/detail/uuid__functions.h"
#include "graphnav_msgs/msg/detail/uuid__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void graphnav_msgs__msg__UUID__rosidl_typesupport_introspection_c__UUID_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  graphnav_msgs__msg__UUID__init(message_memory);
}

void graphnav_msgs__msg__UUID__rosidl_typesupport_introspection_c__UUID_fini_function(void * message_memory)
{
  graphnav_msgs__msg__UUID__fini(message_memory);
}

size_t graphnav_msgs__msg__UUID__rosidl_typesupport_introspection_c__size_function__UUID__id(
  const void * untyped_member)
{
  (void)untyped_member;
  return 16;
}

const void * graphnav_msgs__msg__UUID__rosidl_typesupport_introspection_c__get_const_function__UUID__id(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * graphnav_msgs__msg__UUID__rosidl_typesupport_introspection_c__get_function__UUID__id(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void graphnav_msgs__msg__UUID__rosidl_typesupport_introspection_c__fetch_function__UUID__id(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    graphnav_msgs__msg__UUID__rosidl_typesupport_introspection_c__get_const_function__UUID__id(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void graphnav_msgs__msg__UUID__rosidl_typesupport_introspection_c__assign_function__UUID__id(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    graphnav_msgs__msg__UUID__rosidl_typesupport_introspection_c__get_function__UUID__id(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember graphnav_msgs__msg__UUID__rosidl_typesupport_introspection_c__UUID_message_member_array[1] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    16,  // array size
    false,  // is upper bound
    offsetof(graphnav_msgs__msg__UUID, id),  // bytes offset in struct
    NULL,  // default value
    graphnav_msgs__msg__UUID__rosidl_typesupport_introspection_c__size_function__UUID__id,  // size() function pointer
    graphnav_msgs__msg__UUID__rosidl_typesupport_introspection_c__get_const_function__UUID__id,  // get_const(index) function pointer
    graphnav_msgs__msg__UUID__rosidl_typesupport_introspection_c__get_function__UUID__id,  // get(index) function pointer
    graphnav_msgs__msg__UUID__rosidl_typesupport_introspection_c__fetch_function__UUID__id,  // fetch(index, &value) function pointer
    graphnav_msgs__msg__UUID__rosidl_typesupport_introspection_c__assign_function__UUID__id,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers graphnav_msgs__msg__UUID__rosidl_typesupport_introspection_c__UUID_message_members = {
  "graphnav_msgs__msg",  // message namespace
  "UUID",  // message name
  1,  // number of fields
  sizeof(graphnav_msgs__msg__UUID),
  false,  // has_any_key_member_
  graphnav_msgs__msg__UUID__rosidl_typesupport_introspection_c__UUID_message_member_array,  // message members
  graphnav_msgs__msg__UUID__rosidl_typesupport_introspection_c__UUID_init_function,  // function to initialize message memory (memory has to be allocated)
  graphnav_msgs__msg__UUID__rosidl_typesupport_introspection_c__UUID_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t graphnav_msgs__msg__UUID__rosidl_typesupport_introspection_c__UUID_message_type_support_handle = {
  0,
  &graphnav_msgs__msg__UUID__rosidl_typesupport_introspection_c__UUID_message_members,
  get_message_typesupport_handle_function,
  &graphnav_msgs__msg__UUID__get_type_hash,
  &graphnav_msgs__msg__UUID__get_type_description,
  &graphnav_msgs__msg__UUID__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_graphnav_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, graphnav_msgs, msg, UUID)() {
  if (!graphnav_msgs__msg__UUID__rosidl_typesupport_introspection_c__UUID_message_type_support_handle.typesupport_identifier) {
    graphnav_msgs__msg__UUID__rosidl_typesupport_introspection_c__UUID_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &graphnav_msgs__msg__UUID__rosidl_typesupport_introspection_c__UUID_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
