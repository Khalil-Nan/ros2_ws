// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from graphnav_msgs:msg/Node.idl
// generated code does not contain a copyright notice
#include "graphnav_msgs/msg/detail/node__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "graphnav_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "graphnav_msgs/msg/detail/node__struct.h"
#include "graphnav_msgs/msg/detail/node__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "geometry_msgs/msg/detail/pose__functions.h"  // pose
#include "graphnav_msgs/msg/detail/key_value__functions.h"  // properties
#include "graphnav_msgs/msg/detail/node_traversability_properties__functions.h"  // trav_properties
#include "graphnav_msgs/msg/detail/uuid__functions.h"  // uuid

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_graphnav_msgs
bool cdr_serialize_geometry_msgs__msg__Pose(
  const geometry_msgs__msg__Pose * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_graphnav_msgs
bool cdr_deserialize_geometry_msgs__msg__Pose(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__Pose * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_graphnav_msgs
size_t get_serialized_size_geometry_msgs__msg__Pose(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_graphnav_msgs
size_t max_serialized_size_geometry_msgs__msg__Pose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_graphnav_msgs
bool cdr_serialize_key_geometry_msgs__msg__Pose(
  const geometry_msgs__msg__Pose * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_graphnav_msgs
size_t get_serialized_size_key_geometry_msgs__msg__Pose(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_graphnav_msgs
size_t max_serialized_size_key_geometry_msgs__msg__Pose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_graphnav_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose)();

bool cdr_serialize_graphnav_msgs__msg__KeyValue(
  const graphnav_msgs__msg__KeyValue * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_graphnav_msgs__msg__KeyValue(
  eprosima::fastcdr::Cdr & cdr,
  graphnav_msgs__msg__KeyValue * ros_message);

size_t get_serialized_size_graphnav_msgs__msg__KeyValue(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_graphnav_msgs__msg__KeyValue(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_graphnav_msgs__msg__KeyValue(
  const graphnav_msgs__msg__KeyValue * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_graphnav_msgs__msg__KeyValue(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_graphnav_msgs__msg__KeyValue(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, graphnav_msgs, msg, KeyValue)();

bool cdr_serialize_graphnav_msgs__msg__NodeTraversabilityProperties(
  const graphnav_msgs__msg__NodeTraversabilityProperties * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_graphnav_msgs__msg__NodeTraversabilityProperties(
  eprosima::fastcdr::Cdr & cdr,
  graphnav_msgs__msg__NodeTraversabilityProperties * ros_message);

size_t get_serialized_size_graphnav_msgs__msg__NodeTraversabilityProperties(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_graphnav_msgs__msg__NodeTraversabilityProperties(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_graphnav_msgs__msg__NodeTraversabilityProperties(
  const graphnav_msgs__msg__NodeTraversabilityProperties * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_graphnav_msgs__msg__NodeTraversabilityProperties(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_graphnav_msgs__msg__NodeTraversabilityProperties(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, graphnav_msgs, msg, NodeTraversabilityProperties)();

bool cdr_serialize_graphnav_msgs__msg__UUID(
  const graphnav_msgs__msg__UUID * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_graphnav_msgs__msg__UUID(
  eprosima::fastcdr::Cdr & cdr,
  graphnav_msgs__msg__UUID * ros_message);

size_t get_serialized_size_graphnav_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_graphnav_msgs__msg__UUID(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_graphnav_msgs__msg__UUID(
  const graphnav_msgs__msg__UUID * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_graphnav_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_graphnav_msgs__msg__UUID(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, graphnav_msgs, msg, UUID)();


using _Node__ros_msg_type = graphnav_msgs__msg__Node;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_graphnav_msgs
bool cdr_serialize_graphnav_msgs__msg__Node(
  const graphnav_msgs__msg__Node * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: uuid
  {
    cdr_serialize_graphnav_msgs__msg__UUID(
      &ros_message->uuid, cdr);
  }

  // Field name: pose
  {
    cdr_serialize_geometry_msgs__msg__Pose(
      &ros_message->pose, cdr);
  }

  // Field name: trav_properties
  {
    size_t size = ros_message->trav_properties.size;
    auto array_ptr = ros_message->trav_properties.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_graphnav_msgs__msg__NodeTraversabilityProperties(
        &array_ptr[i], cdr);
    }
  }

  // Field name: properties
  {
    size_t size = ros_message->properties.size;
    auto array_ptr = ros_message->properties.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_graphnav_msgs__msg__KeyValue(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_graphnav_msgs
bool cdr_deserialize_graphnav_msgs__msg__Node(
  eprosima::fastcdr::Cdr & cdr,
  graphnav_msgs__msg__Node * ros_message)
{
  // Field name: uuid
  {
    cdr_deserialize_graphnav_msgs__msg__UUID(cdr, &ros_message->uuid);
  }

  // Field name: pose
  {
    cdr_deserialize_geometry_msgs__msg__Pose(cdr, &ros_message->pose);
  }

  // Field name: trav_properties
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->trav_properties.data) {
      graphnav_msgs__msg__NodeTraversabilityProperties__Sequence__fini(&ros_message->trav_properties);
    }
    if (!graphnav_msgs__msg__NodeTraversabilityProperties__Sequence__init(&ros_message->trav_properties, size)) {
      fprintf(stderr, "failed to create array for field 'trav_properties'");
      return false;
    }
    auto array_ptr = ros_message->trav_properties.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_graphnav_msgs__msg__NodeTraversabilityProperties(cdr, &array_ptr[i]);
    }
  }

  // Field name: properties
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->properties.data) {
      graphnav_msgs__msg__KeyValue__Sequence__fini(&ros_message->properties);
    }
    if (!graphnav_msgs__msg__KeyValue__Sequence__init(&ros_message->properties, size)) {
      fprintf(stderr, "failed to create array for field 'properties'");
      return false;
    }
    auto array_ptr = ros_message->properties.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_graphnav_msgs__msg__KeyValue(cdr, &array_ptr[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_graphnav_msgs
size_t get_serialized_size_graphnav_msgs__msg__Node(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Node__ros_msg_type * ros_message = static_cast<const _Node__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: uuid
  current_alignment += get_serialized_size_graphnav_msgs__msg__UUID(
    &(ros_message->uuid), current_alignment);

  // Field name: pose
  current_alignment += get_serialized_size_geometry_msgs__msg__Pose(
    &(ros_message->pose), current_alignment);

  // Field name: trav_properties
  {
    size_t array_size = ros_message->trav_properties.size;
    auto array_ptr = ros_message->trav_properties.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_graphnav_msgs__msg__NodeTraversabilityProperties(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: properties
  {
    size_t array_size = ros_message->properties.size;
    auto array_ptr = ros_message->properties.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_graphnav_msgs__msg__KeyValue(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_graphnav_msgs
size_t max_serialized_size_graphnav_msgs__msg__Node(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: uuid
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_graphnav_msgs__msg__UUID(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: pose
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Pose(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: trav_properties
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_graphnav_msgs__msg__NodeTraversabilityProperties(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: properties
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_graphnav_msgs__msg__KeyValue(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = graphnav_msgs__msg__Node;
    is_plain =
      (
      offsetof(DataType, properties) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_graphnav_msgs
bool cdr_serialize_key_graphnav_msgs__msg__Node(
  const graphnav_msgs__msg__Node * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: uuid
  {
    cdr_serialize_key_graphnav_msgs__msg__UUID(
      &ros_message->uuid, cdr);
  }

  // Field name: pose
  {
    cdr_serialize_key_geometry_msgs__msg__Pose(
      &ros_message->pose, cdr);
  }

  // Field name: trav_properties
  {
    size_t size = ros_message->trav_properties.size;
    auto array_ptr = ros_message->trav_properties.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_graphnav_msgs__msg__NodeTraversabilityProperties(
        &array_ptr[i], cdr);
    }
  }

  // Field name: properties
  {
    size_t size = ros_message->properties.size;
    auto array_ptr = ros_message->properties.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_graphnav_msgs__msg__KeyValue(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_graphnav_msgs
size_t get_serialized_size_key_graphnav_msgs__msg__Node(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Node__ros_msg_type * ros_message = static_cast<const _Node__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: uuid
  current_alignment += get_serialized_size_key_graphnav_msgs__msg__UUID(
    &(ros_message->uuid), current_alignment);

  // Field name: pose
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Pose(
    &(ros_message->pose), current_alignment);

  // Field name: trav_properties
  {
    size_t array_size = ros_message->trav_properties.size;
    auto array_ptr = ros_message->trav_properties.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_graphnav_msgs__msg__NodeTraversabilityProperties(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: properties
  {
    size_t array_size = ros_message->properties.size;
    auto array_ptr = ros_message->properties.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_graphnav_msgs__msg__KeyValue(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_graphnav_msgs
size_t max_serialized_size_key_graphnav_msgs__msg__Node(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: uuid
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_graphnav_msgs__msg__UUID(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: pose
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Pose(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: trav_properties
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_graphnav_msgs__msg__NodeTraversabilityProperties(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: properties
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_graphnav_msgs__msg__KeyValue(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = graphnav_msgs__msg__Node;
    is_plain =
      (
      offsetof(DataType, properties) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _Node__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const graphnav_msgs__msg__Node * ros_message = static_cast<const graphnav_msgs__msg__Node *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_graphnav_msgs__msg__Node(ros_message, cdr);
}

static bool _Node__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  graphnav_msgs__msg__Node * ros_message = static_cast<graphnav_msgs__msg__Node *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_graphnav_msgs__msg__Node(cdr, ros_message);
}

static uint32_t _Node__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_graphnav_msgs__msg__Node(
      untyped_ros_message, 0));
}

static size_t _Node__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_graphnav_msgs__msg__Node(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Node = {
  "graphnav_msgs::msg",
  "Node",
  _Node__cdr_serialize,
  _Node__cdr_deserialize,
  _Node__get_serialized_size,
  _Node__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _Node__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Node,
  get_message_typesupport_handle_function,
  &graphnav_msgs__msg__Node__get_type_hash,
  &graphnav_msgs__msg__Node__get_type_description,
  &graphnav_msgs__msg__Node__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, graphnav_msgs, msg, Node)() {
  return &_Node__type_support;
}

#if defined(__cplusplus)
}
#endif
