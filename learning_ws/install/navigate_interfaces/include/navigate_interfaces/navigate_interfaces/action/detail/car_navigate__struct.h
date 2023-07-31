// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from navigate_interfaces:action/CarNavigate.idl
// generated code does not contain a copyright notice

#ifndef NAVIGATE_INTERFACES__ACTION__DETAIL__CAR_NAVIGATE__STRUCT_H_
#define NAVIGATE_INTERFACES__ACTION__DETAIL__CAR_NAVIGATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/CarNavigate in the package navigate_interfaces.
typedef struct navigate_interfaces__action__CarNavigate_Goal
{
  bool enable;
} navigate_interfaces__action__CarNavigate_Goal;

// Struct for a sequence of navigate_interfaces__action__CarNavigate_Goal.
typedef struct navigate_interfaces__action__CarNavigate_Goal__Sequence
{
  navigate_interfaces__action__CarNavigate_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} navigate_interfaces__action__CarNavigate_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/CarNavigate in the package navigate_interfaces.
typedef struct navigate_interfaces__action__CarNavigate_Result
{
  bool finish;
} navigate_interfaces__action__CarNavigate_Result;

// Struct for a sequence of navigate_interfaces__action__CarNavigate_Result.
typedef struct navigate_interfaces__action__CarNavigate_Result__Sequence
{
  navigate_interfaces__action__CarNavigate_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} navigate_interfaces__action__CarNavigate_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/CarNavigate in the package navigate_interfaces.
typedef struct navigate_interfaces__action__CarNavigate_Feedback
{
  double x;
  double y;
} navigate_interfaces__action__CarNavigate_Feedback;

// Struct for a sequence of navigate_interfaces__action__CarNavigate_Feedback.
typedef struct navigate_interfaces__action__CarNavigate_Feedback__Sequence
{
  navigate_interfaces__action__CarNavigate_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} navigate_interfaces__action__CarNavigate_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "navigate_interfaces/action/detail/car_navigate__struct.h"

/// Struct defined in action/CarNavigate in the package navigate_interfaces.
typedef struct navigate_interfaces__action__CarNavigate_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  navigate_interfaces__action__CarNavigate_Goal goal;
} navigate_interfaces__action__CarNavigate_SendGoal_Request;

// Struct for a sequence of navigate_interfaces__action__CarNavigate_SendGoal_Request.
typedef struct navigate_interfaces__action__CarNavigate_SendGoal_Request__Sequence
{
  navigate_interfaces__action__CarNavigate_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} navigate_interfaces__action__CarNavigate_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/CarNavigate in the package navigate_interfaces.
typedef struct navigate_interfaces__action__CarNavigate_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} navigate_interfaces__action__CarNavigate_SendGoal_Response;

// Struct for a sequence of navigate_interfaces__action__CarNavigate_SendGoal_Response.
typedef struct navigate_interfaces__action__CarNavigate_SendGoal_Response__Sequence
{
  navigate_interfaces__action__CarNavigate_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} navigate_interfaces__action__CarNavigate_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/CarNavigate in the package navigate_interfaces.
typedef struct navigate_interfaces__action__CarNavigate_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} navigate_interfaces__action__CarNavigate_GetResult_Request;

// Struct for a sequence of navigate_interfaces__action__CarNavigate_GetResult_Request.
typedef struct navigate_interfaces__action__CarNavigate_GetResult_Request__Sequence
{
  navigate_interfaces__action__CarNavigate_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} navigate_interfaces__action__CarNavigate_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "navigate_interfaces/action/detail/car_navigate__struct.h"

/// Struct defined in action/CarNavigate in the package navigate_interfaces.
typedef struct navigate_interfaces__action__CarNavigate_GetResult_Response
{
  int8_t status;
  navigate_interfaces__action__CarNavigate_Result result;
} navigate_interfaces__action__CarNavigate_GetResult_Response;

// Struct for a sequence of navigate_interfaces__action__CarNavigate_GetResult_Response.
typedef struct navigate_interfaces__action__CarNavigate_GetResult_Response__Sequence
{
  navigate_interfaces__action__CarNavigate_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} navigate_interfaces__action__CarNavigate_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "navigate_interfaces/action/detail/car_navigate__struct.h"

/// Struct defined in action/CarNavigate in the package navigate_interfaces.
typedef struct navigate_interfaces__action__CarNavigate_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  navigate_interfaces__action__CarNavigate_Feedback feedback;
} navigate_interfaces__action__CarNavigate_FeedbackMessage;

// Struct for a sequence of navigate_interfaces__action__CarNavigate_FeedbackMessage.
typedef struct navigate_interfaces__action__CarNavigate_FeedbackMessage__Sequence
{
  navigate_interfaces__action__CarNavigate_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} navigate_interfaces__action__CarNavigate_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAVIGATE_INTERFACES__ACTION__DETAIL__CAR_NAVIGATE__STRUCT_H_
