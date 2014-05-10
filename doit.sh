cp -rf pomelolib/pomelolib-ios $QUICK_COCOS2DX_ROOT/lib/cocos2d-x/cocos2dx/platform/third_party/ios/
cp -rf pomelolib/pomelolib-mac $QUICK_COCOS2DX_ROOT/lib/cocos2d-x/cocos2dx/platform/third_party/mac/
cp -rf pomelolib/pomelolib-windows $QUICK_COCOS2DX_ROOT/lib/cocos2d-x/cocos2dx/platform/third_party/win32/
cp -rf libpomelo $QUICK_COCOS2DX_ROOT/lib/cocos2d-x/cocos2dx/platform/third_party/android/prebuilt/
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
#打开/lib/cocos2d-x/extensions/android.mk中
#在LOCAL_SRC_FILES 中加入
#    QXPomelo/CCPomelo.cpp \
#    QXPomelo/QXPomelo.cpp 

#在LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH) 中加入
#               $(LOCAL_PATH)/QXPomelo \
#               $(LOCAL_PATH)/QXPomelo/pomelo-private \
#               $(LOCAL_PATH)/QXPomelo/pomelo-protobuf \
#               $(LOCAL_PATH)/QXPomelo/pomelo-protocol \
#               $(LOCAL_PATH)/QXPomelo/uv-private

#添加 LOCAL_WHOLE_STATIC_LIBRARIES += pomelo_static
#在靠后部分加上$(call import-module,libpomelo)
