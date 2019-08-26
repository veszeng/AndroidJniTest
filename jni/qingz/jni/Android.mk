LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)
LOCAL_MODULE    := static_mnpc_sqe
LOCAL_SRC_FILES := mnpc_sqe.cpp
include $(BUILD_STATIC_LIBRARY)