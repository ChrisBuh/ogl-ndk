//
// Created by buhrmanc on 08.02.2018.
//

#ifndef OPENGL_NDK_BUFFER_H
#define OPENGL_NDK_BUFFER_H

#include "platform_gl.h"

#define BUFFER_OFFSET(i) ((void*)(i))

GLuint create_vbo(const GLsizeiptr size, const GLvoid* data, const GLenum usage);


#endif //OPENGL_NDK_BUFFER_H
