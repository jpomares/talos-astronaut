// Generated by gencpp from file pal_device_msgs/LedBlinkParams.msg
// DO NOT EDIT!


#ifndef PAL_DEVICE_MSGS_MESSAGE_LEDBLINKPARAMS_H
#define PAL_DEVICE_MSGS_MESSAGE_LEDBLINKPARAMS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/ColorRGBA.h>
#include <std_msgs/ColorRGBA.h>

namespace pal_device_msgs
{
template <class ContainerAllocator>
struct LedBlinkParams_
{
  typedef LedBlinkParams_<ContainerAllocator> Type;

  LedBlinkParams_()
    : first_color()
    , second_color()
    , first_color_duration()
    , second_color_duration()  {
    }
  LedBlinkParams_(const ContainerAllocator& _alloc)
    : first_color(_alloc)
    , second_color(_alloc)
    , first_color_duration()
    , second_color_duration()  {
  (void)_alloc;
    }



   typedef  ::std_msgs::ColorRGBA_<ContainerAllocator>  _first_color_type;
  _first_color_type first_color;

   typedef  ::std_msgs::ColorRGBA_<ContainerAllocator>  _second_color_type;
  _second_color_type second_color;

   typedef ros::Duration _first_color_duration_type;
  _first_color_duration_type first_color_duration;

   typedef ros::Duration _second_color_duration_type;
  _second_color_duration_type second_color_duration;





  typedef boost::shared_ptr< ::pal_device_msgs::LedBlinkParams_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_device_msgs::LedBlinkParams_<ContainerAllocator> const> ConstPtr;

}; // struct LedBlinkParams_

typedef ::pal_device_msgs::LedBlinkParams_<std::allocator<void> > LedBlinkParams;

typedef boost::shared_ptr< ::pal_device_msgs::LedBlinkParams > LedBlinkParamsPtr;
typedef boost::shared_ptr< ::pal_device_msgs::LedBlinkParams const> LedBlinkParamsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_device_msgs::LedBlinkParams_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_device_msgs::LedBlinkParams_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pal_device_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'pal_device_msgs': ['/home/adrii/talos_public_ws/src/pal_msgs/pal_device_msgs/msg', '/home/adrii/talos_public_ws/devel/.private/pal_device_msgs/share/pal_device_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pal_device_msgs::LedBlinkParams_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_device_msgs::LedBlinkParams_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_device_msgs::LedBlinkParams_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_device_msgs::LedBlinkParams_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_device_msgs::LedBlinkParams_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_device_msgs::LedBlinkParams_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_device_msgs::LedBlinkParams_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0b26c0fa483854105ff61f62de102ca5";
  }

  static const char* value(const ::pal_device_msgs::LedBlinkParams_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0b26c0fa48385410ULL;
  static const uint64_t static_value2 = 0x5ff61f62de102ca5ULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_device_msgs::LedBlinkParams_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_device_msgs/LedBlinkParams";
  }

  static const char* value(const ::pal_device_msgs::LedBlinkParams_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_device_msgs::LedBlinkParams_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# RGBA of color, alpha will be used as intensity if supported by the led\n\
std_msgs/ColorRGBA first_color\n\
std_msgs/ColorRGBA second_color\n\
\n\
duration first_color_duration\n\
duration second_color_duration\n\
\n\
\n\
================================================================================\n\
MSG: std_msgs/ColorRGBA\n\
float32 r\n\
float32 g\n\
float32 b\n\
float32 a\n\
";
  }

  static const char* value(const ::pal_device_msgs::LedBlinkParams_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_device_msgs::LedBlinkParams_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.first_color);
      stream.next(m.second_color);
      stream.next(m.first_color_duration);
      stream.next(m.second_color_duration);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LedBlinkParams_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_device_msgs::LedBlinkParams_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_device_msgs::LedBlinkParams_<ContainerAllocator>& v)
  {
    s << indent << "first_color: ";
    s << std::endl;
    Printer< ::std_msgs::ColorRGBA_<ContainerAllocator> >::stream(s, indent + "  ", v.first_color);
    s << indent << "second_color: ";
    s << std::endl;
    Printer< ::std_msgs::ColorRGBA_<ContainerAllocator> >::stream(s, indent + "  ", v.second_color);
    s << indent << "first_color_duration: ";
    Printer<ros::Duration>::stream(s, indent + "  ", v.first_color_duration);
    s << indent << "second_color_duration: ";
    Printer<ros::Duration>::stream(s, indent + "  ", v.second_color_duration);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_DEVICE_MSGS_MESSAGE_LEDBLINKPARAMS_H
