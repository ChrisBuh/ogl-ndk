//
// Created by Christian Buhrmann on 08.02.18.
//

#ifndef OGL_NDK_PLATFORM_FILE_UTILS_H
#define OGL_NDK_PLATFORM_FILE_UTILS_H

#pragma once
typedef struct {
    const long data_length;
    const void* data;
    const void* file_handle;
} FileData;

FileData get_file_data(const char* path);
void release_file_data(const FileData* file_data);

#endif //OGL_NDK_PLATFORM_FILE_UTILS_H
