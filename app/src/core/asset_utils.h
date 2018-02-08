//
// Created by Christian Buhrmann on 08.02.18.
//

#ifndef OGL_NDK_ASSET_UTILS_H
#define OGL_NDK_ASSET_UTILS_H

#include "platform_gl.h"

GLuint load_png_asset_into_texture(const char* relative_path);
GLuint build_program_from_assets(
        const char* vertex_shader_path, const char* fragment_shader_path);


#endif //OGL_NDK_ASSET_UTILS_H
