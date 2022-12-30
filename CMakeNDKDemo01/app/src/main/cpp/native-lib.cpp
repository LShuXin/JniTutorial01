#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_lsx_cmakendkdemo01_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++ 刘树信";
    return env->NewStringUTF(hello.c_str());
}