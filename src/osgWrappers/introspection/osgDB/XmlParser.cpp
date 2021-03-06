// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osgDB/XmlParser>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_ENUM_REFLECTOR(osgDB::XmlNode::NodeType)
	I_DeclaringFile("osgDB/XmlParser");
	I_EnumLabel(osgDB::XmlNode::UNASSIGNED);
	I_EnumLabel(osgDB::XmlNode::ATOM);
	I_EnumLabel(osgDB::XmlNode::NODE);
	I_EnumLabel(osgDB::XmlNode::GROUP);
	I_EnumLabel(osgDB::XmlNode::ROOT);
	I_EnumLabel(osgDB::XmlNode::COMMENT);
	I_EnumLabel(osgDB::XmlNode::INFORMATION);
END_REFLECTOR

TYPE_NAME_ALIAS(std::map< std::string COMMA  std::string >, osgDB::XmlNode::Properties)

TYPE_NAME_ALIAS(std::vector< osg::ref_ptr< osgDB::XmlNode > >, osgDB::XmlNode::Children)

BEGIN_OBJECT_REFLECTOR(osgDB::XmlNode)
	I_DeclaringFile("osgDB/XmlParser");
	I_BaseType(osg::Referenced);
	I_Constructor0(____XmlNode,
	               "",
	               "");
	I_Method0(std::string, getTrimmedContents,
	          Properties::NON_VIRTUAL,
	          __std_string__getTrimmedContents,
	          "",
	          "");
	I_Method1(bool, read, IN, osgDB::XmlNode::Input &, input,
	          Properties::NON_VIRTUAL,
	          __bool__read__Input_R1,
	          "",
	          "");
	I_MethodWithDefaults2(bool, write, IN, std::ostream &, fout, , IN, const std::string &, indent, "",
	                      Properties::NON_VIRTUAL,
	                      __bool__write__std_ostream_R1__C5_std_string_R1,
	                      "",
	                      "");
	I_MethodWithDefaults3(bool, write, IN, const osgDB::XmlNode::ControlMap &, controlMap, , IN, std::ostream &, fout, , IN, const std::string &, indent, "",
	                      Properties::NON_VIRTUAL,
	                      __bool__write__C5_ControlMap_R1__std_ostream_R1__C5_std_string_R1,
	                      "",
	                      "");
	I_Method3(bool, writeString, IN, const osgDB::XmlNode::ControlMap &, controlMap, IN, std::ostream &, fout, IN, const std::string &, str,
	          Properties::NON_VIRTUAL,
	          __bool__writeString__C5_ControlMap_R1__std_ostream_R1__C5_std_string_R1,
	          "",
	          "");
	I_ProtectedMethod3(bool, writeChildren, IN, const osgDB::XmlNode::ControlMap &, controlMap, IN, std::ostream &, fout, IN, const std::string &, indent,
	                   Properties::NON_VIRTUAL,
	                   Properties::CONST,
	                   __bool__writeChildren__C5_ControlMap_R1__std_ostream_R1__C5_std_string_R1,
	                   "",
	                   "");
	I_ProtectedMethod2(bool, writeProperties, IN, const osgDB::XmlNode::ControlMap &, controlMap, IN, std::ostream &, fout,
	                   Properties::NON_VIRTUAL,
	                   Properties::CONST,
	                   __bool__writeProperties__C5_ControlMap_R1__std_ostream_R1,
	                   "",
	                   "");
	I_SimpleProperty(std::string, TrimmedContents, 
	                 __std_string__getTrimmedContents, 
	                 0);
	I_PublicMemberProperty(osgDB::XmlNode::NodeType, type);
	I_PublicMemberProperty(std::string, name);
	I_PublicMemberProperty(std::string, contents);
	I_PublicMemberProperty(osgDB::XmlNode::Properties, properties);
	I_PublicMemberProperty(osgDB::XmlNode::Children, children);
END_REFLECTOR

TYPE_NAME_ALIAS(std::map< std::string COMMA  int >, osgDB::XmlNode::ControlMap::ControlToCharacterMap)

TYPE_NAME_ALIAS(std::map< int COMMA  std::string >, osgDB::XmlNode::ControlMap::CharacterToControlMap)

BEGIN_VALUE_REFLECTOR(osgDB::XmlNode::ControlMap)
	I_DeclaringFile("osgDB/XmlParser");
	I_Constructor0(____ControlMap,
	               "",
	               "");
	I_Method2(void, addControlToCharacter, IN, const std::string &, control, IN, int, c,
	          Properties::NON_VIRTUAL,
	          __void__addControlToCharacter__C5_std_string_R1__int,
	          "",
	          "");
	I_PublicMemberProperty(osgDB::XmlNode::ControlMap::ControlToCharacterMap, _controlToCharacterMap);
	I_PublicMemberProperty(osgDB::XmlNode::ControlMap::CharacterToControlMap, _characterToControlMap);
END_REFLECTOR

TYPE_NAME_ALIAS(std::string::size_type, osgDB::XmlNode::Input::size_type)

BEGIN_OBJECT_REFLECTOR(osgDB::XmlNode::Input)
	I_DeclaringFile("osgDB/XmlParser");
	I_BaseType(osgDB::XmlNode::ControlMap);
	I_Constructor0(____Input,
	               "",
	               "");
	I_Constructor1(IN, const osgDB::XmlNode::Input &, x,
	               Properties::NON_EXPLICIT,
	               ____Input__C5_Input_R1,
	               "",
	               "");
	I_Method1(void, open, IN, const std::string &, filename,
	          Properties::NON_VIRTUAL,
	          __void__open__C5_std_string_R1,
	          "",
	          "");
	I_Method1(void, attach, IN, std::istream &, istream,
	          Properties::NON_VIRTUAL,
	          __void__attach__std_istream_R1,
	          "",
	          "");
	I_Method0(void, readAllDataIntoBuffer,
	          Properties::NON_VIRTUAL,
	          __void__readAllDataIntoBuffer,
	          "",
	          "");
	I_Method0(osgDB::XmlNode::Input::size_type, currentPosition,
	          Properties::NON_VIRTUAL,
	          __size_type__currentPosition,
	          "",
	          "");
	I_Method0(int, get,
	          Properties::NON_VIRTUAL,
	          __int__get,
	          "",
	          "");
	I_Method0(void, skipWhiteSpace,
	          Properties::NON_VIRTUAL,
	          __void__skipWhiteSpace,
	          "",
	          "");
	I_MethodWithDefaults2(std::string, substr, IN, osgDB::XmlNode::Input::size_type, pos, , IN, osgDB::XmlNode::Input::size_type, n, std::string::npos,
	                      Properties::NON_VIRTUAL,
	                      __std_string__substr__size_type__size_type,
	                      "",
	                      "");
	I_Method1(osgDB::XmlNode::Input::size_type, find, IN, const std::string &, str,
	          Properties::NON_VIRTUAL,
	          __size_type__find__C5_std_string_R1,
	          "",
	          "");
	I_Method1(bool, match, IN, const std::string &, str,
	          Properties::NON_VIRTUAL,
	          __bool__match__C5_std_string_R1,
	          "",
	          "");
	I_SimpleProperty(int, , 
	                 __int__get, 
	                 0);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osg::ref_ptr< osgDB::XmlNode >)
	I_DeclaringFile("osg/ref_ptr");
	I_Constructor0(____ref_ptr,
	               "",
	               "");
	I_Constructor1(IN, osgDB::XmlNode *, ptr,
	               Properties::NON_EXPLICIT,
	               ____ref_ptr__T_P1,
	               "",
	               "");
	I_Constructor1(IN, const osg::ref_ptr< osgDB::XmlNode > &, rp,
	               Properties::NON_EXPLICIT,
	               ____ref_ptr__C5_ref_ptr_R1,
	               "",
	               "");
	I_Method0(osgDB::XmlNode *, get,
	          Properties::NON_VIRTUAL,
	          __T_P1__get,
	          "",
	          "");
	I_Method0(bool, valid,
	          Properties::NON_VIRTUAL,
	          __bool__valid,
	          "",
	          "");
	I_Method0(osgDB::XmlNode *, release,
	          Properties::NON_VIRTUAL,
	          __T_P1__release,
	          "",
	          "");
	I_Method1(void, swap, IN, osg::ref_ptr< osgDB::XmlNode > &, rp,
	          Properties::NON_VIRTUAL,
	          __void__swap__ref_ptr_R1,
	          "",
	          "");
	I_SimpleProperty(osgDB::XmlNode *, , 
	                 __T_P1__get, 
	                 0);
END_REFLECTOR

STD_MAP_REFLECTOR(std::map< int COMMA  std::string >)

STD_MAP_REFLECTOR(std::map< std::string COMMA  int >)

STD_VECTOR_REFLECTOR(std::vector< osg::ref_ptr< osgDB::XmlNode > >)

