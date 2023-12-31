// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from navigate_interfaces:srv/GivePosition.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "navigate_interfaces/srv/detail/give_position__rosidl_typesupport_introspection_c.h"
#include "navigate_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "navigate_interfaces/srv/detail/give_position__functions.h"
#include "navigate_interfaces/srv/detail/give_position__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void navigate_interfaces__srv__GivePosition_Request__rosidl_typesupport_introspection_c__GivePosition_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  navigate_interfaces__srv__GivePosition_Request__init(message_memory);
}

void navigate_interfaces__srv__GivePosition_Request__rosidl_typesupport_introspection_c__GivePosition_Request_fini_function(void * message_memory)
{
  navigate_interfaces__srv__GivePosition_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember navigate_interfaces__srv__GivePosition_Request__rosidl_typesupport_introspection_c__GivePosition_Request_message_member_array[2] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(navigate_interfaces__srv__GivePosition_Request, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(navigate_interfaces__srv__GivePosition_Request, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers navigate_interfaces__srv__GivePosition_Request__rosidl_typesupport_introspection_c__GivePosition_Request_message_members = {
  "navigate_interfaces__srv",  // message namespace
  "GivePosition_Request",  // message name
  2,  // number of fields
  sizeof(navigate_interfaces__srv__GivePosition_Request),
  navigate_interfaces__srv__GivePosition_Request__rosidl_typesupport_introspection_c__GivePosition_Request_message_member_array,  // message members
  navigate_interfaces__srv__GivePosition_Request__rosidl_typesupport_introspection_c__GivePosition_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  navigate_interfaces__srv__GivePosition_Request__rosidl_typesupport_introspection_c__GivePosition_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t navigate_interfaces__srv__GivePosition_Request__rosidl_typesupport_introspection_c__GivePosition_Request_message_type_support_handle = {
  0,
  &navigate_interfaces__srv__GivePosition_Request__rosidl_typesupport_introspection_c__GivePosition_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_navigate_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navigate_interfaces, srv, GivePosition_Request)() {
  if (!navigate_interfaces__srv__GivePosition_Request__rosidl_typesupport_introspection_c__GivePosition_Request_message_type_support_handle.typesupport_identifier) {
    navigate_interfaces__srv__GivePosition_Request__rosidl_typesupport_introspection_c__GivePosition_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &navigate_interfaces__srv__GivePosition_Request__rosidl_typesupport_introspection_c__GivePosition_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "navigate_interfaces/srv/detail/give_position__rosidl_typesupport_introspection_c.h"
// already included above
// #include "navigate_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "navigate_interfaces/srv/detail/give_position__functions.h"
// already included above
// #include "navigate_interfaces/srv/detail/give_position__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void navigate_interfaces__srv__GivePosition_Response__rosidl_typesupport_introspection_c__GivePosition_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  navigate_interfaces__srv__GivePosition_Response__init(message_memory);
}

void navigate_interfaces__srv__GivePosition_Response__rosidl_typesupport_introspection_c__GivePosition_Response_fini_function(void * message_memory)
{
  navigate_interfaces__srv__GivePosition_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember navigate_interfaces__srv__GivePosition_Response__rosidl_typesupport_introspection_c__GivePosition_Response_message_member_array[1] = {
  {
    "finish",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(navigate_interfaces__srv__GivePosition_Response, finish),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers navigate_interfaces__srv__GivePosition_Response__rosidl_typesupport_introspection_c__GivePosition_Response_message_members = {
  "navigate_interfaces__srv",  // message namespace
  "GivePosition_Response",  // message name
  1,  // number of fields
  sizeof(navigate_interfaces__srv__GivePosition_Response),
  navigate_interfaces__srv__GivePosition_Response__rosidl_typesupport_introspection_c__GivePosition_Response_message_member_array,  // message members
  navigate_interfaces__srv__GivePosition_Response__rosidl_typesupport_introspection_c__GivePosition_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  navigate_interfaces__srv__GivePosition_Response__rosidl_typesupport_introspection_c__GivePosition_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t navigate_interfaces__srv__GivePosition_Response__rosidl_typesupport_introspection_c__GivePosition_Response_message_type_support_handle = {
  0,
  &navigate_interfaces__srv__GivePosition_Response__rosidl_typesupport_introspection_c__GivePosition_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_navigate_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navigate_interfaces, srv, GivePosition_Response)() {
  if (!navigate_interfaces__srv__GivePosition_Response__rosidl_typesupport_introspection_c__GivePosition_Response_message_type_support_handle.typesupport_identifier) {
    navigate_interfaces__srv__GivePosition_Response__rosidl_typesupport_introspection_c__GivePosition_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &navigate_interfaces__srv__GivePosition_Response__rosidl_typesupport_introspection_c__GivePosition_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "navigate_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "navigate_interfaces/srv/detail/give_position__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers navigate_interfaces__srv__detail__give_position__rosidl_typesupport_introspection_c__GivePosition_service_members = {
  "navigate_interfaces__srv",  // service namespace
  "GivePosition",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // navigate_interfaces__srv__detail__give_position__rosidl_typesupport_introspection_c__GivePosition_Request_message_type_support_handle,
  NULL  // response message
  // navigate_interfaces__srv__detail__give_position__rosidl_typesupport_introspection_c__GivePosition_Response_message_type_support_handle
};

static rosidl_service_type_support_t navigate_interfaces__srv__detail__give_position__rosidl_typesupport_introspection_c__GivePosition_service_type_support_handle = {
  0,
  &navigate_interfaces__srv__detail__give_position__rosidl_typesupport_introspection_c__GivePosition_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navigate_interfaces, srv, GivePosition_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navigate_interfaces, srv, GivePosition_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_navigate_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navigate_interfaces, srv, GivePosition)() {
  if (!navigate_interfaces__srv__detail__give_position__rosidl_typesupport_introspection_c__GivePosition_service_type_support_handle.typesupport_identifier) {
    navigate_interfaces__srv__detail__give_position__rosidl_typesupport_introspection_c__GivePosition_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)navigate_interfaces__srv__detail__give_position__rosidl_typesupport_introspection_c__GivePosition_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navigate_interfaces, srv, GivePosition_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navigate_interfaces, srv, GivePosition_Response)()->data;
  }

  return &navigate_interfaces__srv__detail__give_position__rosidl_typesupport_introspection_c__GivePosition_service_type_support_handle;
}
