// Generated by gencpp from file pal_control_msgs/ActuatorCurrentLimit.msg
// DO NOT EDIT!


#ifndef PAL_CONTROL_MSGS_MESSAGE_ACTUATORCURRENTLIMIT_H
#define PAL_CONTROL_MSGS_MESSAGE_ACTUATORCURRENTLIMIT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace pal_control_msgs
{
template <class ContainerAllocator>
struct ActuatorCurrentLimit_
{
  typedef ActuatorCurrentLimit_<ContainerAllocator> Type;

  ActuatorCurrentLimit_()
    : actuator_names()
    , current_limits()  {
    }
  ActuatorCurrentLimit_(const ContainerAllocator& _alloc)
    : actuator_names(_alloc)
    , current_limits(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _actuator_names_type;
  _actuator_names_type actuator_names;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _current_limits_type;
  _current_limits_type current_limits;





  typedef boost::shared_ptr< ::pal_control_msgs::ActuatorCurrentLimit_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_control_msgs::ActuatorCurrentLimit_<ContainerAllocator> const> ConstPtr;

}; // struct ActuatorCurrentLimit_

typedef ::pal_control_msgs::ActuatorCurrentLimit_<std::allocator<void> > ActuatorCurrentLimit;

typedef boost::shared_ptr< ::pal_control_msgs::ActuatorCurrentLimit > ActuatorCurrentLimitPtr;
typedef boost::shared_ptr< ::pal_control_msgs::ActuatorCurrentLimit const> ActuatorCurrentLimitConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_control_msgs::ActuatorCurrentLimit_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_control_msgs::ActuatorCurrentLimit_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pal_control_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'pal_control_msgs': ['/home/adrii/talos_public_ws/src/pal_msgs/pal_control_msgs/msg', '/home/adrii/talos_public_ws/devel/.private/pal_control_msgs/share/pal_control_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pal_control_msgs::ActuatorCurrentLimit_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_control_msgs::ActuatorCurrentLimit_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_control_msgs::ActuatorCurrentLimit_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_control_msgs::ActuatorCurrentLimit_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_control_msgs::ActuatorCurrentLimit_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_control_msgs::ActuatorCurrentLimit_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_control_msgs::ActuatorCurrentLimit_<ContainerAllocator> >
{
  static const char* value()
  {
    return "974a1b5c83bb8df5691c27dbd5b363bc";
  }

  static const char* value(const ::pal_control_msgs::ActuatorCurrentLimit_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x974a1b5c83bb8df5ULL;
  static const uint64_t static_value2 = 0x691c27dbd5b363bcULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_control_msgs::ActuatorCurrentLimit_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_control_msgs/ActuatorCurrentLimit";
  }

  static const char* value(const ::pal_control_msgs::ActuatorCurrentLimit_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_control_msgs::ActuatorCurrentLimit_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Names of the actuators whose current limit is being set\n\
string[] actuator_names\n\
\n\
# Actuator current limits. Values belong to the [0, 1] interval, are\n\
# non-dimensional and represent the fraction of an actuator's maximum allowed\n\
# current, e.g., 0.5 would set an actuator's current limit to half its\n\
# maximum value.\n\
float64[] current_limits\n\
\n\
";
  }

  static const char* value(const ::pal_control_msgs::ActuatorCurrentLimit_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_control_msgs::ActuatorCurrentLimit_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.actuator_names);
      stream.next(m.current_limits);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ActuatorCurrentLimit_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_control_msgs::ActuatorCurrentLimit_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_control_msgs::ActuatorCurrentLimit_<ContainerAllocator>& v)
  {
    s << indent << "actuator_names[]" << std::endl;
    for (size_t i = 0; i < v.actuator_names.size(); ++i)
    {
      s << indent << "  actuator_names[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.actuator_names[i]);
    }
    s << indent << "current_limits[]" << std::endl;
    for (size_t i = 0; i < v.current_limits.size(); ++i)
    {
      s << indent << "  current_limits[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.current_limits[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_CONTROL_MSGS_MESSAGE_ACTUATORCURRENTLIMIT_H
