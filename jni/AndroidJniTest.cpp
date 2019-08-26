


#include <jni.h>
#include <android/log.h>
#include "static.h"
#include "mnpc_sqe.h"
//using namespace std;
//using namespace std;

#ifdef __cplusplus
extern "C" {
#endif

#define LOG_TAG "jniTest"
#define LOGD(...)  __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__)

void newTest() {
	short channel = 2;
	short in_near = 10;
	short in_far = 20;
	short out;
	AECProc(channel, &in_near, &in_far, &out);
	LOGD("------------aa11-------------%d",out);

}


JNIEXPORT jint JNICALL Java_com_example_zeng_Client_start(JNIEnv *env,
		jclass jclz, jstring path) {
		LOGD("------------start-------------");
	//	int a =;
		newTest();
		return add(10, 11);
	//	return 0;
}

JNIEXPORT void JNICALL Java_com_example_zeng_Client_stop(JNIEnv *env, jclass jclz)
{
	LOGD("------------stop-------------");

}



#ifdef __cplusplus
}
#endif
