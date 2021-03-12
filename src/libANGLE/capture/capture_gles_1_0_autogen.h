// GENERATED FILE - DO NOT EDIT.
// Generated by generate_entry_points.py using data from gl.xml and gl_angle_ext.xml.
//
// Copyright 2020 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// capture_gles_1_0_autogen.h:
//   Capture functions for the OpenGL ES 1.0 entry points.

#ifndef LIBANGLE_CAPTURE_GLES_1_0_AUTOGEN_H_
#define LIBANGLE_CAPTURE_GLES_1_0_AUTOGEN_H_

#include "common/PackedEnums.h"
#include "libANGLE/capture/FrameCapture.h"

namespace gl
{

// Method Captures

angle::CallCapture CaptureAlphaFunc(const State &glState, bool isCallValid, AlphaTestFunc funcPacked, GLfloat ref);
angle::CallCapture CaptureAlphaFuncx(const State &glState, bool isCallValid, AlphaTestFunc funcPacked, GLfixed ref);
angle::CallCapture CaptureClearColorx(const State &glState, bool isCallValid, GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha);
angle::CallCapture CaptureClearDepthx(const State &glState, bool isCallValid, GLfixed depth);
angle::CallCapture CaptureClientActiveTexture(const State &glState, bool isCallValid, GLenum texture);
angle::CallCapture CaptureClipPlanef(const State &glState, bool isCallValid, GLenum p, const GLfloat * eqn);
angle::CallCapture CaptureClipPlanex(const State &glState, bool isCallValid, GLenum plane, const GLfixed * equation);
angle::CallCapture CaptureColor4f(const State &glState, bool isCallValid, GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
angle::CallCapture CaptureColor4ub(const State &glState, bool isCallValid, GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha);
angle::CallCapture CaptureColor4x(const State &glState, bool isCallValid, GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha);
angle::CallCapture CaptureColorPointer(const State &glState, bool isCallValid, GLint size, VertexAttribType typePacked, GLsizei stride, const void * pointer);
angle::CallCapture CaptureDepthRangex(const State &glState, bool isCallValid, GLfixed n, GLfixed f);
angle::CallCapture CaptureDisableClientState(const State &glState, bool isCallValid, ClientVertexArrayType arrayPacked);
angle::CallCapture CaptureEnableClientState(const State &glState, bool isCallValid, ClientVertexArrayType arrayPacked);
angle::CallCapture CaptureFogf(const State &glState, bool isCallValid, GLenum pname, GLfloat param);
angle::CallCapture CaptureFogfv(const State &glState, bool isCallValid, GLenum pname, const GLfloat * params);
angle::CallCapture CaptureFogx(const State &glState, bool isCallValid, GLenum pname, GLfixed param);
angle::CallCapture CaptureFogxv(const State &glState, bool isCallValid, GLenum pname, const GLfixed * param);
angle::CallCapture CaptureFrustumf(const State &glState, bool isCallValid, GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f);
angle::CallCapture CaptureFrustumx(const State &glState, bool isCallValid, GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f);
angle::CallCapture CaptureGetClipPlanef(const State &glState, bool isCallValid, GLenum plane, GLfloat * equation);
angle::CallCapture CaptureGetClipPlanex(const State &glState, bool isCallValid, GLenum plane, GLfixed * equation);
angle::CallCapture CaptureGetFixedv(const State &glState, bool isCallValid, GLenum pname, GLfixed * params);
angle::CallCapture CaptureGetLightfv(const State &glState, bool isCallValid, GLenum light, LightParameter pnamePacked, GLfloat * params);
angle::CallCapture CaptureGetLightxv(const State &glState, bool isCallValid, GLenum light, LightParameter pnamePacked, GLfixed * params);
angle::CallCapture CaptureGetMaterialfv(const State &glState, bool isCallValid, GLenum face, MaterialParameter pnamePacked, GLfloat * params);
angle::CallCapture CaptureGetMaterialxv(const State &glState, bool isCallValid, GLenum face, MaterialParameter pnamePacked, GLfixed * params);
angle::CallCapture CaptureGetTexEnvfv(const State &glState, bool isCallValid, TextureEnvTarget targetPacked, TextureEnvParameter pnamePacked, GLfloat * params);
angle::CallCapture CaptureGetTexEnviv(const State &glState, bool isCallValid, TextureEnvTarget targetPacked, TextureEnvParameter pnamePacked, GLint * params);
angle::CallCapture CaptureGetTexEnvxv(const State &glState, bool isCallValid, TextureEnvTarget targetPacked, TextureEnvParameter pnamePacked, GLfixed * params);
angle::CallCapture CaptureGetTexParameterxv(const State &glState, bool isCallValid, TextureType targetPacked, GLenum pname, GLfixed * params);
angle::CallCapture CaptureLightModelf(const State &glState, bool isCallValid, GLenum pname, GLfloat param);
angle::CallCapture CaptureLightModelfv(const State &glState, bool isCallValid, GLenum pname, const GLfloat * params);
angle::CallCapture CaptureLightModelx(const State &glState, bool isCallValid, GLenum pname, GLfixed param);
angle::CallCapture CaptureLightModelxv(const State &glState, bool isCallValid, GLenum pname, const GLfixed * param);
angle::CallCapture CaptureLightf(const State &glState, bool isCallValid, GLenum light, LightParameter pnamePacked, GLfloat param);
angle::CallCapture CaptureLightfv(const State &glState, bool isCallValid, GLenum light, LightParameter pnamePacked, const GLfloat * params);
angle::CallCapture CaptureLightx(const State &glState, bool isCallValid, GLenum light, LightParameter pnamePacked, GLfixed param);
angle::CallCapture CaptureLightxv(const State &glState, bool isCallValid, GLenum light, LightParameter pnamePacked, const GLfixed * params);
angle::CallCapture CaptureLineWidthx(const State &glState, bool isCallValid, GLfixed width);
angle::CallCapture CaptureLoadIdentity(const State &glState, bool isCallValid);
angle::CallCapture CaptureLoadMatrixf(const State &glState, bool isCallValid, const GLfloat * m);
angle::CallCapture CaptureLoadMatrixx(const State &glState, bool isCallValid, const GLfixed * m);
angle::CallCapture CaptureLogicOp(const State &glState, bool isCallValid, LogicalOperation opcodePacked);
angle::CallCapture CaptureMaterialf(const State &glState, bool isCallValid, GLenum face, MaterialParameter pnamePacked, GLfloat param);
angle::CallCapture CaptureMaterialfv(const State &glState, bool isCallValid, GLenum face, MaterialParameter pnamePacked, const GLfloat * params);
angle::CallCapture CaptureMaterialx(const State &glState, bool isCallValid, GLenum face, MaterialParameter pnamePacked, GLfixed param);
angle::CallCapture CaptureMaterialxv(const State &glState, bool isCallValid, GLenum face, MaterialParameter pnamePacked, const GLfixed * param);
angle::CallCapture CaptureMatrixMode(const State &glState, bool isCallValid, MatrixType modePacked);
angle::CallCapture CaptureMultMatrixf(const State &glState, bool isCallValid, const GLfloat * m);
angle::CallCapture CaptureMultMatrixx(const State &glState, bool isCallValid, const GLfixed * m);
angle::CallCapture CaptureMultiTexCoord4f(const State &glState, bool isCallValid, GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q);
angle::CallCapture CaptureMultiTexCoord4x(const State &glState, bool isCallValid, GLenum texture, GLfixed s, GLfixed t, GLfixed r, GLfixed q);
angle::CallCapture CaptureNormal3f(const State &glState, bool isCallValid, GLfloat nx, GLfloat ny, GLfloat nz);
angle::CallCapture CaptureNormal3x(const State &glState, bool isCallValid, GLfixed nx, GLfixed ny, GLfixed nz);
angle::CallCapture CaptureNormalPointer(const State &glState, bool isCallValid, VertexAttribType typePacked, GLsizei stride, const void * pointer);
angle::CallCapture CaptureOrthof(const State &glState, bool isCallValid, GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f);
angle::CallCapture CaptureOrthox(const State &glState, bool isCallValid, GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f);
angle::CallCapture CapturePointParameterf(const State &glState, bool isCallValid, PointParameter pnamePacked, GLfloat param);
angle::CallCapture CapturePointParameterfv(const State &glState, bool isCallValid, PointParameter pnamePacked, const GLfloat * params);
angle::CallCapture CapturePointParameterx(const State &glState, bool isCallValid, PointParameter pnamePacked, GLfixed param);
angle::CallCapture CapturePointParameterxv(const State &glState, bool isCallValid, PointParameter pnamePacked, const GLfixed * params);
angle::CallCapture CapturePointSize(const State &glState, bool isCallValid, GLfloat size);
angle::CallCapture CapturePointSizex(const State &glState, bool isCallValid, GLfixed size);
angle::CallCapture CapturePolygonOffsetx(const State &glState, bool isCallValid, GLfixed factor, GLfixed units);
angle::CallCapture CapturePopMatrix(const State &glState, bool isCallValid);
angle::CallCapture CapturePushMatrix(const State &glState, bool isCallValid);
angle::CallCapture CaptureRotatef(const State &glState, bool isCallValid, GLfloat angle, GLfloat x, GLfloat y, GLfloat z);
angle::CallCapture CaptureRotatex(const State &glState, bool isCallValid, GLfixed angle, GLfixed x, GLfixed y, GLfixed z);
angle::CallCapture CaptureSampleCoveragex(const State &glState, bool isCallValid, GLclampx value, GLboolean invert);
angle::CallCapture CaptureScalef(const State &glState, bool isCallValid, GLfloat x, GLfloat y, GLfloat z);
angle::CallCapture CaptureScalex(const State &glState, bool isCallValid, GLfixed x, GLfixed y, GLfixed z);
angle::CallCapture CaptureShadeModel(const State &glState, bool isCallValid, ShadingModel modePacked);
angle::CallCapture CaptureTexCoordPointer(const State &glState, bool isCallValid, GLint size, VertexAttribType typePacked, GLsizei stride, const void * pointer);
angle::CallCapture CaptureTexEnvf(const State &glState, bool isCallValid, TextureEnvTarget targetPacked, TextureEnvParameter pnamePacked, GLfloat param);
angle::CallCapture CaptureTexEnvfv(const State &glState, bool isCallValid, TextureEnvTarget targetPacked, TextureEnvParameter pnamePacked, const GLfloat * params);
angle::CallCapture CaptureTexEnvi(const State &glState, bool isCallValid, TextureEnvTarget targetPacked, TextureEnvParameter pnamePacked, GLint param);
angle::CallCapture CaptureTexEnviv(const State &glState, bool isCallValid, TextureEnvTarget targetPacked, TextureEnvParameter pnamePacked, const GLint * params);
angle::CallCapture CaptureTexEnvx(const State &glState, bool isCallValid, TextureEnvTarget targetPacked, TextureEnvParameter pnamePacked, GLfixed param);
angle::CallCapture CaptureTexEnvxv(const State &glState, bool isCallValid, TextureEnvTarget targetPacked, TextureEnvParameter pnamePacked, const GLfixed * params);
angle::CallCapture CaptureTexParameterx(const State &glState, bool isCallValid, TextureType targetPacked, GLenum pname, GLfixed param);
angle::CallCapture CaptureTexParameterxv(const State &glState, bool isCallValid, TextureType targetPacked, GLenum pname, const GLfixed * params);
angle::CallCapture CaptureTranslatef(const State &glState, bool isCallValid, GLfloat x, GLfloat y, GLfloat z);
angle::CallCapture CaptureTranslatex(const State &glState, bool isCallValid, GLfixed x, GLfixed y, GLfixed z);
angle::CallCapture CaptureVertexPointer(const State &glState, bool isCallValid, GLint size, VertexAttribType typePacked, GLsizei stride, const void * pointer);

// Parameter Captures

void CaptureClipPlanef_eqn(const State &glState, bool isCallValid, GLenum p, const GLfloat * eqn, angle::ParamCapture *paramCapture);
void CaptureClipPlanex_equation(const State &glState, bool isCallValid, GLenum plane, const GLfixed * equation, angle::ParamCapture *paramCapture);
void CaptureColorPointer_pointer(const State &glState, bool isCallValid, GLint size, VertexAttribType typePacked, GLsizei stride, const void * pointer, angle::ParamCapture *paramCapture);
void CaptureFogfv_params(const State &glState, bool isCallValid, GLenum pname, const GLfloat * params, angle::ParamCapture *paramCapture);
void CaptureFogxv_param(const State &glState, bool isCallValid, GLenum pname, const GLfixed * param, angle::ParamCapture *paramCapture);
void CaptureGetClipPlanef_equation(const State &glState, bool isCallValid, GLenum plane, GLfloat * equation, angle::ParamCapture *paramCapture);
void CaptureGetClipPlanex_equation(const State &glState, bool isCallValid, GLenum plane, GLfixed * equation, angle::ParamCapture *paramCapture);
void CaptureGetFixedv_params(const State &glState, bool isCallValid, GLenum pname, GLfixed * params, angle::ParamCapture *paramCapture);
void CaptureGetLightfv_params(const State &glState, bool isCallValid, GLenum light, LightParameter pnamePacked, GLfloat * params, angle::ParamCapture *paramCapture);
void CaptureGetLightxv_params(const State &glState, bool isCallValid, GLenum light, LightParameter pnamePacked, GLfixed * params, angle::ParamCapture *paramCapture);
void CaptureGetMaterialfv_params(const State &glState, bool isCallValid, GLenum face, MaterialParameter pnamePacked, GLfloat * params, angle::ParamCapture *paramCapture);
void CaptureGetMaterialxv_params(const State &glState, bool isCallValid, GLenum face, MaterialParameter pnamePacked, GLfixed * params, angle::ParamCapture *paramCapture);
void CaptureGetTexEnvfv_params(const State &glState, bool isCallValid, TextureEnvTarget targetPacked, TextureEnvParameter pnamePacked, GLfloat * params, angle::ParamCapture *paramCapture);
void CaptureGetTexEnviv_params(const State &glState, bool isCallValid, TextureEnvTarget targetPacked, TextureEnvParameter pnamePacked, GLint * params, angle::ParamCapture *paramCapture);
void CaptureGetTexEnvxv_params(const State &glState, bool isCallValid, TextureEnvTarget targetPacked, TextureEnvParameter pnamePacked, GLfixed * params, angle::ParamCapture *paramCapture);
void CaptureGetTexParameterxv_params(const State &glState, bool isCallValid, TextureType targetPacked, GLenum pname, GLfixed * params, angle::ParamCapture *paramCapture);
void CaptureLightModelfv_params(const State &glState, bool isCallValid, GLenum pname, const GLfloat * params, angle::ParamCapture *paramCapture);
void CaptureLightModelxv_param(const State &glState, bool isCallValid, GLenum pname, const GLfixed * param, angle::ParamCapture *paramCapture);
void CaptureLightfv_params(const State &glState, bool isCallValid, GLenum light, LightParameter pnamePacked, const GLfloat * params, angle::ParamCapture *paramCapture);
void CaptureLightxv_params(const State &glState, bool isCallValid, GLenum light, LightParameter pnamePacked, const GLfixed * params, angle::ParamCapture *paramCapture);
void CaptureLoadMatrixf_m(const State &glState, bool isCallValid, const GLfloat * m, angle::ParamCapture *paramCapture);
void CaptureLoadMatrixx_m(const State &glState, bool isCallValid, const GLfixed * m, angle::ParamCapture *paramCapture);
void CaptureMaterialfv_params(const State &glState, bool isCallValid, GLenum face, MaterialParameter pnamePacked, const GLfloat * params, angle::ParamCapture *paramCapture);
void CaptureMaterialxv_param(const State &glState, bool isCallValid, GLenum face, MaterialParameter pnamePacked, const GLfixed * param, angle::ParamCapture *paramCapture);
void CaptureMultMatrixf_m(const State &glState, bool isCallValid, const GLfloat * m, angle::ParamCapture *paramCapture);
void CaptureMultMatrixx_m(const State &glState, bool isCallValid, const GLfixed * m, angle::ParamCapture *paramCapture);
void CaptureNormalPointer_pointer(const State &glState, bool isCallValid, VertexAttribType typePacked, GLsizei stride, const void * pointer, angle::ParamCapture *paramCapture);
void CapturePointParameterfv_params(const State &glState, bool isCallValid, PointParameter pnamePacked, const GLfloat * params, angle::ParamCapture *paramCapture);
void CapturePointParameterxv_params(const State &glState, bool isCallValid, PointParameter pnamePacked, const GLfixed * params, angle::ParamCapture *paramCapture);
void CaptureTexCoordPointer_pointer(const State &glState, bool isCallValid, GLint size, VertexAttribType typePacked, GLsizei stride, const void * pointer, angle::ParamCapture *paramCapture);
void CaptureTexEnvfv_params(const State &glState, bool isCallValid, TextureEnvTarget targetPacked, TextureEnvParameter pnamePacked, const GLfloat * params, angle::ParamCapture *paramCapture);
void CaptureTexEnviv_params(const State &glState, bool isCallValid, TextureEnvTarget targetPacked, TextureEnvParameter pnamePacked, const GLint * params, angle::ParamCapture *paramCapture);
void CaptureTexEnvxv_params(const State &glState, bool isCallValid, TextureEnvTarget targetPacked, TextureEnvParameter pnamePacked, const GLfixed * params, angle::ParamCapture *paramCapture);
void CaptureTexParameterxv_params(const State &glState, bool isCallValid, TextureType targetPacked, GLenum pname, const GLfixed * params, angle::ParamCapture *paramCapture);
void CaptureVertexPointer_pointer(const State &glState, bool isCallValid, GLint size, VertexAttribType typePacked, GLsizei stride, const void * pointer, angle::ParamCapture *paramCapture);
}  // namespace gl

#endif  // LIBANGLE_CAPTURE_GLES_1_0_AUTOGEN_H_
