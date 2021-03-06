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

#include <osg/CopyOp>
#include <osg/Node>
#include <osg/NodeVisitor>
#include <osgAnimation/Animation>
#include <osgAnimation/AnimationManagerBase>
#include <osgAnimation/LinkVisitor>
#include <osgAnimation/Target>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

TYPE_NAME_ALIAS(std::set< osg::ref_ptr< osgAnimation::Target > >, osgAnimation::AnimationManagerBase::TargetSet)

BEGIN_ABSTRACT_OBJECT_REFLECTOR(osgAnimation::AnimationManagerBase)
	I_DeclaringFile("osgAnimation/AnimationManagerBase");
	I_BaseType(osg::NodeCallback);
	I_Constructor0(____AnimationManagerBase,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osgAnimation::AnimationManagerBase &, b, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____AnimationManagerBase__C5_AnimationManagerBase_R1__C5_osg_CopyOp_R1,
	                           "",
	                           "");
	I_Method0(void, buildTargetReference,
	          Properties::VIRTUAL,
	          __void__buildTargetReference,
	          "",
	          "");
	I_Method1(void, registerAnimation, IN, osgAnimation::Animation *, x,
	          Properties::VIRTUAL,
	          __void__registerAnimation__Animation_P1,
	          "",
	          "");
	I_Method1(void, unregisterAnimation, IN, osgAnimation::Animation *, x,
	          Properties::VIRTUAL,
	          __void__unregisterAnimation__Animation_P1,
	          "",
	          "");
	I_Method1(void, link, IN, osg::Node *, subgraph,
	          Properties::VIRTUAL,
	          __void__link__osg_Node_P1,
	          "",
	          "");
	I_Method1(void, update, IN, double, t,
	          Properties::PURE_VIRTUAL,
	          __void__update__double,
	          "",
	          "");
	I_Method0(bool, needToLink,
	          Properties::VIRTUAL,
	          __bool__needToLink,
	          "",
	          "");
	I_Method0(const osgAnimation::AnimationList &, getAnimationList,
	          Properties::NON_VIRTUAL,
	          __C5_AnimationList_R1__getAnimationList,
	          "",
	          "");
	I_Method0(void, clearTargets,
	          Properties::NON_VIRTUAL,
	          __void__clearTargets,
	          "Reset the value of targets this Operation must be done each frame. ",
	          "");
	I_Method0(osgAnimation::LinkVisitor *, getOrCreateLinkVisitor,
	          Properties::NON_VIRTUAL,
	          __LinkVisitor_P1__getOrCreateLinkVisitor,
	          "",
	          "");
	I_Method1(void, setLinkVisitor, IN, osgAnimation::LinkVisitor *, x,
	          Properties::NON_VIRTUAL,
	          __void__setLinkVisitor__LinkVisitor_P1,
	          "",
	          "");
	I_Method1(void, setAutomaticLink, IN, bool, x,
	          Properties::NON_VIRTUAL,
	          __void__setAutomaticLink__bool,
	          "set a flag to define the behaviour ",
	          "");
	I_Method0(bool, getAutomaticLink,
	          Properties::NON_VIRTUAL,
	          __bool__getAutomaticLink,
	          "",
	          "");
	I_Method0(bool, isAutomaticLink,
	          Properties::NON_VIRTUAL,
	          __bool__isAutomaticLink,
	          "",
	          "");
	I_Method0(void, dirty,
	          Properties::NON_VIRTUAL,
	          __void__dirty,
	          "",
	          "");
	I_SimpleProperty(const osgAnimation::AnimationList &, AnimationList, 
	                 __C5_AnimationList_R1__getAnimationList, 
	                 0);
	I_SimpleProperty(bool, AutomaticLink, 
	                 __bool__getAutomaticLink, 
	                 __void__setAutomaticLink__bool);
	I_SimpleProperty(osgAnimation::LinkVisitor *, LinkVisitor, 
	                 0, 
	                 __void__setLinkVisitor__LinkVisitor_P1);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osg::ref_ptr< osgAnimation::Target >)
	I_DeclaringFile("osg/ref_ptr");
	I_Constructor0(____ref_ptr,
	               "",
	               "");
	I_Constructor1(IN, osgAnimation::Target *, ptr,
	               Properties::NON_EXPLICIT,
	               ____ref_ptr__T_P1,
	               "",
	               "");
	I_Constructor1(IN, const osg::ref_ptr< osgAnimation::Target > &, rp,
	               Properties::NON_EXPLICIT,
	               ____ref_ptr__C5_ref_ptr_R1,
	               "",
	               "");
	I_Method0(osgAnimation::Target *, get,
	          Properties::NON_VIRTUAL,
	          __T_P1__get,
	          "",
	          "");
	I_Method0(bool, valid,
	          Properties::NON_VIRTUAL,
	          __bool__valid,
	          "",
	          "");
	I_Method0(osgAnimation::Target *, release,
	          Properties::NON_VIRTUAL,
	          __T_P1__release,
	          "",
	          "");
	I_Method1(void, swap, IN, osg::ref_ptr< osgAnimation::Target > &, rp,
	          Properties::NON_VIRTUAL,
	          __void__swap__ref_ptr_R1,
	          "",
	          "");
	I_SimpleProperty(osgAnimation::Target *, , 
	                 __T_P1__get, 
	                 0);
END_REFLECTOR

STD_SET_REFLECTOR(std::set< osg::ref_ptr< osgAnimation::Target > >)

