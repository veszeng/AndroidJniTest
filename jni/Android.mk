LOCAL_PATH := $(call my-dir)


include $(CLEAR_VARS)
LOCAL_LDLIBS    := -lm -llog 
LOCAL_MODULE    := AndroidJniTest
LOCAL_SRC_FILES := AndroidJniTest.cpp

include $(BUILD_SHARED_LIBRARY)
