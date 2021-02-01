// Generated by gencpp from file pal_control_msgs/MotionManagerGoal.msg
// DO NOT EDIT!


#ifndef PAL_CONTROL_MSGS_MESSAGE_MOTIONMANAGERGOAL_H
#define PAL_CONTROL_MSGS_MESSAGE_MOTIONMANAGERGOAL_H


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
struct MotionManagerGoal_
{
  typedef MotionManagerGoal_<ContainerAllocator> Type;

  MotionManagerGoal_()
    : filename()
    , plan(false)
    , checkSafety(false)
    , repeat(false)
    , priority(0)
    , queueTimeout(0)  {
    }
  MotionManagerGoal_(const ContainerAllocator& _alloc)
    : filename(_alloc)
    , plan(false)
    , checkSafety(false)
    , repeat(false)
    , priority(0)
    , queueTimeout(0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _filename_type;
  _filename_type filename;

   typedef uint8_t _plan_type;
  _plan_type plan;

   typedef uint8_t _checkSafety_type;
  _checkSafety_type checkSafety;

   typedef uint8_t _repeat_type;
  _repeat_type repeat;

   typedef uint8_t _priority_type;
  _priority_type priority;

   typedef int32_t _queueTimeout_type;
  _queueTimeout_type queueTimeout;





  typedef boost::shared_ptr< ::pal_control_msgs::MotionManagerGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_control_msgs::MotionManagerGoal_<ContainerAllocator> const> ConstPtr;

}; // struct MotionManagerGoal_

typedef ::pal_control_msgs::MotionManagerGoal_<std::allocator<void> > MotionManagerGoal;

typedef boost::shared_ptr< ::pal_control_msgs::MotionManagerGoal > MotionManagerGoalPtr;
typedef boost::shared_ptr< ::pal_control_msgs::MotionManagerGoal const> MotionManagerGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_control_msgs::MotionManagerGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_control_msgs::MotionManagerGoal_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::pal_control_msgs::MotionManagerGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_control_msgs::MotionManagerGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_control_msgs::MotionManagerGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_control_msgs::MotionManagerGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_control_msgs::MotionManagerGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_control_msgs::MotionManagerGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_control_msgs::MotionManagerGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6cfa0989c229a7ae793c273afdc78ead";
  }

  static const char* value(const ::pal_control_msgs::MotionManagerGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6cfa0989c229a7aeULL;
  static const uint64_t static_value2 = 0x793c273afdc78eadULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_control_msgs::MotionManagerGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_control_msgs/MotionManagerGoal";
  }

  static const char* value(const ::pal_control_msgs::MotionManagerGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_control_msgs::MotionManagerGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# Path to XML file containing motions for the robot\n\
string filename\n\
\n\
# True if a collision-free approach motion and trajectory validation are to be performed.\n\
# If set to true but an approach motion is not required, it will not be computed.\n\
bool plan\n\
\n\
#True if safety around the robot must be checked using sensors such as the sonars and lasers\n\
bool checkSafety\n\
\n\
#True if the motion must be repeated until a new goal has been received\n\
bool repeat\n\
\n\
#priority of the motion, 0 is no priority, 100 is max priority\n\
uint8 priority\n\
\n\
#Specifies how long in miliseconds should the goal wait before forcing an execution. If a movement is being executed when the goal is received, it will wait the specified time or until the movement finishes to execute it.\n\
# -1 Means wait forever until the previous movement has finished\n\
int32 queueTimeout \n\
\n\
";
  }

  static const char* value(const ::pal_control_msgs::MotionManagerGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_control_msgs::MotionManagerGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.filename);
      stream.next(m.plan);
      stream.next(m.checkSafety);
      stream.next(m.repeat);
      stream.next(m.priority);
      stream.next(m.queueTimeout);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MotionManagerGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_control_msgs::MotionManagerGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_control_msgs::MotionManagerGoal_<ContainerAllocator>& v)
  {
    s << indent << "filename: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.filename);
    s << indent << "plan: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.plan);
    s << indent << "checkSafety: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.checkSafety);
    s << indent << "repeat: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.repeat);
    s << indent << "priority: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.priority);
    s << indent << "queueTimeout: ";
    Printer<int32_t>::stream(s, indent + "  ", v.queueTimeout);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_CONTROL_MSGS_MESSAGE_MOTIONMANAGERGOAL_H
