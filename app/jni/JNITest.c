//
// Created by zhangyr118 on 2021/2/10.
//

#include <jni.h>
#include "com_tinker_test_JNITest.h"

JNIEXPORT jstring JNICALL Java_com_tinker_test_JNITest_fromJNIString(JNIEnv *env, jobject thiz){
     return (*env)->NewStringUTF(env, "This is Jni test old 1 !");
 }

/*JNIEXPORT jstring JNICALL Java_com_tinker_test_JNITest_fromJNIString(JNIEnv *env, jobject thiz){
    return (*env)->NewStringUTF(env, "This is Jni test new 2 !");
}*/

