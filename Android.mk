ifneq ($(strip $(libdspengineiface_already_built)),)

LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_SRC_FILES := cetest.cpp

LOCAL_MODULE := cetest

LOCAL_LDLIBS := -llog
LOCAL_LDFLAGS += -ldspengineiface

include $(BUILD_EXECUTABLE)

endif
