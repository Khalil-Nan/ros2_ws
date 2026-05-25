// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from graphnav_msgs:msg/Edge.idl
// generated code does not contain a copyright notice
#include "graphnav_msgs/msg/detail/edge__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `traversability`
#include "graphnav_msgs/msg/detail/edge_traversability__functions.h"
// Member `properties`
#include "graphnav_msgs/msg/detail/key_value__functions.h"

bool
graphnav_msgs__msg__Edge__init(graphnav_msgs__msg__Edge * msg)
{
  if (!msg) {
    return false;
  }
  // to_idx
  // from_idx
  // traversability
  if (!graphnav_msgs__msg__EdgeTraversability__Sequence__init(&msg->traversability, 0)) {
    graphnav_msgs__msg__Edge__fini(msg);
    return false;
  }
  // properties
  if (!graphnav_msgs__msg__KeyValue__Sequence__init(&msg->properties, 0)) {
    graphnav_msgs__msg__Edge__fini(msg);
    return false;
  }
  return true;
}

void
graphnav_msgs__msg__Edge__fini(graphnav_msgs__msg__Edge * msg)
{
  if (!msg) {
    return;
  }
  // to_idx
  // from_idx
  // traversability
  graphnav_msgs__msg__EdgeTraversability__Sequence__fini(&msg->traversability);
  // properties
  graphnav_msgs__msg__KeyValue__Sequence__fini(&msg->properties);
}

bool
graphnav_msgs__msg__Edge__are_equal(const graphnav_msgs__msg__Edge * lhs, const graphnav_msgs__msg__Edge * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // to_idx
  if (lhs->to_idx != rhs->to_idx) {
    return false;
  }
  // from_idx
  if (lhs->from_idx != rhs->from_idx) {
    return false;
  }
  // traversability
  if (!graphnav_msgs__msg__EdgeTraversability__Sequence__are_equal(
      &(lhs->traversability), &(rhs->traversability)))
  {
    return false;
  }
  // properties
  if (!graphnav_msgs__msg__KeyValue__Sequence__are_equal(
      &(lhs->properties), &(rhs->properties)))
  {
    return false;
  }
  return true;
}

bool
graphnav_msgs__msg__Edge__copy(
  const graphnav_msgs__msg__Edge * input,
  graphnav_msgs__msg__Edge * output)
{
  if (!input || !output) {
    return false;
  }
  // to_idx
  output->to_idx = input->to_idx;
  // from_idx
  output->from_idx = input->from_idx;
  // traversability
  if (!graphnav_msgs__msg__EdgeTraversability__Sequence__copy(
      &(input->traversability), &(output->traversability)))
  {
    return false;
  }
  // properties
  if (!graphnav_msgs__msg__KeyValue__Sequence__copy(
      &(input->properties), &(output->properties)))
  {
    return false;
  }
  return true;
}

graphnav_msgs__msg__Edge *
graphnav_msgs__msg__Edge__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graphnav_msgs__msg__Edge * msg = (graphnav_msgs__msg__Edge *)allocator.allocate(sizeof(graphnav_msgs__msg__Edge), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(graphnav_msgs__msg__Edge));
  bool success = graphnav_msgs__msg__Edge__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
graphnav_msgs__msg__Edge__destroy(graphnav_msgs__msg__Edge * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    graphnav_msgs__msg__Edge__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
graphnav_msgs__msg__Edge__Sequence__init(graphnav_msgs__msg__Edge__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graphnav_msgs__msg__Edge * data = NULL;

  if (size) {
    data = (graphnav_msgs__msg__Edge *)allocator.zero_allocate(size, sizeof(graphnav_msgs__msg__Edge), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = graphnav_msgs__msg__Edge__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        graphnav_msgs__msg__Edge__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
graphnav_msgs__msg__Edge__Sequence__fini(graphnav_msgs__msg__Edge__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      graphnav_msgs__msg__Edge__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

graphnav_msgs__msg__Edge__Sequence *
graphnav_msgs__msg__Edge__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graphnav_msgs__msg__Edge__Sequence * array = (graphnav_msgs__msg__Edge__Sequence *)allocator.allocate(sizeof(graphnav_msgs__msg__Edge__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = graphnav_msgs__msg__Edge__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
graphnav_msgs__msg__Edge__Sequence__destroy(graphnav_msgs__msg__Edge__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    graphnav_msgs__msg__Edge__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
graphnav_msgs__msg__Edge__Sequence__are_equal(const graphnav_msgs__msg__Edge__Sequence * lhs, const graphnav_msgs__msg__Edge__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!graphnav_msgs__msg__Edge__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
graphnav_msgs__msg__Edge__Sequence__copy(
  const graphnav_msgs__msg__Edge__Sequence * input,
  graphnav_msgs__msg__Edge__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(graphnav_msgs__msg__Edge);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    graphnav_msgs__msg__Edge * data =
      (graphnav_msgs__msg__Edge *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!graphnav_msgs__msg__Edge__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          graphnav_msgs__msg__Edge__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!graphnav_msgs__msg__Edge__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
