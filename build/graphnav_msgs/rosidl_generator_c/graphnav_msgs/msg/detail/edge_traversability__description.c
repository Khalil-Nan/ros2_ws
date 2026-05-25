// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from graphnav_msgs:msg/EdgeTraversability.idl
// generated code does not contain a copyright notice

#include "graphnav_msgs/msg/detail/edge_traversability__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_graphnav_msgs
const rosidl_type_hash_t *
graphnav_msgs__msg__EdgeTraversability__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x59, 0xa0, 0xdf, 0x40, 0xc5, 0x9f, 0x70, 0xe9,
      0x85, 0xdc, 0xf0, 0xfd, 0x02, 0x20, 0x96, 0xa5,
      0x9d, 0x96, 0x00, 0x5e, 0xda, 0x97, 0x87, 0x1f,
      0x46, 0xf9, 0xde, 0x7b, 0x19, 0xce, 0xe7, 0x49,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "graphnav_msgs/msg/detail/key_value__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t graphnav_msgs__msg__KeyValue__EXPECTED_HASH = {1, {
    0xdf, 0xc6, 0x37, 0xa2, 0xd2, 0xd2, 0x32, 0x87,
    0x10, 0x5b, 0x43, 0x38, 0x75, 0xbe, 0xe9, 0x02,
    0xc9, 0x7c, 0xea, 0x25, 0xc3, 0x2e, 0xe8, 0x67,
    0x11, 0xca, 0xe9, 0x89, 0x11, 0x96, 0xa4, 0xe8,
  }};
#endif

static char graphnav_msgs__msg__EdgeTraversability__TYPE_NAME[] = "graphnav_msgs/msg/EdgeTraversability";
static char graphnav_msgs__msg__KeyValue__TYPE_NAME[] = "graphnav_msgs/msg/KeyValue";

// Define type names, field names, and default values
static char graphnav_msgs__msg__EdgeTraversability__FIELD_NAME__traversability_cost[] = "traversability_cost";
static char graphnav_msgs__msg__EdgeTraversability__FIELD_NAME__properties[] = "properties";

static rosidl_runtime_c__type_description__Field graphnav_msgs__msg__EdgeTraversability__FIELDS[] = {
  {
    {graphnav_msgs__msg__EdgeTraversability__FIELD_NAME__traversability_cost, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {graphnav_msgs__msg__EdgeTraversability__FIELD_NAME__properties, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {graphnav_msgs__msg__KeyValue__TYPE_NAME, 26, 26},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription graphnav_msgs__msg__EdgeTraversability__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {graphnav_msgs__msg__KeyValue__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
graphnav_msgs__msg__EdgeTraversability__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {graphnav_msgs__msg__EdgeTraversability__TYPE_NAME, 36, 36},
      {graphnav_msgs__msg__EdgeTraversability__FIELDS, 2, 2},
    },
    {graphnav_msgs__msg__EdgeTraversability__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&graphnav_msgs__msg__KeyValue__EXPECTED_HASH, graphnav_msgs__msg__KeyValue__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = graphnav_msgs__msg__KeyValue__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 traversability_cost\n"
  "KeyValue[] properties";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
graphnav_msgs__msg__EdgeTraversability__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {graphnav_msgs__msg__EdgeTraversability__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 50, 50},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
graphnav_msgs__msg__EdgeTraversability__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *graphnav_msgs__msg__EdgeTraversability__get_individual_type_description_source(NULL),
    sources[1] = *graphnav_msgs__msg__KeyValue__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
