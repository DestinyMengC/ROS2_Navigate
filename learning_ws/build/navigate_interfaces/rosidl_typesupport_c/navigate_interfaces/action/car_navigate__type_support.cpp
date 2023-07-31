// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from navigate_interfaces:action/CarNavigate.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "navigate_interfaces/action/detail/car_navigate__struct.h"
#include "navigate_interfaces/action/detail/car_navigate__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace navigate_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _CarNavigate_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CarNavigate_Goal_type_support_ids_t;

static const _CarNavigate_Goal_type_support_ids_t _CarNavigate_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _CarNavigate_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CarNavigate_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CarNavigate_Goal_type_support_symbol_names_t _CarNavigate_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, navigate_interfaces, action, CarNavigate_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navigate_interfaces, action, CarNavigate_Goal)),
  }
};

typedef struct _CarNavigate_Goal_type_support_data_t
{
  void * data[2];
} _CarNavigate_Goal_type_support_data_t;

static _CarNavigate_Goal_type_support_data_t _CarNavigate_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CarNavigate_Goal_message_typesupport_map = {
  2,
  "navigate_interfaces",
  &_CarNavigate_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_CarNavigate_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_CarNavigate_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CarNavigate_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CarNavigate_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace navigate_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, navigate_interfaces, action, CarNavigate_Goal)() {
  return &::navigate_interfaces::action::rosidl_typesupport_c::CarNavigate_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "navigate_interfaces/action/detail/car_navigate__struct.h"
// already included above
// #include "navigate_interfaces/action/detail/car_navigate__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace navigate_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _CarNavigate_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CarNavigate_Result_type_support_ids_t;

static const _CarNavigate_Result_type_support_ids_t _CarNavigate_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _CarNavigate_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CarNavigate_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CarNavigate_Result_type_support_symbol_names_t _CarNavigate_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, navigate_interfaces, action, CarNavigate_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navigate_interfaces, action, CarNavigate_Result)),
  }
};

typedef struct _CarNavigate_Result_type_support_data_t
{
  void * data[2];
} _CarNavigate_Result_type_support_data_t;

static _CarNavigate_Result_type_support_data_t _CarNavigate_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CarNavigate_Result_message_typesupport_map = {
  2,
  "navigate_interfaces",
  &_CarNavigate_Result_message_typesupport_ids.typesupport_identifier[0],
  &_CarNavigate_Result_message_typesupport_symbol_names.symbol_name[0],
  &_CarNavigate_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CarNavigate_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CarNavigate_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace navigate_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, navigate_interfaces, action, CarNavigate_Result)() {
  return &::navigate_interfaces::action::rosidl_typesupport_c::CarNavigate_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "navigate_interfaces/action/detail/car_navigate__struct.h"
// already included above
// #include "navigate_interfaces/action/detail/car_navigate__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace navigate_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _CarNavigate_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CarNavigate_Feedback_type_support_ids_t;

static const _CarNavigate_Feedback_type_support_ids_t _CarNavigate_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _CarNavigate_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CarNavigate_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CarNavigate_Feedback_type_support_symbol_names_t _CarNavigate_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, navigate_interfaces, action, CarNavigate_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navigate_interfaces, action, CarNavigate_Feedback)),
  }
};

typedef struct _CarNavigate_Feedback_type_support_data_t
{
  void * data[2];
} _CarNavigate_Feedback_type_support_data_t;

static _CarNavigate_Feedback_type_support_data_t _CarNavigate_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CarNavigate_Feedback_message_typesupport_map = {
  2,
  "navigate_interfaces",
  &_CarNavigate_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_CarNavigate_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_CarNavigate_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CarNavigate_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CarNavigate_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace navigate_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, navigate_interfaces, action, CarNavigate_Feedback)() {
  return &::navigate_interfaces::action::rosidl_typesupport_c::CarNavigate_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "navigate_interfaces/action/detail/car_navigate__struct.h"
// already included above
// #include "navigate_interfaces/action/detail/car_navigate__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace navigate_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _CarNavigate_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CarNavigate_SendGoal_Request_type_support_ids_t;

static const _CarNavigate_SendGoal_Request_type_support_ids_t _CarNavigate_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _CarNavigate_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CarNavigate_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CarNavigate_SendGoal_Request_type_support_symbol_names_t _CarNavigate_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, navigate_interfaces, action, CarNavigate_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navigate_interfaces, action, CarNavigate_SendGoal_Request)),
  }
};

typedef struct _CarNavigate_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _CarNavigate_SendGoal_Request_type_support_data_t;

static _CarNavigate_SendGoal_Request_type_support_data_t _CarNavigate_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CarNavigate_SendGoal_Request_message_typesupport_map = {
  2,
  "navigate_interfaces",
  &_CarNavigate_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_CarNavigate_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_CarNavigate_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CarNavigate_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CarNavigate_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace navigate_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, navigate_interfaces, action, CarNavigate_SendGoal_Request)() {
  return &::navigate_interfaces::action::rosidl_typesupport_c::CarNavigate_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "navigate_interfaces/action/detail/car_navigate__struct.h"
// already included above
// #include "navigate_interfaces/action/detail/car_navigate__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace navigate_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _CarNavigate_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CarNavigate_SendGoal_Response_type_support_ids_t;

static const _CarNavigate_SendGoal_Response_type_support_ids_t _CarNavigate_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _CarNavigate_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CarNavigate_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CarNavigate_SendGoal_Response_type_support_symbol_names_t _CarNavigate_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, navigate_interfaces, action, CarNavigate_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navigate_interfaces, action, CarNavigate_SendGoal_Response)),
  }
};

typedef struct _CarNavigate_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _CarNavigate_SendGoal_Response_type_support_data_t;

static _CarNavigate_SendGoal_Response_type_support_data_t _CarNavigate_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CarNavigate_SendGoal_Response_message_typesupport_map = {
  2,
  "navigate_interfaces",
  &_CarNavigate_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_CarNavigate_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_CarNavigate_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CarNavigate_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CarNavigate_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace navigate_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, navigate_interfaces, action, CarNavigate_SendGoal_Response)() {
  return &::navigate_interfaces::action::rosidl_typesupport_c::CarNavigate_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "navigate_interfaces/action/detail/car_navigate__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace navigate_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _CarNavigate_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CarNavigate_SendGoal_type_support_ids_t;

static const _CarNavigate_SendGoal_type_support_ids_t _CarNavigate_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _CarNavigate_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CarNavigate_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CarNavigate_SendGoal_type_support_symbol_names_t _CarNavigate_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, navigate_interfaces, action, CarNavigate_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navigate_interfaces, action, CarNavigate_SendGoal)),
  }
};

typedef struct _CarNavigate_SendGoal_type_support_data_t
{
  void * data[2];
} _CarNavigate_SendGoal_type_support_data_t;

static _CarNavigate_SendGoal_type_support_data_t _CarNavigate_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CarNavigate_SendGoal_service_typesupport_map = {
  2,
  "navigate_interfaces",
  &_CarNavigate_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_CarNavigate_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_CarNavigate_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t CarNavigate_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CarNavigate_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace navigate_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, navigate_interfaces, action, CarNavigate_SendGoal)() {
  return &::navigate_interfaces::action::rosidl_typesupport_c::CarNavigate_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "navigate_interfaces/action/detail/car_navigate__struct.h"
// already included above
// #include "navigate_interfaces/action/detail/car_navigate__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace navigate_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _CarNavigate_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CarNavigate_GetResult_Request_type_support_ids_t;

static const _CarNavigate_GetResult_Request_type_support_ids_t _CarNavigate_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _CarNavigate_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CarNavigate_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CarNavigate_GetResult_Request_type_support_symbol_names_t _CarNavigate_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, navigate_interfaces, action, CarNavigate_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navigate_interfaces, action, CarNavigate_GetResult_Request)),
  }
};

typedef struct _CarNavigate_GetResult_Request_type_support_data_t
{
  void * data[2];
} _CarNavigate_GetResult_Request_type_support_data_t;

static _CarNavigate_GetResult_Request_type_support_data_t _CarNavigate_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CarNavigate_GetResult_Request_message_typesupport_map = {
  2,
  "navigate_interfaces",
  &_CarNavigate_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_CarNavigate_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_CarNavigate_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CarNavigate_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CarNavigate_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace navigate_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, navigate_interfaces, action, CarNavigate_GetResult_Request)() {
  return &::navigate_interfaces::action::rosidl_typesupport_c::CarNavigate_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "navigate_interfaces/action/detail/car_navigate__struct.h"
// already included above
// #include "navigate_interfaces/action/detail/car_navigate__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace navigate_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _CarNavigate_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CarNavigate_GetResult_Response_type_support_ids_t;

static const _CarNavigate_GetResult_Response_type_support_ids_t _CarNavigate_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _CarNavigate_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CarNavigate_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CarNavigate_GetResult_Response_type_support_symbol_names_t _CarNavigate_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, navigate_interfaces, action, CarNavigate_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navigate_interfaces, action, CarNavigate_GetResult_Response)),
  }
};

typedef struct _CarNavigate_GetResult_Response_type_support_data_t
{
  void * data[2];
} _CarNavigate_GetResult_Response_type_support_data_t;

static _CarNavigate_GetResult_Response_type_support_data_t _CarNavigate_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CarNavigate_GetResult_Response_message_typesupport_map = {
  2,
  "navigate_interfaces",
  &_CarNavigate_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_CarNavigate_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_CarNavigate_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CarNavigate_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CarNavigate_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace navigate_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, navigate_interfaces, action, CarNavigate_GetResult_Response)() {
  return &::navigate_interfaces::action::rosidl_typesupport_c::CarNavigate_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "navigate_interfaces/action/detail/car_navigate__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace navigate_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _CarNavigate_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CarNavigate_GetResult_type_support_ids_t;

static const _CarNavigate_GetResult_type_support_ids_t _CarNavigate_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _CarNavigate_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CarNavigate_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CarNavigate_GetResult_type_support_symbol_names_t _CarNavigate_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, navigate_interfaces, action, CarNavigate_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navigate_interfaces, action, CarNavigate_GetResult)),
  }
};

typedef struct _CarNavigate_GetResult_type_support_data_t
{
  void * data[2];
} _CarNavigate_GetResult_type_support_data_t;

static _CarNavigate_GetResult_type_support_data_t _CarNavigate_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CarNavigate_GetResult_service_typesupport_map = {
  2,
  "navigate_interfaces",
  &_CarNavigate_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_CarNavigate_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_CarNavigate_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t CarNavigate_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CarNavigate_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace navigate_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, navigate_interfaces, action, CarNavigate_GetResult)() {
  return &::navigate_interfaces::action::rosidl_typesupport_c::CarNavigate_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "navigate_interfaces/action/detail/car_navigate__struct.h"
// already included above
// #include "navigate_interfaces/action/detail/car_navigate__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace navigate_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _CarNavigate_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CarNavigate_FeedbackMessage_type_support_ids_t;

static const _CarNavigate_FeedbackMessage_type_support_ids_t _CarNavigate_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _CarNavigate_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CarNavigate_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CarNavigate_FeedbackMessage_type_support_symbol_names_t _CarNavigate_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, navigate_interfaces, action, CarNavigate_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navigate_interfaces, action, CarNavigate_FeedbackMessage)),
  }
};

typedef struct _CarNavigate_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _CarNavigate_FeedbackMessage_type_support_data_t;

static _CarNavigate_FeedbackMessage_type_support_data_t _CarNavigate_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CarNavigate_FeedbackMessage_message_typesupport_map = {
  2,
  "navigate_interfaces",
  &_CarNavigate_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_CarNavigate_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_CarNavigate_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CarNavigate_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CarNavigate_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace navigate_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, navigate_interfaces, action, CarNavigate_FeedbackMessage)() {
  return &::navigate_interfaces::action::rosidl_typesupport_c::CarNavigate_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "navigate_interfaces/action/car_navigate.h"
// already included above
// #include "navigate_interfaces/action/detail/car_navigate__type_support.h"

static rosidl_action_type_support_t _navigate_interfaces__action__CarNavigate__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, navigate_interfaces, action, CarNavigate)()
{
  // Thread-safe by always writing the same values to the static struct
  _navigate_interfaces__action__CarNavigate__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, navigate_interfaces, action, CarNavigate_SendGoal)();
  _navigate_interfaces__action__CarNavigate__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, navigate_interfaces, action, CarNavigate_GetResult)();
  _navigate_interfaces__action__CarNavigate__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _navigate_interfaces__action__CarNavigate__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, navigate_interfaces, action, CarNavigate_FeedbackMessage)();
  _navigate_interfaces__action__CarNavigate__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_navigate_interfaces__action__CarNavigate__typesupport_c;
}

#ifdef __cplusplus
}
#endif
