QXPomelo--<br />
quick-cocos2d-x的pomelo客户端 
===================================  
  pomelo client for quick-cocos2d-x lua client for pomelo
  基于libpomelo暴露接口给lua调用\<h1\><br />  
  1.基于xdxttt同学的CCPomelo库二次封装而来[CCPomelo](https://github.com/xdxttt/CCPomelo) 再绑定给lua调用<br />  ps:因为我用的是很早之前的版本 所以可能存在他修正过的问题我这边还没发现。基本上的处理是装connect放入线程，避免阻塞子主线程。
  
    
编译方式  
-----------------------------------  
  目前项目进度还没有到处理安桌的时候所以还没处理 后续补上\<h2\><br />
  打开修改quick工程目录中source/AppDelegate.cpp<br />
  1:添加#include "QXPomelo-luabinding.h"<br />
  2:在bool AppDelegate::applicationDidFinishLaunching()方法中加入<br />
    CCLuaStack *pStack = pEngine->getLuaStack();<br />
    lua_State *state = pStack->getLuaState();<br />
    luaopen_QXPomelo_luabinding(state);<br />


### mac  
  此处基本上只是为了让player可以使用pomelo <br /><br />
  引入pomelolib-mac中的3个.a文件 ps:这三个文件是根据libpomelo的说明生成出来的 
  可能不同机器不一样 如果不能用需要自行编译Libpomelo工程

### ios  
 同mac<br />  

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
