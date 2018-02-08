//
// Created by buhrmanc on 08.02.2018.
//

#ifndef OPENGL_NDK_TEXTURE_H
#define OPENGL_NDK_TEXTURE_H

#include "platform_gl.h"

GLuint load_texture(
        const GLsizei width, const GLsizei height,
        const GLenum type, const GLvoid* pixels);


#endif //OPENGL_NDK_TEXTURE_H
