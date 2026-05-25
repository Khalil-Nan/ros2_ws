// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from graphnav_msgs:msg/NavigationGraph.idl
// generated code does not contain a copyright notice
#include "graphnav_msgs/msg/detail/navigation_graph__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `trav_classes`
#include "rosidl_runtime_c/string_functions.h"
// Member `nodes`
#include "graphnav_msgs/msg/detail/node__functions.h"
// Member `edges`
#include "graphnav_msgs/msg/detail/edge__functions.h"

bool
graphnav_msgs__msg__NavigationGraph__init(graphnav_msgs__msg__NavigationGraph * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    graphnav_msgs__msg__NavigationGraph__fini(msg);
    return false;
  }
  // trav_classes
  if (!rosidl_runtime_c__String__Sequence__init(&msg->trav_classes, 0)) {
    graphnav_msgs__msg__NavigationGraph__fini(msg);
    return false;
  }
  // nodes
  if (!graphnav_msgs__msg__Node__Sequence__init(&msg->nodes, 0)) {
    graphnav_msgs__msg__NavigationGraph__fini(msg);
    return false;
  }
  // edges
  if (!graphnav_msgs__msg__Edge__Sequence__init(&msg->edges, 0)) {
    graphnav_msgs__msg__NavigationGraph__fini(msg);
    return false;
  }
  // current_node_idx
  return true;
}

void
graphnav_msgs__msg__NavigationGraph__fini(graphnav_msgs__msg__NavigationGraph * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // trav_classes
  rosidl_runtime_c__String__Sequence__fini(&msg->trav_classes);
  // nodes
  graphnav_msgs__msg__Node__Sequence__fini(&msg->nodes);
  // edges
  graphnav_msgs__msg__Edge__Sequence__fini(&msg->edges);
  // current_node_idx
}

bool
graphnav_msgs__msg__NavigationGraph__are_equal(const graphnav_msgs__msg__NavigationGraph * lhs, const graphnav_msgs__msg__NavigationGraph * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // trav_classes
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->trav_classes), &(rhs->trav_classes)))
  {
    return false;
  }
  // nodes
  if (!graphnav_msgs__msg__Node__Sequence__are_equal(
      &(lhs->nodes), &(rhs->nodes)))
  {
    return false;
  }
  // edges
  if (!graphnav_msgs__msg__Edge__Sequence__are_equal(
      &(lhs->edges), &(rhs->edges)))
  {
    return false;
  }
  // current_node_idx
  if (lhs->current_node_idx != rhs->current_node_idx) {
    return false;
  }
  return true;
}

bool
graphnav_msgs__msg__NavigationGraph__copy(
  const graphnav_msgs__msg__NavigationGraph * input,
  graphnav_msgs__msg__NavigationGraph * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // trav_classes
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->trav_classes), &(output->trav_classes)))
  {
    return false;
  }
  // nodes
  if (!graphnav_msgs__msg__Node__Sequence__copy(
      &(input->nodes), &(output->nodes)))
  {
    return false;
  }
  // edges
  if (!graphnav_msgs__msg__Edge__Sequence__copy(
      &(input->edges), &(output->edges)))
  {
    return false;
  }
  // current_node_idx
  output->current_node_idx = input->current_node_idx;
  return true;
}

graphnav_msgs__msg__NavigationGraph *
graphnav_msgs__msg__NavigationGraph__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graphnav_msgs__msg__NavigationGraph * msg = (graphnav_msgs__msg__NavigationGraph *)allocator.allocate(sizeof(graphnav_msgs__msg__NavigationGraph), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(graphnav_msgs__msg__NavigationGraph));
  bool success = graphnav_msgs__msg__NavigationGraph__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
graphnav_msgs__msg__NavigationGraph__destroy(graphnav_msgs__msg__NavigationGraph * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    graphnav_msgs__msg__NavigationGraph__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
graphnav_msgs__msg__NavigationGraph__Sequence__init(graphnav_msgs__msg__NavigationGraph__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graphnav_msgs__msg__NavigationGraph * data = NULL;

  if (size) {
    data = (graphnav_msgs__msg__NavigationGraph *)allocator.zero_allocate(size, sizeof(graphnav_msgs__msg__NavigationGraph), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = graphnav_msgs__msg__NavigationGraph__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        graphnav_msgs__msg__NavigationGraph__fini(&data[i - 1]);
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
graphnav_msgs__msg__NavigationGraph__Sequence__fini(graphnav_msgs__msg__NavigationGraph__Sequence * array)
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
      graphnav_msgs__msg__NavigationGraph__fini(&array->data[i]);
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

graphnav_msgs__msg__NavigationGraph__Sequence *
graphnav_msgs__msg__NavigationGraph__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  graphnav_msgs__msg__NavigationGraph__Sequence * array = (graphnav_msgs__msg__NavigationGraph__Sequence *)allocator.allocate(sizeof(graphnav_msgs__msg__NavigationGraph__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = graphnav_msgs__msg__NavigationGraph__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
graphnav_msgs__msg__NavigationGraph__Sequence__destroy(graphnav_msgs__msg__NavigationGraph__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    graphnav_msgs__msg__NavigationGraph__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
graphnav_msgs__msg__NavigationGraph__Sequence__are_equal(const graphnav_msgs__msg__NavigationGraph__Sequence * lhs, const graphnav_msgs__msg__NavigationGraph__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!graphnav_msgs__msg__NavigationGraph__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
graphnav_msgs__msg__NavigationGraph__Sequence__copy(
  const graphnav_msgs__msg__NavigationGraph__Sequence * input,
  graphnav_msgs__msg__NavigationGraph__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(graphnav_msgs__msg__NavigationGraph);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    graphnav_msgs__msg__NavigationGraph * data =
      (graphnav_msgs__msg__NavigationGraph *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!graphnav_msgs__msg__NavigationGraph__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          graphnav_msgs__msg__NavigationGraph__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!graphnav_msgs__msg__NavigationGraph__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
