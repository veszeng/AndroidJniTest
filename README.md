JNI
一.新建jni工程的方法

1.eclipse 支持ndk 点击菜单Window-->Preferences-->Android-->NDK，在NDK Location中输入之前android-ndk-r10d的全路径，点击OK
2.新建android工程，在Project上右键–>Android Tools–>Add Native Support…–>自定义Lib名字，点击OK完成
3.点击上方的锤子可以生产.so文件

二.手动添加jni方式
添加目录jni,添加文件cpp和android.mk文件
先在java里新建类添加navitv方法，注意路径
编辑cPP是方法名要添加路径+类名
在jni目录下，执行ndk-build.可生产.so




