LOCAL_PATH:= $(call my-dir)

include $(CLEAR_VARS)
LOCAL_SRC_FILES := gpio_sample.c
LOCAL_MODULE := gpio_sample
LOCAL_SHARED_LIBRARIES := libgpio_api
LOCAL_MODULE_PATH := $(TARGET_OUT_EXECUTABLES)
include $(BUILD_EXECUTABLE)
