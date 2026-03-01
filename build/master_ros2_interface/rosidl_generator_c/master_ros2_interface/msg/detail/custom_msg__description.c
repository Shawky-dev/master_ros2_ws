// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from master_ros2_interface:msg/CustomMsg.idl
// generated code does not contain a copyright notice

#include "master_ros2_interface/msg/detail/custom_msg__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_master_ros2_interface
const rosidl_type_hash_t *
master_ros2_interface__msg__CustomMsg__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x35, 0xf3, 0xe1, 0xa1, 0x39, 0x41, 0xcc, 0x3d,
      0xf1, 0x7c, 0x9f, 0x65, 0xe9, 0x7e, 0x41, 0xad,
      0x89, 0xbb, 0x44, 0x1f, 0xb4, 0x43, 0x98, 0xeb,
      0x47, 0x3d, 0xd8, 0xf8, 0x99, 0x2a, 0x9d, 0xc8,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char master_ros2_interface__msg__CustomMsg__TYPE_NAME[] = "master_ros2_interface/msg/CustomMsg";

// Define type names, field names, and default values
static char master_ros2_interface__msg__CustomMsg__FIELD_NAME__data[] = "data";
static char master_ros2_interface__msg__CustomMsg__FIELD_NAME__number[] = "number";

static rosidl_runtime_c__type_description__Field master_ros2_interface__msg__CustomMsg__FIELDS[] = {
  {
    {master_ros2_interface__msg__CustomMsg__FIELD_NAME__data, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {master_ros2_interface__msg__CustomMsg__FIELD_NAME__number, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
master_ros2_interface__msg__CustomMsg__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {master_ros2_interface__msg__CustomMsg__TYPE_NAME, 35, 35},
      {master_ros2_interface__msg__CustomMsg__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string data\n"
  "int32 number";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
master_ros2_interface__msg__CustomMsg__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {master_ros2_interface__msg__CustomMsg__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 25, 25},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
master_ros2_interface__msg__CustomMsg__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *master_ros2_interface__msg__CustomMsg__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
