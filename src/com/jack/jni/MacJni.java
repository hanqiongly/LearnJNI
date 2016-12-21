package com.jack.jni;

public class MacJni {
   public native void sayHello();
   public native int add(int a,int b);
   public native int div(int a,int b);
   
   static {
	   System.loadLibrary("macjni");
   }
      
   public static void main(String[] argv) {
	   MacJni macJni = new MacJni();
	   macJni.sayHello();
	   macJni.add(3, 4);
	   macJni.div(10, 2);
	   
//	   System.out.println(System.getProperty("java.library.path"));
	   
   }
}
