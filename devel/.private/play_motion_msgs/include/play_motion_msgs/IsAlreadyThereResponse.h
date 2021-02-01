// Generated by gencpp from file play_motion_msgs/IsAlreadyThereResponse.msg
// DO NOT EDIT!


#ifndef PLAY_MOTION_MSGS_MESSAGE_ISALREADYTHERERESPONSE_H
#define PLAY_MOTION_MSGS_MESSAGE_ISALREADYTHERERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace play_motion_msgs
{
template <class ContainerAllocator>
struct IsAlreadyThereResponse_
{
  typedef IsAlreadyThereResponse_<ContainerAllocator> Type;

  IsAlreadyThereResponse_()
    : already_there(false)  {
    }
  IsAlreadyThereResponse_(const ContainerAllocator& _alloc)
    : already_there(false)  {
  (void)_alloc;
    }



   typedef uint8_t _already_there_type;
  _already_there_type already_there;





  typedef boost::shared_ptr< ::play_motion_msgs::IsAlreadyThereResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::play_motion_msgs::IsAlreadyThereResponse_<ContainerAllocator> const> ConstPtr;

}; // struct IsAlreadyThereResponse_

typedef ::play_motion_msgs::IsAlreadyThereResponse_<std::allocator<void> > IsAlreadyThereResponse;

typedef boost::shared_ptr< ::play_motion_msgs::IsAlreadyThereResponse > IsAlreadyThereResponsePtr;
typedef boost::shared_ptr< ::play_motion_msgs::IsAlreadyThereResponse const> IsAlreadyThereResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::play_motion_msgs::IsAlreadyThereResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::play_motion_msgs::IsAlreadyThereResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace play_motion_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'play_motion_msgs': ['/home/adrii/talos_public_ws/src/play_motion/play_motion_msgs/msg', '/home/adrii/talos_public_ws/devel/.private/play_motion_msgs/share/play_motion_msgs/msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::play_motion_msgs::IsAlreadyThereResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::play_motion_msgs::IsAlreadyThereResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::play_motion_msgs::IsAlreadyThereResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::play_motion_msgs::IsAlreadyThereResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::play_motion_msgs::IsAlreadyThereResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::play_motion_msgs::IsAlreadyThereResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::play_motion_msgs::IsAlreadyThereResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ab529bf62f4cfd6bb0a78ed51c04fcba";
  }

  static const char* value(const ::play_motion_msgs::IsAlreadyThereResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xab529bf62f4cfd6bULL;
  static const uint64_t static_value2 = 0xb0a78ed51c04fcbaULL;
};

template<class ContainerAllocator>
struct DataType< ::play_motion_msgs::IsAlreadyThereResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "play_motion_msgs/IsAlreadyThereResponse";
  }

  static const char* value(const ::play_motion_msgs::IsAlreadyThereResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::play_motion_msgs::IsAlreadyThereResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool already_there\n\
\n\
";
  }

  static const char* value(const ::play_motion_msgs::IsAlreadyThereResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::play_motion_msgs::IsAlreadyThereResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.already_there);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct IsAlreadyThereResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::play_motion_msgs::IsAlreadyThereResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::play_motion_msgs::IsAlreadyThereResponse_<ContainerAllocator>& v)
  {
    s << indent << "already_there: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.already_there);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PLAY_MOTION_MSGS_MESSAGE_ISALREADYTHERERESPONSE_H
