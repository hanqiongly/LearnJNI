# include <stdio.h>
# include "com_jack_jni_MacJni.h"

JNIEXPORT void JNICALL Java_com_jack_jni_MacJni_sayHello(JNIEnv *env,jobject obj) {
  printf("Say Hello To The World In C Language\n");
}

JNIEXPORT jint JNICALL Java_com_jack_jni_MacJni_add(JNIEnv *env,jobject obj,jint a ,jint b) {
  printf("Add From C : %d \n",a + b);
  return a + b;
}

JNIEXPORT jint JNICALL Java_com_jack_jni_MacJni_div(JNIEnv *env, jobject obj, jint a, jint b) {
  printf("Div from C : %d \n", a / b);
  return a / b;
}
