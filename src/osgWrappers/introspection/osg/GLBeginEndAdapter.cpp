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

#include <osg/GLBeginEndAdapter>
#include <osg/State>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_ENUM_REFLECTOR(osg::GLBeginEndAdapter::MatrixMode)
	I_DeclaringFile("osg/GLBeginEndAdapter");
	I_EnumLabel(osg::GLBeginEndAdapter::APPLY_LOCAL_MATRICES_TO_VERTICES);
	I_EnumLabel(osg::GLBeginEndAdapter::APPLY_LOCAL_MATRICES_TO_MODELVIEW);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osg::GLBeginEndAdapter)
	I_DeclaringFile("osg/GLBeginEndAdapter");
	I_ConstructorWithDefaults1(IN, osg::State *, state, 0,
	                           Properties::NON_EXPLICIT,
	                           ____GLBeginEndAdapter__State_P1,
	                           "",
	                           "");
	I_Method1(void, setState, IN, osg::State *, state,
	          Properties::NON_VIRTUAL,
	          __void__setState__State_P1,
	          "",
	          "");
	I_Method0(osg::State *, getState,
	          Properties::NON_VIRTUAL,
	          __State_P1__getState,
	          "",
	          "");
	I_Method0(const osg::State *, getState,
	          Properties::NON_VIRTUAL,
	          __C5_State_P1__getState,
	          "",
	          "");
	I_Method1(void, setMatrixMode, IN, osg::GLBeginEndAdapter::MatrixMode, mode,
	          Properties::NON_VIRTUAL,
	          __void__setMatrixMode__MatrixMode,
	          "",
	          "");
	I_Method0(osg::GLBeginEndAdapter::MatrixMode, setMatrixMode,
	          Properties::NON_VIRTUAL,
	          __MatrixMode__setMatrixMode,
	          "",
	          "");
	I_Method0(void, PushMatrix,
	          Properties::NON_VIRTUAL,
	          __void__PushMatrix,
	          "",
	          "");
	I_Method0(void, PopMatrix,
	          Properties::NON_VIRTUAL,
	          __void__PopMatrix,
	          "",
	          "");
	I_Method0(void, LoadIdentity,
	          Properties::NON_VIRTUAL,
	          __void__LoadIdentity,
	          "",
	          "");
	I_Method1(void, LoadMatrixd, IN, const GLdouble *, m,
	          Properties::NON_VIRTUAL,
	          __void__LoadMatrixd__C5_GLdouble_P1,
	          "",
	          "");
	I_Method1(void, MultMatrixd, IN, const GLdouble *, m,
	          Properties::NON_VIRTUAL,
	          __void__MultMatrixd__C5_GLdouble_P1,
	          "",
	          "");
	I_Method3(void, Translatef, IN, GLfloat, x, IN, GLfloat, y, IN, GLfloat, z,
	          Properties::NON_VIRTUAL,
	          __void__Translatef__GLfloat__GLfloat__GLfloat,
	          "",
	          "");
	I_Method3(void, Scalef, IN, GLfloat, x, IN, GLfloat, y, IN, GLfloat, z,
	          Properties::NON_VIRTUAL,
	          __void__Scalef__GLfloat__GLfloat__GLfloat,
	          "",
	          "");
	I_Method4(void, Rotatef, IN, GLfloat, angle, IN, GLfloat, x, IN, GLfloat, y, IN, GLfloat, z,
	          Properties::NON_VIRTUAL,
	          __void__Rotatef__GLfloat__GLfloat__GLfloat__GLfloat,
	          "",
	          "");
	I_Method3(void, Translated, IN, GLdouble, x, IN, GLdouble, y, IN, GLdouble, z,
	          Properties::NON_VIRTUAL,
	          __void__Translated__GLdouble__GLdouble__GLdouble,
	          "",
	          "");
	I_Method3(void, Scaled, IN, GLdouble, x, IN, GLdouble, y, IN, GLdouble, z,
	          Properties::NON_VIRTUAL,
	          __void__Scaled__GLdouble__GLdouble__GLdouble,
	          "",
	          "");
	I_Method4(void, Rotated, IN, GLdouble, angle, IN, GLdouble, x, IN, GLdouble, y, IN, GLdouble, z,
	          Properties::NON_VIRTUAL,
	          __void__Rotated__GLdouble__GLdouble__GLdouble__GLdouble,
	          "",
	          "");
	I_Method3(void, Vertex3f, IN, GLfloat, x, IN, GLfloat, y, IN, GLfloat, z,
	          Properties::NON_VIRTUAL,
	          __void__Vertex3f__GLfloat__GLfloat__GLfloat,
	          "",
	          "");
	I_Method1(void, Vertex3fv, IN, const GLfloat *, v,
	          Properties::NON_VIRTUAL,
	          __void__Vertex3fv__C5_GLfloat_P1,
	          "",
	          "");
	I_Method4(void, Color4f, IN, GLfloat, red, IN, GLfloat, green, IN, GLfloat, blue, IN, GLfloat, alpha,
	          Properties::NON_VIRTUAL,
	          __void__Color4f__GLfloat__GLfloat__GLfloat__GLfloat,
	          "",
	          "");
	I_Method1(void, Color4fv, IN, const GLfloat *, c,
	          Properties::NON_VIRTUAL,
	          __void__Color4fv__C5_GLfloat_P1,
	          "",
	          "");
	I_Method1(void, Color4ubv, IN, const GLubyte *, c,
	          Properties::NON_VIRTUAL,
	          __void__Color4ubv__C5_GLubyte_P1,
	          "",
	          "");
	I_Method3(void, Normal3f, IN, GLfloat, x, IN, GLfloat, y, IN, GLfloat, z,
	          Properties::NON_VIRTUAL,
	          __void__Normal3f__GLfloat__GLfloat__GLfloat,
	          "",
	          "");
	I_Method1(void, Normal3fv, IN, const GLfloat *, n,
	          Properties::NON_VIRTUAL,
	          __void__Normal3fv__C5_GLfloat_P1,
	          "",
	          "");
	I_Method1(void, TexCoord1f, IN, GLfloat, x,
	          Properties::NON_VIRTUAL,
	          __void__TexCoord1f__GLfloat,
	          "",
	          "");
	I_Method1(void, TexCoord1fv, IN, const GLfloat *, tc,
	          Properties::NON_VIRTUAL,
	          __void__TexCoord1fv__C5_GLfloat_P1,
	          "",
	          "");
	I_Method2(void, TexCoord2f, IN, GLfloat, x, IN, GLfloat, y,
	          Properties::NON_VIRTUAL,
	          __void__TexCoord2f__GLfloat__GLfloat,
	          "",
	          "");
	I_Method1(void, TexCoord2fv, IN, const GLfloat *, tc,
	          Properties::NON_VIRTUAL,
	          __void__TexCoord2fv__C5_GLfloat_P1,
	          "",
	          "");
	I_Method3(void, TexCoord3f, IN, GLfloat, x, IN, GLfloat, y, IN, GLfloat, z,
	          Properties::NON_VIRTUAL,
	          __void__TexCoord3f__GLfloat__GLfloat__GLfloat,
	          "",
	          "");
	I_Method1(void, TexCoord3fv, IN, const GLfloat *, tc,
	          Properties::NON_VIRTUAL,
	          __void__TexCoord3fv__C5_GLfloat_P1,
	          "",
	          "");
	I_Method4(void, TexCoord4f, IN, GLfloat, x, IN, GLfloat, y, IN, GLfloat, z, IN, GLfloat, w,
	          Properties::NON_VIRTUAL,
	          __void__TexCoord4f__GLfloat__GLfloat__GLfloat__GLfloat,
	          "",
	          "");
	I_Method1(void, TexCoord4fv, IN, const GLfloat *, tc,
	          Properties::NON_VIRTUAL,
	          __void__TexCoord4fv__C5_GLfloat_P1,
	          "",
	          "");
	I_Method2(void, MultiTexCoord1f, IN, GLenum, target, IN, GLfloat, x,
	          Properties::NON_VIRTUAL,
	          __void__MultiTexCoord1f__GLenum__GLfloat,
	          "",
	          "");
	I_Method2(void, MultiTexCoord1fv, IN, GLenum, target, IN, const GLfloat *, tc,
	          Properties::NON_VIRTUAL,
	          __void__MultiTexCoord1fv__GLenum__C5_GLfloat_P1,
	          "",
	          "");
	I_Method3(void, MultiTexCoord2f, IN, GLenum, target, IN, GLfloat, x, IN, GLfloat, y,
	          Properties::NON_VIRTUAL,
	          __void__MultiTexCoord2f__GLenum__GLfloat__GLfloat,
	          "",
	          "");
	I_Method2(void, MultiTexCoord2fv, IN, GLenum, target, IN, const GLfloat *, tc,
	          Properties::NON_VIRTUAL,
	          __void__MultiTexCoord2fv__GLenum__C5_GLfloat_P1,
	          "",
	          "");
	I_Method4(void, MultiTexCoord3f, IN, GLenum, target, IN, GLfloat, x, IN, GLfloat, y, IN, GLfloat, z,
	          Properties::NON_VIRTUAL,
	          __void__MultiTexCoord3f__GLenum__GLfloat__GLfloat__GLfloat,
	          "",
	          "");
	I_Method2(void, MultiTexCoord3fv, IN, GLenum, target, IN, const GLfloat *, tc,
	          Properties::NON_VIRTUAL,
	          __void__MultiTexCoord3fv__GLenum__C5_GLfloat_P1,
	          "",
	          "");
	I_Method5(void, MultiTexCoord4f, IN, GLenum, target, IN, GLfloat, x, IN, GLfloat, y, IN, GLfloat, z, IN, GLfloat, w,
	          Properties::NON_VIRTUAL,
	          __void__MultiTexCoord4f__GLenum__GLfloat__GLfloat__GLfloat__GLfloat,
	          "",
	          "");
	I_Method2(void, MultiTexCoord4fv, IN, GLenum, target, IN, const GLfloat *, tc,
	          Properties::NON_VIRTUAL,
	          __void__MultiTexCoord4fv__GLenum__C5_GLfloat_P1,
	          "",
	          "");
	I_Method2(void, VertexAttrib1f, IN, GLuint, unit, IN, GLfloat, x,
	          Properties::NON_VIRTUAL,
	          __void__VertexAttrib1f__GLuint__GLfloat,
	          "",
	          "");
	I_Method2(void, VertexAttrib1fv, IN, GLuint, unit, IN, const GLfloat *, tc,
	          Properties::NON_VIRTUAL,
	          __void__VertexAttrib1fv__GLuint__C5_GLfloat_P1,
	          "",
	          "");
	I_Method3(void, VertexAttrib2f, IN, GLuint, unit, IN, GLfloat, x, IN, GLfloat, y,
	          Properties::NON_VIRTUAL,
	          __void__VertexAttrib2f__GLuint__GLfloat__GLfloat,
	          "",
	          "");
	I_Method2(void, VertexAttrib2fv, IN, GLuint, unit, IN, const GLfloat *, tc,
	          Properties::NON_VIRTUAL,
	          __void__VertexAttrib2fv__GLuint__C5_GLfloat_P1,
	          "",
	          "");
	I_Method4(void, VertexAttrib3f, IN, GLuint, unit, IN, GLfloat, x, IN, GLfloat, y, IN, GLfloat, z,
	          Properties::NON_VIRTUAL,
	          __void__VertexAttrib3f__GLuint__GLfloat__GLfloat__GLfloat,
	          "",
	          "");
	I_Method2(void, VertexAttrib3fv, IN, GLuint, unit, IN, const GLfloat *, tc,
	          Properties::NON_VIRTUAL,
	          __void__VertexAttrib3fv__GLuint__C5_GLfloat_P1,
	          "",
	          "");
	I_Method5(void, VertexAttrib4f, IN, GLuint, unit, IN, GLfloat, x, IN, GLfloat, y, IN, GLfloat, z, IN, GLfloat, w,
	          Properties::NON_VIRTUAL,
	          __void__VertexAttrib4f__GLuint__GLfloat__GLfloat__GLfloat__GLfloat,
	          "",
	          "");
	I_Method2(void, VertexAttrib4fv, IN, GLuint, unit, IN, const GLfloat *, tc,
	          Properties::NON_VIRTUAL,
	          __void__VertexAttrib4fv__GLuint__C5_GLfloat_P1,
	          "",
	          "");
	I_Method1(void, Begin, IN, GLenum, mode,
	          Properties::NON_VIRTUAL,
	          __void__Begin__GLenum,
	          "",
	          "");
	I_Method0(void, End,
	          Properties::NON_VIRTUAL,
	          __void__End,
	          "",
	          "");
	I_SimpleProperty(osg::GLBeginEndAdapter::MatrixMode, MatrixMode, 
	                 0, 
	                 __void__setMatrixMode__MatrixMode);
	I_SimpleProperty(osg::State *, State, 
	                 __State_P1__getState, 
	                 __void__setState__State_P1);
END_REFLECTOR

