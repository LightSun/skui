/**
 * The MIT License (MIT)
 *
 * Copyright © 2017-2019 Ruben Van Boxem
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 **/

/*
 * OpenGL C function names.
 */

#ifndef SKUI_OPENGL_FUNCTION_NAME_H
#define SKUI_OPENGL_FUNCTION_NAME_H

namespace skui::graphics::opengl
{
  constexpr const char* name[] =
  {
    "glAccum",
    "glActiveShaderProgram",
    "glActiveTexture",
    "glAlphaFunc",
    "glAreTexturesResident",
    "glArrayElement",
    "glAttachShader",
    "glBegin",
    "glBeginConditionalRender",
    "glBeginQuery",
    "glBeginQueryIndexed",
    "glBeginTransformFeedback",
    "glBindAttribLocation",
    "glBindBuffer",
    "glBindBufferBase",
    "glBindBufferRange",
    "glBindBuffersBase",
    "glBindBuffersRange",
    "glBindFragDataLocation",
    "glBindFragDataLocationIndexed",
    "glBindFramebuffer",
    "glBindImageTexture",
    "glBindImageTextures",
    "glBindProgramPipeline",
    "glBindRenderbuffer",
    "glBindSampler",
    "glBindSamplers",
    "glBindTexture",
    "glBindTextureUnit",
    "glBindTextures",
    "glBindTransformFeedback",
    "glBindVertexArray",
    "glBindVertexBuffer",
    "glBindVertexBuffers",
    "glBitmap",
    "glBlendColor",
    "glBlendEquation",
    "glBlendEquationSeparate",
    "glBlendFunc",
    "glBlendFuncSeparate",
    "glBlitFramebuffer",
    "glBufferData",
    "glBufferStorage",
    "glBufferSubData",
    "glCallList",
    "glCallLists",
    "glCheckFramebufferStatus",
    "glClampColor",
    "glClear",
    "glClearAccum",
    "glClearBufferiv",
    "glClearBufferuiv",
    "glClearBufferfv",
    "glClearBufferfi",
    "glClearBufferData",
    "glClearBufferSubData",
    "glClearColor",
    "glClearDepth",
    "glClearIndex",
    "glClearNamedFramebufferiv",
    "glClearNamedFramebufferuiv",
    "glClearNamedFramebufferfv",
    "glClearNamedFramebufferfi",
    "glClearStencil",
    "glClearTexImage",
    "glClearTexSubImage",
    "glClientActiveTexture",
    "glClientWaitSync",
    "glClipControl",
    "glClipPlane",
    "glColor3b",
    "glColor3s",
    "glColor3i",
    "glColor3f",
    "glColor3d",
    "glColor3ub",
    "glColor3us",
    "glColor3ui",
    "glColor4b",
    "glColor4s",
    "glColor4i",
    "glColor4f",
    "glColor4d",
    "glColor4ub",
    "glColor4us",
    "glColor4ui",
    "glColorMask",
    "glColorMaterial",
    "glColorPointer",
    "glCompileShader",
    "glCompressedTexImage1D",
    "glCompressedTexImage2D",
    "glCompressedTexImage3D",
    "glCompressedTexSubImage1D",
    "glCompressedTexSubImage2D",
    "glCompressedTexSubImage3D",
    "glCopyBufferSubData",
    "glCopyImageSubData",
    "glCopyPixels",
    "glCopyTexImage1D",
    "glCopyTexImage2D",
    "glCopyTexSubImage1D",
    "glCopyTexSubImage2D",
    "glCopyTexSubImage3D",
    "glCreateBuffers",
    "glCreateFramebuffers",
    "glCreateProgram",
    "glCreateProgramPipelines",
    "glCreateQueries",
    "glCreateRenderbuffers",
    "glCreateSamplers",
    "glCreateShader",
    "glCreateShaderProgramv",
    "glCreateTextures",
    "glCreateTransformFeedbacks",
    "glCreateVertexArrays",
    "glCullFace",
    "glDebugMessageCallback",
    "glDebugMessageControl",
    "glDebugMessageInsert",
    "glDeleteBuffers",
    "glDeleteFramebuffers",
    "glDeleteLists",
    "glDeleteProgram",
    "glDeleteProgramPipelines",
    "glDeleteQueries",
    "glDeleteRenderbuffers",
    "glDeleteSamplers",
    "glDeleteShader",
    "glDeleteSync",
    "glDeleteTextures",
    "glDeleteTransformFeedbacks",
    "glDeleteVertexArrays",
    "glDepthFunc",
    "glDepthMask",
    "glDepthRange",
    "glDepthRangeArrayv",
    "glDepthRangeIndexed",
    "glDetachShader",
    "glDisable",
    "glDisableClientState",
    "glDisableVertexAttribArray",
    "glDispatchCompute",
    "glDispatchComputeIndirect",
    "glDrawArrays",
    "glDrawArraysIndirect",
    "glDrawArraysInstanced",
    "glDrawArraysInstancedBaseInstance",
    "glDrawBuffer",
    "glDrawBuffers",
    "glDrawElements",
    "glDrawElementsBaseVertex",
    "glDrawElementsIndirect",
    "glDrawElementsInstanced",
    "glDrawElementsInstancedBaseInstance",
    "glDrawElementsInstancedBaseVertex",
    "glDrawElementsInstancedBaseVertexBaseInstance",
    "glDrawPixels",
    "glDrawRangeElements",
    "glDrawRangeElementsBaseVertex",
    "glDrawTransformFeedback",
    "glDrawTransformFeedbackInstanced",
    "glDrawTransformFeedbackStream",
    "glDrawTransformFeedbackStreamInstanced",
    "glEdgeFlag",
    "glEdgeFlagPointer",
    "glEnable",
    "glEnableClientState",
    "glEnableVertexAttribArray",
    "glEnd",
    "glEndConditionalRender",
    "glEndList",
    "glEndQuery",
    "glEndQueryIndexed",
    "glEndTransformFeedback",
    "glEvalCoord1f",
    "glEvalCoord1d",
    "glEvalCoord2f",
    "glEvalCoord2d",
    "glEvalMesh1",
    "glEvalPoint1",
    "glEvalPoint2",
    "glFeedbackBuffer",
    "glFenceSync",
    "glFinish",
    "glFlush",
    "glFlushMappedBufferRange",
    "glFogf",
    "glFogi",
    "glFogCoordd",
    "glFogCoordf",
    "glFogCoordPointer",
    "glFramebufferParameteri",
    "glFramebufferRenderbuffer",
    "glFramebufferTexture",
    "glFramebufferTextureLayer",
    "glFrontFace",
    "glFrustum",
    "glGenBuffers",
    "glGenFramebuffers",
    "glGenLists",
    "glGenProgramPipelines",
    "glGenQueries",
    "glGenRenderbuffers",
    "glGenSamplers",
    "glGenTextures",
    "glGenTransformFeedbacks",
    "glGenVertexArrays",
    "glGenerateMipmap",
    "glGetBooleanv",
    "glGetDoublev",
    "glGetFloatv",
    "glGetIntegerv",
    "glGetInteger64v",
    "glGetBooleani_v",
    "glGetDoublei_v",
    "glGetFloati_v",
    "glGetIntegeri_v",
    "glGetInteger64i_v",
    "glGetActiveAtomicCounterBufferiv",
    "glGetActiveAttrib",
    "glGetActiveSubroutineName",
    "glGetActiveSubroutineUniformiv",
    "glGetActiveSubroutineUniformName",
    "glGetActiveUniform",
    "glGetActiveUniformBlockiv",
    "glGetActiveUniformBlockName",
    "glGetActiveUniformName",
    "glGetActiveUniformsiv",
    "glGetAttachedShaders",
    "glGetAttribLocation",
    "glGetBufferParameteriv",
    "glGetBufferParameteri64v",
    "glGetBufferPointerv",
    "glGetBufferSubData",
    "glGetClipPlane",
    "glGetCompressedTexImage",
    "glGetCompressedTextureSubImage",
    "glGetDebugMessageLog",
    "glGetError",
    "glGetFragDataIndex",
    "glGetFragDataLocation",
    "glGetFramebufferAttachmentParameteriv",
    "glGetFramebufferParameteriv",
    "glGetGraphicsResetStatus",
    "glGetInternalformativ",
    "glGetInternalformati64v",
    "glGetLightfv",
    "glGetLightiv",
    "glGetMapdv",
    "glGetMapfv",
    "glGetMapiv",
    "glGetMaterialfv",
    "glGetMaterialiv",
    "glGetMultisamplefv",
    "glGetNamedBufferParameteriv",
    "glGetNamedBufferParameteri64v",
    "glGetNamedFramebufferAttachmentParameteriv",
    "glGetNamedFramebufferParameteriv",
    "glGetNamedRenderbufferParameteriv",
    "glGetObjectLabel",
    "glGetObjectPtrLabel",
    "glGetPixelMapfv",
    "glGetPixelMapuiv",
    "glGetPixelMapusv",
    "glGetPointerv",
    "glGetPolygonStipple",
    "glGetProgramiv",
    "glGetProgramBinary",
    "glGetProgramInfoLog",
    "glGetProgramInterfaceiv",
    "glGetProgramPipelineiv",
    "glGetProgramPipelineInfoLog",
    "glGetProgramResourceiv",
    "glGetProgramResourceIndex",
    "glGetProgramResourceLocation",
    "glGetProgramResourceLocationIndex",
    "glGetProgramResourceName",
    "glGetProgramStageiv",
    "glGetQueryIndexediv",
    "glGetQueryObjectiv",
    "glGetQueryObjectuiv",
    "glGetQueryObjecti64v",
    "glGetQueryObjectui64v",
    "glGetQueryiv",
    "glGetRenderbufferParameteriv",
    "glGetSamplerParameterfv",
    "glGetSamplerParameteriv",
    "glGetSamplerParameterIiv",
    "glGetSamplerParameterIuiv",
    "glGetShaderiv",
    "glGetShaderInfoLog",
    "glGetShaderPrecisionFormat",
    "glGetShaderSource",
    "glGetString",
    "glGetSubroutineIndex",
    "glGetSubroutineUniformLocation",
    "glGetSynciv",
    "glGetTexEnvfv",
    "glGetTexEnviv",
    "glGetTexGendv",
    "glGetTexGenfv",
    "glGetTexGeniv",
    "glGetTexImage",
    "glGetTexLevelParameterfv",
    "glGetTexLevelParameteriv",
    "glGetTexParameterfv",
    "glGetTexParameteriv",
    "glGetTexParameterIiv",
    "glGetTexParameterIuiv",
    "glGetTextureLevelParameterfv",
    "glGetTextureLevelParameteriv",
    "glGetTextureParameterfv",
    "glGetTextureParameteriv",
    "glGetTextureParameterIiv",
    "glGetTextureParameterIuiv",
    "glGetTextureSubImage",
    "glGetTransformFeedbackiv",
    "glGetTransformFeedbacki_v",
    "glGetTransformFeedbacki64_v",
    "glGetTransformFeedbackVarying",
    "glGetUniformfv",
    "glGetUniformiv",
    "glGetUniformuiv",
    "glGetUniformdv",
    "glGetnUniformfv",
    "glGetnUniformiv",
    "glGetnUniformuiv",
    "glGetnUniformdv",
    "glGetUniformBlockIndex",
    "glGetUniformIndices",
    "glGetUniformLocation",
    "glGetUniformSubroutineuiv",
    "glGetVertexArrayIndexed64iv",
    "glGetVertexArrayIndexediv",
    "glGetVertexArrayiv",
    "glGetVertexAttribdv",
    "glGetVertexAttribfv",
    "glGetVertexAttribiv",
    "glGetVertexAttribIiv",
    "glGetVertexAttribIuiv",
    "glGetVertexAttribLdv",
    "glGetVertexAttribPointerv",
    "glHint",
    "glIndexs",
    "glIndexi",
    "glIndexf",
    "glIndexd",
    "glIndexub",
    "glIndexMask",
    "glIndexPointer",
    "glInitNames",
    "glInterleavedArrays",
    "glInvalidateBufferData",
    "glInvalidateBufferSubData",
    "glInvalidateFramebuffer",
    "glInvalidateSubFramebuffer",
    "glInvalidateTexImage",
    "glInvalidateTexSubImage",
    "glIsBuffer",
    "glIsEnabled",
    "glIsFramebuffer",
    "glIsList",
    "glIsProgram",
    "glIsProgramPipeline",
    "glIsQuery",
    "glIsRenderbuffer",
    "glIsSampler",
    "glIsShader",
    "glIsSync",
    "glIsTexture",
    "glIsTransformFeedback",
    "glIsVertexArray",
    "glLightf",
    "glLighti",
    "glLightModelf",
    "glLightModeli",
    "glLineStipple",
    "glLineWidth",
    "glLinkProgram",
    "glListBase",
    "glLoadIdentity",
    "glLoadMatrixd",
    "glLoadMatrixf",
    "glLoadName",
    "glLoadTransposeMatrixd",
    "glLoadTransposeMatrixf",
    "glLogicOp",
    "glMap1f",
    "glMap1d",
    "glMap2f",
    "glMap2d",
    "glMapBuffer",
    "glMapBufferRange",
    "glMapGrid1d",
    "glMapGrid1f",
    "glMapGrid2d",
    "glMapGrid2f",
    "glMaterialf",
    "glMateriali",
    "glMatrixMode",
    "glMemoryBarrier",
    "glMinSampleShading",
    "glMultMatrixd",
    "glMultMatrixf",
    "glMultTransposeMatrixd",
    "glMultTransposeMatrixf",
    "glMultiDrawArrays",
    "glMultiDrawArraysIndirect",
    "glMultiDrawElements",
    "glMultiDrawElementsBaseVertex",
    "glMultiDrawElementsIndirect",
    "glMultiTexCoord1s",
    "glMultiTexCoord1i",
    "glMultiTexCoord1f",
    "glMultiTexCoord1d",
    "glMultiTexCoord2s",
    "glMultiTexCoord2i",
    "glMultiTexCoord2f",
    "glMultiTexCoord2d",
    "glMultiTexCoord3s",
    "glMultiTexCoord3i",
    "glMultiTexCoord3f",
    "glMultiTexCoord3d",
    "glMultiTexCoord4s",
    "glMultiTexCoord4i",
    "glMultiTexCoord4f",
    "glMultiTexCoord4d",
    "glNewList",
    "glNormal3b",
    "glNormal3d",
    "glNormal3f",
    "glNormal3i",
    "glNormal3s",
    "glNormalPointer",
    "glObjectLabel",
    "glObjectPtrLabel",
    "glOrtho",
    "glPassThrough",
    "glPatchParameteri",
    "glPatchParameterfv",
    "glPauseTransformFeedback",
    "glPixelMapfv",
    "glPixelMapuiv",
    "glPixelMapusv",
    "glPixelStoref",
    "glPixelStorei",
    "glPixelTransferf",
    "glPixelTransferi",
    "glPixelZoom",
    "glPointParameterf",
    "glPointParameteri",
    "glPointParameterfv",
    "glPointParameteriv",
    "glPointSize",
    "glPolygonMode",
    "glPolygonOffset",
    "glPolygonStipple",
    "glPopAttrib",
    "glPopClientAttrib",
    "glPopDebugGroup",
    "glPopMatrix",
    "glPopName",
    "glPrimitiveRestartIndex",
    "glPrioritizeTextures",
    "glProgramBinary",
    "glProgramParameteri",
    "glProgramUniform1f",
    "glProgramUniform2f",
    "glProgramUniform3f",
    "glProgramUniform4f",
    "glProgramUniform1i",
    "glProgramUniform2i",
    "glProgramUniform3i",
    "glProgramUniform4i",
    "glProgramUniform1ui",
    "glProgramUniform2ui",
    "glProgramUniform3ui",
    "glProgramUniform4ui",
    "glProgramUniform1fv",
    "glProgramUniform2fv",
    "glProgramUniform3fv",
    "glProgramUniform4fv",
    "glProgramUniform1iv",
    "glProgramUniform2iv",
    "glProgramUniform3iv",
    "glProgramUniform4iv",
    "glProgramUniform1uiv",
    "glProgramUniform2uiv",
    "glProgramUniform3uiv",
    "glProgramUniform4uiv",
    "glProgramUniformMatrix2fv",
    "glProgramUniformMatrix3fv",
    "glProgramUniformMatrix4fv",
    "glProgramUniformMatrix2x3fv",
    "glProgramUniformMatrix3x2fv",
    "glProgramUniformMatrix2x4fv",
    "glProgramUniformMatrix4x2fv",
    "glProgramUniformMatrix3x4fv",
    "glProgramUniformMatrix4x3fv",
    "glProvokingVertex",
    "glPushAttrib",
    "glPushClientAttrib",
    "glPushDebugGroup",
    "glPushMatrix",
    "glPushName",
    "glQueryCounter",
    "glRasterPos2s",
    "glRasterPos2i",
    "glRasterPos2f",
    "glRasterPos2d",
    "glRasterPos3s",
    "glRasterPos3i",
    "glRasterPos3f",
    "glRasterPos3d",
    "glRasterPos4s",
    "glRasterPos4i",
    "glRasterPos4f",
    "glRasterPos4d",
    "glReadBuffer",
    "glReadPixels",
    "glRectd",
    "glRectf",
    "glRecti",
    "glRects",
    "glReleaseShaderCompiler",
    "glRenderMode",
    "glRenderbufferStorage",
    "glRenderbufferStorageMultisample",
    "glResumeTransformFeedback",
    "glRotated",
    "glRotatef",
    "glSampleCoverage",
    "glSampleMaski",
    "glSamplerParameterf",
    "glSamplerParameteri",
    "glSamplerParameterfv",
    "glSamplerParameteriv",
    "glSamplerParameterIiv",
    "glSamplerParameterIuiv",
    "glScaled",
    "glScalef",
    "glScissor",
    "glScissorArrayv",
    "glScissorIndexed",
    "glSecondaryColor3b",
    "glSecondaryColor3s",
    "glSecondaryColor3i",
    "glSecondaryColor3f",
    "glSecondaryColor3d",
    "glSecondaryColor3ub",
    "glSecondaryColor3us",
    "glSecondaryColor3ui",
    "glSecondaryColorPointer",
    "glSelectBuffer",
    "glShadeModel",
    "glShaderBinary",
    "glShaderSource",
    "glShaderStorageBlockBinding",
    "glStencilFunc",
    "glStencilFuncSeparate",
    "glStencilMask",
    "glStencilMaskSeparate",
    "glStencilOp",
    "glStencilOpSeparate",
    "glTexBuffer",
    "glTexBufferRange",
    "glTexCoord1s",
    "glTexCoord1i",
    "glTexCoord1f",
    "glTexCoord1d",
    "glTexCoord2s",
    "glTexCoord2i",
    "glTexCoord2f",
    "glTexCoord2d",
    "glTexCoord3s",
    "glTexCoord3i",
    "glTexCoord3f",
    "glTexCoord3d",
    "glTexCoord4s",
    "glTexCoord4i",
    "glTexCoord4f",
    "glTexCoord4d",
    "glTexCoordPointer",
    "glTexEnvf",
    "glTexEnvi",
    "glTexGeni",
    "glTexGenf",
    "glTexGend",
    "glTexImage1D",
    "glTexImage2D",
    "glTexImage2DMultisample",
    "glTexImage3D",
    "glTexImage3DMultisample",
    "glTexParameterf",
    "glTexParameteri",
    "glTexParameterfv",
    "glTexParameteriv",
    "glTexParameterIiv",
    "glTexParameterIuiv",
    "glTextureParameterf",
    "glTextureParameteri",
    "glTextureParameterfv",
    "glTextureParameteriv",
    "glTextureParameterIiv",
    "glTextureParameterIuiv",
    "glTexStorage1D",
    "glTexStorage2D",
    "glTexStorage2DMultisample",
    "glTexStorage3D",
    "glTexStorage3DMultisample",
    "glTexSubImage1D",
    "glTexSubImage2D",
    "glTexSubImage3D",
    "glTextureBarrier",
    "glTextureView",
    "glTransformFeedbackBufferBase",
    "glTransformFeedbackBufferRange",
    "glTransformFeedbackVaryings",
    "glTranslated",
    "glTranslatef",
    "glUniform1f",
    "glUniform2f",
    "glUniform3f",
    "glUniform4f",
    "glUniform1i",
    "glUniform2i",
    "glUniform3i",
    "glUniform4i",
    "glUniform1ui",
    "glUniform2ui",
    "glUniform3ui",
    "glUniform4ui",
    "glUniform1fv",
    "glUniform2fv",
    "glUniform3fv",
    "glUniform4fv",
    "glUniform1iv",
    "glUniform2iv",
    "glUniform3iv",
    "glUniform4iv",
    "glUniform1uiv",
    "glUniform2uiv",
    "glUniform3uiv",
    "glUniform4uiv",
    "glUniformMatrix2fv",
    "glUniformMatrix3fv",
    "glUniformMatrix4fv",
    "glUniformMatrix2x3fv",
    "glUniformMatrix3x2fv",
    "glUniformMatrix2x4fv",
    "glUniformMatrix4x2fv",
    "glUniformMatrix3x4fv",
    "glUniformMatrix4x3fv",
    "glUniformBlockBinding",
    "glUniformSubroutinesuiv",
    "glUnmapBuffer",
    "glUseProgram",
    "glUseProgramStages",
    "glValidateProgram",
    "glValidateProgramPipeline",
    "glVertex2s",
    "glVertex2i",
    "glVertex2f",
    "glVertex2d",
    "glVertex3s",
    "glVertex3i",
    "glVertex3f",
    "glVertex3d",
    "glVertex4s",
    "glVertex4i",
    "glVertex4f",
    "glVertex4d",
    "glVertexArrayElementBuffer",
    "glVertexAttrib1f",
    "glVertexAttrib1s",
    "glVertexAttrib1d",
    "glVertexAttribI1i",
    "glVertexAttribI1ui",
    "glVertexAttrib2f",
    "glVertexAttrib2s",
    "glVertexAttrib2d",
    "glVertexAttribI2i",
    "glVertexAttribI2ui",
    "glVertexAttrib3f",
    "glVertexAttrib3s",
    "glVertexAttrib3d",
    "glVertexAttribI3i",
    "glVertexAttribI3ui",
    "glVertexAttrib4f",
    "glVertexAttrib4s",
    "glVertexAttrib4d",
    "glVertexAttrib4Nub",
    "glVertexAttribI4i",
    "glVertexAttribI4ui",
    "glVertexAttribL1d",
    "glVertexAttribL2d",
    "glVertexAttribL3d",
    "glVertexAttribL4d",
    "glVertexAttrib1fv",
    "glVertexAttrib1sv",
    "glVertexAttrib1dv",
    "glVertexAttribI1iv",
    "glVertexAttribI1uiv",
    "glVertexAttrib2fv",
    "glVertexAttrib2sv",
    "glVertexAttrib2dv",
    "glVertexAttribI2iv",
    "glVertexAttribI2uiv",
    "glVertexAttrib3fv",
    "glVertexAttrib3sv",
    "glVertexAttrib3dv",
    "glVertexAttribI3iv",
    "glVertexAttribI3uiv",
    "glVertexAttrib4fv",
    "glVertexAttrib4sv",
    "glVertexAttrib4dv",
    "glVertexAttrib4iv",
    "glVertexAttrib4bv",
    "glVertexAttrib4ubv",
    "glVertexAttrib4usv",
    "glVertexAttrib4uiv",
    "glVertexAttrib4Nbv",
    "glVertexAttrib4Nsv",
    "glVertexAttrib4Niv",
    "glVertexAttribNubv",
    "glVertexAttribNusv",
    "glVertexAttribNuiv",
    "glVertexAttribI4bv",
    "glVertexAttribI4ubv",
    "glVertexAttribI4sv",
    "glVertexAttribI4usv",
    "glVertexAttribI4iv",
    "glVertexAttribI4uiv",
    "glVertexAttribL1dv",
    "glVertexAttribL2dv",
    "glVertexAttribL3dv",
    "glVertexAttribL4dv",
    "glVertexAttribP1ui",
    "glVertexAttribP2ui",
    "glVertexAttribP3ui",
    "glVertexAttribP4ui",
    "glVertexAttribBinding",
    "glVertexAttribDivisor",
    "glVertexAttribFormat",
    "glVertexAttribPointer",
    "glVertexBindingDivisor",
    "glVertexPointer",
    "glViewport",
    "glViewportArrayv",
    "glViewportIndexedf",
    "glViewportIndexedfv",
    "glWaitSync",
    "glWindowPos2s",
    "glWindowPos2i",
    "glWindowPos2f",
    "glWindowPos2d",
    "glWindowPos3s",
    "glWindowPos3i",
    "glWindowPos3f",
    "glWindowPos3d",

  #ifdef _WIN32
    "wglCopyContext",
    "wglCreateContext",
    "wglCreateLayerContext",
    "wglDeleteContext",
    "wglDescribeLayerPlane",
    "wglGetCurrentContext",
    "wglGetCurrentDC",
    "wglGetLayerPaletteEntries",
    "wglGetProcAddress",
    "wglMakeCurrent",
    "wglRealizeLayerPalette",
    "wglSetLayerPaletteEntries",
    "wglShareLists",
    "wglSwapLayerBuffers",
    "wglUseFontBitmapsA",
    "wglUseFontBitmapsW",
    "wglUseFontOutlinesA",
    "wglUseFontOutlinesW"
  #endif
  };
}

#endif
