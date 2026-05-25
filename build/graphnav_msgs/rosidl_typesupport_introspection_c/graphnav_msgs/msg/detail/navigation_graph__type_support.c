// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from graphnav_msgs:msg/NavigationGraph.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "graphnav_msgs/msg/detail/navigation_graph__rosidl_typesupport_introspection_c.h"
#include "graphnav_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "graphnav_msgs/msg/detail/navigation_graph__functions.h"
#include "graphnav_msgs/msg/detail/navigation_graph__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `trav_classes`
#include "rosidl_runtime_c/string_functions.h"
// Member `nodes`
#include "graphnav_msgs/msg/node.h"
// Member `nodes`
#include "graphnav_msgs/msg/detail/node__rosidl_typesupport_introspection_c.h"
// Member `edges`
#include "graphnav_msgs/msg/edge.h"
// Member `edges`
#include "graphnav_msgs/msg/detail/edge__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void graphnav_msgs__msg__NavigationGraph__rosidl_typesupport_introspection_c__NavigationGraph_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  graphnav_msgs__msg__NavigationGraph__init(message_memory);
}

void graphnav_msgs__msg__NavigationGraph__rosidl_typesupport_introspection_c__NavigationGraph_fini_function(void * message_memory)
{
  graphnav_msgs__msg__NavigationGraph__fini(message_memory);
}

size_t graphnav_msgs__msg__NavigationGraph__rosidl_typesupport_introspection_c__size_function__NavigationGraph__trav_classes(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * graphnav_msgs__msg__NavigationGraph__rosidl_typesupport_introspection_c__get_const_function__NavigationGraph__trav_classes(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * graphnav_msgs__msg__NavigationGraph__rosidl_typesupport_introspection_c__get_function__NavigationGraph__trav_classes(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void graphnav_msgs__msg__NavigationGraph__rosidl_typesupport_introspection_c__fetch_function__NavigationGraph__trav_classes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    graphnav_msgs__msg__NavigationGraph__rosidl_typesupport_introspection_c__get_const_function__NavigationGraph__trav_classes(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void graphnav_msgs__msg__NavigationGraph__rosidl_typesupport_introspection_c__assign_function__NavigationGraph__trav_classes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    graphnav_msgs__msg__NavigationGraph__rosidl_typesupport_introspection_c__get_function__NavigationGraph__trav_classes(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool graphnav_msgs__msg__NavigationGraph__rosidl_typesupport_introspection_c__resize_function__NavigationGraph__trav_classes(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t graphnav_msgs__msg__NavigationGraph__rosidl_typesupport_introspection_c__size_function__NavigationGraph__nodes(
  const void * untyped_member)
{
  const graphnav_msgs__msg__Node__Sequence * member =
    (const graphnav_msgs__msg__Node__Sequence *)(untyped_member);
  return member->size;
}

const void * graphnav_msgs__msg__NavigationGraph__rosidl_typesupport_introspection_c__get_const_function__NavigationGraph__nodes(
  const void * untyped_member, size_t index)
{
  const graphnav_msgs__msg__Node__Sequence * member =
    (const graphnav_msgs__msg__Node__Sequence *)(untyped_member);
  return &member->data[index];
}

void * graphnav_msgs__msg__NavigationGraph__rosidl_typesupport_introspection_c__get_function__NavigationGraph__nodes(
  void * untyped_member, size_t index)
{
  graphnav_msgs__msg__Node__Sequence * member =
    (graphnav_msgs__msg__Node__Sequence *)(untyped_member);
  return &member->data[index];
}

void graphnav_msgs__msg__NavigationGraph__rosidl_typesupport_introspection_c__fetch_function__NavigationGraph__nodes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const graphnav_msgs__msg__Node * item =
    ((const graphnav_msgs__msg__Node *)
    graphnav_msgs__msg__NavigationGraph__rosidl_typesupport_introspection_c__get_const_function__NavigationGraph__nodes(untyped_member, index));
  graphnav_msgs__msg__Node * value =
    (graphnav_msgs__msg__Node *)(untyped_value);
  *value = *item;
}

void graphnav_msgs__msg__NavigationGraph__rosidl_typesupport_introspection_c__assign_function__NavigationGraph__nodes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  graphnav_msgs__msg__Node * item =
    ((graphnav_msgs__msg__Node *)
    graphnav_msgs__msg__NavigationGraph__rosidl_typesupport_introspection_c__get_function__NavigationGraph__nodes(untyped_member, index));
  const graphnav_msgs__msg__Node * value =
    (const graphnav_msgs__msg__Node *)(untyped_value);
  *item = *value;
}

bool graphnav_msgs__msg__NavigationGraph__rosidl_typesupport_introspection_c__resize_function__NavigationGraph__nodes(
  void * untyped_member, size_t size)
{
  graphnav_msgs__msg__Node__Sequence * member =
    (graphnav_msgs__msg__Node__Sequence *)(untyped_member);
  graphnav_msgs__msg__Node__Sequence__fini(member);
  return graphnav_msgs__msg__Node__Sequence__init(member, size);
}

size_t graphnav_msgs__msg__NavigationGraph__rosidl_typesupport_introspection_c__size_function__NavigationGraph__edges(
  const void * untyped_member)
{
  const graphnav_msgs__msg__Edge__Sequence * member =
    (const graphnav_msgs__msg__Edge__Sequence *)(untyped_member);
  return member->size;
}

const void * graphnav_msgs__msg__NavigationGraph__rosidl_typesupport_introspection_c__get_const_function__NavigationGraph__edges(
  const void * untyped_member, size_t index)
{
  const graphnav_msgs__msg__Edge__Sequence * member =
    (const graphnav_msgs__msg__Edge__Sequence *)(untyped_member);
  return &member->data[index];
}

void * graphnav_msgs__msg__NavigationGraph__rosidl_typesupport_introspection_c__get_function__NavigationGraph__edges(
  void * untyped_member, size_t index)
{
  graphnav_msgs__msg__Edge__Sequence * member =
    (graphnav_msgs__msg__Edge__Sequence *)(untyped_member);
  return &member->data[index];
}

void graphnav_msgs__msg__NavigationGraph__rosidl_typesupport_introspection_c__fetch_function__NavigationGraph__edges(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const graphnav_msgs__msg__Edge * item =
    ((const graphnav_msgs__msg__Edge *)
    graphnav_msgs__msg__NavigationGraph__rosidl_typesupport_introspection_c__get_const_function__NavigationGraph__edges(untyped_member, index));
  graphnav_msgs__msg__Edge * value =
    (graphnav_msgs__msg__Edge *)(untyped_value);
  *value = *item;
}

void graphnav_msgs__msg__NavigationGraph__rosidl_typesupport_introspection_c__assign_function__NavigationGraph__edges(
  void * untyped_member, size_t index, const void * untyped_value)
{
  graphnav_msgs__msg__Edge * item =
    ((graphnav_msgs__msg__Edge *)
    graphnav_msgs__msg__NavigationGraph__rosidl_typesupport_introspection_c__get_function__NavigationGraph__edges(untyped_member, index));
  const graphnav_msgs__msg__Edge * value =
    (const graphnav_msgs__msg__Edge *)(untyped_value);
  *item = *value;
}

bool graphnav_msgs__msg__NavigationGraph__rosidl_typesupport_introspection_c__resize_function__NavigationGraph__edges(
  void * untyped_member, size_t size)
{
  graphnav_msgs__msg__Edge__Sequence * member =
    (graphnav_msgs__msg__Edge__Sequence *)(untyped_member);
  graphnav_msgs__msg__Edge__Sequence__fini(member);
  return graphnav_msgs__msg__Edge__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember graphnav_msgs__msg__NavigationGraph__rosidl_typesupport_introspection_c__NavigationGraph_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graphnav_msgs__msg__NavigationGraph, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "trav_classes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graphnav_msgs__msg__NavigationGraph, trav_classes),  // bytes offset in struct
    NULL,  // default value
    graphnav_msgs__msg__NavigationGraph__rosidl_typesupport_introspection_c__size_function__NavigationGraph__trav_classes,  // size() function pointer
    graphnav_msgs__msg__NavigationGraph__rosidl_typesupport_introspection_c__get_const_function__NavigationGraph__trav_classes,  // get_const(index) function pointer
    graphnav_msgs__msg__NavigationGraph__rosidl_typesupport_introspection_c__get_function__NavigationGraph__trav_classes,  // get(index) function pointer
    graphnav_msgs__msg__NavigationGraph__rosidl_typesupport_introspection_c__fetch_function__NavigationGraph__trav_classes,  // fetch(index, &value) function pointer
    graphnav_msgs__msg__NavigationGraph__rosidl_typesupport_introspection_c__assign_function__NavigationGraph__trav_classes,  // assign(index, value) function pointer
    graphnav_msgs__msg__NavigationGraph__rosidl_typesupport_introspection_c__resize_function__NavigationGraph__trav_classes  // resize(index) function pointer
  },
  {
    "nodes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graphnav_msgs__msg__NavigationGraph, nodes),  // bytes offset in struct
    NULL,  // default value
    graphnav_msgs__msg__NavigationGraph__rosidl_typesupport_introspection_c__size_function__NavigationGraph__nodes,  // size() function pointer
    graphnav_msgs__msg__NavigationGraph__rosidl_typesupport_introspection_c__get_const_function__NavigationGraph__nodes,  // get_const(index) function pointer
    graphnav_msgs__msg__NavigationGraph__rosidl_typesupport_introspection_c__get_function__NavigationGraph__nodes,  // get(index) function pointer
    graphnav_msgs__msg__NavigationGraph__rosidl_typesupport_introspection_c__fetch_function__NavigationGraph__nodes,  // fetch(index, &value) function pointer
    graphnav_msgs__msg__NavigationGraph__rosidl_typesupport_introspection_c__assign_function__NavigationGraph__nodes,  // assign(index, value) function pointer
    graphnav_msgs__msg__NavigationGraph__rosidl_typesupport_introspection_c__resize_function__NavigationGraph__nodes  // resize(index) function pointer
  },
  {
    "edges",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graphnav_msgs__msg__NavigationGraph, edges),  // bytes offset in struct
    NULL,  // default value
    graphnav_msgs__msg__NavigationGraph__rosidl_typesupport_introspection_c__size_function__NavigationGraph__edges,  // size() function pointer
    graphnav_msgs__msg__NavigationGraph__rosidl_typesupport_introspection_c__get_const_function__NavigationGraph__edges,  // get_const(index) function pointer
    graphnav_msgs__msg__NavigationGraph__rosidl_typesupport_introspection_c__get_function__NavigationGraph__edges,  // get(index) function pointer
    graphnav_msgs__msg__NavigationGraph__rosidl_typesupport_introspection_c__fetch_function__NavigationGraph__edges,  // fetch(index, &value) function pointer
    graphnav_msgs__msg__NavigationGraph__rosidl_typesupport_introspection_c__assign_function__NavigationGraph__edges,  // assign(index, value) function pointer
    graphnav_msgs__msg__NavigationGraph__rosidl_typesupport_introspection_c__resize_function__NavigationGraph__edges  // resize(index) function pointer
  },
  {
    "current_node_idx",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(graphnav_msgs__msg__NavigationGraph, current_node_idx),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers graphnav_msgs__msg__NavigationGraph__rosidl_typesupport_introspection_c__NavigationGraph_message_members = {
  "graphnav_msgs__msg",  // message namespace
  "NavigationGraph",  // message name
  5,  // number of fields
  sizeof(graphnav_msgs__msg__NavigationGraph),
  false,  // has_any_key_member_
  graphnav_msgs__msg__NavigationGraph__rosidl_typesupport_introspection_c__NavigationGraph_message_member_array,  // message members
  graphnav_msgs__msg__NavigationGraph__rosidl_typesupport_introspection_c__NavigationGraph_init_function,  // function to initialize message memory (memory has to be allocated)
  graphnav_msgs__msg__NavigationGraph__rosidl_typesupport_introspection_c__NavigationGraph_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t graphnav_msgs__msg__NavigationGraph__rosidl_typesupport_introspection_c__NavigationGraph_message_type_support_handle = {
  0,
  &graphnav_msgs__msg__NavigationGraph__rosidl_typesupport_introspection_c__NavigationGraph_message_members,
  get_message_typesupport_handle_function,
  &graphnav_msgs__msg__NavigationGraph__get_type_hash,
  &graphnav_msgs__msg__NavigationGraph__get_type_description,
  &graphnav_msgs__msg__NavigationGraph__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_graphnav_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, graphnav_msgs, msg, NavigationGraph)() {
  graphnav_msgs__msg__NavigationGraph__rosidl_typesupport_introspection_c__NavigationGraph_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  graphnav_msgs__msg__NavigationGraph__rosidl_typesupport_introspection_c__NavigationGraph_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, graphnav_msgs, msg, Node)();
  graphnav_msgs__msg__NavigationGraph__rosidl_typesupport_introspection_c__NavigationGraph_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, graphnav_msgs, msg, Edge)();
  if (!graphnav_msgs__msg__NavigationGraph__rosidl_typesupport_introspection_c__NavigationGraph_message_type_support_handle.typesupport_identifier) {
    graphnav_msgs__msg__NavigationGraph__rosidl_typesupport_introspection_c__NavigationGraph_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &graphnav_msgs__msg__NavigationGraph__rosidl_typesupport_introspection_c__NavigationGraph_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
