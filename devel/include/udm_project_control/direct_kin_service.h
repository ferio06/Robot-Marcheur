// Generated by gencpp from file udm_project_control/direct_kin_service.msg
// DO NOT EDIT!


#ifndef UDM_PROJECT_CONTROL_MESSAGE_DIRECT_KIN_SERVICE_H
#define UDM_PROJECT_CONTROL_MESSAGE_DIRECT_KIN_SERVICE_H

#include <ros/service_traits.h>


#include <udm_project_control/direct_kin_serviceRequest.h>
#include <udm_project_control/direct_kin_serviceResponse.h>


namespace udm_project_control
{

struct direct_kin_service
{

typedef direct_kin_serviceRequest Request;
typedef direct_kin_serviceResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct direct_kin_service
} // namespace udm_project_control


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::udm_project_control::direct_kin_service > {
  static const char* value()
  {
    return "1acd9209c4cce540936eabd556b67827";
  }

  static const char* value(const ::udm_project_control::direct_kin_service&) { return value(); }
};

template<>
struct DataType< ::udm_project_control::direct_kin_service > {
  static const char* value()
  {
    return "udm_project_control/direct_kin_service";
  }

  static const char* value(const ::udm_project_control::direct_kin_service&) { return value(); }
};


// service_traits::MD5Sum< ::udm_project_control::direct_kin_serviceRequest> should match
// service_traits::MD5Sum< ::udm_project_control::direct_kin_service >
template<>
struct MD5Sum< ::udm_project_control::direct_kin_serviceRequest>
{
  static const char* value()
  {
    return MD5Sum< ::udm_project_control::direct_kin_service >::value();
  }
  static const char* value(const ::udm_project_control::direct_kin_serviceRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::udm_project_control::direct_kin_serviceRequest> should match
// service_traits::DataType< ::udm_project_control::direct_kin_service >
template<>
struct DataType< ::udm_project_control::direct_kin_serviceRequest>
{
  static const char* value()
  {
    return DataType< ::udm_project_control::direct_kin_service >::value();
  }
  static const char* value(const ::udm_project_control::direct_kin_serviceRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::udm_project_control::direct_kin_serviceResponse> should match
// service_traits::MD5Sum< ::udm_project_control::direct_kin_service >
template<>
struct MD5Sum< ::udm_project_control::direct_kin_serviceResponse>
{
  static const char* value()
  {
    return MD5Sum< ::udm_project_control::direct_kin_service >::value();
  }
  static const char* value(const ::udm_project_control::direct_kin_serviceResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::udm_project_control::direct_kin_serviceResponse> should match
// service_traits::DataType< ::udm_project_control::direct_kin_service >
template<>
struct DataType< ::udm_project_control::direct_kin_serviceResponse>
{
  static const char* value()
  {
    return DataType< ::udm_project_control::direct_kin_service >::value();
  }
  static const char* value(const ::udm_project_control::direct_kin_serviceResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // UDM_PROJECT_CONTROL_MESSAGE_DIRECT_KIN_SERVICE_H
