// Generated by gencpp from file udm_project_control/indirect_kin_serviceRequest.msg
// DO NOT EDIT!


#ifndef UDM_PROJECT_CONTROL_MESSAGE_INDIRECT_KIN_SERVICEREQUEST_H
#define UDM_PROJECT_CONTROL_MESSAGE_INDIRECT_KIN_SERVICEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose.h>

namespace udm_project_control
{
template <class ContainerAllocator>
struct indirect_kin_serviceRequest_
{
  typedef indirect_kin_serviceRequest_<ContainerAllocator> Type;

  indirect_kin_serviceRequest_()
    : pose()  {
    }
  indirect_kin_serviceRequest_(const ContainerAllocator& _alloc)
    : pose(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _pose_type;
  _pose_type pose;





  typedef boost::shared_ptr< ::udm_project_control::indirect_kin_serviceRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::udm_project_control::indirect_kin_serviceRequest_<ContainerAllocator> const> ConstPtr;

}; // struct indirect_kin_serviceRequest_

typedef ::udm_project_control::indirect_kin_serviceRequest_<std::allocator<void> > indirect_kin_serviceRequest;

typedef boost::shared_ptr< ::udm_project_control::indirect_kin_serviceRequest > indirect_kin_serviceRequestPtr;
typedef boost::shared_ptr< ::udm_project_control::indirect_kin_serviceRequest const> indirect_kin_serviceRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::udm_project_control::indirect_kin_serviceRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::udm_project_control::indirect_kin_serviceRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::udm_project_control::indirect_kin_serviceRequest_<ContainerAllocator1> & lhs, const ::udm_project_control::indirect_kin_serviceRequest_<ContainerAllocator2> & rhs)
{
  return lhs.pose == rhs.pose;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::udm_project_control::indirect_kin_serviceRequest_<ContainerAllocator1> & lhs, const ::udm_project_control::indirect_kin_serviceRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace udm_project_control

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::udm_project_control::indirect_kin_serviceRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::udm_project_control::indirect_kin_serviceRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::udm_project_control::indirect_kin_serviceRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::udm_project_control::indirect_kin_serviceRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::udm_project_control::indirect_kin_serviceRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::udm_project_control::indirect_kin_serviceRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::udm_project_control::indirect_kin_serviceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f192399f711a48924df9a394d37edd67";
  }

  static const char* value(const ::udm_project_control::indirect_kin_serviceRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf192399f711a4892ULL;
  static const uint64_t static_value2 = 0x4df9a394d37edd67ULL;
};

template<class ContainerAllocator>
struct DataType< ::udm_project_control::indirect_kin_serviceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "udm_project_control/indirect_kin_serviceRequest";
  }

  static const char* value(const ::udm_project_control::indirect_kin_serviceRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::udm_project_control::indirect_kin_serviceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/Pose pose\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::udm_project_control::indirect_kin_serviceRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::udm_project_control::indirect_kin_serviceRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.pose);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct indirect_kin_serviceRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::udm_project_control::indirect_kin_serviceRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::udm_project_control::indirect_kin_serviceRequest_<ContainerAllocator>& v)
  {
    s << indent << "pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.pose);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UDM_PROJECT_CONTROL_MESSAGE_INDIRECT_KIN_SERVICEREQUEST_H
