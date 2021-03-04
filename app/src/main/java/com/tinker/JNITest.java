package com.tinker.test;

public class JNITest {

    static {
        System.loadLibrary("jnitest");
    }

    public static native String fromJNIString();
    public static native String fromJNIString2();
}
