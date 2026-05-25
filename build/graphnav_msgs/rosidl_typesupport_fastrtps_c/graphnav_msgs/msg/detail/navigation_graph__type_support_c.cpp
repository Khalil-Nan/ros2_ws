// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from graphnav_msgs:msg/NavigationGraph.idl
// generated code does not contain a copyright notice
#include "graphnav_msgs/msg/detail/navigation_graph__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "graphnav_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "graphnav_msgs/msg/detail/navigation_graph__struct.h"
#include "graphnav_msgs/msg/detail/navigation_graph__functions.h"
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

#include "graphnav_msgs/msg/detail/edge__functions.h"  // edges
#include "graphnav_msgs/msg/detail/node__functions.h"  // nodes
#include "rosidl_runtime_c/string.h"  // trav_classes
#include "rosidl_runtime_c/string_functions.h"  // trav_classes
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions

bool cdr_serialize_graphnav_msgs__msg__Edge(
  const graphnav_msgs__msg__Edge * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_graphnav_msgs__msg__Edge(
  eprosima::fastcdr::Cdr & cdr,
  graphnav_msgs__msg__Edge * ros_message);

size_t get_serialized_size_graphnav_msgs__msg__Edge(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_graphnav_msgs__msg__Edge(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_graphnav_msgs__msg__Edge(
  const graphnav_msgs__msg__Edge * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_graphnav_msgs__msg__Edge(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_graphnav_msgs__msg__Edge(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, graphnav_msgs, msg, Edge)();

bool cdr_serialize_graphnav_msgs__msg__Node(
  const graphnav_msgs__msg__Node * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_graphnav_msgs__msg__Node(
  eprosima::fastcdr::Cdr & cdr,
  graphnav_msgs__msg__Node * ros_message);

size_t get_serialized_size_graphnav_msgs__msg__Node(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_graphnav_msgs__msg__Node(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_graphnav_msgs__msg__Node(
  const graphnav_msgs__msg__Node * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_graphnav_msgs__msg__Node(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_graphnav_msgs__msg__Node(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, graphnav_msgs, msg, Node)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_graphnav_msgs
bool cdr_serialize_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_graphnav_msgs
bool cdr_deserialize_std_msgs__msg__Header(
  eprosima::fastcdr::Cdr & cdr,
  std_msgs__msg__Header * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_graphnav_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_graphnav_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_graphnav_msgs
bool cdr_serialize_key_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_graphnav_msgs
size_t get_serialized_size_key_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_graphnav_msgs
size_t max_serialized_size_key_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_graphnav_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _NavigationGraph__ros_msg_type = graphnav_msgs__msg__NavigationGraph;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_graphnav_msgs
bool cdr_serialize_graphnav_msgs__msg__NavigationGraph(
  const graphnav_msgs__msg__NavigationGraph * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: trav_classes
  {
    size_t size = ros_message->trav_classes.size;
    auto array_ptr = ros_message->trav_classes.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  // Field name: nodes
  {
    size_t size = ros_message->nodes.size;
    auto array_ptr = ros_message->nodes.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_graphnav_msgs__msg__Node(
        &array_ptr[i], cdr);
    }
  }

  // Field name: edges
  {
    size_t size = ros_message->edges.size;
    auto array_ptr = ros_message->edges.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_graphnav_msgs__msg__Edge(
        &array_ptr[i], cdr);
    }
  }

  // Field name: current_node_idx
  {
    cdr << ros_message->current_node_idx;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_graphnav_msgs
bool cdr_deserialize_graphnav_msgs__msg__NavigationGraph(
  eprosima::fastcdr::Cdr & cdr,
  graphnav_msgs__msg__NavigationGraph * ros_message)
{
  // Field name: header
  {
    cdr_deserialize_std_msgs__msg__Header(cdr, &ros_message->header);
  }

  // Field name: trav_classes
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

    if (ros_message->trav_classes.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->trav_classes);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->trav_classes, size)) {
      fprintf(stderr, "failed to create array for field 'trav_classes'");
      return false;
    }
    auto array_ptr = ros_message->trav_classes.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'trav_classes'\n");
        return false;
      }
    }
  }

  // Field name: nodes
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

    if (ros_message->nodes.data) {
      graphnav_msgs__msg__Node__Sequence__fini(&ros_message->nodes);
    }
    if (!graphnav_msgs__msg__Node__Sequence__init(&ros_message->nodes, size)) {
      fprintf(stderr, "failed to create array for field 'nodes'");
      return false;
    }
    auto array_ptr = ros_message->nodes.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_graphnav_msgs__msg__Node(cdr, &array_ptr[i]);
    }
  }

  // Field name: edges
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

    if (ros_message->edges.data) {
      graphnav_msgs__msg__Edge__Sequence__fini(&ros_message->edges);
    }
    if (!graphnav_msgs__msg__Edge__Sequence__init(&ros_message->edges, size)) {
      fprintf(stderr, "failed to create array for field 'edges'");
      return false;
    }
    auto array_ptr = ros_message->edges.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_graphnav_msgs__msg__Edge(cdr, &array_ptr[i]);
    }
  }

  // Field name: current_node_idx
  {
    cdr >> ros_message->current_node_idx;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_graphnav_msgs
size_t get_serialized_size_graphnav_msgs__msg__NavigationGraph(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NavigationGraph__ros_msg_type * ros_message = static_cast<const _NavigationGraph__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: trav_classes
  {
    size_t array_size = ros_message->trav_classes.size;
    auto array_ptr = ros_message->trav_classes.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  // Field name: nodes
  {
    size_t array_size = ros_message->nodes.size;
    auto array_ptr = ros_message->nodes.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_graphnav_msgs__msg__Node(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: edges
  {
    size_t array_size = ros_message->edges.size;
    auto array_ptr = ros_message->edges.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_graphnav_msgs__msg__Edge(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: current_node_idx
  {
    size_t item_size = sizeof(ros_message->current_node_idx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_graphnav_msgs
size_t max_serialized_size_graphnav_msgs__msg__NavigationGraph(
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

  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: trav_classes
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: nodes
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
        max_serialized_size_graphnav_msgs__msg__Node(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: edges
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
        max_serialized_size_graphnav_msgs__msg__Edge(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: current_node_idx
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = graphnav_msgs__msg__NavigationGraph;
    is_plain =
      (
      offsetof(DataType, current_node_idx) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_graphnav_msgs
bool cdr_serialize_key_graphnav_msgs__msg__NavigationGraph(
  const graphnav_msgs__msg__NavigationGraph * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_key_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: trav_classes
  {
    size_t size = ros_message->trav_classes.size;
    auto array_ptr = ros_message->trav_classes.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  // Field name: nodes
  {
    size_t size = ros_message->nodes.size;
    auto array_ptr = ros_message->nodes.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_graphnav_msgs__msg__Node(
        &array_ptr[i], cdr);
    }
  }

  // Field name: edges
  {
    size_t size = ros_message->edges.size;
    auto array_ptr = ros_message->edges.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_graphnav_msgs__msg__Edge(
        &array_ptr[i], cdr);
    }
  }

  // Field name: current_node_idx
  {
    cdr << ros_message->current_node_idx;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_graphnav_msgs
size_t get_serialized_size_key_graphnav_msgs__msg__NavigationGraph(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NavigationGraph__ros_msg_type * ros_message = static_cast<const _NavigationGraph__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_key_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: trav_classes
  {
    size_t array_size = ros_message->trav_classes.size;
    auto array_ptr = ros_message->trav_classes.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  // Field name: nodes
  {
    size_t array_size = ros_message->nodes.size;
    auto array_ptr = ros_message->nodes.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_graphnav_msgs__msg__Node(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: edges
  {
    size_t array_size = ros_message->edges.size;
    auto array_ptr = ros_message->edges.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_graphnav_msgs__msg__Edge(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: current_node_idx
  {
    size_t item_size = sizeof(ros_message->current_node_idx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_graphnav_msgs
size_t max_serialized_size_key_graphnav_msgs__msg__NavigationGraph(
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
  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: trav_classes
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: nodes
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
        max_serialized_size_key_graphnav_msgs__msg__Node(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: edges
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
        max_serialized_size_key_graphnav_msgs__msg__Edge(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: current_node_idx
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = graphnav_msgs__msg__NavigationGraph;
    is_plain =
      (
      offsetof(DataType, current_node_idx) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _NavigationGraph__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const graphnav_msgs__msg__NavigationGraph * ros_message = static_cast<const graphnav_msgs__msg__NavigationGraph *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_graphnav_msgs__msg__NavigationGraph(ros_message, cdr);
}

static bool _NavigationGraph__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  graphnav_msgs__msg__NavigationGraph * ros_message = static_cast<graphnav_msgs__msg__NavigationGraph *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_graphnav_msgs__msg__NavigationGraph(cdr, ros_message);
}

static uint32_t _NavigationGraph__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_graphnav_msgs__msg__NavigationGraph(
      untyped_ros_message, 0));
}

static size_t _NavigationGraph__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_graphnav_msgs__msg__NavigationGraph(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_NavigationGraph = {
  "graphnav_msgs::msg",
  "NavigationGraph",
  _NavigationGraph__cdr_serialize,
  _NavigationGraph__cdr_deserialize,
  _NavigationGraph__get_serialized_size,
  _NavigationGraph__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _NavigationGraph__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NavigationGraph,
  get_message_typesupport_handle_function,
  &graphnav_msgs__msg__NavigationGraph__get_type_hash,
  &graphnav_msgs__msg__NavigationGraph__get_type_description,
  &graphnav_msgs__msg__NavigationGraph__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, graphnav_msgs, msg, NavigationGraph)() {
  return &_NavigationGraph__type_support;
}

#if defined(__cplusplus)
}
#endif
