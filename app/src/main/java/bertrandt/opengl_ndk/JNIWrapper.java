package bertrandt.opengl_ndk;

/**
 * Created by buhrmanc on 08.02.2018.
 */

public class JNIWrapper {
    static {
        System.loadLibrary("openglndk");
    }

    public static native void on_surface_created();

    public static native void on_surface_changed(int width, int height);

    public static native void on_draw_frame();

}
