// Generated by gencpp from file pal_interaction_msgs/Input.msg
// DO NOT EDIT!


#ifndef PAL_INTERACTION_MSGS_MESSAGE_INPUT_H
#define PAL_INTERACTION_MSGS_MESSAGE_INPUT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <pal_interaction_msgs/InputArgument.h>

namespace pal_interaction_msgs
{
template <class ContainerAllocator>
struct Input_
{
  typedef Input_<ContainerAllocator> Type;

  Input_()
    : action()
    , args()  {
    }
  Input_(const ContainerAllocator& _alloc)
    : action(_alloc)
    , args(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _action_type;
  _action_type action;

   typedef std::vector< ::pal_interaction_msgs::InputArgument_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::pal_interaction_msgs::InputArgument_<ContainerAllocator> >::other >  _args_type;
  _args_type args;




  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  INPUT_ACCEPT;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  INPUT_REJECT;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  INPUT_CANCEL;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  OK;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  YES;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  NO;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  CANCEL;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  ABORT;

  typedef boost::shared_ptr< ::pal_interaction_msgs::Input_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_interaction_msgs::Input_<ContainerAllocator> const> ConstPtr;

}; // struct Input_

typedef ::pal_interaction_msgs::Input_<std::allocator<void> > Input;

typedef boost::shared_ptr< ::pal_interaction_msgs::Input > InputPtr;
typedef boost::shared_ptr< ::pal_interaction_msgs::Input const> InputConstPtr;

// constants requiring out of line definition

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      Input_<ContainerAllocator>::INPUT_ACCEPT =
        
          "INPUT_ACCEPT"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      Input_<ContainerAllocator>::INPUT_REJECT =
        
          "INPUT_REJECT"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      Input_<ContainerAllocator>::INPUT_CANCEL =
        
          "INPUT_CANCEL"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      Input_<ContainerAllocator>::OK =
        
          "ok"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      Input_<ContainerAllocator>::YES =
        
          "yes"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      Input_<ContainerAllocator>::NO =
        
          "no"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      Input_<ContainerAllocator>::CANCEL =
        
          "cancel"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      Input_<ContainerAllocator>::ABORT =
        
          "abort"
        
        ;
   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_interaction_msgs::Input_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_interaction_msgs::Input_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pal_interaction_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'pal_interaction_msgs': ['/home/adrii/talos_public_ws/src/pal_msgs/pal_interaction_msgs/msg', '/home/adrii/talos_public_ws/devel/.private/pal_interaction_msgs/share/pal_interaction_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pal_interaction_msgs::Input_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_interaction_msgs::Input_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_interaction_msgs::Input_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_interaction_msgs::Input_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_interaction_msgs::Input_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_interaction_msgs::Input_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_interaction_msgs::Input_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c45da4349e5b4eb0f54025571ad69bd7";
  }

  static const char* value(const ::pal_interaction_msgs::Input_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc45da4349e5b4eb0ULL;
  static const uint64_t static_value2 = 0xf54025571ad69bd7ULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_interaction_msgs::Input_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_interaction_msgs/Input";
  }

  static const char* value(const ::pal_interaction_msgs::Input_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_interaction_msgs::Input_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#action to perform\n\
string INPUT_ACCEPT = INPUT_ACCEPT\n\
string INPUT_REJECT = INPUT_REJECT\n\
string INPUT_CANCEL = INPUT_CANCEL\n\
\n\
# Deprecated in favor of the INPUT_* above. Will be removed in a future message\n\
string OK = ok\n\
string YES = yes\n\
string NO = no\n\
string CANCEL = cancel\n\
string ABORT = abort\n\
\n\
# Can be any of the above, and additionally any custom action you want\n\
string action\n\
\n\
InputArgument[] args\n\
\n\
================================================================================\n\
MSG: pal_interaction_msgs/InputArgument\n\
string key\n\
string value\n\
";
  }

  static const char* value(const ::pal_interaction_msgs::Input_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_interaction_msgs::Input_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.action);
      stream.next(m.args);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Input_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_interaction_msgs::Input_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_interaction_msgs::Input_<ContainerAllocator>& v)
  {
    s << indent << "action: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.action);
    s << indent << "args[]" << std::endl;
    for (size_t i = 0; i < v.args.size(); ++i)
    {
      s << indent << "  args[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::pal_interaction_msgs::InputArgument_<ContainerAllocator> >::stream(s, indent + "    ", v.args[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_INTERACTION_MSGS_MESSAGE_INPUT_H
