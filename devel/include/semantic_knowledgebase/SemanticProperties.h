/* Software License Agreement (BSD License)
 *
 * Copyright (c) 2011, Willow Garage, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 *  * Neither the name of Willow Garage, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Auto-generated by genmsg_cpp from file /home/brsu/catkin_ws/src/ensta_hbrs/semantic_knowledgebase/msg/SemanticProperties.msg
 *
 */


#ifndef SEMANTIC_KNOWLEDGEBASE_MESSAGE_SEMANTICPROPERTIES_H
#define SEMANTIC_KNOWLEDGEBASE_MESSAGE_SEMANTICPROPERTIES_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace semantic_knowledgebase
{
template <class ContainerAllocator>
struct SemanticProperties_
{
  typedef SemanticProperties_<ContainerAllocator> Type;

  SemanticProperties_()
    : category()
    , sub_category()  {
    }
  SemanticProperties_(const ContainerAllocator& _alloc)
    : category(_alloc)
    , sub_category(_alloc)  {
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _category_type;
  _category_type category;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _sub_category_type;
  _sub_category_type sub_category;




  typedef boost::shared_ptr< ::semantic_knowledgebase::SemanticProperties_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::semantic_knowledgebase::SemanticProperties_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

}; // struct SemanticProperties_

typedef ::semantic_knowledgebase::SemanticProperties_<std::allocator<void> > SemanticProperties;

typedef boost::shared_ptr< ::semantic_knowledgebase::SemanticProperties > SemanticPropertiesPtr;
typedef boost::shared_ptr< ::semantic_knowledgebase::SemanticProperties const> SemanticPropertiesConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::semantic_knowledgebase::SemanticProperties_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::semantic_knowledgebase::SemanticProperties_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace semantic_knowledgebase

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'semantic_knowledgebase': ['/home/brsu/catkin_ws/src/ensta_hbrs/semantic_knowledgebase/msg'], 'std_msgs': ['/opt/ros/hydro/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/hydro/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::semantic_knowledgebase::SemanticProperties_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::semantic_knowledgebase::SemanticProperties_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::semantic_knowledgebase::SemanticProperties_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::semantic_knowledgebase::SemanticProperties_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::semantic_knowledgebase::SemanticProperties_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::semantic_knowledgebase::SemanticProperties_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::semantic_knowledgebase::SemanticProperties_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0fc139786388051e07c74d6aac4191b5";
  }

  static const char* value(const ::semantic_knowledgebase::SemanticProperties_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0fc139786388051eULL;
  static const uint64_t static_value2 = 0x07c74d6aac4191b5ULL;
};

template<class ContainerAllocator>
struct DataType< ::semantic_knowledgebase::SemanticProperties_<ContainerAllocator> >
{
  static const char* value()
  {
    return "semantic_knowledgebase/SemanticProperties";
  }

  static const char* value(const ::semantic_knowledgebase::SemanticProperties_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::semantic_knowledgebase::SemanticProperties_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string category\n\
string sub_category\n\
";
  }

  static const char* value(const ::semantic_knowledgebase::SemanticProperties_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::semantic_knowledgebase::SemanticProperties_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.category);
      stream.next(m.sub_category);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct SemanticProperties_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::semantic_knowledgebase::SemanticProperties_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::semantic_knowledgebase::SemanticProperties_<ContainerAllocator>& v)
  {
    s << indent << "category: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.category);
    s << indent << "sub_category: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.sub_category);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SEMANTIC_KNOWLEDGEBASE_MESSAGE_SEMANTICPROPERTIES_H
