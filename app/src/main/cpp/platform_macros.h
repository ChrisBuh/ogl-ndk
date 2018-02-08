//
// Created by Christian Buhrmann on 08.02.18.
//

#ifndef OGL_NDK_PLATFORM_MACROS_H
#define OGL_NDK_PLATFORM_MACROS_H

#if defined(__GNUC__)
#define PRINTF_ATTRIBUTE(format_pos, arg_pos) __attribute__((format(printf, format_pos, arg_pos)))
#else
#define PRINTF_ATTRIBUTE(format_pos, arg_pos)
#endif

#endif //OGL_NDK_PLATFORM_MACROS_H
