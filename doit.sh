cp -rf pomelolib/pomelolib-ios $QUICK_COCOS2DX_ROOT/lib/cocos2d-x/cocos2dx/platform/third_party/ios/
cp -rf pomelolib/pomelolib-mac $QUICK_COCOS2DX_ROOT/lib/cocos2d-x/cocos2dx/platform/third_party/mac/
cp -rf pomelolib/pomelolib-windows $QUICK_COCOS2DX_ROOT/lib/cocos2d-x/cocos2dx/platform/third_party/win32/
cp -rf libpomelo $QUICK_COCOS2DX_ROOT/lib/cocos2d-x/cocos2dx/platform/third_party/android/
cp -rf QXPomelo $QUICK_COCOS2DX_ROOT/lib/cocos2d-x/extensions/
cp -rf QXPomelo-luabinding.tolua $QUICK_COCOS2DX_ROOT/lib/luabinding/extensions/
####执行以下步聚
###
####/lib/luabinding/extensions/cocos-ext.tolua 添加 一行 $pfile "extensions/QXPomelo-luabinding.tolua"
###执行/lib/luabinding/build.sh
###在cocos-ext.h 里添加
###   #include "QXPomelo/QXPomelo.h"
###   #include "QXPomelo/CCPomelo.h"

###在xcode HEADER_SEARCH_PATH 里添加 "$(QUICK_COCOS2DX_ROOT)/lib/cocos2d-x/extensions/QXPomelo"
###在XCODE LIBARY_SEARCH_PATH 里添加 "$(QUICK_COCOS2DX_ROOT)/lib/cocos2d-x/cocos2dx/platform/third_party/对应平台目录的pomelo-ios

##android pomelo 编译问题：
#大致步骤：
#将 lib/cocos2d-x/cocos2dx/platform/third_party/android/libpomelo  放置到目录 lib/cocos2d-x/cocos2dx/platform/third_party/android/prebuilt
##libpomelo／  下缺少android.mk  拷贝svn的quick-cocos2d-x 下同目录的 android.mk
##libpomelo/deps/nv 缺少的android.mk
#libpomelo/deps/jansson 缺少的android.mk
#libpomelo/include/pomelo-private/ 下的 jansson-memory.h 删除
#libpomelo/src／ 下的 jansson-memory.c 删除

#原则：
##保持libpomelo所处位置与当前svn上的quick-cocos2d-x中的libpomelo一致。并且其内的内容也需保持一致，不可少文件不可多文件