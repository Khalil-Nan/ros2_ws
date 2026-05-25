// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from graphnav_msgs:msg/UUID.idl
// generated code does not contain a copyright notice

#include "graphnav_msgs/msg/detail/uuid__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_graphnav_msgs
const rosidl_type_hash_t *
graphnav_msgs__msg__UUID__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2a, 0xe0, 0x5f, 0xcd, 0xa4, 0xeb, 0xb2, 0xef,
      0x7b, 0x93, 0x0c, 0xfd, 0x64, 0xec, 0x92, 0xc8,
      0x40, 0x65, 0xde, 0x04, 0xeb, 0x57, 0x4c, 0xdc,
      0x90, 0x61, 0x09, 0xc0, 0x4b, 0xcb, 0x32, 0x93,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char graphnav_msgs__msg__UUID__TYPE_NAME[] = "graphnav_msgs/msg/UUID";

// Define type names, field names, and default values
static char graphnav_msgs__msg__UUID__FIELD_NAME__id[] = "id";

static rosidl_runtime_c__type_description__Field graphnav_msgs__msg__UUID__FIELDS[] = {
  {
    {graphnav_msgs__msg__UUID__FIELD_NAME__id, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      16,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
graphnav_msgs__msg__UUID__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {graphnav_msgs__msg__UUID__TYPE_NAME, 22, 22},
      {graphnav_msgs__msg__UUID__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8[16] id";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
graphnav_msgs__msg__UUID__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {graphnav_msgs__msg__UUID__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 13, 13},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
graphnav_msgs__msg__UUID__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *graphnav_msgs__msg__UUID__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
