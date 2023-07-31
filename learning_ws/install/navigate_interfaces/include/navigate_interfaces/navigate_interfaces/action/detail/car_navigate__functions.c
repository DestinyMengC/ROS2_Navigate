// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from navigate_interfaces:action/CarNavigate.idl
// generated code does not contain a copyright notice
#include "navigate_interfaces/action/detail/car_navigate__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
navigate_interfaces__action__CarNavigate_Goal__init(navigate_interfaces__action__CarNavigate_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // enable
  return true;
}

void
navigate_interfaces__action__CarNavigate_Goal__fini(navigate_interfaces__action__CarNavigate_Goal * msg)
{
  if (!msg) {
    return;
  }
  // enable
}

bool
navigate_interfaces__action__CarNavigate_Goal__are_equal(const navigate_interfaces__action__CarNavigate_Goal * lhs, const navigate_interfaces__action__CarNavigate_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // enable
  if (lhs->enable != rhs->enable) {
    return false;
  }
  return true;
}

bool
navigate_interfaces__action__CarNavigate_Goal__copy(
  const navigate_interfaces__action__CarNavigate_Goal * input,
  navigate_interfaces__action__CarNavigate_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // enable
  output->enable = input->enable;
  return true;
}

navigate_interfaces__action__CarNavigate_Goal *
navigate_interfaces__action__CarNavigate_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigate_interfaces__action__CarNavigate_Goal * msg = (navigate_interfaces__action__CarNavigate_Goal *)allocator.allocate(sizeof(navigate_interfaces__action__CarNavigate_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(navigate_interfaces__action__CarNavigate_Goal));
  bool success = navigate_interfaces__action__CarNavigate_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
navigate_interfaces__action__CarNavigate_Goal__destroy(navigate_interfaces__action__CarNavigate_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    navigate_interfaces__action__CarNavigate_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
navigate_interfaces__action__CarNavigate_Goal__Sequence__init(navigate_interfaces__action__CarNavigate_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigate_interfaces__action__CarNavigate_Goal * data = NULL;

  if (size) {
    data = (navigate_interfaces__action__CarNavigate_Goal *)allocator.zero_allocate(size, sizeof(navigate_interfaces__action__CarNavigate_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = navigate_interfaces__action__CarNavigate_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        navigate_interfaces__action__CarNavigate_Goal__fini(&data[i - 1]);
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
navigate_interfaces__action__CarNavigate_Goal__Sequence__fini(navigate_interfaces__action__CarNavigate_Goal__Sequence * array)
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
      navigate_interfaces__action__CarNavigate_Goal__fini(&array->data[i]);
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

navigate_interfaces__action__CarNavigate_Goal__Sequence *
navigate_interfaces__action__CarNavigate_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigate_interfaces__action__CarNavigate_Goal__Sequence * array = (navigate_interfaces__action__CarNavigate_Goal__Sequence *)allocator.allocate(sizeof(navigate_interfaces__action__CarNavigate_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = navigate_interfaces__action__CarNavigate_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
navigate_interfaces__action__CarNavigate_Goal__Sequence__destroy(navigate_interfaces__action__CarNavigate_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    navigate_interfaces__action__CarNavigate_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
navigate_interfaces__action__CarNavigate_Goal__Sequence__are_equal(const navigate_interfaces__action__CarNavigate_Goal__Sequence * lhs, const navigate_interfaces__action__CarNavigate_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!navigate_interfaces__action__CarNavigate_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
navigate_interfaces__action__CarNavigate_Goal__Sequence__copy(
  const navigate_interfaces__action__CarNavigate_Goal__Sequence * input,
  navigate_interfaces__action__CarNavigate_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(navigate_interfaces__action__CarNavigate_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    navigate_interfaces__action__CarNavigate_Goal * data =
      (navigate_interfaces__action__CarNavigate_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!navigate_interfaces__action__CarNavigate_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          navigate_interfaces__action__CarNavigate_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!navigate_interfaces__action__CarNavigate_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
navigate_interfaces__action__CarNavigate_Result__init(navigate_interfaces__action__CarNavigate_Result * msg)
{
  if (!msg) {
    return false;
  }
  // finish
  return true;
}

void
navigate_interfaces__action__CarNavigate_Result__fini(navigate_interfaces__action__CarNavigate_Result * msg)
{
  if (!msg) {
    return;
  }
  // finish
}

bool
navigate_interfaces__action__CarNavigate_Result__are_equal(const navigate_interfaces__action__CarNavigate_Result * lhs, const navigate_interfaces__action__CarNavigate_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // finish
  if (lhs->finish != rhs->finish) {
    return false;
  }
  return true;
}

bool
navigate_interfaces__action__CarNavigate_Result__copy(
  const navigate_interfaces__action__CarNavigate_Result * input,
  navigate_interfaces__action__CarNavigate_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // finish
  output->finish = input->finish;
  return true;
}

navigate_interfaces__action__CarNavigate_Result *
navigate_interfaces__action__CarNavigate_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigate_interfaces__action__CarNavigate_Result * msg = (navigate_interfaces__action__CarNavigate_Result *)allocator.allocate(sizeof(navigate_interfaces__action__CarNavigate_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(navigate_interfaces__action__CarNavigate_Result));
  bool success = navigate_interfaces__action__CarNavigate_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
navigate_interfaces__action__CarNavigate_Result__destroy(navigate_interfaces__action__CarNavigate_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    navigate_interfaces__action__CarNavigate_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
navigate_interfaces__action__CarNavigate_Result__Sequence__init(navigate_interfaces__action__CarNavigate_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigate_interfaces__action__CarNavigate_Result * data = NULL;

  if (size) {
    data = (navigate_interfaces__action__CarNavigate_Result *)allocator.zero_allocate(size, sizeof(navigate_interfaces__action__CarNavigate_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = navigate_interfaces__action__CarNavigate_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        navigate_interfaces__action__CarNavigate_Result__fini(&data[i - 1]);
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
navigate_interfaces__action__CarNavigate_Result__Sequence__fini(navigate_interfaces__action__CarNavigate_Result__Sequence * array)
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
      navigate_interfaces__action__CarNavigate_Result__fini(&array->data[i]);
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

navigate_interfaces__action__CarNavigate_Result__Sequence *
navigate_interfaces__action__CarNavigate_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigate_interfaces__action__CarNavigate_Result__Sequence * array = (navigate_interfaces__action__CarNavigate_Result__Sequence *)allocator.allocate(sizeof(navigate_interfaces__action__CarNavigate_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = navigate_interfaces__action__CarNavigate_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
navigate_interfaces__action__CarNavigate_Result__Sequence__destroy(navigate_interfaces__action__CarNavigate_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    navigate_interfaces__action__CarNavigate_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
navigate_interfaces__action__CarNavigate_Result__Sequence__are_equal(const navigate_interfaces__action__CarNavigate_Result__Sequence * lhs, const navigate_interfaces__action__CarNavigate_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!navigate_interfaces__action__CarNavigate_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
navigate_interfaces__action__CarNavigate_Result__Sequence__copy(
  const navigate_interfaces__action__CarNavigate_Result__Sequence * input,
  navigate_interfaces__action__CarNavigate_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(navigate_interfaces__action__CarNavigate_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    navigate_interfaces__action__CarNavigate_Result * data =
      (navigate_interfaces__action__CarNavigate_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!navigate_interfaces__action__CarNavigate_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          navigate_interfaces__action__CarNavigate_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!navigate_interfaces__action__CarNavigate_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
navigate_interfaces__action__CarNavigate_Feedback__init(navigate_interfaces__action__CarNavigate_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  return true;
}

void
navigate_interfaces__action__CarNavigate_Feedback__fini(navigate_interfaces__action__CarNavigate_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
}

bool
navigate_interfaces__action__CarNavigate_Feedback__are_equal(const navigate_interfaces__action__CarNavigate_Feedback * lhs, const navigate_interfaces__action__CarNavigate_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  return true;
}

bool
navigate_interfaces__action__CarNavigate_Feedback__copy(
  const navigate_interfaces__action__CarNavigate_Feedback * input,
  navigate_interfaces__action__CarNavigate_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  return true;
}

navigate_interfaces__action__CarNavigate_Feedback *
navigate_interfaces__action__CarNavigate_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigate_interfaces__action__CarNavigate_Feedback * msg = (navigate_interfaces__action__CarNavigate_Feedback *)allocator.allocate(sizeof(navigate_interfaces__action__CarNavigate_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(navigate_interfaces__action__CarNavigate_Feedback));
  bool success = navigate_interfaces__action__CarNavigate_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
navigate_interfaces__action__CarNavigate_Feedback__destroy(navigate_interfaces__action__CarNavigate_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    navigate_interfaces__action__CarNavigate_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
navigate_interfaces__action__CarNavigate_Feedback__Sequence__init(navigate_interfaces__action__CarNavigate_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigate_interfaces__action__CarNavigate_Feedback * data = NULL;

  if (size) {
    data = (navigate_interfaces__action__CarNavigate_Feedback *)allocator.zero_allocate(size, sizeof(navigate_interfaces__action__CarNavigate_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = navigate_interfaces__action__CarNavigate_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        navigate_interfaces__action__CarNavigate_Feedback__fini(&data[i - 1]);
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
navigate_interfaces__action__CarNavigate_Feedback__Sequence__fini(navigate_interfaces__action__CarNavigate_Feedback__Sequence * array)
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
      navigate_interfaces__action__CarNavigate_Feedback__fini(&array->data[i]);
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

navigate_interfaces__action__CarNavigate_Feedback__Sequence *
navigate_interfaces__action__CarNavigate_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigate_interfaces__action__CarNavigate_Feedback__Sequence * array = (navigate_interfaces__action__CarNavigate_Feedback__Sequence *)allocator.allocate(sizeof(navigate_interfaces__action__CarNavigate_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = navigate_interfaces__action__CarNavigate_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
navigate_interfaces__action__CarNavigate_Feedback__Sequence__destroy(navigate_interfaces__action__CarNavigate_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    navigate_interfaces__action__CarNavigate_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
navigate_interfaces__action__CarNavigate_Feedback__Sequence__are_equal(const navigate_interfaces__action__CarNavigate_Feedback__Sequence * lhs, const navigate_interfaces__action__CarNavigate_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!navigate_interfaces__action__CarNavigate_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
navigate_interfaces__action__CarNavigate_Feedback__Sequence__copy(
  const navigate_interfaces__action__CarNavigate_Feedback__Sequence * input,
  navigate_interfaces__action__CarNavigate_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(navigate_interfaces__action__CarNavigate_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    navigate_interfaces__action__CarNavigate_Feedback * data =
      (navigate_interfaces__action__CarNavigate_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!navigate_interfaces__action__CarNavigate_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          navigate_interfaces__action__CarNavigate_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!navigate_interfaces__action__CarNavigate_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "navigate_interfaces/action/detail/car_navigate__functions.h"

bool
navigate_interfaces__action__CarNavigate_SendGoal_Request__init(navigate_interfaces__action__CarNavigate_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    navigate_interfaces__action__CarNavigate_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!navigate_interfaces__action__CarNavigate_Goal__init(&msg->goal)) {
    navigate_interfaces__action__CarNavigate_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
navigate_interfaces__action__CarNavigate_SendGoal_Request__fini(navigate_interfaces__action__CarNavigate_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  navigate_interfaces__action__CarNavigate_Goal__fini(&msg->goal);
}

bool
navigate_interfaces__action__CarNavigate_SendGoal_Request__are_equal(const navigate_interfaces__action__CarNavigate_SendGoal_Request * lhs, const navigate_interfaces__action__CarNavigate_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!navigate_interfaces__action__CarNavigate_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
navigate_interfaces__action__CarNavigate_SendGoal_Request__copy(
  const navigate_interfaces__action__CarNavigate_SendGoal_Request * input,
  navigate_interfaces__action__CarNavigate_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!navigate_interfaces__action__CarNavigate_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

navigate_interfaces__action__CarNavigate_SendGoal_Request *
navigate_interfaces__action__CarNavigate_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigate_interfaces__action__CarNavigate_SendGoal_Request * msg = (navigate_interfaces__action__CarNavigate_SendGoal_Request *)allocator.allocate(sizeof(navigate_interfaces__action__CarNavigate_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(navigate_interfaces__action__CarNavigate_SendGoal_Request));
  bool success = navigate_interfaces__action__CarNavigate_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
navigate_interfaces__action__CarNavigate_SendGoal_Request__destroy(navigate_interfaces__action__CarNavigate_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    navigate_interfaces__action__CarNavigate_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
navigate_interfaces__action__CarNavigate_SendGoal_Request__Sequence__init(navigate_interfaces__action__CarNavigate_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigate_interfaces__action__CarNavigate_SendGoal_Request * data = NULL;

  if (size) {
    data = (navigate_interfaces__action__CarNavigate_SendGoal_Request *)allocator.zero_allocate(size, sizeof(navigate_interfaces__action__CarNavigate_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = navigate_interfaces__action__CarNavigate_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        navigate_interfaces__action__CarNavigate_SendGoal_Request__fini(&data[i - 1]);
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
navigate_interfaces__action__CarNavigate_SendGoal_Request__Sequence__fini(navigate_interfaces__action__CarNavigate_SendGoal_Request__Sequence * array)
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
      navigate_interfaces__action__CarNavigate_SendGoal_Request__fini(&array->data[i]);
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

navigate_interfaces__action__CarNavigate_SendGoal_Request__Sequence *
navigate_interfaces__action__CarNavigate_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigate_interfaces__action__CarNavigate_SendGoal_Request__Sequence * array = (navigate_interfaces__action__CarNavigate_SendGoal_Request__Sequence *)allocator.allocate(sizeof(navigate_interfaces__action__CarNavigate_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = navigate_interfaces__action__CarNavigate_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
navigate_interfaces__action__CarNavigate_SendGoal_Request__Sequence__destroy(navigate_interfaces__action__CarNavigate_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    navigate_interfaces__action__CarNavigate_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
navigate_interfaces__action__CarNavigate_SendGoal_Request__Sequence__are_equal(const navigate_interfaces__action__CarNavigate_SendGoal_Request__Sequence * lhs, const navigate_interfaces__action__CarNavigate_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!navigate_interfaces__action__CarNavigate_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
navigate_interfaces__action__CarNavigate_SendGoal_Request__Sequence__copy(
  const navigate_interfaces__action__CarNavigate_SendGoal_Request__Sequence * input,
  navigate_interfaces__action__CarNavigate_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(navigate_interfaces__action__CarNavigate_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    navigate_interfaces__action__CarNavigate_SendGoal_Request * data =
      (navigate_interfaces__action__CarNavigate_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!navigate_interfaces__action__CarNavigate_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          navigate_interfaces__action__CarNavigate_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!navigate_interfaces__action__CarNavigate_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
navigate_interfaces__action__CarNavigate_SendGoal_Response__init(navigate_interfaces__action__CarNavigate_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    navigate_interfaces__action__CarNavigate_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
navigate_interfaces__action__CarNavigate_SendGoal_Response__fini(navigate_interfaces__action__CarNavigate_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
navigate_interfaces__action__CarNavigate_SendGoal_Response__are_equal(const navigate_interfaces__action__CarNavigate_SendGoal_Response * lhs, const navigate_interfaces__action__CarNavigate_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
navigate_interfaces__action__CarNavigate_SendGoal_Response__copy(
  const navigate_interfaces__action__CarNavigate_SendGoal_Response * input,
  navigate_interfaces__action__CarNavigate_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

navigate_interfaces__action__CarNavigate_SendGoal_Response *
navigate_interfaces__action__CarNavigate_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigate_interfaces__action__CarNavigate_SendGoal_Response * msg = (navigate_interfaces__action__CarNavigate_SendGoal_Response *)allocator.allocate(sizeof(navigate_interfaces__action__CarNavigate_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(navigate_interfaces__action__CarNavigate_SendGoal_Response));
  bool success = navigate_interfaces__action__CarNavigate_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
navigate_interfaces__action__CarNavigate_SendGoal_Response__destroy(navigate_interfaces__action__CarNavigate_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    navigate_interfaces__action__CarNavigate_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
navigate_interfaces__action__CarNavigate_SendGoal_Response__Sequence__init(navigate_interfaces__action__CarNavigate_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigate_interfaces__action__CarNavigate_SendGoal_Response * data = NULL;

  if (size) {
    data = (navigate_interfaces__action__CarNavigate_SendGoal_Response *)allocator.zero_allocate(size, sizeof(navigate_interfaces__action__CarNavigate_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = navigate_interfaces__action__CarNavigate_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        navigate_interfaces__action__CarNavigate_SendGoal_Response__fini(&data[i - 1]);
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
navigate_interfaces__action__CarNavigate_SendGoal_Response__Sequence__fini(navigate_interfaces__action__CarNavigate_SendGoal_Response__Sequence * array)
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
      navigate_interfaces__action__CarNavigate_SendGoal_Response__fini(&array->data[i]);
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

navigate_interfaces__action__CarNavigate_SendGoal_Response__Sequence *
navigate_interfaces__action__CarNavigate_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigate_interfaces__action__CarNavigate_SendGoal_Response__Sequence * array = (navigate_interfaces__action__CarNavigate_SendGoal_Response__Sequence *)allocator.allocate(sizeof(navigate_interfaces__action__CarNavigate_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = navigate_interfaces__action__CarNavigate_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
navigate_interfaces__action__CarNavigate_SendGoal_Response__Sequence__destroy(navigate_interfaces__action__CarNavigate_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    navigate_interfaces__action__CarNavigate_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
navigate_interfaces__action__CarNavigate_SendGoal_Response__Sequence__are_equal(const navigate_interfaces__action__CarNavigate_SendGoal_Response__Sequence * lhs, const navigate_interfaces__action__CarNavigate_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!navigate_interfaces__action__CarNavigate_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
navigate_interfaces__action__CarNavigate_SendGoal_Response__Sequence__copy(
  const navigate_interfaces__action__CarNavigate_SendGoal_Response__Sequence * input,
  navigate_interfaces__action__CarNavigate_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(navigate_interfaces__action__CarNavigate_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    navigate_interfaces__action__CarNavigate_SendGoal_Response * data =
      (navigate_interfaces__action__CarNavigate_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!navigate_interfaces__action__CarNavigate_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          navigate_interfaces__action__CarNavigate_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!navigate_interfaces__action__CarNavigate_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
navigate_interfaces__action__CarNavigate_GetResult_Request__init(navigate_interfaces__action__CarNavigate_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    navigate_interfaces__action__CarNavigate_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
navigate_interfaces__action__CarNavigate_GetResult_Request__fini(navigate_interfaces__action__CarNavigate_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
navigate_interfaces__action__CarNavigate_GetResult_Request__are_equal(const navigate_interfaces__action__CarNavigate_GetResult_Request * lhs, const navigate_interfaces__action__CarNavigate_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
navigate_interfaces__action__CarNavigate_GetResult_Request__copy(
  const navigate_interfaces__action__CarNavigate_GetResult_Request * input,
  navigate_interfaces__action__CarNavigate_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

navigate_interfaces__action__CarNavigate_GetResult_Request *
navigate_interfaces__action__CarNavigate_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigate_interfaces__action__CarNavigate_GetResult_Request * msg = (navigate_interfaces__action__CarNavigate_GetResult_Request *)allocator.allocate(sizeof(navigate_interfaces__action__CarNavigate_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(navigate_interfaces__action__CarNavigate_GetResult_Request));
  bool success = navigate_interfaces__action__CarNavigate_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
navigate_interfaces__action__CarNavigate_GetResult_Request__destroy(navigate_interfaces__action__CarNavigate_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    navigate_interfaces__action__CarNavigate_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
navigate_interfaces__action__CarNavigate_GetResult_Request__Sequence__init(navigate_interfaces__action__CarNavigate_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigate_interfaces__action__CarNavigate_GetResult_Request * data = NULL;

  if (size) {
    data = (navigate_interfaces__action__CarNavigate_GetResult_Request *)allocator.zero_allocate(size, sizeof(navigate_interfaces__action__CarNavigate_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = navigate_interfaces__action__CarNavigate_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        navigate_interfaces__action__CarNavigate_GetResult_Request__fini(&data[i - 1]);
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
navigate_interfaces__action__CarNavigate_GetResult_Request__Sequence__fini(navigate_interfaces__action__CarNavigate_GetResult_Request__Sequence * array)
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
      navigate_interfaces__action__CarNavigate_GetResult_Request__fini(&array->data[i]);
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

navigate_interfaces__action__CarNavigate_GetResult_Request__Sequence *
navigate_interfaces__action__CarNavigate_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigate_interfaces__action__CarNavigate_GetResult_Request__Sequence * array = (navigate_interfaces__action__CarNavigate_GetResult_Request__Sequence *)allocator.allocate(sizeof(navigate_interfaces__action__CarNavigate_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = navigate_interfaces__action__CarNavigate_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
navigate_interfaces__action__CarNavigate_GetResult_Request__Sequence__destroy(navigate_interfaces__action__CarNavigate_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    navigate_interfaces__action__CarNavigate_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
navigate_interfaces__action__CarNavigate_GetResult_Request__Sequence__are_equal(const navigate_interfaces__action__CarNavigate_GetResult_Request__Sequence * lhs, const navigate_interfaces__action__CarNavigate_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!navigate_interfaces__action__CarNavigate_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
navigate_interfaces__action__CarNavigate_GetResult_Request__Sequence__copy(
  const navigate_interfaces__action__CarNavigate_GetResult_Request__Sequence * input,
  navigate_interfaces__action__CarNavigate_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(navigate_interfaces__action__CarNavigate_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    navigate_interfaces__action__CarNavigate_GetResult_Request * data =
      (navigate_interfaces__action__CarNavigate_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!navigate_interfaces__action__CarNavigate_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          navigate_interfaces__action__CarNavigate_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!navigate_interfaces__action__CarNavigate_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "navigate_interfaces/action/detail/car_navigate__functions.h"

bool
navigate_interfaces__action__CarNavigate_GetResult_Response__init(navigate_interfaces__action__CarNavigate_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!navigate_interfaces__action__CarNavigate_Result__init(&msg->result)) {
    navigate_interfaces__action__CarNavigate_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
navigate_interfaces__action__CarNavigate_GetResult_Response__fini(navigate_interfaces__action__CarNavigate_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  navigate_interfaces__action__CarNavigate_Result__fini(&msg->result);
}

bool
navigate_interfaces__action__CarNavigate_GetResult_Response__are_equal(const navigate_interfaces__action__CarNavigate_GetResult_Response * lhs, const navigate_interfaces__action__CarNavigate_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!navigate_interfaces__action__CarNavigate_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
navigate_interfaces__action__CarNavigate_GetResult_Response__copy(
  const navigate_interfaces__action__CarNavigate_GetResult_Response * input,
  navigate_interfaces__action__CarNavigate_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!navigate_interfaces__action__CarNavigate_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

navigate_interfaces__action__CarNavigate_GetResult_Response *
navigate_interfaces__action__CarNavigate_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigate_interfaces__action__CarNavigate_GetResult_Response * msg = (navigate_interfaces__action__CarNavigate_GetResult_Response *)allocator.allocate(sizeof(navigate_interfaces__action__CarNavigate_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(navigate_interfaces__action__CarNavigate_GetResult_Response));
  bool success = navigate_interfaces__action__CarNavigate_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
navigate_interfaces__action__CarNavigate_GetResult_Response__destroy(navigate_interfaces__action__CarNavigate_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    navigate_interfaces__action__CarNavigate_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
navigate_interfaces__action__CarNavigate_GetResult_Response__Sequence__init(navigate_interfaces__action__CarNavigate_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigate_interfaces__action__CarNavigate_GetResult_Response * data = NULL;

  if (size) {
    data = (navigate_interfaces__action__CarNavigate_GetResult_Response *)allocator.zero_allocate(size, sizeof(navigate_interfaces__action__CarNavigate_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = navigate_interfaces__action__CarNavigate_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        navigate_interfaces__action__CarNavigate_GetResult_Response__fini(&data[i - 1]);
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
navigate_interfaces__action__CarNavigate_GetResult_Response__Sequence__fini(navigate_interfaces__action__CarNavigate_GetResult_Response__Sequence * array)
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
      navigate_interfaces__action__CarNavigate_GetResult_Response__fini(&array->data[i]);
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

navigate_interfaces__action__CarNavigate_GetResult_Response__Sequence *
navigate_interfaces__action__CarNavigate_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigate_interfaces__action__CarNavigate_GetResult_Response__Sequence * array = (navigate_interfaces__action__CarNavigate_GetResult_Response__Sequence *)allocator.allocate(sizeof(navigate_interfaces__action__CarNavigate_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = navigate_interfaces__action__CarNavigate_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
navigate_interfaces__action__CarNavigate_GetResult_Response__Sequence__destroy(navigate_interfaces__action__CarNavigate_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    navigate_interfaces__action__CarNavigate_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
navigate_interfaces__action__CarNavigate_GetResult_Response__Sequence__are_equal(const navigate_interfaces__action__CarNavigate_GetResult_Response__Sequence * lhs, const navigate_interfaces__action__CarNavigate_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!navigate_interfaces__action__CarNavigate_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
navigate_interfaces__action__CarNavigate_GetResult_Response__Sequence__copy(
  const navigate_interfaces__action__CarNavigate_GetResult_Response__Sequence * input,
  navigate_interfaces__action__CarNavigate_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(navigate_interfaces__action__CarNavigate_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    navigate_interfaces__action__CarNavigate_GetResult_Response * data =
      (navigate_interfaces__action__CarNavigate_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!navigate_interfaces__action__CarNavigate_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          navigate_interfaces__action__CarNavigate_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!navigate_interfaces__action__CarNavigate_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "navigate_interfaces/action/detail/car_navigate__functions.h"

bool
navigate_interfaces__action__CarNavigate_FeedbackMessage__init(navigate_interfaces__action__CarNavigate_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    navigate_interfaces__action__CarNavigate_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!navigate_interfaces__action__CarNavigate_Feedback__init(&msg->feedback)) {
    navigate_interfaces__action__CarNavigate_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
navigate_interfaces__action__CarNavigate_FeedbackMessage__fini(navigate_interfaces__action__CarNavigate_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  navigate_interfaces__action__CarNavigate_Feedback__fini(&msg->feedback);
}

bool
navigate_interfaces__action__CarNavigate_FeedbackMessage__are_equal(const navigate_interfaces__action__CarNavigate_FeedbackMessage * lhs, const navigate_interfaces__action__CarNavigate_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!navigate_interfaces__action__CarNavigate_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
navigate_interfaces__action__CarNavigate_FeedbackMessage__copy(
  const navigate_interfaces__action__CarNavigate_FeedbackMessage * input,
  navigate_interfaces__action__CarNavigate_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!navigate_interfaces__action__CarNavigate_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

navigate_interfaces__action__CarNavigate_FeedbackMessage *
navigate_interfaces__action__CarNavigate_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigate_interfaces__action__CarNavigate_FeedbackMessage * msg = (navigate_interfaces__action__CarNavigate_FeedbackMessage *)allocator.allocate(sizeof(navigate_interfaces__action__CarNavigate_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(navigate_interfaces__action__CarNavigate_FeedbackMessage));
  bool success = navigate_interfaces__action__CarNavigate_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
navigate_interfaces__action__CarNavigate_FeedbackMessage__destroy(navigate_interfaces__action__CarNavigate_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    navigate_interfaces__action__CarNavigate_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
navigate_interfaces__action__CarNavigate_FeedbackMessage__Sequence__init(navigate_interfaces__action__CarNavigate_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigate_interfaces__action__CarNavigate_FeedbackMessage * data = NULL;

  if (size) {
    data = (navigate_interfaces__action__CarNavigate_FeedbackMessage *)allocator.zero_allocate(size, sizeof(navigate_interfaces__action__CarNavigate_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = navigate_interfaces__action__CarNavigate_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        navigate_interfaces__action__CarNavigate_FeedbackMessage__fini(&data[i - 1]);
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
navigate_interfaces__action__CarNavigate_FeedbackMessage__Sequence__fini(navigate_interfaces__action__CarNavigate_FeedbackMessage__Sequence * array)
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
      navigate_interfaces__action__CarNavigate_FeedbackMessage__fini(&array->data[i]);
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

navigate_interfaces__action__CarNavigate_FeedbackMessage__Sequence *
navigate_interfaces__action__CarNavigate_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigate_interfaces__action__CarNavigate_FeedbackMessage__Sequence * array = (navigate_interfaces__action__CarNavigate_FeedbackMessage__Sequence *)allocator.allocate(sizeof(navigate_interfaces__action__CarNavigate_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = navigate_interfaces__action__CarNavigate_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
navigate_interfaces__action__CarNavigate_FeedbackMessage__Sequence__destroy(navigate_interfaces__action__CarNavigate_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    navigate_interfaces__action__CarNavigate_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
navigate_interfaces__action__CarNavigate_FeedbackMessage__Sequence__are_equal(const navigate_interfaces__action__CarNavigate_FeedbackMessage__Sequence * lhs, const navigate_interfaces__action__CarNavigate_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!navigate_interfaces__action__CarNavigate_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
navigate_interfaces__action__CarNavigate_FeedbackMessage__Sequence__copy(
  const navigate_interfaces__action__CarNavigate_FeedbackMessage__Sequence * input,
  navigate_interfaces__action__CarNavigate_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(navigate_interfaces__action__CarNavigate_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    navigate_interfaces__action__CarNavigate_FeedbackMessage * data =
      (navigate_interfaces__action__CarNavigate_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!navigate_interfaces__action__CarNavigate_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          navigate_interfaces__action__CarNavigate_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!navigate_interfaces__action__CarNavigate_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
