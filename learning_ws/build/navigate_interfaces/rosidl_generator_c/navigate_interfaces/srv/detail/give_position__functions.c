// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from navigate_interfaces:srv/GivePosition.idl
// generated code does not contain a copyright notice
#include "navigate_interfaces/srv/detail/give_position__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
navigate_interfaces__srv__GivePosition_Request__init(navigate_interfaces__srv__GivePosition_Request * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  return true;
}

void
navigate_interfaces__srv__GivePosition_Request__fini(navigate_interfaces__srv__GivePosition_Request * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
}

bool
navigate_interfaces__srv__GivePosition_Request__are_equal(const navigate_interfaces__srv__GivePosition_Request * lhs, const navigate_interfaces__srv__GivePosition_Request * rhs)
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
navigate_interfaces__srv__GivePosition_Request__copy(
  const navigate_interfaces__srv__GivePosition_Request * input,
  navigate_interfaces__srv__GivePosition_Request * output)
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

navigate_interfaces__srv__GivePosition_Request *
navigate_interfaces__srv__GivePosition_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigate_interfaces__srv__GivePosition_Request * msg = (navigate_interfaces__srv__GivePosition_Request *)allocator.allocate(sizeof(navigate_interfaces__srv__GivePosition_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(navigate_interfaces__srv__GivePosition_Request));
  bool success = navigate_interfaces__srv__GivePosition_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
navigate_interfaces__srv__GivePosition_Request__destroy(navigate_interfaces__srv__GivePosition_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    navigate_interfaces__srv__GivePosition_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
navigate_interfaces__srv__GivePosition_Request__Sequence__init(navigate_interfaces__srv__GivePosition_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigate_interfaces__srv__GivePosition_Request * data = NULL;

  if (size) {
    data = (navigate_interfaces__srv__GivePosition_Request *)allocator.zero_allocate(size, sizeof(navigate_interfaces__srv__GivePosition_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = navigate_interfaces__srv__GivePosition_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        navigate_interfaces__srv__GivePosition_Request__fini(&data[i - 1]);
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
navigate_interfaces__srv__GivePosition_Request__Sequence__fini(navigate_interfaces__srv__GivePosition_Request__Sequence * array)
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
      navigate_interfaces__srv__GivePosition_Request__fini(&array->data[i]);
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

navigate_interfaces__srv__GivePosition_Request__Sequence *
navigate_interfaces__srv__GivePosition_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigate_interfaces__srv__GivePosition_Request__Sequence * array = (navigate_interfaces__srv__GivePosition_Request__Sequence *)allocator.allocate(sizeof(navigate_interfaces__srv__GivePosition_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = navigate_interfaces__srv__GivePosition_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
navigate_interfaces__srv__GivePosition_Request__Sequence__destroy(navigate_interfaces__srv__GivePosition_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    navigate_interfaces__srv__GivePosition_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
navigate_interfaces__srv__GivePosition_Request__Sequence__are_equal(const navigate_interfaces__srv__GivePosition_Request__Sequence * lhs, const navigate_interfaces__srv__GivePosition_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!navigate_interfaces__srv__GivePosition_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
navigate_interfaces__srv__GivePosition_Request__Sequence__copy(
  const navigate_interfaces__srv__GivePosition_Request__Sequence * input,
  navigate_interfaces__srv__GivePosition_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(navigate_interfaces__srv__GivePosition_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    navigate_interfaces__srv__GivePosition_Request * data =
      (navigate_interfaces__srv__GivePosition_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!navigate_interfaces__srv__GivePosition_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          navigate_interfaces__srv__GivePosition_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!navigate_interfaces__srv__GivePosition_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
navigate_interfaces__srv__GivePosition_Response__init(navigate_interfaces__srv__GivePosition_Response * msg)
{
  if (!msg) {
    return false;
  }
  // finish
  return true;
}

void
navigate_interfaces__srv__GivePosition_Response__fini(navigate_interfaces__srv__GivePosition_Response * msg)
{
  if (!msg) {
    return;
  }
  // finish
}

bool
navigate_interfaces__srv__GivePosition_Response__are_equal(const navigate_interfaces__srv__GivePosition_Response * lhs, const navigate_interfaces__srv__GivePosition_Response * rhs)
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
navigate_interfaces__srv__GivePosition_Response__copy(
  const navigate_interfaces__srv__GivePosition_Response * input,
  navigate_interfaces__srv__GivePosition_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // finish
  output->finish = input->finish;
  return true;
}

navigate_interfaces__srv__GivePosition_Response *
navigate_interfaces__srv__GivePosition_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigate_interfaces__srv__GivePosition_Response * msg = (navigate_interfaces__srv__GivePosition_Response *)allocator.allocate(sizeof(navigate_interfaces__srv__GivePosition_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(navigate_interfaces__srv__GivePosition_Response));
  bool success = navigate_interfaces__srv__GivePosition_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
navigate_interfaces__srv__GivePosition_Response__destroy(navigate_interfaces__srv__GivePosition_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    navigate_interfaces__srv__GivePosition_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
navigate_interfaces__srv__GivePosition_Response__Sequence__init(navigate_interfaces__srv__GivePosition_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigate_interfaces__srv__GivePosition_Response * data = NULL;

  if (size) {
    data = (navigate_interfaces__srv__GivePosition_Response *)allocator.zero_allocate(size, sizeof(navigate_interfaces__srv__GivePosition_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = navigate_interfaces__srv__GivePosition_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        navigate_interfaces__srv__GivePosition_Response__fini(&data[i - 1]);
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
navigate_interfaces__srv__GivePosition_Response__Sequence__fini(navigate_interfaces__srv__GivePosition_Response__Sequence * array)
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
      navigate_interfaces__srv__GivePosition_Response__fini(&array->data[i]);
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

navigate_interfaces__srv__GivePosition_Response__Sequence *
navigate_interfaces__srv__GivePosition_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigate_interfaces__srv__GivePosition_Response__Sequence * array = (navigate_interfaces__srv__GivePosition_Response__Sequence *)allocator.allocate(sizeof(navigate_interfaces__srv__GivePosition_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = navigate_interfaces__srv__GivePosition_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
navigate_interfaces__srv__GivePosition_Response__Sequence__destroy(navigate_interfaces__srv__GivePosition_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    navigate_interfaces__srv__GivePosition_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
navigate_interfaces__srv__GivePosition_Response__Sequence__are_equal(const navigate_interfaces__srv__GivePosition_Response__Sequence * lhs, const navigate_interfaces__srv__GivePosition_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!navigate_interfaces__srv__GivePosition_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
navigate_interfaces__srv__GivePosition_Response__Sequence__copy(
  const navigate_interfaces__srv__GivePosition_Response__Sequence * input,
  navigate_interfaces__srv__GivePosition_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(navigate_interfaces__srv__GivePosition_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    navigate_interfaces__srv__GivePosition_Response * data =
      (navigate_interfaces__srv__GivePosition_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!navigate_interfaces__srv__GivePosition_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          navigate_interfaces__srv__GivePosition_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!navigate_interfaces__srv__GivePosition_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
