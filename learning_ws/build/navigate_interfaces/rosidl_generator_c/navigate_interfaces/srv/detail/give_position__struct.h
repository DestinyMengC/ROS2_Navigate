// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from navigate_interfaces:srv/GivePosition.idl
// generated code does not contain a copyright notice

#ifndef NAVIGATE_INTERFACES__SRV__DETAIL__GIVE_POSITION__STRUCT_H_
#define NAVIGATE_INTERFACES__SRV__DETAIL__GIVE_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GivePosition in the package navigate_interfaces.
typedef struct navigate_interfaces__srv__GivePosition_Request
{
  double x;
  double y;
} navigate_interfaces__srv__GivePosition_Request;

// Struct for a sequence of navigate_interfaces__srv__GivePosition_Request.
typedef struct navigate_interfaces__srv__GivePosition_Request__Sequence
{
  navigate_interfaces__srv__GivePosition_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} navigate_interfaces__srv__GivePosition_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/GivePosition in the package navigate_interfaces.
typedef struct navigate_interfaces__srv__GivePosition_Response
{
  bool finish;
} navigate_interfaces__srv__GivePosition_Response;

// Struct for a sequence of navigate_interfaces__srv__GivePosition_Response.
typedef struct navigate_interfaces__srv__GivePosition_Response__Sequence
{
  navigate_interfaces__srv__GivePosition_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} navigate_interfaces__srv__GivePosition_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAVIGATE_INTERFACES__SRV__DETAIL__GIVE_POSITION__STRUCT_H_
