// Generated by gencpp from file pal_navigation_msgs/PolarReadingScan.msg
// DO NOT EDIT!


#ifndef PAL_NAVIGATION_MSGS_MESSAGE_POLARREADINGSCAN_H
#define PAL_NAVIGATION_MSGS_MESSAGE_POLARREADINGSCAN_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <pal_navigation_msgs/PolarReading.h>

namespace pal_navigation_msgs
{
template <class ContainerAllocator>
struct PolarReadingScan_
{
  typedef PolarReadingScan_<ContainerAllocator> Type;

  PolarReadingScan_()
    : header()
    , readings()  {
    }
  PolarReadingScan_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , readings(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::pal_navigation_msgs::PolarReading_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::pal_navigation_msgs::PolarReading_<ContainerAllocator> >::other >  _readings_type;
  _readings_type readings;





  typedef boost::shared_ptr< ::pal_navigation_msgs::PolarReadingScan_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_navigation_msgs::PolarReadingScan_<ContainerAllocator> const> ConstPtr;

}; // struct PolarReadingScan_

typedef ::pal_navigation_msgs::PolarReadingScan_<std::allocator<void> > PolarReadingScan;

typedef boost::shared_ptr< ::pal_navigation_msgs::PolarReadingScan > PolarReadingScanPtr;
typedef boost::shared_ptr< ::pal_navigation_msgs::PolarReadingScan const> PolarReadingScanConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_navigation_msgs::PolarReadingScan_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_navigation_msgs::PolarReadingScan_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pal_navigation_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'nav_msgs': ['/opt/ros/kinetic/share/nav_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'pal_navigation_msgs': ['/home/adrii/talos_public_ws/devel/.private/pal_navigation_msgs/share/pal_navigation_msgs/msg', '/home/adrii/talos_public_ws/src/pal_msgs/pal_navigation_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pal_navigation_msgs::PolarReadingScan_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_navigation_msgs::PolarReadingScan_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_navigation_msgs::PolarReadingScan_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_navigation_msgs::PolarReadingScan_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_navigation_msgs::PolarReadingScan_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_navigation_msgs::PolarReadingScan_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_navigation_msgs::PolarReadingScan_<ContainerAllocator> >
{
  static const char* value()
  {
    return "31bf8adf3389c9066eb83f63abcbe26f";
  }

  static const char* value(const ::pal_navigation_msgs::PolarReadingScan_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x31bf8adf3389c906ULL;
  static const uint64_t static_value2 = 0x6eb83f63abcbe26fULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_navigation_msgs::PolarReadingScan_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_navigation_msgs/PolarReadingScan";
  }

  static const char* value(const ::pal_navigation_msgs::PolarReadingScan_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_navigation_msgs::PolarReadingScan_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Time of sensor data acquisition, coordinate frame ID.\n\
Header header\n\
\n\
# Polar reading scan: vector of PolarReading(angle, distance)\n\
pal_navigation_msgs/PolarReading[] readings \n\
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
\n\
================================================================================\n\
MSG: pal_navigation_msgs/PolarReading\n\
# Polar reading: a distance to a given angle\n\
float32 angle # inradians\n\
\n\
float32 distance # in meters\n\
\n\
";
  }

  static const char* value(const ::pal_navigation_msgs::PolarReadingScan_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_navigation_msgs::PolarReadingScan_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.readings);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PolarReadingScan_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_navigation_msgs::PolarReadingScan_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_navigation_msgs::PolarReadingScan_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "readings[]" << std::endl;
    for (size_t i = 0; i < v.readings.size(); ++i)
    {
      s << indent << "  readings[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::pal_navigation_msgs::PolarReading_<ContainerAllocator> >::stream(s, indent + "    ", v.readings[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_NAVIGATION_MSGS_MESSAGE_POLARREADINGSCAN_H
