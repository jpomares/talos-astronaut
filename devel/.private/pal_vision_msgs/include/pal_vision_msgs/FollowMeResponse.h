// Generated by gencpp from file pal_vision_msgs/FollowMeResponse.msg
// DO NOT EDIT!


#ifndef PAL_VISION_MSGS_MESSAGE_FOLLOWMERESPONSE_H
#define PAL_VISION_MSGS_MESSAGE_FOLLOWMERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace pal_vision_msgs
{
template <class ContainerAllocator>
struct FollowMeResponse_
{
  typedef FollowMeResponse_<ContainerAllocator> Type;

  FollowMeResponse_()
    : header()
    , targetDetected(false)  {
    }
  FollowMeResponse_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , targetDetected(false)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _targetDetected_type;
  _targetDetected_type targetDetected;





  typedef boost::shared_ptr< ::pal_vision_msgs::FollowMeResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_vision_msgs::FollowMeResponse_<ContainerAllocator> const> ConstPtr;

}; // struct FollowMeResponse_

typedef ::pal_vision_msgs::FollowMeResponse_<std::allocator<void> > FollowMeResponse;

typedef boost::shared_ptr< ::pal_vision_msgs::FollowMeResponse > FollowMeResponsePtr;
typedef boost::shared_ptr< ::pal_vision_msgs::FollowMeResponse const> FollowMeResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_vision_msgs::FollowMeResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_vision_msgs::FollowMeResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pal_vision_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'pal_vision_msgs': ['/home/adrii/talos_public_ws/src/pal_msgs/pal_vision_msgs/msg', '/home/adrii/talos_public_ws/devel/.private/pal_vision_msgs/share/pal_vision_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pal_vision_msgs::FollowMeResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_vision_msgs::FollowMeResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_vision_msgs::FollowMeResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_vision_msgs::FollowMeResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_vision_msgs::FollowMeResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_vision_msgs::FollowMeResponse_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_vision_msgs::FollowMeResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "36315720880eb3a5b4a4ddf6ffd48eec";
  }

  static const char* value(const ::pal_vision_msgs::FollowMeResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x36315720880eb3a5ULL;
  static const uint64_t static_value2 = 0xb4a4ddf6ffd48eecULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_vision_msgs::FollowMeResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_vision_msgs/FollowMeResponse";
  }

  static const char* value(const ::pal_vision_msgs::FollowMeResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_vision_msgs::FollowMeResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "## Contains the response of followMeServer when it is searching for the target person\n\
\n\
Header header\n\
\n\
bool targetDetected\n\
\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::pal_vision_msgs::FollowMeResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_vision_msgs::FollowMeResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.targetDetected);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FollowMeResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_vision_msgs::FollowMeResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_vision_msgs::FollowMeResponse_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "targetDetected: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.targetDetected);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_VISION_MSGS_MESSAGE_FOLLOWMERESPONSE_H
