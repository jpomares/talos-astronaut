// Generated by gencpp from file pal_navigation_msgs/SafetyZoneRequest.msg
// DO NOT EDIT!


#ifndef PAL_NAVIGATION_MSGS_MESSAGE_SAFETYZONEREQUEST_H
#define PAL_NAVIGATION_MSGS_MESSAGE_SAFETYZONEREQUEST_H


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
struct SafetyZoneRequest_
{
  typedef SafetyZoneRequest_<ContainerAllocator> Type;

  SafetyZoneRequest_()
    : distance(0.0)
    , leftAngleRad(0.0)
    , rightAngleRad(0.0)
    , sensorMask(0)  {
    }
  SafetyZoneRequest_(const ContainerAllocator& _alloc)
    : distance(0.0)
    , leftAngleRad(0.0)
    , rightAngleRad(0.0)
    , sensorMask(0)  {
  (void)_alloc;
    }



   typedef double _distance_type;
  _distance_type distance;

   typedef double _leftAngleRad_type;
  _leftAngleRad_type leftAngleRad;

   typedef double _rightAngleRad_type;
  _rightAngleRad_type rightAngleRad;

   typedef uint32_t _sensorMask_type;
  _sensorMask_type sensorMask;



  enum {
    NO_SENSORS = 0,
    ALL_SENSORS = 127,
    FRONT_SONARS = 1,
    LEFT_SONARS = 2,
    RIGHT_SONARS = 4,
    BACK_SONARS = 8,
    TORSO_SONARS = 16,
    ONLY_SONARS = 31,
    BASE_LASER = 32,
    TORSO_LASER = 64,
    ONLY_LASERS = 96,
  };


  typedef boost::shared_ptr< ::pal_navigation_msgs::SafetyZoneRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_navigation_msgs::SafetyZoneRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SafetyZoneRequest_

typedef ::pal_navigation_msgs::SafetyZoneRequest_<std::allocator<void> > SafetyZoneRequest;

typedef boost::shared_ptr< ::pal_navigation_msgs::SafetyZoneRequest > SafetyZoneRequestPtr;
typedef boost::shared_ptr< ::pal_navigation_msgs::SafetyZoneRequest const> SafetyZoneRequestConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_navigation_msgs::SafetyZoneRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_navigation_msgs::SafetyZoneRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::pal_navigation_msgs::SafetyZoneRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_navigation_msgs::SafetyZoneRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_navigation_msgs::SafetyZoneRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_navigation_msgs::SafetyZoneRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_navigation_msgs::SafetyZoneRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_navigation_msgs::SafetyZoneRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_navigation_msgs::SafetyZoneRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "269cbb74525b0bd07e71e2ec943affd4";
  }

  static const char* value(const ::pal_navigation_msgs::SafetyZoneRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x269cbb74525b0bd0ULL;
  static const uint64_t static_value2 = 0x7e71e2ec943affd4ULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_navigation_msgs::SafetyZoneRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_navigation_msgs/SafetyZoneRequest";
  }

  static const char* value(const ::pal_navigation_msgs::SafetyZoneRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_navigation_msgs::SafetyZoneRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
byte NO_SENSORS = 0\n\
byte ALL_SENSORS = 127\n\
\n\
byte FRONT_SONARS = 1\n\
byte LEFT_SONARS = 2\n\
byte RIGHT_SONARS = 4\n\
byte BACK_SONARS = 8\n\
byte TORSO_SONARS = 16\n\
byte ONLY_SONARS = 31\n\
\n\
byte BASE_LASER = 32\n\
byte TORSO_LASER = 64\n\
byte ONLY_LASERS = 96\n\
\n\
\n\
\n\
\n\
float64 distance\n\
\n\
\n\
float64 leftAngleRad\n\
float64 rightAngleRad\n\
\n\
uint32 sensorMask\n\
\n\
";
  }

  static const char* value(const ::pal_navigation_msgs::SafetyZoneRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_navigation_msgs::SafetyZoneRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.distance);
      stream.next(m.leftAngleRad);
      stream.next(m.rightAngleRad);
      stream.next(m.sensorMask);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SafetyZoneRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_navigation_msgs::SafetyZoneRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_navigation_msgs::SafetyZoneRequest_<ContainerAllocator>& v)
  {
    s << indent << "distance: ";
    Printer<double>::stream(s, indent + "  ", v.distance);
    s << indent << "leftAngleRad: ";
    Printer<double>::stream(s, indent + "  ", v.leftAngleRad);
    s << indent << "rightAngleRad: ";
    Printer<double>::stream(s, indent + "  ", v.rightAngleRad);
    s << indent << "sensorMask: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.sensorMask);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_NAVIGATION_MSGS_MESSAGE_SAFETYZONEREQUEST_H
