// Generated by gencpp from file pal_navigation_msgs/DisableEmergencyRequest.msg
// DO NOT EDIT!


#ifndef PAL_NAVIGATION_MSGS_MESSAGE_DISABLEEMERGENCYREQUEST_H
#define PAL_NAVIGATION_MSGS_MESSAGE_DISABLEEMERGENCYREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace pal_navigation_msgs
{
template <class ContainerAllocator>
struct DisableEmergencyRequest_
{
  typedef DisableEmergencyRequest_<ContainerAllocator> Type;

  DisableEmergencyRequest_()
    : second(0.0)
    , useLEDs(false)  {
    }
  DisableEmergencyRequest_(const ContainerAllocator& _alloc)
    : second(0.0)
    , useLEDs(false)  {
  (void)_alloc;
    }



   typedef double _second_type;
  _second_type second;

   typedef uint8_t _useLEDs_type;
  _useLEDs_type useLEDs;





  typedef boost::shared_ptr< ::pal_navigation_msgs::DisableEmergencyRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_navigation_msgs::DisableEmergencyRequest_<ContainerAllocator> const> ConstPtr;

}; // struct DisableEmergencyRequest_

typedef ::pal_navigation_msgs::DisableEmergencyRequest_<std::allocator<void> > DisableEmergencyRequest;

typedef boost::shared_ptr< ::pal_navigation_msgs::DisableEmergencyRequest > DisableEmergencyRequestPtr;
typedef boost::shared_ptr< ::pal_navigation_msgs::DisableEmergencyRequest const> DisableEmergencyRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_navigation_msgs::DisableEmergencyRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_navigation_msgs::DisableEmergencyRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pal_navigation_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/kinetic/share/nav_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'pal_navigation_msgs': ['/home/adrii/talos_public_ws/devel/.private/pal_navigation_msgs/share/pal_navigation_msgs/msg', '/home/adrii/talos_public_ws/src/pal_msgs/pal_navigation_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pal_navigation_msgs::DisableEmergencyRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_navigation_msgs::DisableEmergencyRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_navigation_msgs::DisableEmergencyRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_navigation_msgs::DisableEmergencyRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_navigation_msgs::DisableEmergencyRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_navigation_msgs::DisableEmergencyRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_navigation_msgs::DisableEmergencyRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fbef0837e8a0d26d59ce6c877c970c68";
  }

  static const char* value(const ::pal_navigation_msgs::DisableEmergencyRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfbef0837e8a0d26dULL;
  static const uint64_t static_value2 = 0x59ce6c877c970c68ULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_navigation_msgs::DisableEmergencyRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_navigation_msgs/DisableEmergencyRequest";
  }

  static const char* value(const ::pal_navigation_msgs::DisableEmergencyRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_navigation_msgs::DisableEmergencyRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
float64 second\n\
bool useLEDs\n\
";
  }

  static const char* value(const ::pal_navigation_msgs::DisableEmergencyRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_navigation_msgs::DisableEmergencyRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.second);
      stream.next(m.useLEDs);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DisableEmergencyRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_navigation_msgs::DisableEmergencyRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_navigation_msgs::DisableEmergencyRequest_<ContainerAllocator>& v)
  {
    s << indent << "second: ";
    Printer<double>::stream(s, indent + "  ", v.second);
    s << indent << "useLEDs: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.useLEDs);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_NAVIGATION_MSGS_MESSAGE_DISABLEEMERGENCYREQUEST_H
