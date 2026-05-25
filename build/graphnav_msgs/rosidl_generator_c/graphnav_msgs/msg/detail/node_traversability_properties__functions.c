// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from graphnav_msgs:msg/NodeTraversabilityProperties.idl
// generated code does not contain a copyright notice
#include "graphnav_msgs/msg/detail/node_traversability_properties__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `frontier_points`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `properties`
#include "graphnav_msgs/msg/detail/key_value__functions.h"

bool
graphnav_msgs__msg__NodeTraversabilityProperties__init(graphnav_msgs__msg__NodeTraversabilityProperties * msg)
{
  if (!msg) {
    return false;
  }
  // is_frontier
  // frontier_points
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->frontier_points, 0)) {
    graphnav_msgs__msg__NodeTraversabilityProperties__fini(msg);
    return false;
  }
  // explored_radius
  // free_radius
  // properties
  if (!graphnav_msgs__msg__KeyValue__Sequence__init(&msg->properties, 0)) {
    graphnav_msgs__msg__NodeTraversabilityProperties__fini(msg);
    return false;
  }
  return true;
}

void
graphnav_msgs__msg__NodeTraversabilityProperties__fini(graphnav_msgs__msg__NodeTraversabilityProperties * msg)
{
  if (!msg) {
    return;
  }
  // is_frontier
  // frontier_points
  geometry_msgs__msg__Point__Sequence__fini(&msg->frontier_points);
  // explored_radius
  // free_radius
  // properties
  graphnav_msgs__msg__KeyValue__Sequence__fini(&msg->properties);
}

bool
graphnav_msgs__msg__NodeTraversabilityProperties__are_equal(const graphnav_msgs__msg__NodeTraversabilityProperties * lhs, const graphnav_msgs__msg__NodeTraversabilityProperties * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // is_frontier
  if (lhs->is_frontier != rhs->is_frontier) {
    return false;
  }
  // frontier_points
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->frontier_points), &(rhs->frontier_points)))
  {
    return false;
  }
  // explored_radius
  if (lhs->explored_radius != rhs->explored_radius) {
    return false;
  }
  // free_radius
  if (lhs->free_radius != rhs->free_radius) {
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
graphnav_msgs__msg__NodeTraversabilityProperties__copy(
  const graphnav_msgs__msg__NodeTraversabilityProperties * input,
  graphnav_msgs__msg__NodeTraversabilityProperties * output)
{
  if (!input || !output) {
    return false;
  }
  // is_frontier
  output->is_frontier = input->is_frontier;
  // frontier_points
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->frontier_points), &(output->frontier_points)))
  {
    return false;
  }
  // explored_radius
  output->explored_radius = input->explored_radius;
  // free_radius
  output->free_radius = input->free_radius;
  // properties
  if (!graphnav_msgs__msg__KeyValue__Sequence__copy(
      &(input->properties), &(output->properties)))
  {
    return false;
  }
  return true;
}

graphnav_msgs__msg__NodeTraversabilityProperties *
graphnav_msgs__msg__NodeTraversabilityProperties__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graphnav_msgs__msg__NodeTraversabilityProperties * msg = (graphnav_msgs__msg__NodeTraversabilityProperties *)allocator.allocate(sizeof(graphnav_msgs__msg__NodeTraversabilityProperties), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(graphnav_msgs__msg__NodeTraversabilityProperties));
  bool success = graphnav_msgs__msg__NodeTraversabilityProperties__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
graphnav_msgs__msg__NodeTraversabilityProperties__destroy(graphnav_msgs__msg__NodeTraversabilityProperties * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    graphnav_msgs__msg__NodeTraversabilityProperties__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
graphnav_msgs__msg__NodeTraversabilityProperties__Sequence__init(graphnav_msgs__msg__NodeTraversabilityProperties__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graphnav_msgs__msg__NodeTraversabilityProperties * data = NULL;

  if (size) {
    data = (graphnav_msgs__msg__NodeTraversabilityProperties *)allocator.zero_allocate(size, sizeof(graphnav_msgs__msg__NodeTraversabilityProperties), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = graphnav_msgs__msg__NodeTraversabilityProperties__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        graphnav_msgs__msg__NodeTraversabilityProperties__fini(&data[i - 1]);
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
graphnav_msgs__msg__NodeTraversabilityProperties__Sequence__fini(graphnav_msgs__msg__NodeTraversabilityProperties__Sequence * array)
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
      graphnav_msgs__msg__NodeTraversabilityProperties__fini(&array->data[i]);
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

graphnav_msgs__msg__NodeTraversabilityProperties__Sequence *
graphnav_msgs__msg__NodeTraversabilityProperties__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graphnav_msgs__msg__NodeTraversabilityProperties__Sequence * array = (graphnav_msgs__msg__NodeTraversabilityProperties__Sequence *)allocator.allocate(sizeof(graphnav_msgs__msg__NodeTraversabilityProperties__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = graphnav_msgs__msg__NodeTraversabilityProperties__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
graphnav_msgs__msg__NodeTraversabilityProperties__Sequence__destroy(graphnav_msgs__msg__NodeTraversabilityProperties__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    graphnav_msgs__msg__NodeTraversabilityProperties__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
graphnav_msgs__msg__NodeTraversabilityProperties__Sequence__are_equal(const graphnav_msgs__msg__NodeTraversabilityProperties__Sequence * lhs, const graphnav_msgs__msg__NodeTraversabilityProperties__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!graphnav_msgs__msg__NodeTraversabilityProperties__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
graphnav_msgs__msg__NodeTraversabilityProperties__Sequence__copy(
  const graphnav_msgs__msg__NodeTraversabilityProperties__Sequence * input,
  graphnav_msgs__msg__NodeTraversabilityProperties__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(graphnav_msgs__msg__NodeTraversabilityProperties);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    graphnav_msgs__msg__NodeTraversabilityProperties * data =
      (graphnav_msgs__msg__NodeTraversabilityProperties *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!graphnav_msgs__msg__NodeTraversabilityProperties__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          graphnav_msgs__msg__NodeTraversabilityProperties__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!graphnav_msgs__msg__NodeTraversabilityProperties__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
