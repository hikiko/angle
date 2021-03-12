// GENERATED FILE - DO NOT EDIT.
// Generated by generate_entry_points.py using data from gl.xml.
//
// Copyright 2020 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// validationGL4_autogen.h:
//   Validation functions for the OpenGL Desktop GL 4.x entry points.

#ifndef LIBANGLE_VALIDATION_GL4_AUTOGEN_H_
#define LIBANGLE_VALIDATION_GL4_AUTOGEN_H_

#include "common/PackedEnums.h"

namespace gl
{
class Context;


// GL 4.0
bool ValidateBeginQueryIndexed(const Context * context, GLenum target, GLuint index, QueryID idPacked);
bool ValidateDrawTransformFeedback(const Context * context, GLenum mode, TransformFeedbackID idPacked);
bool ValidateDrawTransformFeedbackStream(const Context * context, GLenum mode, TransformFeedbackID idPacked, GLuint stream);
bool ValidateEndQueryIndexed(const Context * context, GLenum target, GLuint index);
bool ValidateGetActiveSubroutineName(const Context * context, ShaderProgramID programPacked, GLenum shadertype, GLuint index, GLsizei bufsize, const GLsizei * length, const GLchar * name);
bool ValidateGetActiveSubroutineUniformName(const Context * context, ShaderProgramID programPacked, GLenum shadertype, GLuint index, GLsizei bufsize, const GLsizei * length, const GLchar * name);
bool ValidateGetActiveSubroutineUniformiv(const Context * context, ShaderProgramID programPacked, GLenum shadertype, GLuint index, GLenum pname, const GLint * values);
bool ValidateGetProgramStageiv(const Context * context, ShaderProgramID programPacked, GLenum shadertype, GLenum pname, const GLint * values);
bool ValidateGetQueryIndexediv(const Context * context, GLenum target, GLuint index, GLenum pname, const GLint * params);
bool ValidateGetSubroutineIndex(const Context * context, ShaderProgramID programPacked, GLenum shadertype, const GLchar * name);
bool ValidateGetSubroutineUniformLocation(const Context * context, ShaderProgramID programPacked, GLenum shadertype, const GLchar * name);
bool ValidateGetUniformSubroutineuiv(const Context * context, GLenum shadertype, GLint location, const GLuint * params);
bool ValidateGetUniformdv(const Context * context, ShaderProgramID programPacked, UniformLocation locationPacked, const GLdouble * params);
bool ValidatePatchParameterfv(const Context * context, GLenum pname, const GLfloat * values);
bool ValidateUniform1d(const Context * context, UniformLocation locationPacked, GLdouble x);
bool ValidateUniform1dv(const Context * context, UniformLocation locationPacked, GLsizei count, const GLdouble * value);
bool ValidateUniform2d(const Context * context, UniformLocation locationPacked, GLdouble x, GLdouble y);
bool ValidateUniform2dv(const Context * context, UniformLocation locationPacked, GLsizei count, const GLdouble * value);
bool ValidateUniform3d(const Context * context, UniformLocation locationPacked, GLdouble x, GLdouble y, GLdouble z);
bool ValidateUniform3dv(const Context * context, UniformLocation locationPacked, GLsizei count, const GLdouble * value);
bool ValidateUniform4d(const Context * context, UniformLocation locationPacked, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
bool ValidateUniform4dv(const Context * context, UniformLocation locationPacked, GLsizei count, const GLdouble * value);
bool ValidateUniformMatrix2dv(const Context * context, UniformLocation locationPacked, GLsizei count, GLboolean transpose, const GLdouble * value);
bool ValidateUniformMatrix2x3dv(const Context * context, UniformLocation locationPacked, GLsizei count, GLboolean transpose, const GLdouble * value);
bool ValidateUniformMatrix2x4dv(const Context * context, UniformLocation locationPacked, GLsizei count, GLboolean transpose, const GLdouble * value);
bool ValidateUniformMatrix3dv(const Context * context, UniformLocation locationPacked, GLsizei count, GLboolean transpose, const GLdouble * value);
bool ValidateUniformMatrix3x2dv(const Context * context, UniformLocation locationPacked, GLsizei count, GLboolean transpose, const GLdouble * value);
bool ValidateUniformMatrix3x4dv(const Context * context, UniformLocation locationPacked, GLsizei count, GLboolean transpose, const GLdouble * value);
bool ValidateUniformMatrix4dv(const Context * context, UniformLocation locationPacked, GLsizei count, GLboolean transpose, const GLdouble * value);
bool ValidateUniformMatrix4x2dv(const Context * context, UniformLocation locationPacked, GLsizei count, GLboolean transpose, const GLdouble * value);
bool ValidateUniformMatrix4x3dv(const Context * context, UniformLocation locationPacked, GLsizei count, GLboolean transpose, const GLdouble * value);
bool ValidateUniformSubroutinesuiv(const Context * context, GLenum shadertype, GLsizei count, const GLuint * indices);

// GL 4.1
bool ValidateDepthRangeArrayv(const Context * context, GLuint first, GLsizei count, const GLdouble * v);
bool ValidateDepthRangeIndexed(const Context * context, GLuint index, GLdouble n, GLdouble f);
bool ValidateGetDoublei_v(const Context * context, GLenum target, GLuint index, const GLdouble * data);
bool ValidateGetFloati_v(const Context * context, GLenum target, GLuint index, const GLfloat * data);
bool ValidateGetVertexAttribLdv(const Context * context, GLuint index, GLenum pname, const GLdouble * params);
bool ValidateProgramUniform1d(const Context * context, ShaderProgramID programPacked, UniformLocation locationPacked, GLdouble v0);
bool ValidateProgramUniform1dv(const Context * context, ShaderProgramID programPacked, UniformLocation locationPacked, GLsizei count, const GLdouble * value);
bool ValidateProgramUniform2d(const Context * context, ShaderProgramID programPacked, UniformLocation locationPacked, GLdouble v0, GLdouble v1);
bool ValidateProgramUniform2dv(const Context * context, ShaderProgramID programPacked, UniformLocation locationPacked, GLsizei count, const GLdouble * value);
bool ValidateProgramUniform3d(const Context * context, ShaderProgramID programPacked, UniformLocation locationPacked, GLdouble v0, GLdouble v1, GLdouble v2);
bool ValidateProgramUniform3dv(const Context * context, ShaderProgramID programPacked, UniformLocation locationPacked, GLsizei count, const GLdouble * value);
bool ValidateProgramUniform4d(const Context * context, ShaderProgramID programPacked, UniformLocation locationPacked, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3);
bool ValidateProgramUniform4dv(const Context * context, ShaderProgramID programPacked, UniformLocation locationPacked, GLsizei count, const GLdouble * value);
bool ValidateProgramUniformMatrix2dv(const Context * context, ShaderProgramID programPacked, UniformLocation locationPacked, GLsizei count, GLboolean transpose, const GLdouble * value);
bool ValidateProgramUniformMatrix2x3dv(const Context * context, ShaderProgramID programPacked, UniformLocation locationPacked, GLsizei count, GLboolean transpose, const GLdouble * value);
bool ValidateProgramUniformMatrix2x4dv(const Context * context, ShaderProgramID programPacked, UniformLocation locationPacked, GLsizei count, GLboolean transpose, const GLdouble * value);
bool ValidateProgramUniformMatrix3dv(const Context * context, ShaderProgramID programPacked, UniformLocation locationPacked, GLsizei count, GLboolean transpose, const GLdouble * value);
bool ValidateProgramUniformMatrix3x2dv(const Context * context, ShaderProgramID programPacked, UniformLocation locationPacked, GLsizei count, GLboolean transpose, const GLdouble * value);
bool ValidateProgramUniformMatrix3x4dv(const Context * context, ShaderProgramID programPacked, UniformLocation locationPacked, GLsizei count, GLboolean transpose, const GLdouble * value);
bool ValidateProgramUniformMatrix4dv(const Context * context, ShaderProgramID programPacked, UniformLocation locationPacked, GLsizei count, GLboolean transpose, const GLdouble * value);
bool ValidateProgramUniformMatrix4x2dv(const Context * context, ShaderProgramID programPacked, UniformLocation locationPacked, GLsizei count, GLboolean transpose, const GLdouble * value);
bool ValidateProgramUniformMatrix4x3dv(const Context * context, ShaderProgramID programPacked, UniformLocation locationPacked, GLsizei count, GLboolean transpose, const GLdouble * value);
bool ValidateScissorArrayv(const Context * context, GLuint first, GLsizei count, const GLint * v);
bool ValidateScissorIndexed(const Context * context, GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height);
bool ValidateScissorIndexedv(const Context * context, GLuint index, const GLint * v);
bool ValidateVertexAttribL1d(const Context * context, GLuint index, GLdouble x);
bool ValidateVertexAttribL1dv(const Context * context, GLuint index, const GLdouble * v);
bool ValidateVertexAttribL2d(const Context * context, GLuint index, GLdouble x, GLdouble y);
bool ValidateVertexAttribL2dv(const Context * context, GLuint index, const GLdouble * v);
bool ValidateVertexAttribL3d(const Context * context, GLuint index, GLdouble x, GLdouble y, GLdouble z);
bool ValidateVertexAttribL3dv(const Context * context, GLuint index, const GLdouble * v);
bool ValidateVertexAttribL4d(const Context * context, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
bool ValidateVertexAttribL4dv(const Context * context, GLuint index, const GLdouble * v);
bool ValidateVertexAttribLPointer(const Context * context, GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer);
bool ValidateViewportArrayv(const Context * context, GLuint first, GLsizei count, const GLfloat * v);
bool ValidateViewportIndexedf(const Context * context, GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h);
bool ValidateViewportIndexedfv(const Context * context, GLuint index, const GLfloat * v);

// GL 4.2
bool ValidateDrawArraysInstancedBaseInstance(const Context * context, PrimitiveMode modePacked, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance);
bool ValidateDrawElementsInstancedBaseInstance(const Context * context, GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLuint baseinstance);
bool ValidateDrawElementsInstancedBaseVertexBaseInstance(const Context * context, PrimitiveMode modePacked, GLsizei count, DrawElementsType typePacked, const void * indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance);
bool ValidateDrawTransformFeedbackInstanced(const Context * context, GLenum mode, TransformFeedbackID idPacked, GLsizei instancecount);
bool ValidateDrawTransformFeedbackStreamInstanced(const Context * context, GLenum mode, TransformFeedbackID idPacked, GLuint stream, GLsizei instancecount);
bool ValidateGetActiveAtomicCounterBufferiv(const Context * context, ShaderProgramID programPacked, GLuint bufferIndex, GLenum pname, const GLint * params);
bool ValidateTexStorage1D(const Context * context, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width);

// GL 4.3
bool ValidateClearBufferData(const Context * context, GLenum target, GLenum internalformat, GLenum format, GLenum type, const void * data);
bool ValidateClearBufferSubData(const Context * context, GLenum target, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void * data);
bool ValidateGetInternalformati64v(const Context * context, GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, const GLint64 * params);
bool ValidateGetProgramResourceLocationIndex(const Context * context, ShaderProgramID programPacked, GLenum programInterface, const GLchar * name);
bool ValidateInvalidateBufferData(const Context * context, BufferID bufferPacked);
bool ValidateInvalidateBufferSubData(const Context * context, BufferID bufferPacked, GLintptr offset, GLsizeiptr length);
bool ValidateInvalidateTexImage(const Context * context, TextureID texturePacked, GLint level);
bool ValidateInvalidateTexSubImage(const Context * context, TextureID texturePacked, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth);
bool ValidateMultiDrawArraysIndirect(const Context * context, GLenum mode, const void * indirect, GLsizei drawcount, GLsizei stride);
bool ValidateMultiDrawElementsIndirect(const Context * context, GLenum mode, GLenum type, const void * indirect, GLsizei drawcount, GLsizei stride);
bool ValidateShaderStorageBlockBinding(const Context * context, ShaderProgramID programPacked, GLuint storageBlockIndex, GLuint storageBlockBinding);
bool ValidateTextureView(const Context * context, TextureID texturePacked, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers);
bool ValidateVertexAttribLFormat(const Context * context, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);

// GL 4.4
bool ValidateBindBuffersBase(const Context * context, GLenum target, GLuint first, GLsizei count, const BufferID * buffersPacked);
bool ValidateBindBuffersRange(const Context * context, GLenum target, GLuint first, GLsizei count, const BufferID * buffersPacked, const GLintptr * offsets, const GLsizeiptr * sizes);
bool ValidateBindImageTextures(const Context * context, GLuint first, GLsizei count, const GLuint * textures);
bool ValidateBindSamplers(const Context * context, GLuint first, GLsizei count, const GLuint * samplers);
bool ValidateBindTextures(const Context * context, GLuint first, GLsizei count, const GLuint * textures);
bool ValidateBindVertexBuffers(const Context * context, GLuint first, GLsizei count, const BufferID * buffersPacked, const GLintptr * offsets, const GLsizei * strides);
bool ValidateBufferStorage(const Context * context, BufferBinding targetPacked, GLsizeiptr size, const void * data, GLbitfield flags);
bool ValidateClearTexImage(const Context * context, TextureID texturePacked, GLint level, GLenum format, GLenum type, const void * data);
bool ValidateClearTexSubImage(const Context * context, TextureID texturePacked, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * data);

// GL 4.5
bool ValidateBindTextureUnit(const Context * context, GLuint unit, TextureID texturePacked);
bool ValidateBlitNamedFramebuffer(const Context * context, GLuint readFramebuffer, GLuint drawFramebuffer, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
bool ValidateCheckNamedFramebufferStatus(const Context * context, FramebufferID framebufferPacked, GLenum target);
bool ValidateClearNamedBufferData(const Context * context, BufferID bufferPacked, GLenum internalformat, GLenum format, GLenum type, const void * data);
bool ValidateClearNamedBufferSubData(const Context * context, BufferID bufferPacked, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void * data);
bool ValidateClearNamedFramebufferfi(const Context * context, FramebufferID framebufferPacked, GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil);
bool ValidateClearNamedFramebufferfv(const Context * context, FramebufferID framebufferPacked, GLenum buffer, GLint drawbuffer, const GLfloat * value);
bool ValidateClearNamedFramebufferiv(const Context * context, FramebufferID framebufferPacked, GLenum buffer, GLint drawbuffer, const GLint * value);
bool ValidateClearNamedFramebufferuiv(const Context * context, FramebufferID framebufferPacked, GLenum buffer, GLint drawbuffer, const GLuint * value);
bool ValidateClipControl(const Context * context, GLenum origin, GLenum depth);
bool ValidateCompressedTextureSubImage1D(const Context * context, TextureID texturePacked, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * data);
bool ValidateCompressedTextureSubImage2D(const Context * context, TextureID texturePacked, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data);
bool ValidateCompressedTextureSubImage3D(const Context * context, TextureID texturePacked, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data);
bool ValidateCopyNamedBufferSubData(const Context * context, GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
bool ValidateCopyTextureSubImage1D(const Context * context, TextureID texturePacked, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
bool ValidateCopyTextureSubImage2D(const Context * context, TextureID texturePacked, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
bool ValidateCopyTextureSubImage3D(const Context * context, TextureID texturePacked, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
bool ValidateCreateBuffers(const Context * context, GLsizei n, const BufferID * buffersPacked);
bool ValidateCreateFramebuffers(const Context * context, GLsizei n, const GLuint * framebuffers);
bool ValidateCreateProgramPipelines(const Context * context, GLsizei n, const GLuint * pipelines);
bool ValidateCreateQueries(const Context * context, GLenum target, GLsizei n, const GLuint * ids);
bool ValidateCreateRenderbuffers(const Context * context, GLsizei n, const RenderbufferID * renderbuffersPacked);
bool ValidateCreateSamplers(const Context * context, GLsizei n, const GLuint * samplers);
bool ValidateCreateTextures(const Context * context, GLenum target, GLsizei n, const GLuint * textures);
bool ValidateCreateTransformFeedbacks(const Context * context, GLsizei n, const GLuint * ids);
bool ValidateCreateVertexArrays(const Context * context, GLsizei n, const VertexArrayID * arraysPacked);
bool ValidateDisableVertexArrayAttrib(const Context * context, VertexArrayID vaobjPacked, GLuint index);
bool ValidateEnableVertexArrayAttrib(const Context * context, VertexArrayID vaobjPacked, GLuint index);
bool ValidateFlushMappedNamedBufferRange(const Context * context, BufferID bufferPacked, GLintptr offset, GLsizeiptr length);
bool ValidateGenerateTextureMipmap(const Context * context, TextureID texturePacked);
bool ValidateGetCompressedTextureImage(const Context * context, TextureID texturePacked, GLint level, GLsizei bufSize, const void * pixels);
bool ValidateGetCompressedTextureSubImage(const Context * context, TextureID texturePacked, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei bufSize, const void * pixels);
bool ValidateGetNamedBufferParameteri64v(const Context * context, BufferID bufferPacked, GLenum pname, const GLint64 * params);
bool ValidateGetNamedBufferParameteriv(const Context * context, BufferID bufferPacked, GLenum pname, const GLint * params);
bool ValidateGetNamedBufferPointerv(const Context * context, BufferID bufferPacked, GLenum pname, void * const * params);
bool ValidateGetNamedBufferSubData(const Context * context, BufferID bufferPacked, GLintptr offset, GLsizeiptr size, const void * data);
bool ValidateGetNamedFramebufferAttachmentParameteriv(const Context * context, FramebufferID framebufferPacked, GLenum attachment, GLenum pname, const GLint * params);
bool ValidateGetNamedFramebufferParameteriv(const Context * context, FramebufferID framebufferPacked, GLenum pname, const GLint * param);
bool ValidateGetNamedRenderbufferParameteriv(const Context * context, RenderbufferID renderbufferPacked, GLenum pname, const GLint * params);
bool ValidateGetQueryBufferObjecti64v(const Context * context, GLuint id, BufferID bufferPacked, GLenum pname, GLintptr offset);
bool ValidateGetQueryBufferObjectiv(const Context * context, GLuint id, BufferID bufferPacked, GLenum pname, GLintptr offset);
bool ValidateGetQueryBufferObjectui64v(const Context * context, GLuint id, BufferID bufferPacked, GLenum pname, GLintptr offset);
bool ValidateGetQueryBufferObjectuiv(const Context * context, GLuint id, BufferID bufferPacked, GLenum pname, GLintptr offset);
bool ValidateGetTextureImage(const Context * context, TextureID texturePacked, GLint level, GLenum format, GLenum type, GLsizei bufSize, const void * pixels);
bool ValidateGetTextureLevelParameterfv(const Context * context, TextureID texturePacked, GLint level, GLenum pname, const GLfloat * params);
bool ValidateGetTextureLevelParameteriv(const Context * context, TextureID texturePacked, GLint level, GLenum pname, const GLint * params);
bool ValidateGetTextureParameterIiv(const Context * context, TextureID texturePacked, GLenum pname, const GLint * params);
bool ValidateGetTextureParameterIuiv(const Context * context, TextureID texturePacked, GLenum pname, const GLuint * params);
bool ValidateGetTextureParameterfv(const Context * context, TextureID texturePacked, GLenum pname, const GLfloat * params);
bool ValidateGetTextureParameteriv(const Context * context, TextureID texturePacked, GLenum pname, const GLint * params);
bool ValidateGetTextureSubImage(const Context * context, TextureID texturePacked, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLsizei bufSize, const void * pixels);
bool ValidateGetTransformFeedbacki64_v(const Context * context, GLuint xfb, GLenum pname, GLuint index, const GLint64 * param);
bool ValidateGetTransformFeedbacki_v(const Context * context, GLuint xfb, GLenum pname, GLuint index, const GLint * param);
bool ValidateGetTransformFeedbackiv(const Context * context, GLuint xfb, GLenum pname, const GLint * param);
bool ValidateGetVertexArrayIndexed64iv(const Context * context, VertexArrayID vaobjPacked, GLuint index, GLenum pname, const GLint64 * param);
bool ValidateGetVertexArrayIndexediv(const Context * context, VertexArrayID vaobjPacked, GLuint index, GLenum pname, const GLint * param);
bool ValidateGetVertexArrayiv(const Context * context, VertexArrayID vaobjPacked, GLenum pname, const GLint * param);
bool ValidateGetnColorTable(const Context * context, GLenum target, GLenum format, GLenum type, GLsizei bufSize, const void * table);
bool ValidateGetnCompressedTexImage(const Context * context, GLenum target, GLint lod, GLsizei bufSize, const void * pixels);
bool ValidateGetnConvolutionFilter(const Context * context, GLenum target, GLenum format, GLenum type, GLsizei bufSize, const void * image);
bool ValidateGetnHistogram(const Context * context, GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, const void * values);
bool ValidateGetnMapdv(const Context * context, GLenum target, GLenum query, GLsizei bufSize, const GLdouble * v);
bool ValidateGetnMapfv(const Context * context, GLenum target, GLenum query, GLsizei bufSize, const GLfloat * v);
bool ValidateGetnMapiv(const Context * context, GLenum target, GLenum query, GLsizei bufSize, const GLint * v);
bool ValidateGetnMinmax(const Context * context, GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, const void * values);
bool ValidateGetnPixelMapfv(const Context * context, GLenum map, GLsizei bufSize, const GLfloat * values);
bool ValidateGetnPixelMapuiv(const Context * context, GLenum map, GLsizei bufSize, const GLuint * values);
bool ValidateGetnPixelMapusv(const Context * context, GLenum map, GLsizei bufSize, const GLushort * values);
bool ValidateGetnPolygonStipple(const Context * context, GLsizei bufSize, const GLubyte * pattern);
bool ValidateGetnSeparableFilter(const Context * context, GLenum target, GLenum format, GLenum type, GLsizei rowBufSize, const void * row, GLsizei columnBufSize, const void * column, const void * span);
bool ValidateGetnTexImage(const Context * context, GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, const void * pixels);
bool ValidateGetnUniformdv(const Context * context, ShaderProgramID programPacked, UniformLocation locationPacked, GLsizei bufSize, const GLdouble * params);
bool ValidateInvalidateNamedFramebufferData(const Context * context, FramebufferID framebufferPacked, GLsizei numAttachments, const GLenum * attachments);
bool ValidateInvalidateNamedFramebufferSubData(const Context * context, FramebufferID framebufferPacked, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height);
bool ValidateMapNamedBuffer(const Context * context, BufferID bufferPacked, GLenum access);
bool ValidateMapNamedBufferRange(const Context * context, BufferID bufferPacked, GLintptr offset, GLsizeiptr length, GLbitfield access);
bool ValidateNamedBufferData(const Context * context, BufferID bufferPacked, GLsizeiptr size, const void * data, GLenum usage);
bool ValidateNamedBufferStorage(const Context * context, BufferID bufferPacked, GLsizeiptr size, const void * data, GLbitfield flags);
bool ValidateNamedBufferSubData(const Context * context, BufferID bufferPacked, GLintptr offset, GLsizeiptr size, const void * data);
bool ValidateNamedFramebufferDrawBuffer(const Context * context, FramebufferID framebufferPacked, GLenum buf);
bool ValidateNamedFramebufferDrawBuffers(const Context * context, FramebufferID framebufferPacked, GLsizei n, const GLenum * bufs);
bool ValidateNamedFramebufferParameteri(const Context * context, FramebufferID framebufferPacked, GLenum pname, GLint param);
bool ValidateNamedFramebufferReadBuffer(const Context * context, FramebufferID framebufferPacked, GLenum src);
bool ValidateNamedFramebufferRenderbuffer(const Context * context, FramebufferID framebufferPacked, GLenum attachment, GLenum renderbuffertarget, RenderbufferID renderbufferPacked);
bool ValidateNamedFramebufferTexture(const Context * context, FramebufferID framebufferPacked, GLenum attachment, TextureID texturePacked, GLint level);
bool ValidateNamedFramebufferTextureLayer(const Context * context, FramebufferID framebufferPacked, GLenum attachment, TextureID texturePacked, GLint level, GLint layer);
bool ValidateNamedRenderbufferStorage(const Context * context, RenderbufferID renderbufferPacked, GLenum internalformat, GLsizei width, GLsizei height);
bool ValidateNamedRenderbufferStorageMultisample(const Context * context, RenderbufferID renderbufferPacked, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
bool ValidateTextureBarrier(const Context * context);
bool ValidateTextureBuffer(const Context * context, TextureID texturePacked, GLenum internalformat, BufferID bufferPacked);
bool ValidateTextureBufferRange(const Context * context, TextureID texturePacked, GLenum internalformat, BufferID bufferPacked, GLintptr offset, GLsizeiptr size);
bool ValidateTextureParameterIiv(const Context * context, TextureID texturePacked, GLenum pname, const GLint * params);
bool ValidateTextureParameterIuiv(const Context * context, TextureID texturePacked, GLenum pname, const GLuint * params);
bool ValidateTextureParameterf(const Context * context, TextureID texturePacked, GLenum pname, GLfloat param);
bool ValidateTextureParameterfv(const Context * context, TextureID texturePacked, GLenum pname, const GLfloat * param);
bool ValidateTextureParameteri(const Context * context, TextureID texturePacked, GLenum pname, GLint param);
bool ValidateTextureParameteriv(const Context * context, TextureID texturePacked, GLenum pname, const GLint * param);
bool ValidateTextureStorage1D(const Context * context, TextureID texturePacked, GLsizei levels, GLenum internalformat, GLsizei width);
bool ValidateTextureStorage2D(const Context * context, TextureID texturePacked, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
bool ValidateTextureStorage2DMultisample(const Context * context, TextureID texturePacked, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
bool ValidateTextureStorage3D(const Context * context, TextureID texturePacked, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
bool ValidateTextureStorage3DMultisample(const Context * context, TextureID texturePacked, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
bool ValidateTextureSubImage1D(const Context * context, TextureID texturePacked, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels);
bool ValidateTextureSubImage2D(const Context * context, TextureID texturePacked, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels);
bool ValidateTextureSubImage3D(const Context * context, TextureID texturePacked, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels);
bool ValidateTransformFeedbackBufferBase(const Context * context, GLuint xfb, GLuint index, BufferID bufferPacked);
bool ValidateTransformFeedbackBufferRange(const Context * context, GLuint xfb, GLuint index, BufferID bufferPacked, GLintptr offset, GLsizeiptr size);
bool ValidateUnmapNamedBuffer(const Context * context, BufferID bufferPacked);
bool ValidateVertexArrayAttribBinding(const Context * context, VertexArrayID vaobjPacked, GLuint attribindex, GLuint bindingindex);
bool ValidateVertexArrayAttribFormat(const Context * context, VertexArrayID vaobjPacked, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
bool ValidateVertexArrayAttribIFormat(const Context * context, VertexArrayID vaobjPacked, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
bool ValidateVertexArrayAttribLFormat(const Context * context, VertexArrayID vaobjPacked, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
bool ValidateVertexArrayBindingDivisor(const Context * context, VertexArrayID vaobjPacked, GLuint bindingindex, GLuint divisor);
bool ValidateVertexArrayElementBuffer(const Context * context, VertexArrayID vaobjPacked, BufferID bufferPacked);
bool ValidateVertexArrayVertexBuffer(const Context * context, VertexArrayID vaobjPacked, GLuint bindingindex, BufferID bufferPacked, GLintptr offset, GLsizei stride);
bool ValidateVertexArrayVertexBuffers(const Context * context, VertexArrayID vaobjPacked, GLuint first, GLsizei count, const BufferID * buffersPacked, const GLintptr * offsets, const GLsizei * strides);

// GL 4.6
bool ValidateMultiDrawArraysIndirectCount(const Context * context, GLenum mode, const void * indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
bool ValidateMultiDrawElementsIndirectCount(const Context * context, GLenum mode, GLenum type, const void * indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
bool ValidatePolygonOffsetClamp(const Context * context, GLfloat factor, GLfloat units, GLfloat clamp);
bool ValidateSpecializeShader(const Context * context, GLuint shader, const GLchar * pEntryPoint, GLuint numSpecializationConstants, const GLuint * pConstantIndex, const GLuint * pConstantValue);
}  // namespace gl

#endif  // LIBANGLE_VALIDATION_GL4_AUTOGEN_H_
