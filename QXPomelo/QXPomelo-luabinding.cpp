/*
** Lua binding: QXPomelo_luabinding
** Generated automatically by tolua++-1.0.92 on Sat Jan 18 16:15:35 2014.
*/

#include "QXPomelo-luabinding.h"
#include "CCLuaEngine.h"
#include "QXPomelo.h"
using namespace cocos2d;


/* Exported function */
TOLUA_API int  tolua_QXPomelo_luabinding_open (lua_State* tolua_S);


/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_QXPomelo (lua_State* tolua_S)
{
 QXPomelo* self = (QXPomelo*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 
 tolua_usertype(tolua_S,"cocos2d::CCObject");
 tolua_usertype(tolua_S, "QXPomelo");
    
 toluafix_add_type_mapping(typeid(QXPomelo).hash_code(), "QXPomelo");
}

/* method: new of class  QXPomelo */
#ifndef TOLUA_DISABLE_tolua_QXPomelo_luabinding_QXPomelo_new00
static int tolua_QXPomelo_luabinding_QXPomelo_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"QXPomelo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   QXPomelo* tolua_ret = (QXPomelo*)  Mtolua_new((QXPomelo)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"QXPomelo");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  QXPomelo */
#ifndef TOLUA_DISABLE_tolua_QXPomelo_luabinding_QXPomelo_new00_local
static int tolua_QXPomelo_luabinding_QXPomelo_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"QXPomelo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   QXPomelo* tolua_ret = (QXPomelo*)  Mtolua_new((QXPomelo)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"QXPomelo");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  QXPomelo */
#ifndef TOLUA_DISABLE_tolua_QXPomelo_luabinding_QXPomelo_delete00
static int tolua_QXPomelo_luabinding_QXPomelo_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"QXPomelo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  QXPomelo* self = (QXPomelo*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: connect of class  QXPomelo */
#ifndef TOLUA_DISABLE_tolua_QXPomelo_luabinding_QXPomelo_connect00
static int tolua_QXPomelo_luabinding_QXPomelo_connect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"QXPomelo",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !toluafix_isfunction(tolua_S,4,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  QXPomelo* self = (QXPomelo*)  tolua_tousertype(tolua_S,1,0);
  const char* _addr = ((const char*)  tolua_tostring(tolua_S,2,0));
  unsigned short _port = ((unsigned short)  tolua_tonumber(tolua_S,3,0));
  LUA_FUNCTION listener = (  toluafix_ref_function(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'connect'", NULL);
#endif
  {
   self->connect(_addr,_port,listener);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'connect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: request of class  QXPomelo */
#ifndef TOLUA_DISABLE_tolua_QXPomelo_luabinding_QXPomelo_request00
static int tolua_QXPomelo_luabinding_QXPomelo_request00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"QXPomelo",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !toluafix_isfunction(tolua_S,4,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  QXPomelo* self = (QXPomelo*)  tolua_tousertype(tolua_S,1,0);
  const char* route = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* msg = ((const char*)  tolua_tostring(tolua_S,3,0));
  LUA_FUNCTION listener = (  toluafix_ref_function(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'request'", NULL);
#endif
  {
   self->request(route,msg,listener);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'request'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: notify of class  QXPomelo */
#ifndef TOLUA_DISABLE_tolua_QXPomelo_luabinding_QXPomelo_notify00
static int tolua_QXPomelo_luabinding_QXPomelo_notify00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"QXPomelo",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  QXPomelo* self = (QXPomelo*)  tolua_tousertype(tolua_S,1,0);
  const char* route = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* msg = ((const char*)  tolua_tostring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'notify'", NULL);
#endif
  {
   self->notify(route,msg);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'notify'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: bindEventHandle of class  QXPomelo */
#ifndef TOLUA_DISABLE_tolua_QXPomelo_luabinding_QXPomelo_bindEventHandle00
static int tolua_QXPomelo_luabinding_QXPomelo_bindEventHandle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"QXPomelo",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  QXPomelo* self = (QXPomelo*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION listener = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'bindEventHandle'", NULL);
#endif
  {
   self->bindEventHandle(listener);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'bindEventHandle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addListener of class  QXPomelo */
#ifndef TOLUA_DISABLE_tolua_QXPomelo_luabinding_QXPomelo_addListener00
static int tolua_QXPomelo_luabinding_QXPomelo_addListener00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"QXPomelo",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  QXPomelo* self = (QXPomelo*)  tolua_tousertype(tolua_S,1,0);
  const char* event = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addListener'", NULL);
#endif
  {
   self->addListener(event);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addListener'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: destroy of class  QXPomelo */
#ifndef TOLUA_DISABLE_tolua_QXPomelo_luabinding_QXPomelo_destroy00
static int tolua_QXPomelo_luabinding_QXPomelo_destroy00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"QXPomelo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  QXPomelo* self = (QXPomelo*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'destroy'", NULL);
#endif
  {
   self->destroy();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'destroy'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_QXPomelo_luabinding_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"QXPomelo","QXPomelo","cocos2d::CCObject",tolua_collect_QXPomelo);
  #else
  tolua_cclass(tolua_S,"QXPomelo","QXPomelo","cocos2d::CCObject",NULL);
  #endif
  tolua_beginmodule(tolua_S,"QXPomelo");
   tolua_function(tolua_S,"new",tolua_QXPomelo_luabinding_QXPomelo_new00);
   tolua_function(tolua_S,"new_local",tolua_QXPomelo_luabinding_QXPomelo_new00_local);
   tolua_function(tolua_S,".call",tolua_QXPomelo_luabinding_QXPomelo_new00_local);
   tolua_function(tolua_S,"delete",tolua_QXPomelo_luabinding_QXPomelo_delete00);
   tolua_function(tolua_S,"connect",tolua_QXPomelo_luabinding_QXPomelo_connect00);
   tolua_function(tolua_S,"request",tolua_QXPomelo_luabinding_QXPomelo_request00);
   tolua_function(tolua_S,"notify",tolua_QXPomelo_luabinding_QXPomelo_notify00);
   tolua_function(tolua_S,"bindEventHandle",tolua_QXPomelo_luabinding_QXPomelo_bindEventHandle00);
   tolua_function(tolua_S,"addListener",tolua_QXPomelo_luabinding_QXPomelo_addListener00);
   tolua_function(tolua_S,"destroy",tolua_QXPomelo_luabinding_QXPomelo_destroy00);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_QXPomelo_luabinding (lua_State* tolua_S) {
 return tolua_QXPomelo_luabinding_open(tolua_S);
};
#endif

