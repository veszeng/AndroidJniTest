LOCAL_PATH := $(call my-dir)
#被添加的模块
include $(CLEAR_VARS)
LOCAL_MODULE    := static_add
LOCAL_SRC_FILES := libstatic_add.a
include $(PREBUILT_STATIC_LIBRARY)

#被添加的模块
include $(CLEAR_VARS)
LOCAL_MODULE    := static_mnpc_sqe
LOCAL_SRC_FILES := libstatic_mnpc_sqe.a
include $(PREBUILT_STATIC_LIBRARY)

include $(CLEAR_VARS)
LOCAL_LDLIBS    := -lm -llog 
LOCAL_MODULE    := AndroidJniTest
LOCAL_STATIC_LIBRARIES := static_add   static_mnpc_sqe   #添加(多个）模块
LOCAL_SRC_FILES := AndroidJniTest.cpp
include $(BUILD_SHARED_LIBRARY)   #编译成动态库，BUILD_STATIC_LIBRARY为静态
