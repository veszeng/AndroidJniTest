LOCAL_PATH := $(call my-dir)
#����ӵ�ģ��
include $(CLEAR_VARS)
LOCAL_MODULE    := static_add
LOCAL_SRC_FILES := libstatic_add.a
include $(PREBUILT_STATIC_LIBRARY)

#����ӵ�ģ��
include $(CLEAR_VARS)
LOCAL_MODULE    := static_mnpc_sqe
LOCAL_SRC_FILES := libstatic_mnpc_sqe.a
include $(PREBUILT_STATIC_LIBRARY)

include $(CLEAR_VARS)
LOCAL_LDLIBS    := -lm -llog 
LOCAL_MODULE    := AndroidJniTest
LOCAL_STATIC_LIBRARIES := static_add   static_mnpc_sqe   #���(�����ģ��
LOCAL_SRC_FILES := AndroidJniTest.cpp
include $(BUILD_SHARED_LIBRARY)   #����ɶ�̬�⣬BUILD_STATIC_LIBRARYΪ��̬
