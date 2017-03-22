include $(CLEAR_VARS)
LOCAL_SRC_FILES := ndl.c
LOCAL_MODULE    := ndl

LOCAL_LDLIBS := -llog
include $(BUILD_SHARED_LIBRARY)