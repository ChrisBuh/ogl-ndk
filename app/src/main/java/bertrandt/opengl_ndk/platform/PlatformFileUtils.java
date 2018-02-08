package bertrandt.opengl_ndk.platform;

import android.content.res.AssetManager;

/**
 * Created by christianbuhrmann on 08.02.18.
 */

public class PlatformFileUtils {
    public static native void init_asset_manager(AssetManager assetManager);

}
