// Generated by gencpp from file pal_vision_msgs/FaceRecognitionAction.msg
// DO NOT EDIT!


#ifndef PAL_VISION_MSGS_MESSAGE_FACERECOGNITIONACTION_H
#define PAL_VISION_MSGS_MESSAGE_FACERECOGNITIONACTION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <pal_vision_msgs/FaceRecognitionActionGoal.h>
#include <pal_vision_msgs/FaceRecognitionActionResult.h>
#include <pal_vision_msgs/FaceRecognitionActionFeedback.h>

namespace pal_vision_msgs
{
template <class ContainerAllocator>
struct FaceRecognitionAction_
{
  typedef FaceRecognitionAction_<ContainerAllocator> Type;

  FaceRecognitionAction_()
    : action_goal()
    , action_result()
    , action_feedback()  {
    }
  FaceRecognitionAction_(const ContainerAllocator& _alloc)
    : action_goal(_alloc)
    , action_result(_alloc)
    , action_feedback(_alloc)  {
  (void)_alloc;
    }



   typedef  ::pal_vision_msgs::FaceRecognitionActionGoal_<ContainerAllocator>  _action_goal_type;
  _action_goal_type action_goal;

   typedef  ::pal_vision_msgs::FaceRecognitionActionResult_<ContainerAllocator>  _action_result_type;
  _action_result_type action_result;

   typedef  ::pal_vision_msgs::FaceRecognitionActionFeedback_<ContainerAllocator>  _action_feedback_type;
  _action_feedback_type action_feedback;





  typedef boost::shared_ptr< ::pal_vision_msgs::FaceRecognitionAction_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_vision_msgs::FaceRecognitionAction_<ContainerAllocator> const> ConstPtr;

}; // struct FaceRecognitionAction_

typedef ::pal_vision_msgs::FaceRecognitionAction_<std::allocator<void> > FaceRecognitionAction;

typedef boost::shared_ptr< ::pal_vision_msgs::FaceRecognitionAction > FaceRecognitionActionPtr;
typedef boost::shared_ptr< ::pal_vision_msgs::FaceRecognitionAction const> FaceRecognitionActionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_vision_msgs::FaceRecognitionAction_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_vision_msgs::FaceRecognitionAction_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pal_vision_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'pal_vision_msgs': ['/home/adrii/talos_public_ws/src/pal_msgs/pal_vision_msgs/msg', '/home/adrii/talos_public_ws/devel/.private/pal_vision_msgs/share/pal_vision_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pal_vision_msgs::FaceRecognitionAction_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_vision_msgs::FaceRecognitionAction_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_vision_msgs::FaceRecognitionAction_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_vision_msgs::FaceRecognitionAction_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_vision_msgs::FaceRecognitionAction_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_vision_msgs::FaceRecognitionAction_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_vision_msgs::FaceRecognitionAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "102b0392d6292ae2bbbc788be5a2bd52";
  }

  static const char* value(const ::pal_vision_msgs::FaceRecognitionAction_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x102b0392d6292ae2ULL;
  static const uint64_t static_value2 = 0xbbbc788be5a2bd52ULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_vision_msgs::FaceRecognitionAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_vision_msgs/FaceRecognitionAction";
  }

  static const char* value(const ::pal_vision_msgs::FaceRecognitionAction_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_vision_msgs::FaceRecognitionAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
FaceRecognitionActionGoal action_goal\n\
FaceRecognitionActionResult action_result\n\
FaceRecognitionActionFeedback action_feedback\n\
\n\
================================================================================\n\
MSG: pal_vision_msgs/FaceRecognitionActionGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalID goal_id\n\
FaceRecognitionGoal goal\n\
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
MSG: actionlib_msgs/GoalID\n\
# The stamp should store the time at which this goal was requested.\n\
# It is used by an action server when it tries to preempt all\n\
# goals that were requested before a certain time\n\
time stamp\n\
\n\
# The id provides a way to associate feedback and\n\
# result message with specific goal requests. The id\n\
# specified must be unique.\n\
string id\n\
\n\
\n\
================================================================================\n\
MSG: pal_vision_msgs/FaceRecognitionGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#goal definition\n\
uint8   order_id \n\
string  order_argument\n\
\n\
================================================================================\n\
MSG: pal_vision_msgs/FaceRecognitionActionResult\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalStatus status\n\
FaceRecognitionResult result\n\
\n\
================================================================================\n\
MSG: actionlib_msgs/GoalStatus\n\
GoalID goal_id\n\
uint8 status\n\
uint8 PENDING         = 0   # The goal has yet to be processed by the action server\n\
uint8 ACTIVE          = 1   # The goal is currently being processed by the action server\n\
uint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing\n\
                            #   and has since completed its execution (Terminal State)\n\
uint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)\n\
uint8 ABORTED         = 4   # The goal was aborted during execution by the action server due\n\
                            #    to some failure (Terminal State)\n\
uint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,\n\
                            #    because the goal was unattainable or invalid (Terminal State)\n\
uint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing\n\
                            #    and has not yet completed execution\n\
uint8 RECALLING       = 7   # The goal received a cancel request before it started executing,\n\
                            #    but the action server has not yet confirmed that the goal is canceled\n\
uint8 RECALLED        = 8   # The goal received a cancel request before it started executing\n\
                            #    and was successfully cancelled (Terminal State)\n\
uint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be\n\
                            #    sent over the wire by an action server\n\
\n\
#Allow for the user to associate a string with GoalStatus for debugging\n\
string text\n\
\n\
\n\
================================================================================\n\
MSG: pal_vision_msgs/FaceRecognitionResult\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#result definition\n\
uint8   order_id\n\
string[]  names\n\
float32[] confidence\n\
\n\
================================================================================\n\
MSG: pal_vision_msgs/FaceRecognitionActionFeedback\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalStatus status\n\
FaceRecognitionFeedback feedback\n\
\n\
================================================================================\n\
MSG: pal_vision_msgs/FaceRecognitionFeedback\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#feedback\n\
uint8   order_id\n\
string[]  names\n\
float32[] confidence\n\
\n\
\n\
\n\
\n\
\n\
\n\
################# order_id\n\
#order_id = 0: recognize_once\n\
#order_id = 1: recognize_continuous\n\
#order_id = 2  add_face_images\n\
#order_id = 3  (re)train\n\
#order_id = 4  exit\n\
\n\
################ order_argument\n\
# for the add_face_images goal, the order_argument specifies the name of the person for which training images are acquired from the camera.\n\
\n\
################ name and confidence in feedback and result\n\
# for Order_id = 0 or 1, name and confidence are the name and confidence of the recognized person in the video stream.\n\
\n\
";
  }

  static const char* value(const ::pal_vision_msgs::FaceRecognitionAction_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_vision_msgs::FaceRecognitionAction_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.action_goal);
      stream.next(m.action_result);
      stream.next(m.action_feedback);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FaceRecognitionAction_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_vision_msgs::FaceRecognitionAction_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_vision_msgs::FaceRecognitionAction_<ContainerAllocator>& v)
  {
    s << indent << "action_goal: ";
    s << std::endl;
    Printer< ::pal_vision_msgs::FaceRecognitionActionGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.action_goal);
    s << indent << "action_result: ";
    s << std::endl;
    Printer< ::pal_vision_msgs::FaceRecognitionActionResult_<ContainerAllocator> >::stream(s, indent + "  ", v.action_result);
    s << indent << "action_feedback: ";
    s << std::endl;
    Printer< ::pal_vision_msgs::FaceRecognitionActionFeedback_<ContainerAllocator> >::stream(s, indent + "  ", v.action_feedback);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_VISION_MSGS_MESSAGE_FACERECOGNITIONACTION_H
