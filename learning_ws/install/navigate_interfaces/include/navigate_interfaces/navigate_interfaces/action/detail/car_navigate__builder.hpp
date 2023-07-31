// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from navigate_interfaces:action/CarNavigate.idl
// generated code does not contain a copyright notice

#ifndef NAVIGATE_INTERFACES__ACTION__DETAIL__CAR_NAVIGATE__BUILDER_HPP_
#define NAVIGATE_INTERFACES__ACTION__DETAIL__CAR_NAVIGATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "navigate_interfaces/action/detail/car_navigate__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace navigate_interfaces
{

namespace action
{

namespace builder
{

class Init_CarNavigate_Goal_enable
{
public:
  Init_CarNavigate_Goal_enable()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::navigate_interfaces::action::CarNavigate_Goal enable(::navigate_interfaces::action::CarNavigate_Goal::_enable_type arg)
  {
    msg_.enable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::navigate_interfaces::action::CarNavigate_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::navigate_interfaces::action::CarNavigate_Goal>()
{
  return navigate_interfaces::action::builder::Init_CarNavigate_Goal_enable();
}

}  // namespace navigate_interfaces


namespace navigate_interfaces
{

namespace action
{

namespace builder
{

class Init_CarNavigate_Result_finish
{
public:
  Init_CarNavigate_Result_finish()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::navigate_interfaces::action::CarNavigate_Result finish(::navigate_interfaces::action::CarNavigate_Result::_finish_type arg)
  {
    msg_.finish = std::move(arg);
    return std::move(msg_);
  }

private:
  ::navigate_interfaces::action::CarNavigate_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::navigate_interfaces::action::CarNavigate_Result>()
{
  return navigate_interfaces::action::builder::Init_CarNavigate_Result_finish();
}

}  // namespace navigate_interfaces


namespace navigate_interfaces
{

namespace action
{

namespace builder
{

class Init_CarNavigate_Feedback_y
{
public:
  explicit Init_CarNavigate_Feedback_y(::navigate_interfaces::action::CarNavigate_Feedback & msg)
  : msg_(msg)
  {}
  ::navigate_interfaces::action::CarNavigate_Feedback y(::navigate_interfaces::action::CarNavigate_Feedback::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::navigate_interfaces::action::CarNavigate_Feedback msg_;
};

class Init_CarNavigate_Feedback_x
{
public:
  Init_CarNavigate_Feedback_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CarNavigate_Feedback_y x(::navigate_interfaces::action::CarNavigate_Feedback::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_CarNavigate_Feedback_y(msg_);
  }

private:
  ::navigate_interfaces::action::CarNavigate_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::navigate_interfaces::action::CarNavigate_Feedback>()
{
  return navigate_interfaces::action::builder::Init_CarNavigate_Feedback_x();
}

}  // namespace navigate_interfaces


namespace navigate_interfaces
{

namespace action
{

namespace builder
{

class Init_CarNavigate_SendGoal_Request_goal
{
public:
  explicit Init_CarNavigate_SendGoal_Request_goal(::navigate_interfaces::action::CarNavigate_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::navigate_interfaces::action::CarNavigate_SendGoal_Request goal(::navigate_interfaces::action::CarNavigate_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::navigate_interfaces::action::CarNavigate_SendGoal_Request msg_;
};

class Init_CarNavigate_SendGoal_Request_goal_id
{
public:
  Init_CarNavigate_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CarNavigate_SendGoal_Request_goal goal_id(::navigate_interfaces::action::CarNavigate_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_CarNavigate_SendGoal_Request_goal(msg_);
  }

private:
  ::navigate_interfaces::action::CarNavigate_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::navigate_interfaces::action::CarNavigate_SendGoal_Request>()
{
  return navigate_interfaces::action::builder::Init_CarNavigate_SendGoal_Request_goal_id();
}

}  // namespace navigate_interfaces


namespace navigate_interfaces
{

namespace action
{

namespace builder
{

class Init_CarNavigate_SendGoal_Response_stamp
{
public:
  explicit Init_CarNavigate_SendGoal_Response_stamp(::navigate_interfaces::action::CarNavigate_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::navigate_interfaces::action::CarNavigate_SendGoal_Response stamp(::navigate_interfaces::action::CarNavigate_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::navigate_interfaces::action::CarNavigate_SendGoal_Response msg_;
};

class Init_CarNavigate_SendGoal_Response_accepted
{
public:
  Init_CarNavigate_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CarNavigate_SendGoal_Response_stamp accepted(::navigate_interfaces::action::CarNavigate_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_CarNavigate_SendGoal_Response_stamp(msg_);
  }

private:
  ::navigate_interfaces::action::CarNavigate_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::navigate_interfaces::action::CarNavigate_SendGoal_Response>()
{
  return navigate_interfaces::action::builder::Init_CarNavigate_SendGoal_Response_accepted();
}

}  // namespace navigate_interfaces


namespace navigate_interfaces
{

namespace action
{

namespace builder
{

class Init_CarNavigate_GetResult_Request_goal_id
{
public:
  Init_CarNavigate_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::navigate_interfaces::action::CarNavigate_GetResult_Request goal_id(::navigate_interfaces::action::CarNavigate_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::navigate_interfaces::action::CarNavigate_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::navigate_interfaces::action::CarNavigate_GetResult_Request>()
{
  return navigate_interfaces::action::builder::Init_CarNavigate_GetResult_Request_goal_id();
}

}  // namespace navigate_interfaces


namespace navigate_interfaces
{

namespace action
{

namespace builder
{

class Init_CarNavigate_GetResult_Response_result
{
public:
  explicit Init_CarNavigate_GetResult_Response_result(::navigate_interfaces::action::CarNavigate_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::navigate_interfaces::action::CarNavigate_GetResult_Response result(::navigate_interfaces::action::CarNavigate_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::navigate_interfaces::action::CarNavigate_GetResult_Response msg_;
};

class Init_CarNavigate_GetResult_Response_status
{
public:
  Init_CarNavigate_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CarNavigate_GetResult_Response_result status(::navigate_interfaces::action::CarNavigate_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_CarNavigate_GetResult_Response_result(msg_);
  }

private:
  ::navigate_interfaces::action::CarNavigate_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::navigate_interfaces::action::CarNavigate_GetResult_Response>()
{
  return navigate_interfaces::action::builder::Init_CarNavigate_GetResult_Response_status();
}

}  // namespace navigate_interfaces


namespace navigate_interfaces
{

namespace action
{

namespace builder
{

class Init_CarNavigate_FeedbackMessage_feedback
{
public:
  explicit Init_CarNavigate_FeedbackMessage_feedback(::navigate_interfaces::action::CarNavigate_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::navigate_interfaces::action::CarNavigate_FeedbackMessage feedback(::navigate_interfaces::action::CarNavigate_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::navigate_interfaces::action::CarNavigate_FeedbackMessage msg_;
};

class Init_CarNavigate_FeedbackMessage_goal_id
{
public:
  Init_CarNavigate_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CarNavigate_FeedbackMessage_feedback goal_id(::navigate_interfaces::action::CarNavigate_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_CarNavigate_FeedbackMessage_feedback(msg_);
  }

private:
  ::navigate_interfaces::action::CarNavigate_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::navigate_interfaces::action::CarNavigate_FeedbackMessage>()
{
  return navigate_interfaces::action::builder::Init_CarNavigate_FeedbackMessage_goal_id();
}

}  // namespace navigate_interfaces

#endif  // NAVIGATE_INTERFACES__ACTION__DETAIL__CAR_NAVIGATE__BUILDER_HPP_
