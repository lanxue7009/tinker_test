
本DEMO支持测试 代码、资源、so、jar、aar 热修复

1、代码、资源 修复 直接修改即可
2、libs目录：so、jar、aar 存放目录
3、jni目录：在jni 目录，使用 ndk-build 命令生成 old和new so，自主修改代码
4、jartest目录：
    javac com/jartest/JarTest.java    生成class文件
    jar cvf jarTest.jar com/jartest/JarTest.class   生成jar文件，拷贝到libs目录
    自主修改 JarTest.java ，生成 old和new jar包
5、tinkerpatch.gradle 文件中修改 tinkerOldApkPath 名，Gradle 中 tinker 使用 tinkerPatchxxx 生成拆分包
6、差分包生成目录在 \app\build\outputs\apk\tinkerPatch\目录下，将 patch_signed.apk 手动放到 SD卡目录，即可测试


PS：遇到的一些坑
1、tinkerpatch.gradle 中 lib的配置注意是lib/不是libs/，配置错误可能导致so patch 拆分包生成失败（网上CV操作导致）
lib {
    pattern = ["lib/*/*.so"]
}

2、lib库加载注意CPU类型参数确认

3、可使用tinker源码编译生成cli-jar，命令行生成patch包
