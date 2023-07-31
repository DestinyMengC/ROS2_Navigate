// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from navigate_interfaces:action/CarNavigate.idl
// generated code does not contain a copyright notice

#ifndef NAVIGATE_INTERFACES__ACTION__DETAIL__CAR_NAVIGATE__TRAITS_HPP_
#define NAVIGATE_INTERFACES__ACTION__DETAIL__CAR_NAVIGATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "navigate_interfaces/action/detail/car_navigate__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace navigate_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const CarNavigate_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: enable
  {
    out << "enable: ";
    rosidl_generator_traits::value_to_yaml(msg.enable, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CarNavigate_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: enable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enable: ";
    rosidl_generator_traits::value_to_yaml(msg.enable, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CarNavigate_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace navigate_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use navigate_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const navigate_interfaces::action::CarNavigate_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  navigate_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use navigate_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const navigate_interfaces::action::CarNavigate_Goal & msg)
{
  return navigate_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<navigate_interfaces::action::CarNavigate_Goal>()
{
  return "navigate_interfaces::action::CarNavigate_Goal";
}

template<>
inline const char * name<navigate_interfaces::action::CarNavigate_Goal>()
{
  return "navigate_interfaces/action/CarNavigate_Goal";
}

template<>
struct has_fixed_size<navigate_interfaces::action::CarNavigate_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<navigate_interfaces::action::CarNavigate_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<navigate_interfaces::action::CarNavigate_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace navigate_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const CarNavigate_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: finish
  {
    out << "finish: ";
    rosidl_generator_traits::value_to_yaml(msg.finish, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CarNavigate_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: finish
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "finish: ";
    rosidl_generator_traits::value_to_yaml(msg.finish, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CarNavigate_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace navigate_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use navigate_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const navigate_interfaces::action::CarNavigate_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  navigate_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use navigate_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const navigate_interfaces::action::CarNavigate_Result & msg)
{
  return navigate_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<navigate_interfaces::action::CarNavigate_Result>()
{
  return "navigate_interfaces::action::CarNavigate_Result";
}

template<>
inline const char * name<navigate_interfaces::action::CarNavigate_Result>()
{
  return "navigate_interfaces/action/CarNavigate_Result";
}

template<>
struct has_fixed_size<navigate_interfaces::action::CarNavigate_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<navigate_interfaces::action::CarNavigate_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<navigate_interfaces::action::CarNavigate_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace navigate_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const CarNavigate_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CarNavigate_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CarNavigate_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace navigate_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use navigate_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const navigate_interfaces::action::CarNavigate_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  navigate_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use navigate_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const navigate_interfaces::action::CarNavigate_Feedback & msg)
{
  return navigate_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<navigate_interfaces::action::CarNavigate_Feedback>()
{
  return "navigate_interfaces::action::CarNavigate_Feedback";
}

template<>
inline const char * name<navigate_interfaces::action::CarNavigate_Feedback>()
{
  return "navigate_interfaces/action/CarNavigate_Feedback";
}

template<>
struct has_fixed_size<navigate_interfaces::action::CarNavigate_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<navigate_interfaces::action::CarNavigate_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<navigate_interfaces::action::CarNavigate_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "navigate_interfaces/action/detail/car_navigate__traits.hpp"

namespace navigate_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const CarNavigate_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CarNavigate_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CarNavigate_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace navigate_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use navigate_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const navigate_interfaces::action::CarNavigate_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  navigate_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use navigate_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const navigate_interfaces::action::CarNavigate_SendGoal_Request & msg)
{
  return navigate_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<navigate_interfaces::action::CarNavigate_SendGoal_Request>()
{
  return "navigate_interfaces::action::CarNavigate_SendGoal_Request";
}

template<>
inline const char * name<navigate_interfaces::action::CarNavigate_SendGoal_Request>()
{
  return "navigate_interfaces/action/CarNavigate_SendGoal_Request";
}

template<>
struct has_fixed_size<navigate_interfaces::action::CarNavigate_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<navigate_interfaces::action::CarNavigate_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<navigate_interfaces::action::CarNavigate_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<navigate_interfaces::action::CarNavigate_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<navigate_interfaces::action::CarNavigate_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace navigate_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const CarNavigate_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CarNavigate_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CarNavigate_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace navigate_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use navigate_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const navigate_interfaces::action::CarNavigate_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  navigate_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use navigate_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const navigate_interfaces::action::CarNavigate_SendGoal_Response & msg)
{
  return navigate_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<navigate_interfaces::action::CarNavigate_SendGoal_Response>()
{
  return "navigate_interfaces::action::CarNavigate_SendGoal_Response";
}

template<>
inline const char * name<navigate_interfaces::action::CarNavigate_SendGoal_Response>()
{
  return "navigate_interfaces/action/CarNavigate_SendGoal_Response";
}

template<>
struct has_fixed_size<navigate_interfaces::action::CarNavigate_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<navigate_interfaces::action::CarNavigate_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<navigate_interfaces::action::CarNavigate_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<navigate_interfaces::action::CarNavigate_SendGoal>()
{
  return "navigate_interfaces::action::CarNavigate_SendGoal";
}

template<>
inline const char * name<navigate_interfaces::action::CarNavigate_SendGoal>()
{
  return "navigate_interfaces/action/CarNavigate_SendGoal";
}

template<>
struct has_fixed_size<navigate_interfaces::action::CarNavigate_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<navigate_interfaces::action::CarNavigate_SendGoal_Request>::value &&
    has_fixed_size<navigate_interfaces::action::CarNavigate_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<navigate_interfaces::action::CarNavigate_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<navigate_interfaces::action::CarNavigate_SendGoal_Request>::value &&
    has_bounded_size<navigate_interfaces::action::CarNavigate_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<navigate_interfaces::action::CarNavigate_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<navigate_interfaces::action::CarNavigate_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<navigate_interfaces::action::CarNavigate_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace navigate_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const CarNavigate_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CarNavigate_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CarNavigate_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace navigate_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use navigate_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const navigate_interfaces::action::CarNavigate_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  navigate_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use navigate_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const navigate_interfaces::action::CarNavigate_GetResult_Request & msg)
{
  return navigate_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<navigate_interfaces::action::CarNavigate_GetResult_Request>()
{
  return "navigate_interfaces::action::CarNavigate_GetResult_Request";
}

template<>
inline const char * name<navigate_interfaces::action::CarNavigate_GetResult_Request>()
{
  return "navigate_interfaces/action/CarNavigate_GetResult_Request";
}

template<>
struct has_fixed_size<navigate_interfaces::action::CarNavigate_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<navigate_interfaces::action::CarNavigate_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<navigate_interfaces::action::CarNavigate_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "navigate_interfaces/action/detail/car_navigate__traits.hpp"

namespace navigate_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const CarNavigate_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CarNavigate_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CarNavigate_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace navigate_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use navigate_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const navigate_interfaces::action::CarNavigate_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  navigate_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use navigate_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const navigate_interfaces::action::CarNavigate_GetResult_Response & msg)
{
  return navigate_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<navigate_interfaces::action::CarNavigate_GetResult_Response>()
{
  return "navigate_interfaces::action::CarNavigate_GetResult_Response";
}

template<>
inline const char * name<navigate_interfaces::action::CarNavigate_GetResult_Response>()
{
  return "navigate_interfaces/action/CarNavigate_GetResult_Response";
}

template<>
struct has_fixed_size<navigate_interfaces::action::CarNavigate_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<navigate_interfaces::action::CarNavigate_Result>::value> {};

template<>
struct has_bounded_size<navigate_interfaces::action::CarNavigate_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<navigate_interfaces::action::CarNavigate_Result>::value> {};

template<>
struct is_message<navigate_interfaces::action::CarNavigate_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<navigate_interfaces::action::CarNavigate_GetResult>()
{
  return "navigate_interfaces::action::CarNavigate_GetResult";
}

template<>
inline const char * name<navigate_interfaces::action::CarNavigate_GetResult>()
{
  return "navigate_interfaces/action/CarNavigate_GetResult";
}

template<>
struct has_fixed_size<navigate_interfaces::action::CarNavigate_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<navigate_interfaces::action::CarNavigate_GetResult_Request>::value &&
    has_fixed_size<navigate_interfaces::action::CarNavigate_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<navigate_interfaces::action::CarNavigate_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<navigate_interfaces::action::CarNavigate_GetResult_Request>::value &&
    has_bounded_size<navigate_interfaces::action::CarNavigate_GetResult_Response>::value
  >
{
};

template<>
struct is_service<navigate_interfaces::action::CarNavigate_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<navigate_interfaces::action::CarNavigate_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<navigate_interfaces::action::CarNavigate_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "navigate_interfaces/action/detail/car_navigate__traits.hpp"

namespace navigate_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const CarNavigate_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CarNavigate_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CarNavigate_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace navigate_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use navigate_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const navigate_interfaces::action::CarNavigate_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  navigate_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use navigate_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const navigate_interfaces::action::CarNavigate_FeedbackMessage & msg)
{
  return navigate_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<navigate_interfaces::action::CarNavigate_FeedbackMessage>()
{
  return "navigate_interfaces::action::CarNavigate_FeedbackMessage";
}

template<>
inline const char * name<navigate_interfaces::action::CarNavigate_FeedbackMessage>()
{
  return "navigate_interfaces/action/CarNavigate_FeedbackMessage";
}

template<>
struct has_fixed_size<navigate_interfaces::action::CarNavigate_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<navigate_interfaces::action::CarNavigate_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<navigate_interfaces::action::CarNavigate_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<navigate_interfaces::action::CarNavigate_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<navigate_interfaces::action::CarNavigate_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<navigate_interfaces::action::CarNavigate>
  : std::true_type
{
};

template<>
struct is_action_goal<navigate_interfaces::action::CarNavigate_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<navigate_interfaces::action::CarNavigate_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<navigate_interfaces::action::CarNavigate_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // NAVIGATE_INTERFACES__ACTION__DETAIL__CAR_NAVIGATE__TRAITS_HPP_
