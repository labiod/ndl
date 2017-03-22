//
// Created by Administrator on 2017-03-23.
//
#include <jni>

jstring Java_com_example_hellojni_HelloJni_stringFromJNI( JNIEnv* env, jobject thiz ) {
    return (*env)->NewStringUTF(env, "Hello from JNI ! Compiled with ABI " ABI ".");

}
