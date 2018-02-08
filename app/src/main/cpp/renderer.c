//
// Created by buhrmanc on 08.02.2018.
//

#include "renderer.h"
#include "platform_gl.h"

void on_surface_created() {
    glClearColor(1.0f, 0.0f, 0.0f, 0.0f);
}

void on_surface_changed() {
    // No-op
}

void on_draw_frame() {
    glClear(GL_COLOR_BUFFER_BIT);
}
