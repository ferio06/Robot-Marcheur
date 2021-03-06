// Generated by gencpp from file udm_project_control/direct_kin_serviceResponse.msg
// DO NOT EDIT!


#ifndef UDM_PROJECT_CONTROL_MESSAGE_DIRECT_KIN_SERVICERESPONSE_H
#define UDM_PROJECT_CONTROL_MESSAGE_DIRECT_KIN_SERVICERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Bool.h>
#include <std_msgs/String.h>

namespace udm_project_control
{
template <class ContainerAllocator>
struct direct_kin_serviceResponse_
{
  typedef direct_kin_serviceResponse_<ContainerAllocator> Type;

  direct_kin_serviceResponse_()
    : res()
    , message()  {
    }
  direct_kin_serviceResponse_(const ContainerAllocator& _alloc)
    : res(_alloc)
    , message(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Bool_<ContainerAllocator>  _res_type;
  _res_type res;

   typedef  ::std_msgs::String_<ContainerAllocator>  _message_type;
  _message_type message;





  typedef boost::shared_ptr< ::udm_project_control::direct_kin_serviceResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::udm_project_control::direct_kin_serviceResponse_<ContainerAllocator> const> ConstPtr;

}; // struct direct_kin_serviceResponse_

typedef ::udm_project_control::direct_kin_serviceResponse_<std::allocator<void> > direct_kin_serviceResponse;

typedef boost::shared_ptr< ::udm_project_control::direct_kin_serviceResponse > direct_kin_serviceResponsePtr;
typedef boost::shared_ptr< ::udm_project_control::direct_kin_serviceResponse const> direct_kin_serviceResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::udm_project_control::direct_kin_serviceResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::udm_project_control::direct_kin_serviceResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::udm_project_control::direct_kin_serviceResponse_<ContainerAllocator1> & lhs, const ::udm_project_control::direct_kin_serviceResponse_<ContainerAllocator2> & rhs)
{
  return lhs.res == rhs.res &&
    lhs.message == rhs.message;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::udm_project_control::direct_kin_serviceResponse_<ContainerAllocator1> & lhs, const ::udm_project_control::direct_kin_serviceResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace udm_project_control

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::udm_project_control::direct_kin_serviceResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::udm_project_control::direct_kin_serviceResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::udm_project_control::direct_kin_serviceResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::udm_project_control::direct_kin_serviceResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::udm_project_control::direct_kin_serviceResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::udm_project_control::direct_kin_serviceResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::udm_project_control::direct_kin_serviceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "057c61f79df9f5c97bcb1eb29387225f";
  }

  static const char* value(const ::udm_project_control::direct_kin_serviceResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x057c61f79df9f5c9ULL;
  static const uint64_t static_value2 = 0x7bcb1eb29387225fULL;
};

template<class ContainerAllocator>
struct DataType< ::udm_project_control::direct_kin_serviceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "udm_project_control/direct_kin_serviceResponse";
  }

  static const char* value(const ::udm_project_control::direct_kin_serviceResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::udm_project_control::direct_kin_serviceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Bool res\n"
"std_msgs/String message\n"
"\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Bool\n"
"bool data\n"
"================================================================================\n"
"MSG: std_msgs/String\n"
"string data\n"
;
  }

  static const char* value(const ::udm_project_control::direct_kin_serviceResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::udm_project_control::direct_kin_serviceResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.res);
      stream.next(m.message);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct direct_kin_serviceResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::udm_project_control::direct_kin_serviceResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::udm_project_control::direct_kin_serviceResponse_<ContainerAllocator>& v)
  {
    s << indent << "res: ";
    s << std::endl;
    Printer< ::std_msgs::Bool_<ContainerAllocator> >::stream(s, indent + "  ", v.res);
    s << indent << "message: ";
    s << std::endl;
    Printer< ::std_msgs::String_<ContainerAllocator> >::stream(s, indent + "  ", v.message);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UDM_PROJECT_CONTROL_MESSAGE_DIRECT_KIN_SERVICERESPONSE_H
