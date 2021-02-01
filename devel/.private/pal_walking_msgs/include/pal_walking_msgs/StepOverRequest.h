// Generated by gencpp from file pal_walking_msgs/StepOverRequest.msg
// DO NOT EDIT!


#ifndef PAL_WALKING_MSGS_MESSAGE_STEPOVERREQUEST_H
#define PAL_WALKING_MSGS_MESSAGE_STEPOVERREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace pal_walking_msgs
{
template <class ContainerAllocator>
struct StepOverRequest_
{
  typedef StepOverRequest_<ContainerAllocator> Type;

  StepOverRequest_()
    : step_length(0.0)
    , step_time(0.0)
    , step_height(0.0)
    , z_lipm(0.0)  {
    }
  StepOverRequest_(const ContainerAllocator& _alloc)
    : step_length(0.0)
    , step_time(0.0)
    , step_height(0.0)
    , z_lipm(0.0)  {
  (void)_alloc;
    }



   typedef double _step_length_type;
  _step_length_type step_length;

   typedef double _step_time_type;
  _step_time_type step_time;

   typedef double _step_height_type;
  _step_height_type step_height;

   typedef double _z_lipm_type;
  _z_lipm_type z_lipm;





  typedef boost::shared_ptr< ::pal_walking_msgs::StepOverRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_walking_msgs::StepOverRequest_<ContainerAllocator> const> ConstPtr;

}; // struct StepOverRequest_

typedef ::pal_walking_msgs::StepOverRequest_<std::allocator<void> > StepOverRequest;

typedef boost::shared_ptr< ::pal_walking_msgs::StepOverRequest > StepOverRequestPtr;
typedef boost::shared_ptr< ::pal_walking_msgs::StepOverRequest const> StepOverRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_walking_msgs::StepOverRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_walking_msgs::StepOverRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pal_walking_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'pal_walking_msgs': ['/home/adrii/talos_public_ws/src/pal_msgs/pal_walking_msgs/msg'], 'humanoid_nav_msgs': ['/opt/ros/kinetic/share/humanoid_nav_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pal_walking_msgs::StepOverRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_walking_msgs::StepOverRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_walking_msgs::StepOverRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_walking_msgs::StepOverRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_walking_msgs::StepOverRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_walking_msgs::StepOverRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_walking_msgs::StepOverRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "55de90020d2cc2af87188eee86853f04";
  }

  static const char* value(const ::pal_walking_msgs::StepOverRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x55de90020d2cc2afULL;
  static const uint64_t static_value2 = 0x87188eee86853f04ULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_walking_msgs::StepOverRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_walking_msgs/StepOverRequest";
  }

  static const char* value(const ::pal_walking_msgs::StepOverRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_walking_msgs::StepOverRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
\n\
float64   step_length\n\
float64   step_time\n\
float64   step_height\n\
float64   z_lipm\n\
\n\
";
  }

  static const char* value(const ::pal_walking_msgs::StepOverRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_walking_msgs::StepOverRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.step_length);
      stream.next(m.step_time);
      stream.next(m.step_height);
      stream.next(m.z_lipm);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct StepOverRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_walking_msgs::StepOverRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_walking_msgs::StepOverRequest_<ContainerAllocator>& v)
  {
    s << indent << "step_length: ";
    Printer<double>::stream(s, indent + "  ", v.step_length);
    s << indent << "step_time: ";
    Printer<double>::stream(s, indent + "  ", v.step_time);
    s << indent << "step_height: ";
    Printer<double>::stream(s, indent + "  ", v.step_height);
    s << indent << "z_lipm: ";
    Printer<double>::stream(s, indent + "  ", v.z_lipm);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_WALKING_MSGS_MESSAGE_STEPOVERREQUEST_H
