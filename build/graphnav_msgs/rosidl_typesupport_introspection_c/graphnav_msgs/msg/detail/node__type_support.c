// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from graphnav_msgs:msg/Node.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "graphnav_msgs/msg/detail/node__rosidl_typesupport_introspection_c.h"
#include "graphnav_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "graphnav_msgs/msg/detail/node__functions.h"
#include "graphnav_msgs/msg/detail/node__struct.h"


// Include directives for member types
// Member `uuid`
#include "graphnav_msgs/msg/uuid.h"
// Member `uuid`
#include "graphnav_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `pose`
#include "geometry_msgs/msg/pose.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `trav_properties`
#include "graphnav_msgs/msg/node_traversability_properties.h"
// Member `trav_properties`
#include "graphnav_msgs/msg/detail/node_traversability_properties__rosidl_typesupport_introspection_c.h"
// Member `properties`
#include "graphnav_msgs/msg/key_value.h"
// Member `properties`
#include "graphnav_msgs/msg/detail/key_value__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void graphnav_msgs__msg__Node__rosidl_typesupport_introspection_c__Node_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  graphnav_msgs__msg__Node__init(message_memory);
}

void graphnav_msgs__msg__Node__rosidl_typesupport_introspection_c__Node_fini_function(void * message_memory)
{
  graphnav_msgs__msg__Node__fini(message_memory);
}

size_t graphnav_msgs__msg__Node__rosidl_typesupport_introspection_c__size_function__Node__trav_properties(
  const void * untyped_member)
{
  const graphnav_msgs__msg__NodeTraversabilityProperties__Sequence * member =
    (const graphnav_msgs__msg__NodeTraversabilityProperties__Sequence *)(untyped_member);
  return member->size;
}

const void * graphnav_msgs__msg__Node__rosidl_typesupport_introspection_c__get_const_function__Node__trav_properties(
  const void * untyped_member, size_t index)
{
  const graphnav_msgs__msg__NodeTraversabilityProperties__Sequence * member =
    (const graphnav_msgs__msg__NodeTraversabilityProperties__Sequence *)(untyped_member);
  return &member->data[index];
}

void * graphnav_msgs__msg__Node__rosidl_typesupport_introspection_c__get_function__Node__trav_properties(
  void * untyped_member, size_t index)
{
  graphnav_msgs__msg__NodeTraversabilityProperties__Sequence * member =
    (graphnav_msgs__msg__NodeTraversabilityProperties__Sequence *)(untyped_member);
  return &member->data[index];
}

void graphnav_msgs__msg__Node__rosidl_typesupport_introspection_c__fetch_function__Node__trav_properties(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const graphnav_msgs__msg__NodeTraversabilityProperties * item =
    ((const graphnav_msgs__msg__NodeTraversabilityProperties *)
    graphnav_msgs__msg__Node__rosidl_typesupport_introspection_c__get_const_function__Node__trav_properties(untyped_member, index));
  graphnav_msgs__msg__NodeTraversabilityProperties * value =
    (graphnav_msgs__msg__NodeTraversabilityProperties *)(untyped_value);
  *value = *item;
}

void graphnav_msgs__msg__Node__rosidl_typesupport_introspection_c__assign_function__Node__trav_properties(
  void * untyped_member, size_t index, const void * untyped_value)
{
  graphnav_msgs__msg__NodeTraversabilityProperties * item =
    ((graphnav_msgs__msg__NodeTraversabilityProperties *)
    graphnav_msgs__msg__Node__rosidl_typesupport_introspection_c__get_function__Node__trav_properties(untyped_member, index));
  const graphnav_msgs__msg__NodeTraversabilityProperties * value =
    (const graphnav_msgs__msg__NodeTraversabilityProperties *)(untyped_value);
  *item = *value;
}

bool graphnav_msgs__msg__Node__rosidl_typesupport_introspection_c__resize_function__Node__trav_properties(
  void * untyped_member, size_t size)
{
  graphnav_msgs__msg__NodeTraversabilityProperties__Sequence * member =
    (graphnav_msgs__msg__NodeTraversabilityProperties__Sequence *)(untyped_member);
  graphnav_msgs__msg__NodeTraversabilityProperties__Sequence__fini(member);
  return graphnav_msgs__msg__NodeTraversabilityProperties__Sequence__init(member, size);
}

size_t graphnav_msgs__msg__Node__rosidl_typesupport_introspection_c__size_function__Node__properties(
  const void * untyped_member)
{
  const graphnav_msgs__msg__KeyValue__Sequence * member =
    (const graphnav_msgs__msg__KeyValue__Sequence *)(untyped_member);
  return member->size;
}

const void * graphnav_msgs__msg__Node__rosidl_typesupport_introspection_c__get_const_function__Node__properties(
  const void * untyped_member, size_t index)
{
  const graphnav_msgs__msg__KeyValue__Sequence * member =
    (const graphnav_msgs__msg__KeyValue__Sequence *)(untyped_member);
  return &member->data[index];
}

void * graphnav_msgs__msg__Node__rosidl_typesupport_introspection_c__get_function__Node__properties(
  void * untyped_member, size_t index)
{
  graphnav_msgs__msg__KeyValue__Sequence * member =
    (graphnav_msgs__msg__KeyValue__Sequence *)(untyped_member);
  return &member->data[index];
}

void graphnav_msgs__msg__Node__rosidl_typesupport_introspection_c__fetch_function__Node__properties(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const graphnav_msgs__msg__KeyValue * item =
    ((const graphnav_msgs__msg__KeyValue *)
    graphnav_msgs__msg__Node__rosidl_typesupport_introspection_c__get_const_function__Node__properties(untyped_member, index));
  graphnav_msgs__msg__KeyValue * value =
    (graphnav_msgs__msg__KeyValue *)(untyped_value);
  *value = *item;
}

void graphnav_msgs__msg__Node__rosidl_typesupport_introspection_c__assign_function__Node__properties(
  void * untyped_member, size_t index, const void * untyped_value)
{
  graphnav_msgs__msg__KeyValue * item =
    ((graphnav_msgs__msg__KeyValue *)
    graphnav_msgs__msg__Node__rosidl_typesupport_introspection_c__get_function__Node__properties(untyped_member, index));
  const graphnav_msgs__msg__KeyValue * value =
    (const graphnav_msgs__msg__KeyValue *)(untyped_value);
  *item = *value;
}

bool graphnav_msgs__msg__Node__rosidl_typesupport_introspection_c__resize_function__Node__properties(
  void * untyped_member, size_t size)
{
  graphnav_msgs__msg__KeyValue__Sequence * member =
    (graphnav_msgs__msg__KeyValue__Sequence *)(untyped_member);
  graphnav_msgs__msg__KeyValue__Sequence__fini(member);
  return graphnav_msgs__msg__KeyValue__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember graphnav_msgs__msg__Node__rosidl_typesupport_introspection_c__Node_message_member_array[4] = {
  {
    "uuid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graphnav_msgs__msg__Node, uuid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graphnav_msgs__msg__Node, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "trav_properties",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graphnav_msgs__msg__Node, trav_properties),  // bytes offset in struct
    NULL,  // default value
    graphnav_msgs__msg__Node__rosidl_typesupport_introspection_c__size_function__Node__trav_properties,  // size() function pointer
    graphnav_msgs__msg__Node__rosidl_typesupport_introspection_c__get_const_function__Node__trav_properties,  // get_const(index) function pointer
    graphnav_msgs__msg__Node__rosidl_typesupport_introspection_c__get_function__Node__trav_properties,  // get(index) function pointer
    graphnav_msgs__msg__Node__rosidl_typesupport_introspection_c__fetch_function__Node__trav_properties,  // fetch(index, &value) function pointer
    graphnav_msgs__msg__Node__rosidl_typesupport_introspection_c__assign_function__Node__trav_properties,  // assign(index, value) function pointer
    graphnav_msgs__msg__Node__rosidl_typesupport_introspection_c__resize_function__Node__trav_properties  // resize(index) function pointer
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
    offsetof(graphnav_msgs__msg__Node, properties),  // bytes offset in struct
    NULL,  // default value
    graphnav_msgs__msg__Node__rosidl_typesupport_introspection_c__size_function__Node__properties,  // size() function pointer
    graphnav_msgs__msg__Node__rosidl_typesupport_introspection_c__get_const_function__Node__properties,  // get_const(index) function pointer
    graphnav_msgs__msg__Node__rosidl_typesupport_introspection_c__get_function__Node__properties,  // get(index) function pointer
    graphnav_msgs__msg__Node__rosidl_typesupport_introspection_c__fetch_function__Node__properties,  // fetch(index, &value) function pointer
    graphnav_msgs__msg__Node__rosidl_typesupport_introspection_c__assign_function__Node__properties,  // assign(index, value) function pointer
    graphnav_msgs__msg__Node__rosidl_typesupport_introspection_c__resize_function__Node__properties  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers graphnav_msgs__msg__Node__rosidl_typesupport_introspection_c__Node_message_members = {
  "graphnav_msgs__msg",  // message namespace
  "Node",  // message name
  4,  // number of fields
  sizeof(graphnav_msgs__msg__Node),
  false,  // has_any_key_member_
  graphnav_msgs__msg__Node__rosidl_typesupport_introspection_c__Node_message_member_array,  // message members
  graphnav_msgs__msg__Node__rosidl_typesupport_introspection_c__Node_init_function,  // function to initialize message memory (memory has to be allocated)
  graphnav_msgs__msg__Node__rosidl_typesupport_introspection_c__Node_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t graphnav_msgs__msg__Node__rosidl_typesupport_introspection_c__Node_message_type_support_handle = {
  0,
  &graphnav_msgs__msg__Node__rosidl_typesupport_introspection_c__Node_message_members,
  get_message_typesupport_handle_function,
  &graphnav_msgs__msg__Node__get_type_hash,
  &graphnav_msgs__msg__Node__get_type_description,
  &graphnav_msgs__msg__Node__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_graphnav_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, graphnav_msgs, msg, Node)() {
  graphnav_msgs__msg__Node__rosidl_typesupport_introspection_c__Node_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, graphnav_msgs, msg, UUID)();
  graphnav_msgs__msg__Node__rosidl_typesupport_introspection_c__Node_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  graphnav_msgs__msg__Node__rosidl_typesupport_introspection_c__Node_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, graphnav_msgs, msg, NodeTraversabilityProperties)();
  graphnav_msgs__msg__Node__rosidl_typesupport_introspection_c__Node_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, graphnav_msgs, msg, KeyValue)();
  if (!graphnav_msgs__msg__Node__rosidl_typesupport_introspection_c__Node_message_type_support_handle.typesupport_identifier) {
    graphnav_msgs__msg__Node__rosidl_typesupport_introspection_c__Node_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &graphnav_msgs__msg__Node__rosidl_typesupport_introspection_c__Node_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
