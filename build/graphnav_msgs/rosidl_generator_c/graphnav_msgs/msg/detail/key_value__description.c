// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from graphnav_msgs:msg/KeyValue.idl
// generated code does not contain a copyright notice

#include "graphnav_msgs/msg/detail/key_value__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_graphnav_msgs
const rosidl_type_hash_t *
graphnav_msgs__msg__KeyValue__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xdf, 0xc6, 0x37, 0xa2, 0xd2, 0xd2, 0x32, 0x87,
      0x10, 0x5b, 0x43, 0x38, 0x75, 0xbe, 0xe9, 0x02,
      0xc9, 0x7c, 0xea, 0x25, 0xc3, 0x2e, 0xe8, 0x67,
      0x11, 0xca, 0xe9, 0x89, 0x11, 0x96, 0xa4, 0xe8,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char graphnav_msgs__msg__KeyValue__TYPE_NAME[] = "graphnav_msgs/msg/KeyValue";

// Define type names, field names, and default values
static char graphnav_msgs__msg__KeyValue__FIELD_NAME__key[] = "key";
static char graphnav_msgs__msg__KeyValue__FIELD_NAME__value[] = "value";

static rosidl_runtime_c__type_description__Field graphnav_msgs__msg__KeyValue__FIELDS[] = {
  {
    {graphnav_msgs__msg__KeyValue__FIELD_NAME__key, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {graphnav_msgs__msg__KeyValue__FIELD_NAME__value, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
graphnav_msgs__msg__KeyValue__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {graphnav_msgs__msg__KeyValue__TYPE_NAME, 26, 26},
      {graphnav_msgs__msg__KeyValue__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string key\n"
  "float32[] value";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
graphnav_msgs__msg__KeyValue__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {graphnav_msgs__msg__KeyValue__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 27, 27},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
graphnav_msgs__msg__KeyValue__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *graphnav_msgs__msg__KeyValue__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
