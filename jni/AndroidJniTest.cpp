


#include <jni.h>
#include <android/log.h>
//using namespace std;
//using namespace std;

#ifdef __cplusplus
extern "C" {
#endif

#define LOG_TAG "jniTest"
#define LOGD(...)  __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__)




JNIEXPORT jint JNICALL Java_com_example_zeng_Client_start(JNIEnv *env,
		jclass jclz, jstring path) {
		LOGD("------------start-------------");
		return 0;
}

JNIEXPORT void JNICALL Java_com_example_zeng_Client_stop(JNIEnv *env, jclass jclz)
{
	LOGD("------------stop-------------");

}



#ifdef __cplusplus
}
#endif
