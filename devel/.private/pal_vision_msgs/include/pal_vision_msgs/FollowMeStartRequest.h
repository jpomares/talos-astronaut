// Generated by gencpp from file pal_vision_msgs/FollowMeStartRequest.msg
// DO NOT EDIT!


#ifndef PAL_VISION_MSGS_MESSAGE_FOLLOWMESTARTREQUEST_H
#define PAL_VISION_MSGS_MESSAGE_FOLLOWMESTARTREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace pal_vision_msgs
{
template <class ContainerAllocator>
struct FollowMeStartRequest_
{
  typedef FollowMeStartRequest_<ContainerAllocator> Type;

  FollowMeStartRequest_()
    : maxSecondsTargetLost(0.0)  {
    }
  FollowMeStartRequest_(const ContainerAllocator& _alloc)
    : maxSecondsTargetLost(0.0)  {
  (void)_alloc;
    }



   typedef float _maxSecondsTargetLost_type;
  _maxSecondsTargetLost_type maxSecondsTargetLost;





  typedef boost::shared_ptr< ::pal_vision_msgs::FollowMeStartRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_vision_msgs::FollowMeStartRequest_<ContainerAllocator> const> ConstPtr;

}; // struct FollowMeStartRequest_

typedef ::pal_vision_msgs::FollowMeStartRequest_<std::allocator<void> > FollowMeStartRequest;

typedef boost::shared_ptr< ::pal_vision_msgs::FollowMeStartRequest > FollowMeStartRequestPtr;
typedef boost::shared_ptr< ::pal_vision_msgs::FollowMeStartRequest const> FollowMeStartRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_vision_msgs::FollowMeStartRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_vision_msgs::FollowMeStartRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pal_vision_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'pal_vision_msgs': ['/home/adrii/talos_public_ws/src/pal_msgs/pal_vision_msgs/msg', '/home/adrii/talos_public_ws/devel/.private/pal_vision_msgs/share/pal_vision_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pal_vision_msgs::FollowMeStartRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_vision_msgs::FollowMeStartRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_vision_msgs::FollowMeStartRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_vision_msgs::FollowMeStartRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_vision_msgs::FollowMeStartRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_vision_msgs::FollowMeStartRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_vision_msgs::FollowMeStartRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "87d3dd79b1c6acbd29fa88c4d5b58715";
  }

  static const char* value(const ::pal_vision_msgs::FollowMeStartRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x87d3dd79b1c6acbdULL;
  static const uint64_t static_value2 = 0x29fa88c4d5b58715ULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_vision_msgs::FollowMeStartRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_vision_msgs/FollowMeStartRequest";
  }

  static const char* value(const ::pal_vision_msgs::FollowMeStartRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_vision_msgs::FollowMeStartRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
\n\
float32 maxSecondsTargetLost\n\
\n\
";
  }

  static const char* value(const ::pal_vision_msgs::FollowMeStartRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_vision_msgs::FollowMeStartRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.maxSecondsTargetLost);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FollowMeStartRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_vision_msgs::FollowMeStartRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_vision_msgs::FollowMeStartRequest_<ContainerAllocator>& v)
  {
    s << indent << "maxSecondsTargetLost: ";
    Printer<float>::stream(s, indent + "  ", v.maxSecondsTargetLost);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_VISION_MSGS_MESSAGE_FOLLOWMESTARTREQUEST_H
