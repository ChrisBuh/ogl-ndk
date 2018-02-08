//
// Created by Christian Buhrmann on 08.02.18.
//

#ifndef OGL_NDK_PLATFORM_ASSETS_UTILS_H
#define OGL_NDK_PLATFORM_ASSETS_UTILS_H

#include "platform_file_utils.h"

FileData get_asset_data(const char* relative_path);
void release_asset_data(const FileData* file_data);

#endif //OGL_NDK_PLATFORM_ASSETS_UTILS_H
