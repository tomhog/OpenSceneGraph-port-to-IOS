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

#include <osg/Matrixf>
#include <osg/Quat>
#include <osg/Vec2>
#include <osg/Vec3>
#include <osg/Vec4>
#include <osgAnimation/Target>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osgAnimation::Target)
	I_DeclaringFile("osgAnimation/Target");
	I_BaseType(osg::Referenced);
	I_Constructor0(____Target,
	               "",
	               "");
	I_Method0(void, reset,
	          Properties::NON_VIRTUAL,
	          __void__reset,
	          "",
	          "");
	I_Method0(int, getCount,
	          Properties::NON_VIRTUAL,
	          __int__getCount,
	          "",
	          "");
	I_Method0(float, getWeight,
	          Properties::NON_VIRTUAL,
	          __float__getWeight,
	          "",
	          "");
	I_SimpleProperty(int, Count, 
	                 __int__getCount, 
	                 0);
	I_SimpleProperty(float, Weight, 
	                 __float__getWeight, 
	                 0);
END_REFLECTOR

TYPE_NAME_ALIAS(osgAnimation::TemplateTarget< osg::Matrixf >, osgAnimation::MatrixTarget)

TYPE_NAME_ALIAS(osgAnimation::TemplateTarget< osg::Quat >, osgAnimation::QuatTarget)

TYPE_NAME_ALIAS(osgAnimation::TemplateTarget< osg::Vec3 >, osgAnimation::Vec3Target)

TYPE_NAME_ALIAS(osgAnimation::TemplateTarget< osg::Vec4 >, osgAnimation::Vec4Target)

TYPE_NAME_ALIAS(osgAnimation::TemplateTarget< osg::Vec2 >, osgAnimation::Vec2Target)

TYPE_NAME_ALIAS(osgAnimation::TemplateTarget< float >, osgAnimation::FloatTarget)

TYPE_NAME_ALIAS(osgAnimation::TemplateTarget< double >, osgAnimation::DoubleTarget)

