#include <jni.h>
#include <string>

int main (int argc, char *argv[]) {
    return 0;
}

extern "C" JNIEXPORT jstring JNICALL
Java_com_jeremyfiggins_nativetest_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    main(0, nullptr);
    return env->NewStringUTF(hello.c_str());
}

