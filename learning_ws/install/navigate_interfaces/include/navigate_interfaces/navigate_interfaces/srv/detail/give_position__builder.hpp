// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from navigate_interfaces:srv/GivePosition.idl
// generated code does not contain a copyright notice

#ifndef NAVIGATE_INTERFACES__SRV__DETAIL__GIVE_POSITION__BUILDER_HPP_
#define NAVIGATE_INTERFACES__SRV__DETAIL__GIVE_POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "navigate_interfaces/srv/detail/give_position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace navigate_interfaces
{

namespace srv
{

namespace builder
{

class Init_GivePosition_Request_y
{
public:
  explicit Init_GivePosition_Request_y(::navigate_interfaces::srv::GivePosition_Request & msg)
  : msg_(msg)
  {}
  ::navigate_interfaces::srv::GivePosition_Request y(::navigate_interfaces::srv::GivePosition_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::navigate_interfaces::srv::GivePosition_Request msg_;
};

class Init_GivePosition_Request_x
{
public:
  Init_GivePosition_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GivePosition_Request_y x(::navigate_interfaces::srv::GivePosition_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_GivePosition_Request_y(msg_);
  }

private:
  ::navigate_interfaces::srv::GivePosition_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::navigate_interfaces::srv::GivePosition_Request>()
{
  return navigate_interfaces::srv::builder::Init_GivePosition_Request_x();
}

}  // namespace navigate_interfaces


namespace navigate_interfaces
{

namespace srv
{

namespace builder
{

class Init_GivePosition_Response_finish
{
public:
  Init_GivePosition_Response_finish()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::navigate_interfaces::srv::GivePosition_Response finish(::navigate_interfaces::srv::GivePosition_Response::_finish_type arg)
  {
    msg_.finish = std::move(arg);
    return std::move(msg_);
  }

private:
  ::navigate_interfaces::srv::GivePosition_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::navigate_interfaces::srv::GivePosition_Response>()
{
  return navigate_interfaces::srv::builder::Init_GivePosition_Response_finish();
}

}  // namespace navigate_interfaces

#endif  // NAVIGATE_INTERFACES__SRV__DETAIL__GIVE_POSITION__BUILDER_HPP_
