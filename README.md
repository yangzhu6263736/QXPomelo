QXPomelo--<br />
quick-cocos2d-x的pomelo客户端 
===================================  
  pomelo client for quick-cocos2d-x lua client for pomelo
  基于libpomelo暴露接口给lua调用\<h1\><br />  
  1.基于xdxttt同学的CCPomelo库二次封装而来[CCPomelo](https://github.com/xdxttt/CCPomelo) 再绑定给lua调用<br />  ps:因为我用的是很早之前的版本 所以可能存在他修正过的问题我这边还没发现。基本上的处理是装connect放入线程，避免阻塞子主线程。
  
    
编译方式  
-----------------------------------  
1:执行doit.sh
2:MAC IOS
###/lib/luabinding/extensions/cocos-ext.tolua 添加 一行 $pfile "extensions/QXPomelo-luabinding.tolua"
###执行/lib/luabinding/build.sh
###在cocos-ext.h 里添加
#include "QXPomelo/QXPomelo.h"
#include "QXPomelo/CCPomelo.h"

在xcode HEADER_SEARCH_PATH 里添加 "$(QUICK_COCOS2DX_ROOT)/lib/cocos2d-x/extensions/QXPomelo"
在XCODE LIBARY_SEARCH_PATH 里添加 "$(QUICK_COCOS2DX_ROOT)/lib/cocos2d-x/cocos2dx/platform/third_party/对应平台目录的pomelo-ios

###在工程中引入如上对应的两个目录


### mac  
  此处基本上只是为了让player可以使用pomelo <br /><br />
  引入pomelolib-mac中的3个.a文件 ps:这三个文件是根据libpomelo的说明生成出来的 
  可能不同机器不一样 如果不能用需要自行编译Libpomelo工程



### windows
  此处基本上只是为了让player可以使用pomelo <br />
  1:在工程右键->c/c++->常规->附加包含目录 里添加 QXPomelo的所在目录<br />
  2:在工程右键->属性->配置属性->链接器->常规->附加库目录中添加 pomelolib-windows 的路径<br />
  2:在工程右键->属性->配置属性->链接器->输入->附加依赖项中添加如下lib<br />
  	jansson.lib<br />
	libpomelo.lib<br />
	libuv.lib<br />
	IPHLPAPI.lib<br />
	Psapi.lib<br />
	ps:此处后面的IPHLPAPI Psapi是libuv的必须依赖项,必须要引入,不然不能通过编译.libpomelo的官方文档上没有提及 我折腾了非常久<br />
  <br />  
### lua中调用
参考 LibPomelo.lua<br />
