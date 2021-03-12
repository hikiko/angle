// GENERATED FILE - DO NOT EDIT.
// Generated by generate_entry_points.py using data from gl.xml.
//
// Copyright 2020 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// entry_points_gl_4_autogen.h:
//   Defines the Desktop GL 4.x entry points.

#ifndef LIBGL_ENTRY_POINTS_GL_4_AUTOGEN_H_
#define LIBGL_ENTRY_POINTS_GL_4_AUTOGEN_H_

#include <export.h>
#include "angle_gl.h"


extern "C" {

// GL 4.0
ANGLE_EXPORT void GL_APIENTRY GL_BeginQueryIndexed(GLenum target, GLuint index, GLuint id);
ANGLE_EXPORT void GL_APIENTRY GL_BindTransformFeedback(GLenum target, GLuint id);
ANGLE_EXPORT void GL_APIENTRY GL_BlendEquationSeparatei(GLuint buf, GLenum modeRGB, GLenum modeAlpha);
ANGLE_EXPORT void GL_APIENTRY GL_BlendEquationi(GLuint buf, GLenum mode);
ANGLE_EXPORT void GL_APIENTRY GL_BlendFuncSeparatei(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
ANGLE_EXPORT void GL_APIENTRY GL_BlendFunci(GLuint buf, GLenum src, GLenum dst);
ANGLE_EXPORT void GL_APIENTRY GL_DeleteTransformFeedbacks(GLsizei n, const GLuint *ids);
ANGLE_EXPORT void GL_APIENTRY GL_DrawArraysIndirect(GLenum mode, const void *indirect);
ANGLE_EXPORT void GL_APIENTRY GL_DrawElementsIndirect(GLenum mode, GLenum type, const void *indirect);
ANGLE_EXPORT void GL_APIENTRY GL_DrawTransformFeedback(GLenum mode, GLuint id);
ANGLE_EXPORT void GL_APIENTRY GL_DrawTransformFeedbackStream(GLenum mode, GLuint id, GLuint stream);
ANGLE_EXPORT void GL_APIENTRY GL_EndQueryIndexed(GLenum target, GLuint index);
ANGLE_EXPORT void GL_APIENTRY GL_GenTransformFeedbacks(GLsizei n, GLuint *ids);
ANGLE_EXPORT void GL_APIENTRY GL_GetActiveSubroutineName(GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei *length, GLchar *name);
ANGLE_EXPORT void GL_APIENTRY GL_GetActiveSubroutineUniformName(GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei *length, GLchar *name);
ANGLE_EXPORT void GL_APIENTRY GL_GetActiveSubroutineUniformiv(GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint *values);
ANGLE_EXPORT void GL_APIENTRY GL_GetProgramStageiv(GLuint program, GLenum shadertype, GLenum pname, GLint *values);
ANGLE_EXPORT void GL_APIENTRY GL_GetQueryIndexediv(GLenum target, GLuint index, GLenum pname, GLint *params);
ANGLE_EXPORT GLuint GL_APIENTRY GL_GetSubroutineIndex(GLuint program, GLenum shadertype, const GLchar *name);
ANGLE_EXPORT GLint GL_APIENTRY GL_GetSubroutineUniformLocation(GLuint program, GLenum shadertype, const GLchar *name);
ANGLE_EXPORT void GL_APIENTRY GL_GetUniformSubroutineuiv(GLenum shadertype, GLint location, GLuint *params);
ANGLE_EXPORT void GL_APIENTRY GL_GetUniformdv(GLuint program, GLint location, GLdouble *params);
ANGLE_EXPORT GLboolean GL_APIENTRY GL_IsTransformFeedback(GLuint id);
ANGLE_EXPORT void GL_APIENTRY GL_MinSampleShading(GLfloat value);
ANGLE_EXPORT void GL_APIENTRY GL_PatchParameterfv(GLenum pname, const GLfloat *values);
ANGLE_EXPORT void GL_APIENTRY GL_PatchParameteri(GLenum pname, GLint value);
ANGLE_EXPORT void GL_APIENTRY GL_PauseTransformFeedback();
ANGLE_EXPORT void GL_APIENTRY GL_ResumeTransformFeedback();
ANGLE_EXPORT void GL_APIENTRY GL_Uniform1d(GLint location, GLdouble x);
ANGLE_EXPORT void GL_APIENTRY GL_Uniform1dv(GLint location, GLsizei count, const GLdouble *value);
ANGLE_EXPORT void GL_APIENTRY GL_Uniform2d(GLint location, GLdouble x, GLdouble y);
ANGLE_EXPORT void GL_APIENTRY GL_Uniform2dv(GLint location, GLsizei count, const GLdouble *value);
ANGLE_EXPORT void GL_APIENTRY GL_Uniform3d(GLint location, GLdouble x, GLdouble y, GLdouble z);
ANGLE_EXPORT void GL_APIENTRY GL_Uniform3dv(GLint location, GLsizei count, const GLdouble *value);
ANGLE_EXPORT void GL_APIENTRY GL_Uniform4d(GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
ANGLE_EXPORT void GL_APIENTRY GL_Uniform4dv(GLint location, GLsizei count, const GLdouble *value);
ANGLE_EXPORT void GL_APIENTRY GL_UniformMatrix2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
ANGLE_EXPORT void GL_APIENTRY GL_UniformMatrix2x3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
ANGLE_EXPORT void GL_APIENTRY GL_UniformMatrix2x4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
ANGLE_EXPORT void GL_APIENTRY GL_UniformMatrix3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
ANGLE_EXPORT void GL_APIENTRY GL_UniformMatrix3x2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
ANGLE_EXPORT void GL_APIENTRY GL_UniformMatrix3x4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
ANGLE_EXPORT void GL_APIENTRY GL_UniformMatrix4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
ANGLE_EXPORT void GL_APIENTRY GL_UniformMatrix4x2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
ANGLE_EXPORT void GL_APIENTRY GL_UniformMatrix4x3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
ANGLE_EXPORT void GL_APIENTRY GL_UniformSubroutinesuiv(GLenum shadertype, GLsizei count, const GLuint *indices);

// GL 4.1
ANGLE_EXPORT void GL_APIENTRY GL_ActiveShaderProgram(GLuint pipeline, GLuint program);
ANGLE_EXPORT void GL_APIENTRY GL_BindProgramPipeline(GLuint pipeline);
ANGLE_EXPORT void GL_APIENTRY GL_ClearDepthf(GLfloat d);
ANGLE_EXPORT GLuint GL_APIENTRY GL_CreateShaderProgramv(GLenum type, GLsizei count, const GLchar *const*strings);
ANGLE_EXPORT void GL_APIENTRY GL_DeleteProgramPipelines(GLsizei n, const GLuint *pipelines);
ANGLE_EXPORT void GL_APIENTRY GL_DepthRangeArrayv(GLuint first, GLsizei count, const GLdouble *v);
ANGLE_EXPORT void GL_APIENTRY GL_DepthRangeIndexed(GLuint index, GLdouble n, GLdouble f);
ANGLE_EXPORT void GL_APIENTRY GL_DepthRangef(GLfloat n, GLfloat f);
ANGLE_EXPORT void GL_APIENTRY GL_GenProgramPipelines(GLsizei n, GLuint *pipelines);
ANGLE_EXPORT void GL_APIENTRY GL_GetDoublei_v(GLenum target, GLuint index, GLdouble *data);
ANGLE_EXPORT void GL_APIENTRY GL_GetFloati_v(GLenum target, GLuint index, GLfloat *data);
ANGLE_EXPORT void GL_APIENTRY GL_GetProgramBinary(GLuint program, GLsizei bufSize, GLsizei *length, GLenum *binaryFormat, void *binary);
ANGLE_EXPORT void GL_APIENTRY GL_GetProgramPipelineInfoLog(GLuint pipeline, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
ANGLE_EXPORT void GL_APIENTRY GL_GetProgramPipelineiv(GLuint pipeline, GLenum pname, GLint *params);
ANGLE_EXPORT void GL_APIENTRY GL_GetShaderPrecisionFormat(GLenum shadertype, GLenum precisiontype, GLint *range, GLint *precision);
ANGLE_EXPORT void GL_APIENTRY GL_GetVertexAttribLdv(GLuint index, GLenum pname, GLdouble *params);
ANGLE_EXPORT GLboolean GL_APIENTRY GL_IsProgramPipeline(GLuint pipeline);
ANGLE_EXPORT void GL_APIENTRY GL_ProgramBinary(GLuint program, GLenum binaryFormat, const void *binary, GLsizei length);
ANGLE_EXPORT void GL_APIENTRY GL_ProgramParameteri(GLuint program, GLenum pname, GLint value);
ANGLE_EXPORT void GL_APIENTRY GL_ProgramUniform1d(GLuint program, GLint location, GLdouble v0);
ANGLE_EXPORT void GL_APIENTRY GL_ProgramUniform1dv(GLuint program, GLint location, GLsizei count, const GLdouble *value);
ANGLE_EXPORT void GL_APIENTRY GL_ProgramUniform1f(GLuint program, GLint location, GLfloat v0);
ANGLE_EXPORT void GL_APIENTRY GL_ProgramUniform1fv(GLuint program, GLint location, GLsizei count, const GLfloat *value);
ANGLE_EXPORT void GL_APIENTRY GL_ProgramUniform1i(GLuint program, GLint location, GLint v0);
ANGLE_EXPORT void GL_APIENTRY GL_ProgramUniform1iv(GLuint program, GLint location, GLsizei count, const GLint *value);
ANGLE_EXPORT void GL_APIENTRY GL_ProgramUniform1ui(GLuint program, GLint location, GLuint v0);
ANGLE_EXPORT void GL_APIENTRY GL_ProgramUniform1uiv(GLuint program, GLint location, GLsizei count, const GLuint *value);
ANGLE_EXPORT void GL_APIENTRY GL_ProgramUniform2d(GLuint program, GLint location, GLdouble v0, GLdouble v1);
ANGLE_EXPORT void GL_APIENTRY GL_ProgramUniform2dv(GLuint program, GLint location, GLsizei count, const GLdouble *value);
ANGLE_EXPORT void GL_APIENTRY GL_ProgramUniform2f(GLuint program, GLint location, GLfloat v0, GLfloat v1);
ANGLE_EXPORT void GL_APIENTRY GL_ProgramUniform2fv(GLuint program, GLint location, GLsizei count, const GLfloat *value);
ANGLE_EXPORT void GL_APIENTRY GL_ProgramUniform2i(GLuint program, GLint location, GLint v0, GLint v1);
ANGLE_EXPORT void GL_APIENTRY GL_ProgramUniform2iv(GLuint program, GLint location, GLsizei count, const GLint *value);
ANGLE_EXPORT void GL_APIENTRY GL_ProgramUniform2ui(GLuint program, GLint location, GLuint v0, GLuint v1);
ANGLE_EXPORT void GL_APIENTRY GL_ProgramUniform2uiv(GLuint program, GLint location, GLsizei count, const GLuint *value);
ANGLE_EXPORT void GL_APIENTRY GL_ProgramUniform3d(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2);
ANGLE_EXPORT void GL_APIENTRY GL_ProgramUniform3dv(GLuint program, GLint location, GLsizei count, const GLdouble *value);
ANGLE_EXPORT void GL_APIENTRY GL_ProgramUniform3f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
ANGLE_EXPORT void GL_APIENTRY GL_ProgramUniform3fv(GLuint program, GLint location, GLsizei count, const GLfloat *value);
ANGLE_EXPORT void GL_APIENTRY GL_ProgramUniform3i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2);
ANGLE_EXPORT void GL_APIENTRY GL_ProgramUniform3iv(GLuint program, GLint location, GLsizei count, const GLint *value);
ANGLE_EXPORT void GL_APIENTRY GL_ProgramUniform3ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2);
ANGLE_EXPORT void GL_APIENTRY GL_ProgramUniform3uiv(GLuint program, GLint location, GLsizei count, const GLuint *value);
ANGLE_EXPORT void GL_APIENTRY GL_ProgramUniform4d(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3);
ANGLE_EXPORT void GL_APIENTRY GL_ProgramUniform4dv(GLuint program, GLint location, GLsizei count, const GLdouble *value);
ANGLE_EXPORT void GL_APIENTRY GL_ProgramUniform4f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
ANGLE_EXPORT void GL_APIENTRY GL_ProgramUniform4fv(GLuint program, GLint location, GLsizei count, const GLfloat *value);
ANGLE_EXPORT void GL_APIENTRY GL_ProgramUniform4i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
ANGLE_EXPORT void GL_APIENTRY GL_ProgramUniform4iv(GLuint program, GLint location, GLsizei count, const GLint *value);
ANGLE_EXPORT void GL_APIENTRY GL_ProgramUniform4ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
ANGLE_EXPORT void GL_APIENTRY GL_ProgramUniform4uiv(GLuint program, GLint location, GLsizei count, const GLuint *value);
ANGLE_EXPORT void GL_APIENTRY GL_ProgramUniformMatrix2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
ANGLE_EXPORT void GL_APIENTRY GL_ProgramUniformMatrix2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
ANGLE_EXPORT void GL_APIENTRY GL_ProgramUniformMatrix2x3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
ANGLE_EXPORT void GL_APIENTRY GL_ProgramUniformMatrix2x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
ANGLE_EXPORT void GL_APIENTRY GL_ProgramUniformMatrix2x4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
ANGLE_EXPORT void GL_APIENTRY GL_ProgramUniformMatrix2x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
ANGLE_EXPORT void GL_APIENTRY GL_ProgramUniformMatrix3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
ANGLE_EXPORT void GL_APIENTRY GL_ProgramUniformMatrix3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
ANGLE_EXPORT void GL_APIENTRY GL_ProgramUniformMatrix3x2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
ANGLE_EXPORT void GL_APIENTRY GL_ProgramUniformMatrix3x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
ANGLE_EXPORT void GL_APIENTRY GL_ProgramUniformMatrix3x4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
ANGLE_EXPORT void GL_APIENTRY GL_ProgramUniformMatrix3x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
ANGLE_EXPORT void GL_APIENTRY GL_ProgramUniformMatrix4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
ANGLE_EXPORT void GL_APIENTRY GL_ProgramUniformMatrix4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
ANGLE_EXPORT void GL_APIENTRY GL_ProgramUniformMatrix4x2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
ANGLE_EXPORT void GL_APIENTRY GL_ProgramUniformMatrix4x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
ANGLE_EXPORT void GL_APIENTRY GL_ProgramUniformMatrix4x3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
ANGLE_EXPORT void GL_APIENTRY GL_ProgramUniformMatrix4x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
ANGLE_EXPORT void GL_APIENTRY GL_ReleaseShaderCompiler();
ANGLE_EXPORT void GL_APIENTRY GL_ScissorArrayv(GLuint first, GLsizei count, const GLint *v);
ANGLE_EXPORT void GL_APIENTRY GL_ScissorIndexed(GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height);
ANGLE_EXPORT void GL_APIENTRY GL_ScissorIndexedv(GLuint index, const GLint *v);
ANGLE_EXPORT void GL_APIENTRY GL_ShaderBinary(GLsizei count, const GLuint *shaders, GLenum binaryformat, const void *binary, GLsizei length);
ANGLE_EXPORT void GL_APIENTRY GL_UseProgramStages(GLuint pipeline, GLbitfield stages, GLuint program);
ANGLE_EXPORT void GL_APIENTRY GL_ValidateProgramPipeline(GLuint pipeline);
ANGLE_EXPORT void GL_APIENTRY GL_VertexAttribL1d(GLuint index, GLdouble x);
ANGLE_EXPORT void GL_APIENTRY GL_VertexAttribL1dv(GLuint index, const GLdouble *v);
ANGLE_EXPORT void GL_APIENTRY GL_VertexAttribL2d(GLuint index, GLdouble x, GLdouble y);
ANGLE_EXPORT void GL_APIENTRY GL_VertexAttribL2dv(GLuint index, const GLdouble *v);
ANGLE_EXPORT void GL_APIENTRY GL_VertexAttribL3d(GLuint index, GLdouble x, GLdouble y, GLdouble z);
ANGLE_EXPORT void GL_APIENTRY GL_VertexAttribL3dv(GLuint index, const GLdouble *v);
ANGLE_EXPORT void GL_APIENTRY GL_VertexAttribL4d(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
ANGLE_EXPORT void GL_APIENTRY GL_VertexAttribL4dv(GLuint index, const GLdouble *v);
ANGLE_EXPORT void GL_APIENTRY GL_VertexAttribLPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer);
ANGLE_EXPORT void GL_APIENTRY GL_ViewportArrayv(GLuint first, GLsizei count, const GLfloat *v);
ANGLE_EXPORT void GL_APIENTRY GL_ViewportIndexedf(GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h);
ANGLE_EXPORT void GL_APIENTRY GL_ViewportIndexedfv(GLuint index, const GLfloat *v);

// GL 4.2
ANGLE_EXPORT void GL_APIENTRY GL_BindImageTexture(GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format);
ANGLE_EXPORT void GL_APIENTRY GL_DrawArraysInstancedBaseInstance(GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance);
ANGLE_EXPORT void GL_APIENTRY GL_DrawElementsInstancedBaseInstance(GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLuint baseinstance);
ANGLE_EXPORT void GL_APIENTRY GL_DrawElementsInstancedBaseVertexBaseInstance(GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance);
ANGLE_EXPORT void GL_APIENTRY GL_DrawTransformFeedbackInstanced(GLenum mode, GLuint id, GLsizei instancecount);
ANGLE_EXPORT void GL_APIENTRY GL_DrawTransformFeedbackStreamInstanced(GLenum mode, GLuint id, GLuint stream, GLsizei instancecount);
ANGLE_EXPORT void GL_APIENTRY GL_GetActiveAtomicCounterBufferiv(GLuint program, GLuint bufferIndex, GLenum pname, GLint *params);
ANGLE_EXPORT void GL_APIENTRY GL_GetInternalformativ(GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint *params);
ANGLE_EXPORT void GL_APIENTRY GL_MemoryBarrier(GLbitfield barriers);
ANGLE_EXPORT void GL_APIENTRY GL_TexStorage1D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width);
ANGLE_EXPORT void GL_APIENTRY GL_TexStorage2D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
ANGLE_EXPORT void GL_APIENTRY GL_TexStorage3D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);

// GL 4.3
ANGLE_EXPORT void GL_APIENTRY GL_BindVertexBuffer(GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
ANGLE_EXPORT void GL_APIENTRY GL_ClearBufferData(GLenum target, GLenum internalformat, GLenum format, GLenum type, const void *data);
ANGLE_EXPORT void GL_APIENTRY GL_ClearBufferSubData(GLenum target, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void *data);
ANGLE_EXPORT void GL_APIENTRY GL_CopyImageSubData(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth);
ANGLE_EXPORT void GL_APIENTRY GL_DebugMessageCallback(GLDEBUGPROC callback, const void *userParam);
ANGLE_EXPORT void GL_APIENTRY GL_DebugMessageControl(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled);
ANGLE_EXPORT void GL_APIENTRY GL_DebugMessageInsert(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar *buf);
ANGLE_EXPORT void GL_APIENTRY GL_DispatchCompute(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z);
ANGLE_EXPORT void GL_APIENTRY GL_DispatchComputeIndirect(GLintptr indirect);
ANGLE_EXPORT void GL_APIENTRY GL_FramebufferParameteri(GLenum target, GLenum pname, GLint param);
ANGLE_EXPORT GLuint GL_APIENTRY GL_GetDebugMessageLog(GLuint count, GLsizei bufSize, GLenum *sources, GLenum *types, GLuint *ids, GLenum *severities, GLsizei *lengths, GLchar *messageLog);
ANGLE_EXPORT void GL_APIENTRY GL_GetFramebufferParameteriv(GLenum target, GLenum pname, GLint *params);
ANGLE_EXPORT void GL_APIENTRY GL_GetInternalformati64v(GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint64 *params);
ANGLE_EXPORT void GL_APIENTRY GL_GetObjectLabel(GLenum identifier, GLuint name, GLsizei bufSize, GLsizei *length, GLchar *label);
ANGLE_EXPORT void GL_APIENTRY GL_GetObjectPtrLabel(const void *ptr, GLsizei bufSize, GLsizei *length, GLchar *label);
ANGLE_EXPORT void GL_APIENTRY GL_GetProgramInterfaceiv(GLuint program, GLenum programInterface, GLenum pname, GLint *params);
ANGLE_EXPORT GLuint GL_APIENTRY GL_GetProgramResourceIndex(GLuint program, GLenum programInterface, const GLchar *name);
ANGLE_EXPORT GLint GL_APIENTRY GL_GetProgramResourceLocation(GLuint program, GLenum programInterface, const GLchar *name);
ANGLE_EXPORT GLint GL_APIENTRY GL_GetProgramResourceLocationIndex(GLuint program, GLenum programInterface, const GLchar *name);
ANGLE_EXPORT void GL_APIENTRY GL_GetProgramResourceName(GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei *length, GLchar *name);
ANGLE_EXPORT void GL_APIENTRY GL_GetProgramResourceiv(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum *props, GLsizei bufSize, GLsizei *length, GLint *params);
ANGLE_EXPORT void GL_APIENTRY GL_InvalidateBufferData(GLuint buffer);
ANGLE_EXPORT void GL_APIENTRY GL_InvalidateBufferSubData(GLuint buffer, GLintptr offset, GLsizeiptr length);
ANGLE_EXPORT void GL_APIENTRY GL_InvalidateFramebuffer(GLenum target, GLsizei numAttachments, const GLenum *attachments);
ANGLE_EXPORT void GL_APIENTRY GL_InvalidateSubFramebuffer(GLenum target, GLsizei numAttachments, const GLenum *attachments, GLint x, GLint y, GLsizei width, GLsizei height);
ANGLE_EXPORT void GL_APIENTRY GL_InvalidateTexImage(GLuint texture, GLint level);
ANGLE_EXPORT void GL_APIENTRY GL_InvalidateTexSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth);
ANGLE_EXPORT void GL_APIENTRY GL_MultiDrawArraysIndirect(GLenum mode, const void *indirect, GLsizei drawcount, GLsizei stride);
ANGLE_EXPORT void GL_APIENTRY GL_MultiDrawElementsIndirect(GLenum mode, GLenum type, const void *indirect, GLsizei drawcount, GLsizei stride);
ANGLE_EXPORT void GL_APIENTRY GL_ObjectLabel(GLenum identifier, GLuint name, GLsizei length, const GLchar *label);
ANGLE_EXPORT void GL_APIENTRY GL_ObjectPtrLabel(const void *ptr, GLsizei length, const GLchar *label);
ANGLE_EXPORT void GL_APIENTRY GL_PopDebugGroup();
ANGLE_EXPORT void GL_APIENTRY GL_PushDebugGroup(GLenum source, GLuint id, GLsizei length, const GLchar *message);
ANGLE_EXPORT void GL_APIENTRY GL_ShaderStorageBlockBinding(GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding);
ANGLE_EXPORT void GL_APIENTRY GL_TexBufferRange(GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
ANGLE_EXPORT void GL_APIENTRY GL_TexStorage2DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
ANGLE_EXPORT void GL_APIENTRY GL_TexStorage3DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
ANGLE_EXPORT void GL_APIENTRY GL_TextureView(GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers);
ANGLE_EXPORT void GL_APIENTRY GL_VertexAttribBinding(GLuint attribindex, GLuint bindingindex);
ANGLE_EXPORT void GL_APIENTRY GL_VertexAttribFormat(GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
ANGLE_EXPORT void GL_APIENTRY GL_VertexAttribIFormat(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
ANGLE_EXPORT void GL_APIENTRY GL_VertexAttribLFormat(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
ANGLE_EXPORT void GL_APIENTRY GL_VertexBindingDivisor(GLuint bindingindex, GLuint divisor);

// GL 4.4
ANGLE_EXPORT void GL_APIENTRY GL_BindBuffersBase(GLenum target, GLuint first, GLsizei count, const GLuint *buffers);
ANGLE_EXPORT void GL_APIENTRY GL_BindBuffersRange(GLenum target, GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizeiptr *sizes);
ANGLE_EXPORT void GL_APIENTRY GL_BindImageTextures(GLuint first, GLsizei count, const GLuint *textures);
ANGLE_EXPORT void GL_APIENTRY GL_BindSamplers(GLuint first, GLsizei count, const GLuint *samplers);
ANGLE_EXPORT void GL_APIENTRY GL_BindTextures(GLuint first, GLsizei count, const GLuint *textures);
ANGLE_EXPORT void GL_APIENTRY GL_BindVertexBuffers(GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizei *strides);
ANGLE_EXPORT void GL_APIENTRY GL_BufferStorage(GLenum target, GLsizeiptr size, const void *data, GLbitfield flags);
ANGLE_EXPORT void GL_APIENTRY GL_ClearTexImage(GLuint texture, GLint level, GLenum format, GLenum type, const void *data);
ANGLE_EXPORT void GL_APIENTRY GL_ClearTexSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *data);

// GL 4.5
ANGLE_EXPORT void GL_APIENTRY GL_BindTextureUnit(GLuint unit, GLuint texture);
ANGLE_EXPORT void GL_APIENTRY GL_BlitNamedFramebuffer(GLuint readFramebuffer, GLuint drawFramebuffer, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
ANGLE_EXPORT GLenum GL_APIENTRY GL_CheckNamedFramebufferStatus(GLuint framebuffer, GLenum target);
ANGLE_EXPORT void GL_APIENTRY GL_ClearNamedBufferData(GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void *data);
ANGLE_EXPORT void GL_APIENTRY GL_ClearNamedBufferSubData(GLuint buffer, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void *data);
ANGLE_EXPORT void GL_APIENTRY GL_ClearNamedFramebufferfi(GLuint framebuffer, GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil);
ANGLE_EXPORT void GL_APIENTRY GL_ClearNamedFramebufferfv(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLfloat *value);
ANGLE_EXPORT void GL_APIENTRY GL_ClearNamedFramebufferiv(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLint *value);
ANGLE_EXPORT void GL_APIENTRY GL_ClearNamedFramebufferuiv(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLuint *value);
ANGLE_EXPORT void GL_APIENTRY GL_ClipControl(GLenum origin, GLenum depth);
ANGLE_EXPORT void GL_APIENTRY GL_CompressedTextureSubImage1D(GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *data);
ANGLE_EXPORT void GL_APIENTRY GL_CompressedTextureSubImage2D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data);
ANGLE_EXPORT void GL_APIENTRY GL_CompressedTextureSubImage3D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data);
ANGLE_EXPORT void GL_APIENTRY GL_CopyNamedBufferSubData(GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
ANGLE_EXPORT void GL_APIENTRY GL_CopyTextureSubImage1D(GLuint texture, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
ANGLE_EXPORT void GL_APIENTRY GL_CopyTextureSubImage2D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
ANGLE_EXPORT void GL_APIENTRY GL_CopyTextureSubImage3D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
ANGLE_EXPORT void GL_APIENTRY GL_CreateBuffers(GLsizei n, GLuint *buffers);
ANGLE_EXPORT void GL_APIENTRY GL_CreateFramebuffers(GLsizei n, GLuint *framebuffers);
ANGLE_EXPORT void GL_APIENTRY GL_CreateProgramPipelines(GLsizei n, GLuint *pipelines);
ANGLE_EXPORT void GL_APIENTRY GL_CreateQueries(GLenum target, GLsizei n, GLuint *ids);
ANGLE_EXPORT void GL_APIENTRY GL_CreateRenderbuffers(GLsizei n, GLuint *renderbuffers);
ANGLE_EXPORT void GL_APIENTRY GL_CreateSamplers(GLsizei n, GLuint *samplers);
ANGLE_EXPORT void GL_APIENTRY GL_CreateTextures(GLenum target, GLsizei n, GLuint *textures);
ANGLE_EXPORT void GL_APIENTRY GL_CreateTransformFeedbacks(GLsizei n, GLuint *ids);
ANGLE_EXPORT void GL_APIENTRY GL_CreateVertexArrays(GLsizei n, GLuint *arrays);
ANGLE_EXPORT void GL_APIENTRY GL_DisableVertexArrayAttrib(GLuint vaobj, GLuint index);
ANGLE_EXPORT void GL_APIENTRY GL_EnableVertexArrayAttrib(GLuint vaobj, GLuint index);
ANGLE_EXPORT void GL_APIENTRY GL_FlushMappedNamedBufferRange(GLuint buffer, GLintptr offset, GLsizeiptr length);
ANGLE_EXPORT void GL_APIENTRY GL_GenerateTextureMipmap(GLuint texture);
ANGLE_EXPORT void GL_APIENTRY GL_GetCompressedTextureImage(GLuint texture, GLint level, GLsizei bufSize, void *pixels);
ANGLE_EXPORT void GL_APIENTRY GL_GetCompressedTextureSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei bufSize, void *pixels);
ANGLE_EXPORT GLenum GL_APIENTRY GL_GetGraphicsResetStatus();
ANGLE_EXPORT void GL_APIENTRY GL_GetNamedBufferParameteri64v(GLuint buffer, GLenum pname, GLint64 *params);
ANGLE_EXPORT void GL_APIENTRY GL_GetNamedBufferParameteriv(GLuint buffer, GLenum pname, GLint *params);
ANGLE_EXPORT void GL_APIENTRY GL_GetNamedBufferPointerv(GLuint buffer, GLenum pname, void **params);
ANGLE_EXPORT void GL_APIENTRY GL_GetNamedBufferSubData(GLuint buffer, GLintptr offset, GLsizeiptr size, void *data);
ANGLE_EXPORT void GL_APIENTRY GL_GetNamedFramebufferAttachmentParameteriv(GLuint framebuffer, GLenum attachment, GLenum pname, GLint *params);
ANGLE_EXPORT void GL_APIENTRY GL_GetNamedFramebufferParameteriv(GLuint framebuffer, GLenum pname, GLint *param);
ANGLE_EXPORT void GL_APIENTRY GL_GetNamedRenderbufferParameteriv(GLuint renderbuffer, GLenum pname, GLint *params);
ANGLE_EXPORT void GL_APIENTRY GL_GetQueryBufferObjecti64v(GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
ANGLE_EXPORT void GL_APIENTRY GL_GetQueryBufferObjectiv(GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
ANGLE_EXPORT void GL_APIENTRY GL_GetQueryBufferObjectui64v(GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
ANGLE_EXPORT void GL_APIENTRY GL_GetQueryBufferObjectuiv(GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
ANGLE_EXPORT void GL_APIENTRY GL_GetTextureImage(GLuint texture, GLint level, GLenum format, GLenum type, GLsizei bufSize, void *pixels);
ANGLE_EXPORT void GL_APIENTRY GL_GetTextureLevelParameterfv(GLuint texture, GLint level, GLenum pname, GLfloat *params);
ANGLE_EXPORT void GL_APIENTRY GL_GetTextureLevelParameteriv(GLuint texture, GLint level, GLenum pname, GLint *params);
ANGLE_EXPORT void GL_APIENTRY GL_GetTextureParameterIiv(GLuint texture, GLenum pname, GLint *params);
ANGLE_EXPORT void GL_APIENTRY GL_GetTextureParameterIuiv(GLuint texture, GLenum pname, GLuint *params);
ANGLE_EXPORT void GL_APIENTRY GL_GetTextureParameterfv(GLuint texture, GLenum pname, GLfloat *params);
ANGLE_EXPORT void GL_APIENTRY GL_GetTextureParameteriv(GLuint texture, GLenum pname, GLint *params);
ANGLE_EXPORT void GL_APIENTRY GL_GetTextureSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLsizei bufSize, void *pixels);
ANGLE_EXPORT void GL_APIENTRY GL_GetTransformFeedbacki64_v(GLuint xfb, GLenum pname, GLuint index, GLint64 *param);
ANGLE_EXPORT void GL_APIENTRY GL_GetTransformFeedbacki_v(GLuint xfb, GLenum pname, GLuint index, GLint *param);
ANGLE_EXPORT void GL_APIENTRY GL_GetTransformFeedbackiv(GLuint xfb, GLenum pname, GLint *param);
ANGLE_EXPORT void GL_APIENTRY GL_GetVertexArrayIndexed64iv(GLuint vaobj, GLuint index, GLenum pname, GLint64 *param);
ANGLE_EXPORT void GL_APIENTRY GL_GetVertexArrayIndexediv(GLuint vaobj, GLuint index, GLenum pname, GLint *param);
ANGLE_EXPORT void GL_APIENTRY GL_GetVertexArrayiv(GLuint vaobj, GLenum pname, GLint *param);
ANGLE_EXPORT void GL_APIENTRY GL_GetnColorTable(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void *table);
ANGLE_EXPORT void GL_APIENTRY GL_GetnCompressedTexImage(GLenum target, GLint lod, GLsizei bufSize, void *pixels);
ANGLE_EXPORT void GL_APIENTRY GL_GetnConvolutionFilter(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void *image);
ANGLE_EXPORT void GL_APIENTRY GL_GetnHistogram(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void *values);
ANGLE_EXPORT void GL_APIENTRY GL_GetnMapdv(GLenum target, GLenum query, GLsizei bufSize, GLdouble *v);
ANGLE_EXPORT void GL_APIENTRY GL_GetnMapfv(GLenum target, GLenum query, GLsizei bufSize, GLfloat *v);
ANGLE_EXPORT void GL_APIENTRY GL_GetnMapiv(GLenum target, GLenum query, GLsizei bufSize, GLint *v);
ANGLE_EXPORT void GL_APIENTRY GL_GetnMinmax(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void *values);
ANGLE_EXPORT void GL_APIENTRY GL_GetnPixelMapfv(GLenum map, GLsizei bufSize, GLfloat *values);
ANGLE_EXPORT void GL_APIENTRY GL_GetnPixelMapuiv(GLenum map, GLsizei bufSize, GLuint *values);
ANGLE_EXPORT void GL_APIENTRY GL_GetnPixelMapusv(GLenum map, GLsizei bufSize, GLushort *values);
ANGLE_EXPORT void GL_APIENTRY GL_GetnPolygonStipple(GLsizei bufSize, GLubyte *pattern);
ANGLE_EXPORT void GL_APIENTRY GL_GetnSeparableFilter(GLenum target, GLenum format, GLenum type, GLsizei rowBufSize, void *row, GLsizei columnBufSize, void *column, void *span);
ANGLE_EXPORT void GL_APIENTRY GL_GetnTexImage(GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void *pixels);
ANGLE_EXPORT void GL_APIENTRY GL_GetnUniformdv(GLuint program, GLint location, GLsizei bufSize, GLdouble *params);
ANGLE_EXPORT void GL_APIENTRY GL_GetnUniformfv(GLuint program, GLint location, GLsizei bufSize, GLfloat *params);
ANGLE_EXPORT void GL_APIENTRY GL_GetnUniformiv(GLuint program, GLint location, GLsizei bufSize, GLint *params);
ANGLE_EXPORT void GL_APIENTRY GL_GetnUniformuiv(GLuint program, GLint location, GLsizei bufSize, GLuint *params);
ANGLE_EXPORT void GL_APIENTRY GL_InvalidateNamedFramebufferData(GLuint framebuffer, GLsizei numAttachments, const GLenum *attachments);
ANGLE_EXPORT void GL_APIENTRY GL_InvalidateNamedFramebufferSubData(GLuint framebuffer, GLsizei numAttachments, const GLenum *attachments, GLint x, GLint y, GLsizei width, GLsizei height);
ANGLE_EXPORT void *GL_APIENTRY GL_MapNamedBuffer(GLuint buffer, GLenum access);
ANGLE_EXPORT void *GL_APIENTRY GL_MapNamedBufferRange(GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access);
ANGLE_EXPORT void GL_APIENTRY GL_MemoryBarrierByRegion(GLbitfield barriers);
ANGLE_EXPORT void GL_APIENTRY GL_NamedBufferData(GLuint buffer, GLsizeiptr size, const void *data, GLenum usage);
ANGLE_EXPORT void GL_APIENTRY GL_NamedBufferStorage(GLuint buffer, GLsizeiptr size, const void *data, GLbitfield flags);
ANGLE_EXPORT void GL_APIENTRY GL_NamedBufferSubData(GLuint buffer, GLintptr offset, GLsizeiptr size, const void *data);
ANGLE_EXPORT void GL_APIENTRY GL_NamedFramebufferDrawBuffer(GLuint framebuffer, GLenum buf);
ANGLE_EXPORT void GL_APIENTRY GL_NamedFramebufferDrawBuffers(GLuint framebuffer, GLsizei n, const GLenum *bufs);
ANGLE_EXPORT void GL_APIENTRY GL_NamedFramebufferParameteri(GLuint framebuffer, GLenum pname, GLint param);
ANGLE_EXPORT void GL_APIENTRY GL_NamedFramebufferReadBuffer(GLuint framebuffer, GLenum src);
ANGLE_EXPORT void GL_APIENTRY GL_NamedFramebufferRenderbuffer(GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
ANGLE_EXPORT void GL_APIENTRY GL_NamedFramebufferTexture(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level);
ANGLE_EXPORT void GL_APIENTRY GL_NamedFramebufferTextureLayer(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer);
ANGLE_EXPORT void GL_APIENTRY GL_NamedRenderbufferStorage(GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height);
ANGLE_EXPORT void GL_APIENTRY GL_NamedRenderbufferStorageMultisample(GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
ANGLE_EXPORT void GL_APIENTRY GL_ReadnPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void *data);
ANGLE_EXPORT void GL_APIENTRY GL_TextureBarrier();
ANGLE_EXPORT void GL_APIENTRY GL_TextureBuffer(GLuint texture, GLenum internalformat, GLuint buffer);
ANGLE_EXPORT void GL_APIENTRY GL_TextureBufferRange(GLuint texture, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
ANGLE_EXPORT void GL_APIENTRY GL_TextureParameterIiv(GLuint texture, GLenum pname, const GLint *params);
ANGLE_EXPORT void GL_APIENTRY GL_TextureParameterIuiv(GLuint texture, GLenum pname, const GLuint *params);
ANGLE_EXPORT void GL_APIENTRY GL_TextureParameterf(GLuint texture, GLenum pname, GLfloat param);
ANGLE_EXPORT void GL_APIENTRY GL_TextureParameterfv(GLuint texture, GLenum pname, const GLfloat *param);
ANGLE_EXPORT void GL_APIENTRY GL_TextureParameteri(GLuint texture, GLenum pname, GLint param);
ANGLE_EXPORT void GL_APIENTRY GL_TextureParameteriv(GLuint texture, GLenum pname, const GLint *param);
ANGLE_EXPORT void GL_APIENTRY GL_TextureStorage1D(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width);
ANGLE_EXPORT void GL_APIENTRY GL_TextureStorage2D(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
ANGLE_EXPORT void GL_APIENTRY GL_TextureStorage2DMultisample(GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
ANGLE_EXPORT void GL_APIENTRY GL_TextureStorage3D(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
ANGLE_EXPORT void GL_APIENTRY GL_TextureStorage3DMultisample(GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
ANGLE_EXPORT void GL_APIENTRY GL_TextureSubImage1D(GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels);
ANGLE_EXPORT void GL_APIENTRY GL_TextureSubImage2D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels);
ANGLE_EXPORT void GL_APIENTRY GL_TextureSubImage3D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels);
ANGLE_EXPORT void GL_APIENTRY GL_TransformFeedbackBufferBase(GLuint xfb, GLuint index, GLuint buffer);
ANGLE_EXPORT void GL_APIENTRY GL_TransformFeedbackBufferRange(GLuint xfb, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
ANGLE_EXPORT GLboolean GL_APIENTRY GL_UnmapNamedBuffer(GLuint buffer);
ANGLE_EXPORT void GL_APIENTRY GL_VertexArrayAttribBinding(GLuint vaobj, GLuint attribindex, GLuint bindingindex);
ANGLE_EXPORT void GL_APIENTRY GL_VertexArrayAttribFormat(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
ANGLE_EXPORT void GL_APIENTRY GL_VertexArrayAttribIFormat(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
ANGLE_EXPORT void GL_APIENTRY GL_VertexArrayAttribLFormat(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
ANGLE_EXPORT void GL_APIENTRY GL_VertexArrayBindingDivisor(GLuint vaobj, GLuint bindingindex, GLuint divisor);
ANGLE_EXPORT void GL_APIENTRY GL_VertexArrayElementBuffer(GLuint vaobj, GLuint buffer);
ANGLE_EXPORT void GL_APIENTRY GL_VertexArrayVertexBuffer(GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
ANGLE_EXPORT void GL_APIENTRY GL_VertexArrayVertexBuffers(GLuint vaobj, GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizei *strides);

// GL 4.6
ANGLE_EXPORT void GL_APIENTRY GL_MultiDrawArraysIndirectCount(GLenum mode, const void *indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
ANGLE_EXPORT void GL_APIENTRY GL_MultiDrawElementsIndirectCount(GLenum mode, GLenum type, const void *indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
ANGLE_EXPORT void GL_APIENTRY GL_PolygonOffsetClamp(GLfloat factor, GLfloat units, GLfloat clamp);
ANGLE_EXPORT void GL_APIENTRY GL_SpecializeShader(GLuint shader, const GLchar *pEntryPoint, GLuint numSpecializationConstants, const GLuint *pConstantIndex, const GLuint *pConstantValue);
} // extern "C"

#endif  // LIBGL_ENTRY_POINTS_GL_4_AUTOGEN_H_
