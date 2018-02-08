package bertrandt.opengl_ndk;

import android.opengl.GLSurfaceView;

import javax.microedition.khronos.egl.EGLConfig;
import javax.microedition.khronos.opengles.GL10;

import static android.opengl.GLES20.*;

/**
 * Created by buhrmanc on 08.02.2018.
 */

public class RendererWrapper implements GLSurfaceView.Renderer {
    @Override
    public void onSurfaceCreated(GL10 gl10, EGLConfig eglConfig) {
        JNIWrapper.on_surface_created();
    }

    @Override
    public void onSurfaceChanged(GL10 gl10, int width, int heigth) {
        JNIWrapper.on_surface_changed(width,heigth);
    }

    @Override
    public void onDrawFrame(GL10 gl10) {
        JNIWrapper.on_draw_frame();
    }
}
