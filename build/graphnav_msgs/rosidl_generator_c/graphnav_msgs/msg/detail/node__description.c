// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from graphnav_msgs:msg/Node.idl
// generated code does not contain a copyright notice

#include "graphnav_msgs/msg/detail/node__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_graphnav_msgs
const rosidl_type_hash_t *
graphnav_msgs__msg__Node__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd3, 0x91, 0xd4, 0x46, 0x26, 0x7a, 0x8f, 0x62,
      0x3a, 0x8c, 0xa0, 0x2a, 0xf0, 0xc7, 0x72, 0xf1,
      0xb2, 0x73, 0x54, 0xf7, 0xd0, 0x7d, 0xf5, 0xf4,
      0x5d, 0x27, 0xfa, 0xca, 0x0b, 0x97, 0xa3, 0x29,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "graphnav_msgs/msg/detail/uuid__functions.h"
#include "geometry_msgs/msg/detail/quaternion__functions.h"
#include "graphnav_msgs/msg/detail/key_value__functions.h"
#include "geometry_msgs/msg/detail/pose__functions.h"
#include "graphnav_msgs/msg/detail/node_traversability_properties__functions.h"
#include "geometry_msgs/msg/detail/point__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Pose__EXPECTED_HASH = {1, {
    0xd5, 0x01, 0x95, 0x4e, 0x94, 0x76, 0xce, 0xa2,
    0x99, 0x69, 0x84, 0xe8, 0x12, 0x05, 0x4b, 0x68,
    0x02, 0x6a, 0xe0, 0xbf, 0xae, 0x78, 0x9d, 0x9a,
    0x10, 0xb2, 0x3d, 0xaf, 0x35, 0xcc, 0x90, 0xfa,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Quaternion__EXPECTED_HASH = {1, {
    0x8a, 0x76, 0x5f, 0x66, 0x77, 0x8c, 0x8f, 0xf7,
    0xc8, 0xab, 0x94, 0xaf, 0xcc, 0x59, 0x0a, 0x2e,
    0xd5, 0x32, 0x5a, 0x1d, 0x9a, 0x07, 0x6f, 0xff,
    0xf3, 0x8f, 0xbc, 0xe3, 0x6f, 0x45, 0x86, 0x84,
  }};
static const rosidl_type_hash_t graphnav_msgs__msg__KeyValue__EXPECTED_HASH = {1, {
    0xdf, 0xc6, 0x37, 0xa2, 0xd2, 0xd2, 0x32, 0x87,
    0x10, 0x5b, 0x43, 0x38, 0x75, 0xbe, 0xe9, 0x02,
    0xc9, 0x7c, 0xea, 0x25, 0xc3, 0x2e, 0xe8, 0x67,
    0x11, 0xca, 0xe9, 0x89, 0x11, 0x96, 0xa4, 0xe8,
  }};
static const rosidl_type_hash_t graphnav_msgs__msg__NodeTraversabilityProperties__EXPECTED_HASH = {1, {
    0x37, 0xe6, 0xc5, 0x85, 0xde, 0x3a, 0xd3, 0xa0,
    0x33, 0xbe, 0x1a, 0xb8, 0xde, 0xd5, 0x70, 0xfc,
    0x8c, 0xbd, 0xc8, 0x87, 0xd4, 0x9b, 0x2b, 0x70,
    0x7c, 0xcc, 0x89, 0xd8, 0x78, 0x36, 0x87, 0x44,
  }};
static const rosidl_type_hash_t graphnav_msgs__msg__UUID__EXPECTED_HASH = {1, {
    0x2a, 0xe0, 0x5f, 0xcd, 0xa4, 0xeb, 0xb2, 0xef,
    0x7b, 0x93, 0x0c, 0xfd, 0x64, 0xec, 0x92, 0xc8,
    0x40, 0x65, 0xde, 0x04, 0xeb, 0x57, 0x4c, 0xdc,
    0x90, 0x61, 0x09, 0xc0, 0x4b, 0xcb, 0x32, 0x93,
  }};
#endif

static char graphnav_msgs__msg__Node__TYPE_NAME[] = "graphnav_msgs/msg/Node";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char geometry_msgs__msg__Pose__TYPE_NAME[] = "geometry_msgs/msg/Pose";
static char geometry_msgs__msg__Quaternion__TYPE_NAME[] = "geometry_msgs/msg/Quaternion";
static char graphnav_msgs__msg__KeyValue__TYPE_NAME[] = "graphnav_msgs/msg/KeyValue";
static char graphnav_msgs__msg__NodeTraversabilityProperties__TYPE_NAME[] = "graphnav_msgs/msg/NodeTraversabilityProperties";
static char graphnav_msgs__msg__UUID__TYPE_NAME[] = "graphnav_msgs/msg/UUID";

// Define type names, field names, and default values
static char graphnav_msgs__msg__Node__FIELD_NAME__uuid[] = "uuid";
static char graphnav_msgs__msg__Node__FIELD_NAME__pose[] = "pose";
static char graphnav_msgs__msg__Node__FIELD_NAME__trav_properties[] = "trav_properties";
static char graphnav_msgs__msg__Node__FIELD_NAME__properties[] = "properties";

static rosidl_runtime_c__type_description__Field graphnav_msgs__msg__Node__FIELDS[] = {
  {
    {graphnav_msgs__msg__Node__FIELD_NAME__uuid, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {graphnav_msgs__msg__UUID__TYPE_NAME, 22, 22},
    },
    {NULL, 0, 0},
  },
  {
    {graphnav_msgs__msg__Node__FIELD_NAME__pose, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    },
    {NULL, 0, 0},
  },
  {
    {graphnav_msgs__msg__Node__FIELD_NAME__trav_properties, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {graphnav_msgs__msg__NodeTraversabilityProperties__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
  {
    {graphnav_msgs__msg__Node__FIELD_NAME__properties, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {graphnav_msgs__msg__KeyValue__TYPE_NAME, 26, 26},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription graphnav_msgs__msg__Node__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {graphnav_msgs__msg__KeyValue__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {graphnav_msgs__msg__NodeTraversabilityProperties__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {graphnav_msgs__msg__UUID__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
graphnav_msgs__msg__Node__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {graphnav_msgs__msg__Node__TYPE_NAME, 22, 22},
      {graphnav_msgs__msg__Node__FIELDS, 4, 4},
    },
    {graphnav_msgs__msg__Node__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&graphnav_msgs__msg__KeyValue__EXPECTED_HASH, graphnav_msgs__msg__KeyValue__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = graphnav_msgs__msg__KeyValue__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&graphnav_msgs__msg__NodeTraversabilityProperties__EXPECTED_HASH, graphnav_msgs__msg__NodeTraversabilityProperties__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = graphnav_msgs__msg__NodeTraversabilityProperties__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&graphnav_msgs__msg__UUID__EXPECTED_HASH, graphnav_msgs__msg__UUID__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = graphnav_msgs__msg__UUID__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "UUID uuid\n"
  "\n"
  "geometry_msgs/Pose pose\n"
  "NodeTraversabilityProperties[] trav_properties  # same order as NavigationGraph::trav_classes\n"
  "KeyValue[] properties";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
graphnav_msgs__msg__Node__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {graphnav_msgs__msg__Node__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 151, 151},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
graphnav_msgs__msg__Node__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *graphnav_msgs__msg__Node__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[4] = *graphnav_msgs__msg__KeyValue__get_individual_type_description_source(NULL);
    sources[5] = *graphnav_msgs__msg__NodeTraversabilityProperties__get_individual_type_description_source(NULL);
    sources[6] = *graphnav_msgs__msg__UUID__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
