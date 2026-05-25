// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from graphnav_msgs:msg/NodeTraversabilityProperties.idl
// generated code does not contain a copyright notice

#include "graphnav_msgs/msg/detail/node_traversability_properties__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_graphnav_msgs
const rosidl_type_hash_t *
graphnav_msgs__msg__NodeTraversabilityProperties__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x37, 0xe6, 0xc5, 0x85, 0xde, 0x3a, 0xd3, 0xa0,
      0x33, 0xbe, 0x1a, 0xb8, 0xde, 0xd5, 0x70, 0xfc,
      0x8c, 0xbd, 0xc8, 0x87, 0xd4, 0x9b, 0x2b, 0x70,
      0x7c, 0xcc, 0x89, 0xd8, 0x78, 0x36, 0x87, 0x44,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "graphnav_msgs/msg/detail/key_value__functions.h"
#include "geometry_msgs/msg/detail/point__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
static const rosidl_type_hash_t graphnav_msgs__msg__KeyValue__EXPECTED_HASH = {1, {
    0xdf, 0xc6, 0x37, 0xa2, 0xd2, 0xd2, 0x32, 0x87,
    0x10, 0x5b, 0x43, 0x38, 0x75, 0xbe, 0xe9, 0x02,
    0xc9, 0x7c, 0xea, 0x25, 0xc3, 0x2e, 0xe8, 0x67,
    0x11, 0xca, 0xe9, 0x89, 0x11, 0x96, 0xa4, 0xe8,
  }};
#endif

static char graphnav_msgs__msg__NodeTraversabilityProperties__TYPE_NAME[] = "graphnav_msgs/msg/NodeTraversabilityProperties";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char graphnav_msgs__msg__KeyValue__TYPE_NAME[] = "graphnav_msgs/msg/KeyValue";

// Define type names, field names, and default values
static char graphnav_msgs__msg__NodeTraversabilityProperties__FIELD_NAME__is_frontier[] = "is_frontier";
static char graphnav_msgs__msg__NodeTraversabilityProperties__FIELD_NAME__frontier_points[] = "frontier_points";
static char graphnav_msgs__msg__NodeTraversabilityProperties__FIELD_NAME__explored_radius[] = "explored_radius";
static char graphnav_msgs__msg__NodeTraversabilityProperties__FIELD_NAME__free_radius[] = "free_radius";
static char graphnav_msgs__msg__NodeTraversabilityProperties__FIELD_NAME__properties[] = "properties";

static rosidl_runtime_c__type_description__Field graphnav_msgs__msg__NodeTraversabilityProperties__FIELDS[] = {
  {
    {graphnav_msgs__msg__NodeTraversabilityProperties__FIELD_NAME__is_frontier, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {graphnav_msgs__msg__NodeTraversabilityProperties__FIELD_NAME__frontier_points, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
  {
    {graphnav_msgs__msg__NodeTraversabilityProperties__FIELD_NAME__explored_radius, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {graphnav_msgs__msg__NodeTraversabilityProperties__FIELD_NAME__free_radius, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {graphnav_msgs__msg__NodeTraversabilityProperties__FIELD_NAME__properties, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {graphnav_msgs__msg__KeyValue__TYPE_NAME, 26, 26},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription graphnav_msgs__msg__NodeTraversabilityProperties__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {graphnav_msgs__msg__KeyValue__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
graphnav_msgs__msg__NodeTraversabilityProperties__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {graphnav_msgs__msg__NodeTraversabilityProperties__TYPE_NAME, 46, 46},
      {graphnav_msgs__msg__NodeTraversabilityProperties__FIELDS, 5, 5},
    },
    {graphnav_msgs__msg__NodeTraversabilityProperties__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&graphnav_msgs__msg__KeyValue__EXPECTED_HASH, graphnav_msgs__msg__KeyValue__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = graphnav_msgs__msg__KeyValue__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool is_frontier\n"
  "geometry_msgs/Point[] frontier_points\n"
  "float32 explored_radius\n"
  "float32 free_radius\n"
  "\n"
  "KeyValue[] properties";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
graphnav_msgs__msg__NodeTraversabilityProperties__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {graphnav_msgs__msg__NodeTraversabilityProperties__TYPE_NAME, 46, 46},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 122, 122},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
graphnav_msgs__msg__NodeTraversabilityProperties__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *graphnav_msgs__msg__NodeTraversabilityProperties__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[2] = *graphnav_msgs__msg__KeyValue__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
