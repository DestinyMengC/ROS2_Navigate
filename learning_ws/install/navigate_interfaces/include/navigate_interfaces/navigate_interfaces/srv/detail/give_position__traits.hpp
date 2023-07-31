// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from navigate_interfaces:srv/GivePosition.idl
// generated code does not contain a copyright notice

#ifndef NAVIGATE_INTERFACES__SRV__DETAIL__GIVE_POSITION__TRAITS_HPP_
#define NAVIGATE_INTERFACES__SRV__DETAIL__GIVE_POSITION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "navigate_interfaces/srv/detail/give_position__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace navigate_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GivePosition_Request & msg,
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
  const GivePosition_Request & msg,
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

inline std::string to_yaml(const GivePosition_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace navigate_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use navigate_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const navigate_interfaces::srv::GivePosition_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  navigate_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use navigate_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const navigate_interfaces::srv::GivePosition_Request & msg)
{
  return navigate_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<navigate_interfaces::srv::GivePosition_Request>()
{
  return "navigate_interfaces::srv::GivePosition_Request";
}

template<>
inline const char * name<navigate_interfaces::srv::GivePosition_Request>()
{
  return "navigate_interfaces/srv/GivePosition_Request";
}

template<>
struct has_fixed_size<navigate_interfaces::srv::GivePosition_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<navigate_interfaces::srv::GivePosition_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<navigate_interfaces::srv::GivePosition_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace navigate_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GivePosition_Response & msg,
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
  const GivePosition_Response & msg,
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

inline std::string to_yaml(const GivePosition_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace navigate_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use navigate_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const navigate_interfaces::srv::GivePosition_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  navigate_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use navigate_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const navigate_interfaces::srv::GivePosition_Response & msg)
{
  return navigate_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<navigate_interfaces::srv::GivePosition_Response>()
{
  return "navigate_interfaces::srv::GivePosition_Response";
}

template<>
inline const char * name<navigate_interfaces::srv::GivePosition_Response>()
{
  return "navigate_interfaces/srv/GivePosition_Response";
}

template<>
struct has_fixed_size<navigate_interfaces::srv::GivePosition_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<navigate_interfaces::srv::GivePosition_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<navigate_interfaces::srv::GivePosition_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<navigate_interfaces::srv::GivePosition>()
{
  return "navigate_interfaces::srv::GivePosition";
}

template<>
inline const char * name<navigate_interfaces::srv::GivePosition>()
{
  return "navigate_interfaces/srv/GivePosition";
}

template<>
struct has_fixed_size<navigate_interfaces::srv::GivePosition>
  : std::integral_constant<
    bool,
    has_fixed_size<navigate_interfaces::srv::GivePosition_Request>::value &&
    has_fixed_size<navigate_interfaces::srv::GivePosition_Response>::value
  >
{
};

template<>
struct has_bounded_size<navigate_interfaces::srv::GivePosition>
  : std::integral_constant<
    bool,
    has_bounded_size<navigate_interfaces::srv::GivePosition_Request>::value &&
    has_bounded_size<navigate_interfaces::srv::GivePosition_Response>::value
  >
{
};

template<>
struct is_service<navigate_interfaces::srv::GivePosition>
  : std::true_type
{
};

template<>
struct is_service_request<navigate_interfaces::srv::GivePosition_Request>
  : std::true_type
{
};

template<>
struct is_service_response<navigate_interfaces::srv::GivePosition_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // NAVIGATE_INTERFACES__SRV__DETAIL__GIVE_POSITION__TRAITS_HPP_
