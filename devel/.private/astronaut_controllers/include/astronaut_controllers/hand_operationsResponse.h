// Generated by gencpp from file astronaut_controllers/hand_operationsResponse.msg
// DO NOT EDIT!


#ifndef ASTRONAUT_CONTROLLERS_MESSAGE_HAND_OPERATIONSRESPONSE_H
#define ASTRONAUT_CONTROLLERS_MESSAGE_HAND_OPERATIONSRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace astronaut_controllers
{
template <class ContainerAllocator>
struct hand_operationsResponse_
{
  typedef hand_operationsResponse_<ContainerAllocator> Type;

  hand_operationsResponse_()
    : succes(false)  {
    }
  hand_operationsResponse_(const ContainerAllocator& _alloc)
    : succes(false)  {
  (void)_alloc;
    }



   typedef uint8_t _succes_type;
  _succes_type succes;





  typedef boost::shared_ptr< ::astronaut_controllers::hand_operationsResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::astronaut_controllers::hand_operationsResponse_<ContainerAllocator> const> ConstPtr;

}; // struct hand_operationsResponse_

typedef ::astronaut_controllers::hand_operationsResponse_<std::allocator<void> > hand_operationsResponse;

typedef boost::shared_ptr< ::astronaut_controllers::hand_operationsResponse > hand_operationsResponsePtr;
typedef boost::shared_ptr< ::astronaut_controllers::hand_operationsResponse const> hand_operationsResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::astronaut_controllers::hand_operationsResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::astronaut_controllers::hand_operationsResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace astronaut_controllers

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'trajectory_msgs': ['/opt/ros/kinetic/share/trajectory_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'astronaut_controllers': ['/home/adrii/talos_public_ws/src/talos_astronaut/astronaut_controllers/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::astronaut_controllers::hand_operationsResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::astronaut_controllers::hand_operationsResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::astronaut_controllers::hand_operationsResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::astronaut_controllers::hand_operationsResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::astronaut_controllers::hand_operationsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::astronaut_controllers::hand_operationsResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::astronaut_controllers::hand_operationsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "509793171e494962cd366ecf60e100e4";
  }

  static const char* value(const ::astronaut_controllers::hand_operationsResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x509793171e494962ULL;
  static const uint64_t static_value2 = 0xcd366ecf60e100e4ULL;
};

template<class ContainerAllocator>
struct DataType< ::astronaut_controllers::hand_operationsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "astronaut_controllers/hand_operationsResponse";
  }

  static const char* value(const ::astronaut_controllers::hand_operationsResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::astronaut_controllers::hand_operationsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
bool succes\n\
";
  }

  static const char* value(const ::astronaut_controllers::hand_operationsResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::astronaut_controllers::hand_operationsResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.succes);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct hand_operationsResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::astronaut_controllers::hand_operationsResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::astronaut_controllers::hand_operationsResponse_<ContainerAllocator>& v)
  {
    s << indent << "succes: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.succes);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ASTRONAUT_CONTROLLERS_MESSAGE_HAND_OPERATIONSRESPONSE_H
