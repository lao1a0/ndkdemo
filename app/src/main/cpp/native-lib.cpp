#include <jni.h> // JNI头文件，提供了JNI函数和数据类型的定义
#include <string> // C++标准库的string类

// 声明一个jni函数，该函数将会被Java代码调用
// JNIEXPORT表示这个函数是可导出的，并且可以被其他代码使用
// jstring表示这个函数返回的是一个Java字符串对象
// JNICALL是JNI函数的调用约定
// Java_com_example_ndkdemo_MainActivity_stringFromJNI是JNI函数的命名规则，与Java中对应的方法名对应
// Java打头，1包名,2类名,3方法名字;"_"号隔开
extern "C" JNIEXPORT jint JNICALL
Java_com_example_ndkdemo_MainActivity_stringFromJNI(
        JNIEnv* env, // JNIEnv是指向JNI环境的指针，可以用来访问JNI提供的功能
        jobject /* this */,jint a) { // jobject是指向Java对象的指针，在本例中并没有使用
//    std::string hello = "Hello wuaipojie "; // 创建一个C++字符串对象
//    return env->NewStringUTF(hello.c_str()); // 将C++字符串对象转换为Java字符串对象并返回
    return a+520;
}