/*
** Lua binding: PX2
** Generated automatically by tolua++-1.0.92 on 02/28/15 19:32:12.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_PX2_open (lua_State* tolua_S);

#include "PX2ToLua.hpp"

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_Transform (lua_State* tolua_S)
{
 Transform* self = (Transform*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Controlledable (lua_State* tolua_S)
{
 Controlledable* self = (Controlledable*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Movable (lua_State* tolua_S)
{
 Movable* self = (Movable*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_APoint (lua_State* tolua_S)
{
 APoint* self = (APoint*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_AVector (lua_State* tolua_S)
{
 AVector* self = (AVector*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_int64_t (lua_State* tolua_S)
{
 int64_t* self = (int64_t*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_TriMesh (lua_State* tolua_S)
{
 TriMesh* self = (TriMesh*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Scene (lua_State* tolua_S)
{
 Scene* self = (Scene*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Creater (lua_State* tolua_S)
{
 Creater* self = (Creater*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_HPoint (lua_State* tolua_S)
{
 HPoint* self = (HPoint*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Float3 (lua_State* tolua_S)
{
 Float3* self = (Float3*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Camera (lua_State* tolua_S)
{
 Camera* self = (Camera*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Renderable (lua_State* tolua_S)
{
 Renderable* self = (Renderable*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Vector2f (lua_State* tolua_S)
{
 Vector2f* self = (Vector2f*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_ResHandle (lua_State* tolua_S)
{
 ResHandle* self = (ResHandle*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_SwitchNode (lua_State* tolua_S)
{
 SwitchNode* self = (SwitchNode*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Triangles (lua_State* tolua_S)
{
 Triangles* self = (Triangles*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Texture__Format (lua_State* tolua_S)
{
 Texture::Format* self = (Texture::Format*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"ShaderParameters");
 tolua_usertype(tolua_S,"OffsetProperty");
 tolua_usertype(tolua_S,"TexPackElement");
 tolua_usertype(tolua_S,"Controlledable");
 tolua_usertype(tolua_S,"ResHandle");
 tolua_usertype(tolua_S,"UIFrame");
 tolua_usertype(tolua_S,"AVector");
 tolua_usertype(tolua_S,"Triangles");
 tolua_usertype(tolua_S,"PX2::AVector");
 tolua_usertype(tolua_S,"Float4");
 tolua_usertype(tolua_S,"LanguageManager");
 tolua_usertype(tolua_S,"RenderStep");
 tolua_usertype(tolua_S,"ScriptManager");
 tolua_usertype(tolua_S,"Texture2D");
 tolua_usertype(tolua_S,"Transform");
 tolua_usertype(tolua_S,"Vector3f");
 tolua_usertype(tolua_S,"PX2::APoint");
 tolua_usertype(tolua_S,"UICheckButton");
 tolua_usertype(tolua_S,"Movable");
 tolua_usertype(tolua_S,"Project");
 tolua_usertype(tolua_S,"CullProperty");
 tolua_usertype(tolua_S,"SwitchNode");
 tolua_usertype(tolua_S,"Actor");
 tolua_usertype(tolua_S,"VertexBuffer");
 tolua_usertype(tolua_S,"DepthProperty");
 tolua_usertype(tolua_S,"UIText");
 tolua_usertype(tolua_S,"Renderable");
 tolua_usertype(tolua_S,"Texture::Format");
 tolua_usertype(tolua_S,"Sizef");
 tolua_usertype(tolua_S,"UIProgressBar");
 tolua_usertype(tolua_S,"Texture3D");
 tolua_usertype(tolua_S,"RenderTarget");
 tolua_usertype(tolua_S,"Selection");
 tolua_usertype(tolua_S,"Renderer");
 tolua_usertype(tolua_S,"PixelShader");
 tolua_usertype(tolua_S,"Creater");
 tolua_usertype(tolua_S,"Logger");
 tolua_usertype(tolua_S,"Scene");
 tolua_usertype(tolua_S,"UIPicBox");
 tolua_usertype(tolua_S,"Controller");
 tolua_usertype(tolua_S,"HPoint");
 tolua_usertype(tolua_S,"Camera");
 tolua_usertype(tolua_S,"Object");
 tolua_usertype(tolua_S,"TexPack");
 tolua_usertype(tolua_S,"CameraActor");
 tolua_usertype(tolua_S,"Soundable");
 tolua_usertype(tolua_S,"TextureCube");
 tolua_usertype(tolua_S,"RibbonEmitter");
 tolua_usertype(tolua_S,"VisibleSet");
 tolua_usertype(tolua_S,"BeamEmitter");
 tolua_usertype(tolua_S,"Billboard");
 tolua_usertype(tolua_S,"VertexShader");
 tolua_usertype(tolua_S,"ParticleEmitter");
 tolua_usertype(tolua_S,"Character");
 tolua_usertype(tolua_S,"AlphaProperty");
 tolua_usertype(tolua_S,"VertexFormat");
 tolua_usertype(tolua_S,"UIEditBox");
 tolua_usertype(tolua_S,"UIButton");
 tolua_usertype(tolua_S,"Texture1D");
 tolua_usertype(tolua_S,"GlobalMaterial");
 tolua_usertype(tolua_S,"APoint");
 tolua_usertype(tolua_S,"Node");
 tolua_usertype(tolua_S,"Light");
 tolua_usertype(tolua_S,"MaterialInstance");
 tolua_usertype(tolua_S,"WireProperty");
 tolua_usertype(tolua_S,"TriMesh");
 tolua_usertype(tolua_S,"PX2::Object");
 tolua_usertype(tolua_S,"StencilProperty");
 tolua_usertype(tolua_S,"Float3");
 tolua_usertype(tolua_S,"ResourceManager");
 tolua_usertype(tolua_S,"HMatrix");
 tolua_usertype(tolua_S,"Vector2f");
 tolua_usertype(tolua_S,"Buffer::Locking");
 tolua_usertype(tolua_S,"Bound");
 tolua_usertype(tolua_S,"IndexBuffer");
 tolua_usertype(tolua_S,"int64_t");
}

/* method: GetResourcePath of class  Object */
#ifndef TOLUA_DISABLE_tolua_PX2_Object_GetResourcePath00
static int tolua_PX2_Object_GetResourcePath00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Object",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Object* self = (const Object*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetResourcePath'", NULL);
#endif
  {
   const std::string tolua_ret = (const std::string)  self->GetResourcePath();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetResourcePath'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetName of class  Object */
#ifndef TOLUA_DISABLE_tolua_PX2_Object_SetName00
static int tolua_PX2_Object_SetName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Object",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Object* self = (Object*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetName'", NULL);
#endif
  {
   self->SetName(name);
   tolua_pushcppstring(tolua_S,(const char*)name);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetName of class  Object */
#ifndef TOLUA_DISABLE_tolua_PX2_Object_GetName00
static int tolua_PX2_Object_GetName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Object",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Object* self = (const Object*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetName'", NULL);
#endif
  {
   const std::string tolua_ret = (const std::string)  self->GetName();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetObjectByName of class  Object */
#ifndef TOLUA_DISABLE_tolua_PX2_Object_GetObjectByName00
static int tolua_PX2_Object_GetObjectByName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Object",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Object* self = (Object*)  tolua_tousertype(tolua_S,1,0);
  const std::string name = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetObjectByName'", NULL);
#endif
  {
   Object* tolua_ret = (Object*)  self->GetObjectByName(name);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Object");
   tolua_pushcppstring(tolua_S,(const char*)name);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetObjectByName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: GetTimeInMicroseconds */
#ifndef TOLUA_DISABLE_tolua_PX2_GetTimeInMicroseconds00
static int tolua_PX2_GetTimeInMicroseconds00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   int64_t tolua_ret = (int64_t)  GetTimeInMicroseconds();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((int64_t)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"int64_t");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(int64_t));
     tolua_pushusertype(tolua_S,tolua_obj,"int64_t");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetTimeInMicroseconds'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: GetTimeInSeconds */
#ifndef TOLUA_DISABLE_tolua_PX2_GetTimeInSeconds00
static int tolua_PX2_GetTimeInSeconds00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   double tolua_ret = (double)  GetTimeInSeconds();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetTimeInSeconds'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetSingleton of class  Logger */
#ifndef TOLUA_DISABLE_tolua_PX2_Logger_GetSingleton00
static int tolua_PX2_Logger_GetSingleton00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Logger",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Logger& tolua_ret = (Logger&)  Logger::GetSingleton();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"Logger");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetSingleton'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: LogInfo of class  Logger */
#ifndef TOLUA_DISABLE_tolua_PX2_Logger_LogInfo00
static int tolua_PX2_Logger_LogInfo00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Logger",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Logger* self = (Logger*)  tolua_tousertype(tolua_S,1,0);
  const std::string tag = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  const std::string info = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'LogInfo'", NULL);
#endif
  {
   self->LogInfo(tag,info);
   tolua_pushcppstring(tolua_S,(const char*)tag);
   tolua_pushcppstring(tolua_S,(const char*)info);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'LogInfo'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: LogError of class  Logger */
#ifndef TOLUA_DISABLE_tolua_PX2_Logger_LogError00
static int tolua_PX2_Logger_LogError00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Logger",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Logger* self = (Logger*)  tolua_tousertype(tolua_S,1,0);
  const std::string tag = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  const std::string info = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'LogError'", NULL);
#endif
  {
   self->LogError(tag,info);
   tolua_pushcppstring(tolua_S,(const char*)tag);
   tolua_pushcppstring(tolua_S,(const char*)info);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'LogError'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: LogUser of class  Logger */
#ifndef TOLUA_DISABLE_tolua_PX2_Logger_LogUser00
static int tolua_PX2_Logger_LogUser00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Logger",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Logger* self = (Logger*)  tolua_tousertype(tolua_S,1,0);
  const std::string tag = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  const std::string info = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'LogUser'", NULL);
#endif
  {
   self->LogUser(tag,info);
   tolua_pushcppstring(tolua_S,(const char*)tag);
   tolua_pushcppstring(tolua_S,(const char*)info);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'LogUser'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  APoint */
#ifndef TOLUA_DISABLE_tolua_PX2_APoint_new00
static int tolua_PX2_APoint_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"APoint",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   APoint* tolua_ret = (APoint*)  Mtolua_new((APoint)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"APoint");
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

/* method: new_local of class  APoint */
#ifndef TOLUA_DISABLE_tolua_PX2_APoint_new00_local
static int tolua_PX2_APoint_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"APoint",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   APoint* tolua_ret = (APoint*)  Mtolua_new((APoint)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"APoint");
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

/* method: new of class  APoint */
#ifndef TOLUA_DISABLE_tolua_PX2_APoint_new01
static int tolua_PX2_APoint_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"APoint",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const APoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const APoint* pnt = ((const APoint*)  tolua_tousertype(tolua_S,2,0));
  {
   APoint* tolua_ret = (APoint*)  Mtolua_new((APoint)(*pnt));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"APoint");
  }
 }
 return 1;
tolua_lerror:
 return tolua_PX2_APoint_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  APoint */
#ifndef TOLUA_DISABLE_tolua_PX2_APoint_new01_local
static int tolua_PX2_APoint_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"APoint",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const APoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const APoint* pnt = ((const APoint*)  tolua_tousertype(tolua_S,2,0));
  {
   APoint* tolua_ret = (APoint*)  Mtolua_new((APoint)(*pnt));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"APoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_PX2_APoint_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  APoint */
#ifndef TOLUA_DISABLE_tolua_PX2_APoint_new02
static int tolua_PX2_APoint_new02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"APoint",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
  float z = ((float)  tolua_tonumber(tolua_S,4,0));
  {
   APoint* tolua_ret = (APoint*)  Mtolua_new((APoint)(x,y,z));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"APoint");
  }
 }
 return 1;
tolua_lerror:
 return tolua_PX2_APoint_new01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  APoint */
#ifndef TOLUA_DISABLE_tolua_PX2_APoint_new02_local
static int tolua_PX2_APoint_new02_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"APoint",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
  float z = ((float)  tolua_tonumber(tolua_S,4,0));
  {
   APoint* tolua_ret = (APoint*)  Mtolua_new((APoint)(x,y,z));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"APoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_PX2_APoint_new01_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  APoint */
#ifndef TOLUA_DISABLE_tolua_PX2_APoint_delete00
static int tolua_PX2_APoint_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"APoint",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  APoint* self = (APoint*)  tolua_tousertype(tolua_S,1,0);
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

/* method: operator- of class  APoint */
#ifndef TOLUA_DISABLE_tolua_PX2_APoint__sub00
static int tolua_PX2_APoint__sub00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const APoint",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const APoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const APoint* self = (const APoint*)  tolua_tousertype(tolua_S,1,0);
  const APoint* pnt = ((const APoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator-'", NULL);
#endif
  {
   AVector tolua_ret = (AVector)  self->operator-(*pnt);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((AVector)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"AVector");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(AVector));
     tolua_pushusertype(tolua_S,tolua_obj,"AVector");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.sub'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator+ of class  APoint */
#ifndef TOLUA_DISABLE_tolua_PX2_APoint__add00
static int tolua_PX2_APoint__add00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const APoint",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const AVector",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const APoint* self = (const APoint*)  tolua_tousertype(tolua_S,1,0);
  const AVector* vec = ((const AVector*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator+'", NULL);
#endif
  {
   APoint tolua_ret = (APoint)  self->operator+(*vec);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((APoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"APoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(APoint));
     tolua_pushusertype(tolua_S,tolua_obj,"APoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.add'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator- of class  APoint */
#ifndef TOLUA_DISABLE_tolua_PX2_APoint__sub01
static int tolua_PX2_APoint__sub01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const APoint",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const AVector",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const APoint* self = (const APoint*)  tolua_tousertype(tolua_S,1,0);
  const AVector* vec = ((const AVector*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator-'", NULL);
#endif
  {
   APoint tolua_ret = (APoint)  self->operator-(*vec);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((APoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"APoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(APoint));
     tolua_pushusertype(tolua_S,tolua_obj,"APoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_PX2_APoint__sub00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator+ of class  APoint */
#ifndef TOLUA_DISABLE_tolua_PX2_APoint__add01
static int tolua_PX2_APoint__add01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const APoint",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const APoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const APoint* self = (const APoint*)  tolua_tousertype(tolua_S,1,0);
  const APoint* pnt = ((const APoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator+'", NULL);
#endif
  {
   APoint tolua_ret = (APoint)  self->operator+(*pnt);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((APoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"APoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(APoint));
     tolua_pushusertype(tolua_S,tolua_obj,"APoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_PX2_APoint__add00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator* of class  APoint */
#ifndef TOLUA_DISABLE_tolua_PX2_APoint__mul00
static int tolua_PX2_APoint__mul00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const APoint",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const APoint* self = (const APoint*)  tolua_tousertype(tolua_S,1,0);
  float scalar = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator*'", NULL);
#endif
  {
   APoint tolua_ret = (APoint)  self->operator*(scalar);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((APoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"APoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(APoint));
     tolua_pushusertype(tolua_S,tolua_obj,"APoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.mul'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator/ of class  APoint */
#ifndef TOLUA_DISABLE_tolua_PX2_APoint__div00
static int tolua_PX2_APoint__div00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const APoint",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const APoint* self = (const APoint*)  tolua_tousertype(tolua_S,1,0);
  float scalar = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator/'", NULL);
#endif
  {
   APoint tolua_ret = (APoint)  self->operator/(scalar);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((APoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"APoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(APoint));
     tolua_pushusertype(tolua_S,tolua_obj,"APoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.div'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator- of class  APoint */
#ifndef TOLUA_DISABLE_tolua_PX2_APoint__sub02
static int tolua_PX2_APoint__sub02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const APoint",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const APoint* self = (const APoint*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator-'", NULL);
#endif
  {
   APoint tolua_ret = (APoint)  self->operator-();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((APoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"APoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(APoint));
     tolua_pushusertype(tolua_S,tolua_obj,"APoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_PX2_APoint__sub01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Dot of class  APoint */
#ifndef TOLUA_DISABLE_tolua_PX2_APoint_Dot00
static int tolua_PX2_APoint_Dot00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const APoint",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const AVector",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const APoint* self = (const APoint*)  tolua_tousertype(tolua_S,1,0);
  const AVector* vec = ((const AVector*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Dot'", NULL);
#endif
  {
   float tolua_ret = (float)  self->Dot(*vec);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Dot'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: ORIGIN of class  APoint */
#ifndef TOLUA_DISABLE_tolua_get_APoint_ORIGIN
static int tolua_get_APoint_ORIGIN(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&APoint::ORIGIN,"const APoint");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  AVector */
#ifndef TOLUA_DISABLE_tolua_PX2_AVector_new00
static int tolua_PX2_AVector_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"AVector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   AVector* tolua_ret = (AVector*)  Mtolua_new((AVector)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"AVector");
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

/* method: new_local of class  AVector */
#ifndef TOLUA_DISABLE_tolua_PX2_AVector_new00_local
static int tolua_PX2_AVector_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"AVector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   AVector* tolua_ret = (AVector*)  Mtolua_new((AVector)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"AVector");
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

/* method: new of class  AVector */
#ifndef TOLUA_DISABLE_tolua_PX2_AVector_new01
static int tolua_PX2_AVector_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"AVector",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const AVector",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const AVector* vec = ((const AVector*)  tolua_tousertype(tolua_S,2,0));
  {
   AVector* tolua_ret = (AVector*)  Mtolua_new((AVector)(*vec));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"AVector");
  }
 }
 return 1;
tolua_lerror:
 return tolua_PX2_AVector_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  AVector */
#ifndef TOLUA_DISABLE_tolua_PX2_AVector_new01_local
static int tolua_PX2_AVector_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"AVector",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const AVector",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const AVector* vec = ((const AVector*)  tolua_tousertype(tolua_S,2,0));
  {
   AVector* tolua_ret = (AVector*)  Mtolua_new((AVector)(*vec));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"AVector");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_PX2_AVector_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  AVector */
#ifndef TOLUA_DISABLE_tolua_PX2_AVector_new02
static int tolua_PX2_AVector_new02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"AVector",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
  float z = ((float)  tolua_tonumber(tolua_S,4,0));
  {
   AVector* tolua_ret = (AVector*)  Mtolua_new((AVector)(x,y,z));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"AVector");
  }
 }
 return 1;
tolua_lerror:
 return tolua_PX2_AVector_new01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  AVector */
#ifndef TOLUA_DISABLE_tolua_PX2_AVector_new02_local
static int tolua_PX2_AVector_new02_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"AVector",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
  float z = ((float)  tolua_tonumber(tolua_S,4,0));
  {
   AVector* tolua_ret = (AVector*)  Mtolua_new((AVector)(x,y,z));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"AVector");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_PX2_AVector_new01_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  AVector */
#ifndef TOLUA_DISABLE_tolua_PX2_AVector_new03
static int tolua_PX2_AVector_new03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"AVector",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Float3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Float3* tuple = ((const Float3*)  tolua_tousertype(tolua_S,2,0));
  {
   AVector* tolua_ret = (AVector*)  Mtolua_new((AVector)(*tuple));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"AVector");
  }
 }
 return 1;
tolua_lerror:
 return tolua_PX2_AVector_new02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  AVector */
#ifndef TOLUA_DISABLE_tolua_PX2_AVector_new03_local
static int tolua_PX2_AVector_new03_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"AVector",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Float3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Float3* tuple = ((const Float3*)  tolua_tousertype(tolua_S,2,0));
  {
   AVector* tolua_ret = (AVector*)  Mtolua_new((AVector)(*tuple));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"AVector");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_PX2_AVector_new02_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  AVector */
#ifndef TOLUA_DISABLE_tolua_PX2_AVector_new04
static int tolua_PX2_AVector_new04(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"AVector",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Vector3f",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Vector3f* vec = ((const Vector3f*)  tolua_tousertype(tolua_S,2,0));
  {
   AVector* tolua_ret = (AVector*)  Mtolua_new((AVector)(*vec));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"AVector");
  }
 }
 return 1;
tolua_lerror:
 return tolua_PX2_AVector_new03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  AVector */
#ifndef TOLUA_DISABLE_tolua_PX2_AVector_new04_local
static int tolua_PX2_AVector_new04_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"AVector",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Vector3f",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Vector3f* vec = ((const Vector3f*)  tolua_tousertype(tolua_S,2,0));
  {
   AVector* tolua_ret = (AVector*)  Mtolua_new((AVector)(*vec));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"AVector");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_PX2_AVector_new03_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  AVector */
#ifndef TOLUA_DISABLE_tolua_PX2_AVector_delete00
static int tolua_PX2_AVector_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"AVector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  AVector* self = (AVector*)  tolua_tousertype(tolua_S,1,0);
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

/* method: operator+ of class  AVector */
#ifndef TOLUA_DISABLE_tolua_PX2_AVector__add00
static int tolua_PX2_AVector__add00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const AVector",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const AVector",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const AVector* self = (const AVector*)  tolua_tousertype(tolua_S,1,0);
  const AVector* vec = ((const AVector*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator+'", NULL);
#endif
  {
   AVector tolua_ret = (AVector)  self->operator+(*vec);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((AVector)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"AVector");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(AVector));
     tolua_pushusertype(tolua_S,tolua_obj,"AVector");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.add'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator- of class  AVector */
#ifndef TOLUA_DISABLE_tolua_PX2_AVector__sub00
static int tolua_PX2_AVector__sub00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const AVector",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const AVector",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const AVector* self = (const AVector*)  tolua_tousertype(tolua_S,1,0);
  const AVector* vec = ((const AVector*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator-'", NULL);
#endif
  {
   AVector tolua_ret = (AVector)  self->operator-(*vec);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((AVector)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"AVector");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(AVector));
     tolua_pushusertype(tolua_S,tolua_obj,"AVector");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.sub'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator* of class  AVector */
#ifndef TOLUA_DISABLE_tolua_PX2_AVector__mul00
static int tolua_PX2_AVector__mul00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const AVector",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const AVector* self = (const AVector*)  tolua_tousertype(tolua_S,1,0);
  float scalar = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator*'", NULL);
#endif
  {
   AVector tolua_ret = (AVector)  self->operator*(scalar);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((AVector)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"AVector");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(AVector));
     tolua_pushusertype(tolua_S,tolua_obj,"AVector");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.mul'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator/ of class  AVector */
#ifndef TOLUA_DISABLE_tolua_PX2_AVector__div00
static int tolua_PX2_AVector__div00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const AVector",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const AVector* self = (const AVector*)  tolua_tousertype(tolua_S,1,0);
  float scalar = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator/'", NULL);
#endif
  {
   AVector tolua_ret = (AVector)  self->operator/(scalar);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((AVector)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"AVector");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(AVector));
     tolua_pushusertype(tolua_S,tolua_obj,"AVector");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.div'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator- of class  AVector */
#ifndef TOLUA_DISABLE_tolua_PX2_AVector__sub01
static int tolua_PX2_AVector__sub01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const AVector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const AVector* self = (const AVector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator-'", NULL);
#endif
  {
   AVector tolua_ret = (AVector)  self->operator-();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((AVector)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"AVector");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(AVector));
     tolua_pushusertype(tolua_S,tolua_obj,"AVector");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_PX2_AVector__sub00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Length of class  AVector */
#ifndef TOLUA_DISABLE_tolua_PX2_AVector_Length00
static int tolua_PX2_AVector_Length00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const AVector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const AVector* self = (const AVector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Length'", NULL);
#endif
  {
   float tolua_ret = (float)  self->Length();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Length'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SquaredLength of class  AVector */
#ifndef TOLUA_DISABLE_tolua_PX2_AVector_SquaredLength00
static int tolua_PX2_AVector_SquaredLength00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const AVector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const AVector* self = (const AVector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SquaredLength'", NULL);
#endif
  {
   float tolua_ret = (float)  self->SquaredLength();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SquaredLength'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Dot of class  AVector */
#ifndef TOLUA_DISABLE_tolua_PX2_AVector_Dot00
static int tolua_PX2_AVector_Dot00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const AVector",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const AVector",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const AVector* self = (const AVector*)  tolua_tousertype(tolua_S,1,0);
  const AVector* vec = ((const AVector*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Dot'", NULL);
#endif
  {
   float tolua_ret = (float)  self->Dot(*vec);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Dot'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Normalize of class  AVector */
#ifndef TOLUA_DISABLE_tolua_PX2_AVector_Normalize00
static int tolua_PX2_AVector_Normalize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"AVector",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  AVector* self = (AVector*)  tolua_tousertype(tolua_S,1,0);
  const float epsilon = ((const float)  tolua_tonumber(tolua_S,2,Mathf::ZERO_TOLERANCE));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Normalize'", NULL);
#endif
  {
   float tolua_ret = (float)  self->Normalize(epsilon);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Normalize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Cross of class  AVector */
#ifndef TOLUA_DISABLE_tolua_PX2_AVector_Cross00
static int tolua_PX2_AVector_Cross00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const AVector",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const AVector",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const AVector* self = (const AVector*)  tolua_tousertype(tolua_S,1,0);
  const AVector* vec = ((const AVector*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Cross'", NULL);
#endif
  {
   AVector tolua_ret = (AVector)  self->Cross(*vec);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((AVector)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"AVector");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(AVector));
     tolua_pushusertype(tolua_S,tolua_obj,"AVector");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Cross'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: UnitCross of class  AVector */
#ifndef TOLUA_DISABLE_tolua_PX2_AVector_UnitCross00
static int tolua_PX2_AVector_UnitCross00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const AVector",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const AVector",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const AVector* self = (const AVector*)  tolua_tousertype(tolua_S,1,0);
  const AVector* vec = ((const AVector*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'UnitCross'", NULL);
#endif
  {
   AVector tolua_ret = (AVector)  self->UnitCross(*vec);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((AVector)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"AVector");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(AVector));
     tolua_pushusertype(tolua_S,tolua_obj,"AVector");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'UnitCross'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Orthonormalize of class  AVector */
#ifndef TOLUA_DISABLE_tolua_PX2_AVector_Orthonormalize00
static int tolua_PX2_AVector_Orthonormalize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"AVector",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"AVector",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"AVector",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"AVector",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  AVector* vec0 = ((AVector*)  tolua_tousertype(tolua_S,2,0));
  AVector* vec1 = ((AVector*)  tolua_tousertype(tolua_S,3,0));
  AVector* vec2 = ((AVector*)  tolua_tousertype(tolua_S,4,0));
  {
   AVector::Orthonormalize(*vec0,*vec1,*vec2);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Orthonormalize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Orthonormalize of class  AVector */
#ifndef TOLUA_DISABLE_tolua_PX2_AVector_Orthonormalize01
static int tolua_PX2_AVector_Orthonormalize01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"AVector",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"AVector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  AVector* vec = ((AVector*)  tolua_tousertype(tolua_S,2,0));
  {
   AVector::Orthonormalize(vec);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_AVector_Orthonormalize00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: GenerateOrthonormalBasis of class  AVector */
#ifndef TOLUA_DISABLE_tolua_PX2_AVector_GenerateOrthonormalBasis00
static int tolua_PX2_AVector_GenerateOrthonormalBasis00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"AVector",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"AVector",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"AVector",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"AVector",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  AVector* vec0 = ((AVector*)  tolua_tousertype(tolua_S,2,0));
  AVector* vec1 = ((AVector*)  tolua_tousertype(tolua_S,3,0));
  AVector* vec2 = ((AVector*)  tolua_tousertype(tolua_S,4,0));
  {
   AVector::GenerateOrthonormalBasis(*vec0,*vec1,*vec2);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GenerateOrthonormalBasis'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GenerateComplementBasis of class  AVector */
#ifndef TOLUA_DISABLE_tolua_PX2_AVector_GenerateComplementBasis00
static int tolua_PX2_AVector_GenerateComplementBasis00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"AVector",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"AVector",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"AVector",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const AVector",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  AVector* vec0 = ((AVector*)  tolua_tousertype(tolua_S,2,0));
  AVector* vec1 = ((AVector*)  tolua_tousertype(tolua_S,3,0));
  const AVector* vec2 = ((const AVector*)  tolua_tousertype(tolua_S,4,0));
  {
   AVector::GenerateComplementBasis(*vec0,*vec1,*vec2);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GenerateComplementBasis'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: ZERO of class  AVector */
#ifndef TOLUA_DISABLE_tolua_get_AVector_ZERO
static int tolua_get_AVector_ZERO(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&AVector::ZERO,"const AVector");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: UNIT_X of class  AVector */
#ifndef TOLUA_DISABLE_tolua_get_AVector_UNIT_X
static int tolua_get_AVector_UNIT_X(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&AVector::UNIT_X,"const AVector");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: UNIT_Y of class  AVector */
#ifndef TOLUA_DISABLE_tolua_get_AVector_UNIT_Y
static int tolua_get_AVector_UNIT_Y(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&AVector::UNIT_Y,"const AVector");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: UNIT_Z of class  AVector */
#ifndef TOLUA_DISABLE_tolua_get_AVector_UNIT_Z
static int tolua_get_AVector_UNIT_Z(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&AVector::UNIT_Z,"const AVector");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  HPoint */
#ifndef TOLUA_DISABLE_tolua_PX2_HPoint_new00
static int tolua_PX2_HPoint_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"HPoint",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   HPoint* tolua_ret = (HPoint*)  Mtolua_new((HPoint)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"HPoint");
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

/* method: new_local of class  HPoint */
#ifndef TOLUA_DISABLE_tolua_PX2_HPoint_new00_local
static int tolua_PX2_HPoint_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"HPoint",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   HPoint* tolua_ret = (HPoint*)  Mtolua_new((HPoint)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"HPoint");
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

/* method: new of class  HPoint */
#ifndef TOLUA_DISABLE_tolua_PX2_HPoint_new01
static int tolua_PX2_HPoint_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"HPoint",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const HPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const HPoint* pnt = ((const HPoint*)  tolua_tousertype(tolua_S,2,0));
  {
   HPoint* tolua_ret = (HPoint*)  Mtolua_new((HPoint)(*pnt));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"HPoint");
  }
 }
 return 1;
tolua_lerror:
 return tolua_PX2_HPoint_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  HPoint */
#ifndef TOLUA_DISABLE_tolua_PX2_HPoint_new01_local
static int tolua_PX2_HPoint_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"HPoint",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const HPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const HPoint* pnt = ((const HPoint*)  tolua_tousertype(tolua_S,2,0));
  {
   HPoint* tolua_ret = (HPoint*)  Mtolua_new((HPoint)(*pnt));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"HPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_PX2_HPoint_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  HPoint */
#ifndef TOLUA_DISABLE_tolua_PX2_HPoint_new02
static int tolua_PX2_HPoint_new02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"HPoint",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
  float z = ((float)  tolua_tonumber(tolua_S,4,0));
  float w = ((float)  tolua_tonumber(tolua_S,5,0));
  {
   HPoint* tolua_ret = (HPoint*)  Mtolua_new((HPoint)(x,y,z,w));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"HPoint");
  }
 }
 return 1;
tolua_lerror:
 return tolua_PX2_HPoint_new01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  HPoint */
#ifndef TOLUA_DISABLE_tolua_PX2_HPoint_new02_local
static int tolua_PX2_HPoint_new02_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"HPoint",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
  float z = ((float)  tolua_tonumber(tolua_S,4,0));
  float w = ((float)  tolua_tonumber(tolua_S,5,0));
  {
   HPoint* tolua_ret = (HPoint*)  Mtolua_new((HPoint)(x,y,z,w));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"HPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_PX2_HPoint_new01_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  HPoint */
#ifndef TOLUA_DISABLE_tolua_PX2_HPoint_delete00
static int tolua_PX2_HPoint_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"HPoint",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  HPoint* self = (HPoint*)  tolua_tousertype(tolua_S,1,0);
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

/* method: operator[] of class  HPoint */
#ifndef TOLUA_DISABLE_tolua_PX2_HPoint__geti00
static int tolua_PX2_HPoint__geti00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const HPoint",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const HPoint* self = (const HPoint*)  tolua_tousertype(tolua_S,1,0);
  int i = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator[]'", NULL);
#endif
  {
   float tolua_ret = (float)  self->operator[](i);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.geti'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator&[] of class  HPoint */
#ifndef TOLUA_DISABLE_tolua_PX2_HPoint__seti00
static int tolua_PX2_HPoint__seti00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"HPoint",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  HPoint* self = (HPoint*)  tolua_tousertype(tolua_S,1,0);
  int i = ((int)  tolua_tonumber(tolua_S,2,0));
  float tolua_value = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator&[]'", NULL);
#endif
  self->operator[](i) =  tolua_value;
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.seti'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator[] of class  HPoint */
#ifndef TOLUA_DISABLE_tolua_PX2_HPoint__geti01
static int tolua_PX2_HPoint__geti01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"HPoint",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  HPoint* self = (HPoint*)  tolua_tousertype(tolua_S,1,0);
  int i = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator[]'", NULL);
#endif
  {
   float tolua_ret = (float)  self->operator[](i);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_PX2_HPoint__geti00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: X of class  HPoint */
#ifndef TOLUA_DISABLE_tolua_PX2_HPoint_X00
static int tolua_PX2_HPoint_X00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const HPoint",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const HPoint* self = (const HPoint*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'X'", NULL);
#endif
  {
   float tolua_ret = (float)  self->X();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'X'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: X of class  HPoint */
#ifndef TOLUA_DISABLE_tolua_PX2_HPoint_X01
static int tolua_PX2_HPoint_X01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"HPoint",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  HPoint* self = (HPoint*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'X'", NULL);
#endif
  {
   float tolua_ret = (float)  self->X();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_PX2_HPoint_X00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Y of class  HPoint */
#ifndef TOLUA_DISABLE_tolua_PX2_HPoint_Y00
static int tolua_PX2_HPoint_Y00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const HPoint",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const HPoint* self = (const HPoint*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Y'", NULL);
#endif
  {
   float tolua_ret = (float)  self->Y();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Y'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Y of class  HPoint */
#ifndef TOLUA_DISABLE_tolua_PX2_HPoint_Y01
static int tolua_PX2_HPoint_Y01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"HPoint",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  HPoint* self = (HPoint*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Y'", NULL);
#endif
  {
   float tolua_ret = (float)  self->Y();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_PX2_HPoint_Y00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Z of class  HPoint */
#ifndef TOLUA_DISABLE_tolua_PX2_HPoint_Z00
static int tolua_PX2_HPoint_Z00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const HPoint",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const HPoint* self = (const HPoint*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Z'", NULL);
#endif
  {
   float tolua_ret = (float)  self->Z();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Z'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Z of class  HPoint */
#ifndef TOLUA_DISABLE_tolua_PX2_HPoint_Z01
static int tolua_PX2_HPoint_Z01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"HPoint",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  HPoint* self = (HPoint*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Z'", NULL);
#endif
  {
   float tolua_ret = (float)  self->Z();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_PX2_HPoint_Z00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: W of class  HPoint */
#ifndef TOLUA_DISABLE_tolua_PX2_HPoint_W00
static int tolua_PX2_HPoint_W00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const HPoint",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const HPoint* self = (const HPoint*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'W'", NULL);
#endif
  {
   float tolua_ret = (float)  self->W();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'W'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: W of class  HPoint */
#ifndef TOLUA_DISABLE_tolua_PX2_HPoint_W01
static int tolua_PX2_HPoint_W01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"HPoint",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  HPoint* self = (HPoint*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'W'", NULL);
#endif
  {
   float tolua_ret = (float)  self->W();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_PX2_HPoint_W00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator== of class  HPoint */
#ifndef TOLUA_DISABLE_tolua_PX2_HPoint__eq00
static int tolua_PX2_HPoint__eq00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const HPoint",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const HPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const HPoint* self = (const HPoint*)  tolua_tousertype(tolua_S,1,0);
  const HPoint* pnt = ((const HPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator=='", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->operator==(*pnt);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.eq'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator< of class  HPoint */
#ifndef TOLUA_DISABLE_tolua_PX2_HPoint__lt00
static int tolua_PX2_HPoint__lt00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const HPoint",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const HPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const HPoint* self = (const HPoint*)  tolua_tousertype(tolua_S,1,0);
  const HPoint* pnt = ((const HPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator<'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->operator<(*pnt);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.lt'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator<= of class  HPoint */
#ifndef TOLUA_DISABLE_tolua_PX2_HPoint__le00
static int tolua_PX2_HPoint__le00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const HPoint",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const HPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const HPoint* self = (const HPoint*)  tolua_tousertype(tolua_S,1,0);
  const HPoint* pnt = ((const HPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator<='", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->operator<=(*pnt);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.le'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Transform */
#ifndef TOLUA_DISABLE_tolua_PX2_Transform_new00
static int tolua_PX2_Transform_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Transform",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Transform* tolua_ret = (Transform*)  Mtolua_new((Transform)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Transform");
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

/* method: new_local of class  Transform */
#ifndef TOLUA_DISABLE_tolua_PX2_Transform_new00_local
static int tolua_PX2_Transform_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Transform",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Transform* tolua_ret = (Transform*)  Mtolua_new((Transform)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Transform");
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

/* method: delete of class  Transform */
#ifndef TOLUA_DISABLE_tolua_PX2_Transform_delete00
static int tolua_PX2_Transform_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Transform",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Transform* self = (Transform*)  tolua_tousertype(tolua_S,1,0);
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

/* method: MakeIdentity of class  Transform */
#ifndef TOLUA_DISABLE_tolua_PX2_Transform_MakeIdentity00
static int tolua_PX2_Transform_MakeIdentity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Transform",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Transform* self = (Transform*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'MakeIdentity'", NULL);
#endif
  {
   self->MakeIdentity();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'MakeIdentity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: MakeUnitScale of class  Transform */
#ifndef TOLUA_DISABLE_tolua_PX2_Transform_MakeUnitScale00
static int tolua_PX2_Transform_MakeUnitScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Transform",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Transform* self = (Transform*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'MakeUnitScale'", NULL);
#endif
  {
   self->MakeUnitScale();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'MakeUnitScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: IsIdentity of class  Transform */
#ifndef TOLUA_DISABLE_tolua_PX2_Transform_IsIdentity00
static int tolua_PX2_Transform_IsIdentity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Transform",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Transform* self = (const Transform*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'IsIdentity'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->IsIdentity();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'IsIdentity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: IsRSMatrix of class  Transform */
#ifndef TOLUA_DISABLE_tolua_PX2_Transform_IsRSMatrix00
static int tolua_PX2_Transform_IsRSMatrix00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Transform",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Transform* self = (const Transform*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'IsRSMatrix'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->IsRSMatrix();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'IsRSMatrix'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: IsUniformScale of class  Transform */
#ifndef TOLUA_DISABLE_tolua_PX2_Transform_IsUniformScale00
static int tolua_PX2_Transform_IsUniformScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Transform",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Transform* self = (const Transform*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'IsUniformScale'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->IsUniformScale();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'IsUniformScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetRotate of class  Transform */
#ifndef TOLUA_DISABLE_tolua_PX2_Transform_SetRotate00
static int tolua_PX2_Transform_SetRotate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Transform",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const HMatrix",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Transform* self = (Transform*)  tolua_tousertype(tolua_S,1,0);
  const HMatrix* rotate = ((const HMatrix*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetRotate'", NULL);
#endif
  {
   self->SetRotate(*rotate);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetRotate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetMatrix of class  Transform */
#ifndef TOLUA_DISABLE_tolua_PX2_Transform_SetMatrix00
static int tolua_PX2_Transform_SetMatrix00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Transform",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const HMatrix",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Transform* self = (Transform*)  tolua_tousertype(tolua_S,1,0);
  const HMatrix* matrix = ((const HMatrix*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetMatrix'", NULL);
#endif
  {
   self->SetMatrix(*matrix);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetMatrix'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetTranslate of class  Transform */
#ifndef TOLUA_DISABLE_tolua_PX2_Transform_SetTranslate00
static int tolua_PX2_Transform_SetTranslate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Transform",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const APoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Transform* self = (Transform*)  tolua_tousertype(tolua_S,1,0);
  const APoint* translate = ((const APoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetTranslate'", NULL);
#endif
  {
   self->SetTranslate(*translate);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetTranslate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetScale of class  Transform */
#ifndef TOLUA_DISABLE_tolua_PX2_Transform_SetScale00
static int tolua_PX2_Transform_SetScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Transform",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const APoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Transform* self = (Transform*)  tolua_tousertype(tolua_S,1,0);
  const APoint* scale = ((const APoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetScale'", NULL);
#endif
  {
   self->SetScale(*scale);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetUniformScale of class  Transform */
#ifndef TOLUA_DISABLE_tolua_PX2_Transform_SetUniformScale00
static int tolua_PX2_Transform_SetUniformScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Transform",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Transform* self = (Transform*)  tolua_tousertype(tolua_S,1,0);
  float scale = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetUniformScale'", NULL);
#endif
  {
   self->SetUniformScale(scale);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetUniformScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetRotate of class  Transform */
#ifndef TOLUA_DISABLE_tolua_PX2_Transform_GetRotate00
static int tolua_PX2_Transform_GetRotate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Transform",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Transform* self = (const Transform*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetRotate'", NULL);
#endif
  {
   const HMatrix& tolua_ret = (const HMatrix&)  self->GetRotate();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const HMatrix");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetRotate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetMatrix of class  Transform */
#ifndef TOLUA_DISABLE_tolua_PX2_Transform_GetMatrix00
static int tolua_PX2_Transform_GetMatrix00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Transform",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Transform* self = (const Transform*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetMatrix'", NULL);
#endif
  {
   const HMatrix& tolua_ret = (const HMatrix&)  self->GetMatrix();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const HMatrix");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetMatrix'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetTranslate of class  Transform */
#ifndef TOLUA_DISABLE_tolua_PX2_Transform_GetTranslate00
static int tolua_PX2_Transform_GetTranslate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Transform",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Transform* self = (const Transform*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetTranslate'", NULL);
#endif
  {
   const APoint& tolua_ret = (const APoint&)  self->GetTranslate();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const APoint");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetTranslate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetScale of class  Transform */
#ifndef TOLUA_DISABLE_tolua_PX2_Transform_GetScale00
static int tolua_PX2_Transform_GetScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Transform",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Transform* self = (const Transform*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetScale'", NULL);
#endif
  {
   const APoint& tolua_ret = (const APoint&)  self->GetScale();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const APoint");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetUniformScale of class  Transform */
#ifndef TOLUA_DISABLE_tolua_PX2_Transform_GetUniformScale00
static int tolua_PX2_Transform_GetUniformScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Transform",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Transform* self = (const Transform*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetUniformScale'", NULL);
#endif
  {
   float tolua_ret = (float)  self->GetUniformScale();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetUniformScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetNorm of class  Transform */
#ifndef TOLUA_DISABLE_tolua_PX2_Transform_GetNorm00
static int tolua_PX2_Transform_GetNorm00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Transform",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Transform* self = (const Transform*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetNorm'", NULL);
#endif
  {
   float tolua_ret = (float)  self->GetNorm();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetNorm'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator* of class  Transform */
#ifndef TOLUA_DISABLE_tolua_PX2_Transform__mul00
static int tolua_PX2_Transform__mul00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Transform",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const APoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Transform* self = (const Transform*)  tolua_tousertype(tolua_S,1,0);
  const APoint* pnt = ((const APoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator*'", NULL);
#endif
  {
   APoint tolua_ret = (APoint)  self->operator*(*pnt);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((APoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"APoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(APoint));
     tolua_pushusertype(tolua_S,tolua_obj,"APoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.mul'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator* of class  Transform */
#ifndef TOLUA_DISABLE_tolua_PX2_Transform__mul01
static int tolua_PX2_Transform__mul01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Transform",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const AVector",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Transform* self = (const Transform*)  tolua_tousertype(tolua_S,1,0);
  const AVector* vec = ((const AVector*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator*'", NULL);
#endif
  {
   AVector tolua_ret = (AVector)  self->operator*(*vec);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((AVector)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"AVector");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(AVector));
     tolua_pushusertype(tolua_S,tolua_obj,"AVector");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_PX2_Transform__mul00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator* of class  Transform */
#ifndef TOLUA_DISABLE_tolua_PX2_Transform__mul02
static int tolua_PX2_Transform__mul02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Transform",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Transform",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Transform* self = (const Transform*)  tolua_tousertype(tolua_S,1,0);
  const Transform* transform = ((const Transform*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator*'", NULL);
#endif
  {
   Transform tolua_ret = (Transform)  self->operator*(*transform);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Transform)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Transform");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Transform));
     tolua_pushusertype(tolua_S,tolua_obj,"Transform");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_PX2_Transform__mul01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Matrix of class  Transform */
#ifndef TOLUA_DISABLE_tolua_PX2_Transform_Matrix00
static int tolua_PX2_Transform_Matrix00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Transform",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Transform* self = (const Transform*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Matrix'", NULL);
#endif
  {
   const HMatrix& tolua_ret = (const HMatrix&)  self->Matrix();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const HMatrix");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Matrix'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Inverse of class  Transform */
#ifndef TOLUA_DISABLE_tolua_PX2_Transform_Inverse00
static int tolua_PX2_Transform_Inverse00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Transform",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Transform* self = (const Transform*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Inverse'", NULL);
#endif
  {
   const HMatrix& tolua_ret = (const HMatrix&)  self->Inverse();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const HMatrix");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Inverse'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: InverseTransform of class  Transform */
#ifndef TOLUA_DISABLE_tolua_PX2_Transform_InverseTransform00
static int tolua_PX2_Transform_InverseTransform00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Transform",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Transform* self = (const Transform*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'InverseTransform'", NULL);
#endif
  {
   Transform tolua_ret = (Transform)  self->InverseTransform();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Transform)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Transform");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Transform));
     tolua_pushusertype(tolua_S,tolua_obj,"Transform");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'InverseTransform'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: IDENTITY of class  Transform */
#ifndef TOLUA_DISABLE_tolua_get_Transform_IDENTITY
static int tolua_get_Transform_IDENTITY(lua_State* tolua_S)
{
   tolua_pushusertype(tolua_S,(void*)&Transform::IDENTITY,"const Transform");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetStreamingSize of class  Transform */
#ifndef TOLUA_DISABLE_tolua_PX2_Transform_GetStreamingSize00
static int tolua_PX2_Transform_GetStreamingSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Transform",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   int tolua_ret = (int)  Transform::GetStreamingSize();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetStreamingSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  Controlledable */
#ifndef TOLUA_DISABLE_tolua_PX2_Controlledable_delete00
static int tolua_PX2_Controlledable_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Controlledable",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Controlledable* self = (Controlledable*)  tolua_tousertype(tolua_S,1,0);
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

/* method: GetNumControllers of class  Controlledable */
#ifndef TOLUA_DISABLE_tolua_PX2_Controlledable_GetNumControllers00
static int tolua_PX2_Controlledable_GetNumControllers00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Controlledable",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Controlledable* self = (const Controlledable*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetNumControllers'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetNumControllers();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetNumControllers'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetController of class  Controlledable */
#ifndef TOLUA_DISABLE_tolua_PX2_Controlledable_GetController00
static int tolua_PX2_Controlledable_GetController00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Controlledable",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Controlledable* self = (const Controlledable*)  tolua_tousertype(tolua_S,1,0);
  int i = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetController'", NULL);
#endif
  {
   Controller* tolua_ret = (Controller*)  self->GetController(i);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Controller");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetController'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AttachController of class  Controlledable */
#ifndef TOLUA_DISABLE_tolua_PX2_Controlledable_AttachController00
static int tolua_PX2_Controlledable_AttachController00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Controlledable",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Controller",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Controlledable* self = (Controlledable*)  tolua_tousertype(tolua_S,1,0);
  Controller* controller = ((Controller*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AttachController'", NULL);
#endif
  {
   self->AttachController(controller);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AttachController'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: DetachController of class  Controlledable */
#ifndef TOLUA_DISABLE_tolua_PX2_Controlledable_DetachController00
static int tolua_PX2_Controlledable_DetachController00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Controlledable",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Controller",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Controlledable* self = (Controlledable*)  tolua_tousertype(tolua_S,1,0);
  Controller* controller = ((Controller*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'DetachController'", NULL);
#endif
  {
   self->DetachController(controller);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'DetachController'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: DetachAllControllers of class  Controlledable */
#ifndef TOLUA_DISABLE_tolua_PX2_Controlledable_DetachAllControllers00
static int tolua_PX2_Controlledable_DetachAllControllers00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Controlledable",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Controlledable* self = (Controlledable*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'DetachAllControllers'", NULL);
#endif
  {
   self->DetachAllControllers();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'DetachAllControllers'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  Movable */
#ifndef TOLUA_DISABLE_tolua_PX2_Movable_delete00
static int tolua_PX2_Movable_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Movable",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Movable* self = (Movable*)  tolua_tousertype(tolua_S,1,0);
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

/* get function: LocalTransform of class  Movable */
#ifndef TOLUA_DISABLE_tolua_get_Movable_LocalTransform
static int tolua_get_Movable_LocalTransform(lua_State* tolua_S)
{
  Movable* self = (Movable*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'LocalTransform'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->LocalTransform,"Transform");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: LocalTransform of class  Movable */
#ifndef TOLUA_DISABLE_tolua_set_Movable_LocalTransform
static int tolua_set_Movable_LocalTransform(lua_State* tolua_S)
{
  Movable* self = (Movable*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'LocalTransform'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Transform",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->LocalTransform = *((Transform*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: WorldTransform of class  Movable */
#ifndef TOLUA_DISABLE_tolua_get_Movable_WorldTransform
static int tolua_get_Movable_WorldTransform(lua_State* tolua_S)
{
  Movable* self = (Movable*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'WorldTransform'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->WorldTransform,"Transform");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: WorldTransform of class  Movable */
#ifndef TOLUA_DISABLE_tolua_set_Movable_WorldTransform
static int tolua_set_Movable_WorldTransform(lua_State* tolua_S)
{
  Movable* self = (Movable*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'WorldTransform'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Transform",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->WorldTransform = *((Transform*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: WorldTransformIsCurrent of class  Movable */
#ifndef TOLUA_DISABLE_tolua_get_Movable_WorldTransformIsCurrent
static int tolua_get_Movable_WorldTransformIsCurrent(lua_State* tolua_S)
{
  Movable* self = (Movable*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'WorldTransformIsCurrent'",NULL);
#endif
  tolua_pushboolean(tolua_S,(bool)self->WorldTransformIsCurrent);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: WorldTransformIsCurrent of class  Movable */
#ifndef TOLUA_DISABLE_tolua_set_Movable_WorldTransformIsCurrent
static int tolua_set_Movable_WorldTransformIsCurrent(lua_State* tolua_S)
{
  Movable* self = (Movable*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'WorldTransformIsCurrent'",NULL);
  if (!tolua_isboolean(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->WorldTransformIsCurrent = ((bool)  tolua_toboolean(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: WorldBound of class  Movable */
#ifndef TOLUA_DISABLE_tolua_get_Movable_WorldBound
static int tolua_get_Movable_WorldBound(lua_State* tolua_S)
{
  Movable* self = (Movable*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'WorldBound'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->WorldBound,"Bound");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: WorldBound of class  Movable */
#ifndef TOLUA_DISABLE_tolua_set_Movable_WorldBound
static int tolua_set_Movable_WorldBound(lua_State* tolua_S)
{
  Movable* self = (Movable*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'WorldBound'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Bound",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->WorldBound = *((Bound*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: WorldBoundIsCurrent of class  Movable */
#ifndef TOLUA_DISABLE_tolua_get_Movable_WorldBoundIsCurrent
static int tolua_get_Movable_WorldBoundIsCurrent(lua_State* tolua_S)
{
  Movable* self = (Movable*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'WorldBoundIsCurrent'",NULL);
#endif
  tolua_pushboolean(tolua_S,(bool)self->WorldBoundIsCurrent);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: WorldBoundIsCurrent of class  Movable */
#ifndef TOLUA_DISABLE_tolua_set_Movable_WorldBoundIsCurrent
static int tolua_set_Movable_WorldBoundIsCurrent(lua_State* tolua_S)
{
  Movable* self = (Movable*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'WorldBoundIsCurrent'",NULL);
  if (!tolua_isboolean(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->WorldBoundIsCurrent = ((bool)  tolua_toboolean(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: Culling of class  Movable */
#ifndef TOLUA_DISABLE_tolua_get_Movable_Culling
static int tolua_get_Movable_Culling(lua_State* tolua_S)
{
  Movable* self = (Movable*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Culling'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->Culling);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: Culling of class  Movable */
#ifndef TOLUA_DISABLE_tolua_set_Movable_Culling
static int tolua_set_Movable_Culling(lua_State* tolua_S)
{
  Movable* self = (Movable*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'Culling'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->Culling = ((Movable::CullingMode) (int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: Show of class  Movable */
#ifndef TOLUA_DISABLE_tolua_PX2_Movable_Show00
static int tolua_PX2_Movable_Show00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Movable",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Movable* self = (Movable*)  tolua_tousertype(tolua_S,1,0);
  bool show = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Show'", NULL);
#endif
  {
   self->Show(show);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Show'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: IsShow of class  Movable */
#ifndef TOLUA_DISABLE_tolua_PX2_Movable_IsShow00
static int tolua_PX2_Movable_IsShow00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Movable",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Movable* self = (const Movable*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'IsShow'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->IsShow();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'IsShow'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Update of class  Movable */
#ifndef TOLUA_DISABLE_tolua_PX2_Movable_Update00
static int tolua_PX2_Movable_Update00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Movable",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Movable* self = (Movable*)  tolua_tousertype(tolua_S,1,0);
  double applicationTime = ((double)  tolua_tonumber(tolua_S,2,-Mathd::MAX_REAL));
  bool initiator = ((bool)  tolua_toboolean(tolua_S,3,true));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Update'", NULL);
#endif
  {
   self->Update(applicationTime,initiator);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Update'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetParent of class  Movable */
#ifndef TOLUA_DISABLE_tolua_PX2_Movable_GetParent00
static int tolua_PX2_Movable_GetParent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Movable",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Movable* self = (Movable*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetParent'", NULL);
#endif
  {
   Movable* tolua_ret = (Movable*)  self->GetParent();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Movable");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetParent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  Renderable */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderable_delete00
static int tolua_PX2_Renderable_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderable",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Renderable* self = (Renderable*)  tolua_tousertype(tolua_S,1,0);
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

/* method: GetPrimitiveType of class  Renderable */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderable_GetPrimitiveType00
static int tolua_PX2_Renderable_GetPrimitiveType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Renderable",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Renderable* self = (const Renderable*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetPrimitiveType'", NULL);
#endif
  {
   Renderable::PrimitiveType tolua_ret = (Renderable::PrimitiveType)  self->GetPrimitiveType();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetPrimitiveType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetVertexFormat of class  Renderable */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderable_SetVertexFormat00
static int tolua_PX2_Renderable_SetVertexFormat00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderable",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"VertexFormat",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Renderable* self = (Renderable*)  tolua_tousertype(tolua_S,1,0);
  VertexFormat* vformat = ((VertexFormat*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetVertexFormat'", NULL);
#endif
  {
   self->SetVertexFormat(vformat);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetVertexFormat'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetVertexFormat of class  Renderable */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderable_GetVertexFormat00
static int tolua_PX2_Renderable_GetVertexFormat00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Renderable",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Renderable* self = (const Renderable*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetVertexFormat'", NULL);
#endif
  {
   const VertexFormat* tolua_ret = (const VertexFormat*)  self->GetVertexFormat();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"const VertexFormat");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetVertexFormat'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetVertexFormat of class  Renderable */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderable_GetVertexFormat01
static int tolua_PX2_Renderable_GetVertexFormat01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderable",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Renderable* self = (Renderable*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetVertexFormat'", NULL);
#endif
  {
   VertexFormat* tolua_ret = (VertexFormat*)  self->GetVertexFormat();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"VertexFormat");
  }
 }
 return 1;
tolua_lerror:
 return tolua_PX2_Renderable_GetVertexFormat00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetVertexBuffer of class  Renderable */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderable_SetVertexBuffer00
static int tolua_PX2_Renderable_SetVertexBuffer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderable",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"VertexBuffer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Renderable* self = (Renderable*)  tolua_tousertype(tolua_S,1,0);
  VertexBuffer* vbuffer = ((VertexBuffer*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetVertexBuffer'", NULL);
#endif
  {
   self->SetVertexBuffer(vbuffer);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetVertexBuffer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetVertexBuffer of class  Renderable */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderable_GetVertexBuffer00
static int tolua_PX2_Renderable_GetVertexBuffer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Renderable",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Renderable* self = (const Renderable*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetVertexBuffer'", NULL);
#endif
  {
   const VertexBuffer* tolua_ret = (const VertexBuffer*)  self->GetVertexBuffer();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"const VertexBuffer");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetVertexBuffer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetVertexBuffer of class  Renderable */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderable_GetVertexBuffer01
static int tolua_PX2_Renderable_GetVertexBuffer01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderable",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Renderable* self = (Renderable*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetVertexBuffer'", NULL);
#endif
  {
   VertexBuffer* tolua_ret = (VertexBuffer*)  self->GetVertexBuffer();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"VertexBuffer");
  }
 }
 return 1;
tolua_lerror:
 return tolua_PX2_Renderable_GetVertexBuffer00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetIndexBuffer of class  Renderable */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderable_SetIndexBuffer00
static int tolua_PX2_Renderable_SetIndexBuffer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderable",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"IndexBuffer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Renderable* self = (Renderable*)  tolua_tousertype(tolua_S,1,0);
  IndexBuffer* ibuffer = ((IndexBuffer*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetIndexBuffer'", NULL);
#endif
  {
   self->SetIndexBuffer(ibuffer);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetIndexBuffer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetIndexBuffer of class  Renderable */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderable_GetIndexBuffer00
static int tolua_PX2_Renderable_GetIndexBuffer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Renderable",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Renderable* self = (const Renderable*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetIndexBuffer'", NULL);
#endif
  {
   const IndexBuffer* tolua_ret = (const IndexBuffer*)  self->GetIndexBuffer();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"const IndexBuffer");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetIndexBuffer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetIndexBuffer of class  Renderable */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderable_GetIndexBuffer01
static int tolua_PX2_Renderable_GetIndexBuffer01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderable",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Renderable* self = (Renderable*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetIndexBuffer'", NULL);
#endif
  {
   IndexBuffer* tolua_ret = (IndexBuffer*)  self->GetIndexBuffer();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"IndexBuffer");
  }
 }
 return 1;
tolua_lerror:
 return tolua_PX2_Renderable_GetIndexBuffer00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetModelBound of class  Renderable */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderable_GetModelBound00
static int tolua_PX2_Renderable_GetModelBound00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Renderable",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Renderable* self = (const Renderable*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetModelBound'", NULL);
#endif
  {
   const Bound& tolua_ret = (const Bound&)  self->GetModelBound();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const Bound");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetModelBound'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetModelBound of class  Renderable */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderable_GetModelBound01
static int tolua_PX2_Renderable_GetModelBound01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderable",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Renderable* self = (Renderable*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetModelBound'", NULL);
#endif
  {
   Bound& tolua_ret = (Bound&)  self->GetModelBound();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"Bound");
  }
 }
 return 1;
tolua_lerror:
 return tolua_PX2_Renderable_GetModelBound00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddRenderUsage of class  Renderable */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderable_AddRenderUsage00
static int tolua_PX2_Renderable_AddRenderUsage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderable",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Renderable* self = (Renderable*)  tolua_tousertype(tolua_S,1,0);
  Renderable::RenderUsage usage = ((Renderable::RenderUsage) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddRenderUsage'", NULL);
#endif
  {
   self->AddRenderUsage(usage);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AddRenderUsage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: RemoveRenderUsage of class  Renderable */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderable_RemoveRenderUsage00
static int tolua_PX2_Renderable_RemoveRenderUsage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderable",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Renderable* self = (Renderable*)  tolua_tousertype(tolua_S,1,0);
  Renderable::RenderUsage usage = ((Renderable::RenderUsage) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'RemoveRenderUsage'", NULL);
#endif
  {
   self->RemoveRenderUsage(usage);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'RemoveRenderUsage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetRenderUsage of class  Renderable */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderable_GetRenderUsage00
static int tolua_PX2_Renderable_GetRenderUsage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderable",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Renderable* self = (Renderable*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetRenderUsage'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->GetRenderUsage();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetRenderUsage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetRenderLayer of class  Renderable */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderable_SetRenderLayer00
static int tolua_PX2_Renderable_SetRenderLayer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderable",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Renderable* self = (Renderable*)  tolua_tousertype(tolua_S,1,0);
  Renderable::RenderLayer layer = ((Renderable::RenderLayer) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetRenderLayer'", NULL);
#endif
  {
   self->SetRenderLayer(layer);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetRenderLayer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetSortIndex of class  Renderable */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderable_GetSortIndex00
static int tolua_PX2_Renderable_GetSortIndex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderable",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Renderable* self = (Renderable*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetSortIndex'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->GetSortIndex();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetSortIndex'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetMaterialInstance of class  Renderable */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderable_SetMaterialInstance00
static int tolua_PX2_Renderable_SetMaterialInstance00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderable",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"MaterialInstance",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Renderable* self = (Renderable*)  tolua_tousertype(tolua_S,1,0);
  MaterialInstance* material = ((MaterialInstance*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetMaterialInstance'", NULL);
#endif
  {
   self->SetMaterialInstance(material);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetMaterialInstance'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetMaterialInstance of class  Renderable */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderable_GetMaterialInstance00
static int tolua_PX2_Renderable_GetMaterialInstance00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Renderable",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Renderable* self = (const Renderable*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetMaterialInstance'", NULL);
#endif
  {
   MaterialInstance* tolua_ret = (MaterialInstance*)  self->GetMaterialInstance();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"MaterialInstance");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetMaterialInstance'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddLight of class  Renderable */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderable_AddLight00
static int tolua_PX2_Renderable_AddLight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderable",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Light",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Renderable* self = (Renderable*)  tolua_tousertype(tolua_S,1,0);
  Light* light = ((Light*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddLight'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->AddLight(light);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AddLight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: RemoveLight of class  Renderable */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderable_RemoveLight00
static int tolua_PX2_Renderable_RemoveLight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderable",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Light",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Renderable* self = (Renderable*)  tolua_tousertype(tolua_S,1,0);
  Light* light = ((Light*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'RemoveLight'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->RemoveLight(light);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'RemoveLight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ClearLights of class  Renderable */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderable_ClearLights00
static int tolua_PX2_Renderable_ClearLights00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderable",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Renderable* self = (Renderable*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ClearLights'", NULL);
#endif
  {
   self->ClearLights();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ClearLights'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetNumLights of class  Renderable */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderable_GetNumLights00
static int tolua_PX2_Renderable_GetNumLights00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderable",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Renderable* self = (Renderable*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetNumLights'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetNumLights();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetNumLights'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetLight of class  Renderable */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderable_GetLight00
static int tolua_PX2_Renderable_GetLight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderable",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Renderable* self = (Renderable*)  tolua_tousertype(tolua_S,1,0);
  int i = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetLight'", NULL);
#endif
  {
   Light* tolua_ret = (Light*)  self->GetLight(i);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Light");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetLight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: UpdateModelSpace of class  Renderable */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderable_UpdateModelSpace00
static int tolua_PX2_Renderable_UpdateModelSpace00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderable",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Renderable* self = (Renderable*)  tolua_tousertype(tolua_S,1,0);
  Renderable::UpdateType type = ((Renderable::UpdateType) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'UpdateModelSpace'", NULL);
#endif
  {
   self->UpdateModelSpace(type);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'UpdateModelSpace'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  Triangles */
#ifndef TOLUA_DISABLE_tolua_PX2_Triangles_delete00
static int tolua_PX2_Triangles_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Triangles",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Triangles* self = (Triangles*)  tolua_tousertype(tolua_S,1,0);
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

/* method: GetNumTriangles of class  Triangles */
#ifndef TOLUA_DISABLE_tolua_PX2_Triangles_GetNumTriangles00
static int tolua_PX2_Triangles_GetNumTriangles00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Triangles",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Triangles* self = (const Triangles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetNumTriangles'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetNumTriangles();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetNumTriangles'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetTriangle of class  Triangles */
#ifndef TOLUA_DISABLE_tolua_PX2_Triangles_GetTriangle00
static int tolua_PX2_Triangles_GetTriangle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Triangles",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Triangles* self = (const Triangles*)  tolua_tousertype(tolua_S,1,0);
  int i = ((int)  tolua_tonumber(tolua_S,2,0));
  int v0 = ((int)  tolua_tonumber(tolua_S,3,0));
  int v1 = ((int)  tolua_tonumber(tolua_S,4,0));
  int v2 = ((int)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetTriangle'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->GetTriangle(i,v0,v1,v2);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
   tolua_pushnumber(tolua_S,(lua_Number)v0);
   tolua_pushnumber(tolua_S,(lua_Number)v1);
   tolua_pushnumber(tolua_S,(lua_Number)v2);
  }
 }
 return 4;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetTriangle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetModelTriangle of class  Triangles */
#ifndef TOLUA_DISABLE_tolua_PX2_Triangles_GetModelTriangle00
static int tolua_PX2_Triangles_GetModelTriangle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Triangles",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"APoint",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Triangles* self = (const Triangles*)  tolua_tousertype(tolua_S,1,0);
  int i = ((int)  tolua_tonumber(tolua_S,2,0));
  APoint* modelTriangle = ((APoint*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetModelTriangle'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->GetModelTriangle(i,modelTriangle);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetModelTriangle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetWorldTriangle of class  Triangles */
#ifndef TOLUA_DISABLE_tolua_PX2_Triangles_GetWorldTriangle00
static int tolua_PX2_Triangles_GetWorldTriangle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Triangles",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"APoint",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Triangles* self = (const Triangles*)  tolua_tousertype(tolua_S,1,0);
  int i = ((int)  tolua_tonumber(tolua_S,2,0));
  APoint* worldTriangle = ((APoint*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetWorldTriangle'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->GetWorldTriangle(i,worldTriangle);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetWorldTriangle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetNumVertices of class  Triangles */
#ifndef TOLUA_DISABLE_tolua_PX2_Triangles_GetNumVertices00
static int tolua_PX2_Triangles_GetNumVertices00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Triangles",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Triangles* self = (const Triangles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetNumVertices'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetNumVertices();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetNumVertices'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetWorldTransform of class  Triangles */
#ifndef TOLUA_DISABLE_tolua_PX2_Triangles_GetWorldTransform00
static int tolua_PX2_Triangles_GetWorldTransform00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Triangles",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Triangles* self = (const Triangles*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetWorldTransform'", NULL);
#endif
  {
   const Transform& tolua_ret = (const Transform&)  self->GetWorldTransform();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const Transform");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetWorldTransform'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetPosition of class  Triangles */
#ifndef TOLUA_DISABLE_tolua_PX2_Triangles_GetPosition00
static int tolua_PX2_Triangles_GetPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Triangles",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Triangles* self = (const Triangles*)  tolua_tousertype(tolua_S,1,0);
  int v = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetPosition'", NULL);
#endif
  {
   Float3 tolua_ret = (Float3)  self->GetPosition(v);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Float3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Float3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Float3));
     tolua_pushusertype(tolua_S,tolua_obj,"Float3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: UpdateModelSpace of class  Triangles */
#ifndef TOLUA_DISABLE_tolua_PX2_Triangles_UpdateModelSpace00
static int tolua_PX2_Triangles_UpdateModelSpace00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Triangles",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Triangles* self = (Triangles*)  tolua_tousertype(tolua_S,1,0);
  Renderable::UpdateType type = ((Renderable::UpdateType) (int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'UpdateModelSpace'", NULL);
#endif
  {
   self->UpdateModelSpace(type);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'UpdateModelSpace'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  TriMesh */
#ifndef TOLUA_DISABLE_tolua_PX2_TriMesh_new00
static int tolua_PX2_TriMesh_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"TriMesh",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"VertexFormat",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"VertexBuffer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,4,"IndexBuffer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  VertexFormat* vformat = ((VertexFormat*)  tolua_tousertype(tolua_S,2,0));
  VertexBuffer* vbuffer = ((VertexBuffer*)  tolua_tousertype(tolua_S,3,0));
  IndexBuffer* ibuffer = ((IndexBuffer*)  tolua_tousertype(tolua_S,4,0));
  {
   TriMesh* tolua_ret = (TriMesh*)  Mtolua_new((TriMesh)(vformat,vbuffer,ibuffer));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"TriMesh");
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

/* method: new_local of class  TriMesh */
#ifndef TOLUA_DISABLE_tolua_PX2_TriMesh_new00_local
static int tolua_PX2_TriMesh_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"TriMesh",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"VertexFormat",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"VertexBuffer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,4,"IndexBuffer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  VertexFormat* vformat = ((VertexFormat*)  tolua_tousertype(tolua_S,2,0));
  VertexBuffer* vbuffer = ((VertexBuffer*)  tolua_tousertype(tolua_S,3,0));
  IndexBuffer* ibuffer = ((IndexBuffer*)  tolua_tousertype(tolua_S,4,0));
  {
   TriMesh* tolua_ret = (TriMesh*)  Mtolua_new((TriMesh)(vformat,vbuffer,ibuffer));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"TriMesh");
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

/* method: delete of class  TriMesh */
#ifndef TOLUA_DISABLE_tolua_PX2_TriMesh_delete00
static int tolua_PX2_TriMesh_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"TriMesh",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TriMesh* self = (TriMesh*)  tolua_tousertype(tolua_S,1,0);
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

/* method: GetNumTriangles of class  TriMesh */
#ifndef TOLUA_DISABLE_tolua_PX2_TriMesh_GetNumTriangles00
static int tolua_PX2_TriMesh_GetNumTriangles00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const TriMesh",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const TriMesh* self = (const TriMesh*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetNumTriangles'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetNumTriangles();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetNumTriangles'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetTriangle of class  TriMesh */
#ifndef TOLUA_DISABLE_tolua_PX2_TriMesh_GetTriangle00
static int tolua_PX2_TriMesh_GetTriangle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const TriMesh",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const TriMesh* self = (const TriMesh*)  tolua_tousertype(tolua_S,1,0);
  int i = ((int)  tolua_tonumber(tolua_S,2,0));
  int v0 = ((int)  tolua_tonumber(tolua_S,3,0));
  int v1 = ((int)  tolua_tonumber(tolua_S,4,0));
  int v2 = ((int)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetTriangle'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->GetTriangle(i,v0,v1,v2);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
   tolua_pushnumber(tolua_S,(lua_Number)v0);
   tolua_pushnumber(tolua_S,(lua_Number)v1);
   tolua_pushnumber(tolua_S,(lua_Number)v2);
  }
 }
 return 4;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetTriangle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  SwitchNode */
#ifndef TOLUA_DISABLE_tolua_PX2_SwitchNode_new00
static int tolua_PX2_SwitchNode_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"SwitchNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   SwitchNode* tolua_ret = (SwitchNode*)  Mtolua_new((SwitchNode)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SwitchNode");
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

/* method: new_local of class  SwitchNode */
#ifndef TOLUA_DISABLE_tolua_PX2_SwitchNode_new00_local
static int tolua_PX2_SwitchNode_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"SwitchNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   SwitchNode* tolua_ret = (SwitchNode*)  Mtolua_new((SwitchNode)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SwitchNode");
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

/* method: delete of class  SwitchNode */
#ifndef TOLUA_DISABLE_tolua_PX2_SwitchNode_delete00
static int tolua_PX2_SwitchNode_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SwitchNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SwitchNode* self = (SwitchNode*)  tolua_tousertype(tolua_S,1,0);
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

/* method: Create of class  SwitchNode */
#ifndef TOLUA_DISABLE_tolua_PX2_SwitchNode_Create00
static int tolua_PX2_SwitchNode_Create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"SwitchNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   SwitchNode* tolua_ret = (SwitchNode*)  SwitchNode::Create();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SwitchNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetActiveChild of class  SwitchNode */
#ifndef TOLUA_DISABLE_tolua_PX2_SwitchNode_SetActiveChild00
static int tolua_PX2_SwitchNode_SetActiveChild00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SwitchNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SwitchNode* self = (SwitchNode*)  tolua_tousertype(tolua_S,1,0);
  int activeChild = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetActiveChild'", NULL);
#endif
  {
   self->SetActiveChild(activeChild);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetActiveChild'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetActiveChild of class  SwitchNode */
#ifndef TOLUA_DISABLE_tolua_PX2_SwitchNode_GetActiveChild00
static int tolua_PX2_SwitchNode_GetActiveChild00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const SwitchNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const SwitchNode* self = (const SwitchNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetActiveChild'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetActiveChild();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetActiveChild'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: DisableAllChildren of class  SwitchNode */
#ifndef TOLUA_DISABLE_tolua_PX2_SwitchNode_DisableAllChildren00
static int tolua_PX2_SwitchNode_DisableAllChildren00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SwitchNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SwitchNode* self = (SwitchNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'DisableAllChildren'", NULL);
#endif
  {
   self->DisableAllChildren();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'DisableAllChildren'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Camera */
#ifndef TOLUA_DISABLE_tolua_PX2_Camera_new00
static int tolua_PX2_Camera_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Camera",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  bool isPerspective = ((bool)  tolua_toboolean(tolua_S,2,true));
  {
   Camera* tolua_ret = (Camera*)  Mtolua_new((Camera)(isPerspective));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Camera");
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

/* method: new_local of class  Camera */
#ifndef TOLUA_DISABLE_tolua_PX2_Camera_new00_local
static int tolua_PX2_Camera_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Camera",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  bool isPerspective = ((bool)  tolua_toboolean(tolua_S,2,true));
  {
   Camera* tolua_ret = (Camera*)  Mtolua_new((Camera)(isPerspective));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Camera");
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

/* method: delete of class  Camera */
#ifndef TOLUA_DISABLE_tolua_PX2_Camera_delete00
static int tolua_PX2_Camera_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Camera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Camera* self = (Camera*)  tolua_tousertype(tolua_S,1,0);
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

/* method: SetFrame of class  Camera */
#ifndef TOLUA_DISABLE_tolua_PX2_Camera_SetFrame00
static int tolua_PX2_Camera_SetFrame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Camera",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const APoint",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const AVector",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const AVector",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,5,&tolua_err) || !tolua_isusertype(tolua_S,5,"const AVector",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Camera* self = (Camera*)  tolua_tousertype(tolua_S,1,0);
  const APoint* position = ((const APoint*)  tolua_tousertype(tolua_S,2,0));
  const AVector* dVector = ((const AVector*)  tolua_tousertype(tolua_S,3,0));
  const AVector* uVector = ((const AVector*)  tolua_tousertype(tolua_S,4,0));
  const AVector* rVector = ((const AVector*)  tolua_tousertype(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetFrame'", NULL);
#endif
  {
   self->SetFrame(*position,*dVector,*uVector,*rVector);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetFrame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetPosition of class  Camera */
#ifndef TOLUA_DISABLE_tolua_PX2_Camera_SetPosition00
static int tolua_PX2_Camera_SetPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Camera",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const APoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Camera* self = (Camera*)  tolua_tousertype(tolua_S,1,0);
  const APoint* position = ((const APoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetPosition'", NULL);
#endif
  {
   self->SetPosition(*position);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetAxes of class  Camera */
#ifndef TOLUA_DISABLE_tolua_PX2_Camera_SetAxes00
static int tolua_PX2_Camera_SetAxes00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Camera",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const AVector",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const AVector",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const AVector",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Camera* self = (Camera*)  tolua_tousertype(tolua_S,1,0);
  const AVector* dVector = ((const AVector*)  tolua_tousertype(tolua_S,2,0));
  const AVector* uVector = ((const AVector*)  tolua_tousertype(tolua_S,3,0));
  const AVector* rVector = ((const AVector*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetAxes'", NULL);
#endif
  {
   self->SetAxes(*dVector,*uVector,*rVector);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetAxes'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetPosition of class  Camera */
#ifndef TOLUA_DISABLE_tolua_PX2_Camera_GetPosition00
static int tolua_PX2_Camera_GetPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Camera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Camera* self = (const Camera*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetPosition'", NULL);
#endif
  {
   APoint tolua_ret = (APoint)  self->GetPosition();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((APoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"APoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(APoint));
     tolua_pushusertype(tolua_S,tolua_obj,"APoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetDVector of class  Camera */
#ifndef TOLUA_DISABLE_tolua_PX2_Camera_GetDVector00
static int tolua_PX2_Camera_GetDVector00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Camera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Camera* self = (const Camera*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetDVector'", NULL);
#endif
  {
   AVector tolua_ret = (AVector)  self->GetDVector();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((AVector)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"AVector");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(AVector));
     tolua_pushusertype(tolua_S,tolua_obj,"AVector");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetDVector'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetUVector of class  Camera */
#ifndef TOLUA_DISABLE_tolua_PX2_Camera_GetUVector00
static int tolua_PX2_Camera_GetUVector00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Camera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Camera* self = (const Camera*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetUVector'", NULL);
#endif
  {
   AVector tolua_ret = (AVector)  self->GetUVector();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((AVector)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"AVector");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(AVector));
     tolua_pushusertype(tolua_S,tolua_obj,"AVector");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetUVector'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetRVector of class  Camera */
#ifndef TOLUA_DISABLE_tolua_PX2_Camera_GetRVector00
static int tolua_PX2_Camera_GetRVector00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Camera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Camera* self = (const Camera*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetRVector'", NULL);
#endif
  {
   AVector tolua_ret = (AVector)  self->GetRVector();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((AVector)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"AVector");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(AVector));
     tolua_pushusertype(tolua_S,tolua_obj,"AVector");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetRVector'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetViewMatrix of class  Camera */
#ifndef TOLUA_DISABLE_tolua_PX2_Camera_GetViewMatrix00
static int tolua_PX2_Camera_GetViewMatrix00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Camera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Camera* self = (const Camera*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetViewMatrix'", NULL);
#endif
  {
   const HMatrix& tolua_ret = (const HMatrix&)  self->GetViewMatrix();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const HMatrix");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetViewMatrix'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: IsPerspective of class  Camera */
#ifndef TOLUA_DISABLE_tolua_PX2_Camera_IsPerspective00
static int tolua_PX2_Camera_IsPerspective00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Camera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Camera* self = (const Camera*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'IsPerspective'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->IsPerspective();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'IsPerspective'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetFrustum of class  Camera */
#ifndef TOLUA_DISABLE_tolua_PX2_Camera_SetFrustum00
static int tolua_PX2_Camera_SetFrustum00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Camera",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Camera* self = (Camera*)  tolua_tousertype(tolua_S,1,0);
  float dMin = ((float)  tolua_tonumber(tolua_S,2,0));
  float dMax = ((float)  tolua_tonumber(tolua_S,3,0));
  float uMin = ((float)  tolua_tonumber(tolua_S,4,0));
  float uMax = ((float)  tolua_tonumber(tolua_S,5,0));
  float rMin = ((float)  tolua_tonumber(tolua_S,6,0));
  float rMax = ((float)  tolua_tonumber(tolua_S,7,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetFrustum'", NULL);
#endif
  {
   self->SetFrustum(dMin,dMax,uMin,uMax,rMin,rMax);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetFrustum'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetFrustum of class  Camera */
#ifndef TOLUA_DISABLE_tolua_PX2_Camera_SetFrustum01
static int tolua_PX2_Camera_SetFrustum01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Camera",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Camera* self = (Camera*)  tolua_tousertype(tolua_S,1,0);
  const float frustum = ((const float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetFrustum'", NULL);
#endif
  {
   self->SetFrustum(&frustum);
   tolua_pushnumber(tolua_S,(lua_Number)frustum);
  }
 }
 return 1;
tolua_lerror:
 return tolua_PX2_Camera_SetFrustum00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetFrustum of class  Camera */
#ifndef TOLUA_DISABLE_tolua_PX2_Camera_SetFrustum02
static int tolua_PX2_Camera_SetFrustum02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Camera",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Camera* self = (Camera*)  tolua_tousertype(tolua_S,1,0);
  float upFovDegrees = ((float)  tolua_tonumber(tolua_S,2,0));
  float aspectRatio = ((float)  tolua_tonumber(tolua_S,3,0));
  float dMin = ((float)  tolua_tonumber(tolua_S,4,0));
  float dMax = ((float)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetFrustum'", NULL);
#endif
  {
   self->SetFrustum(upFovDegrees,aspectRatio,dMin,dMax);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Camera_SetFrustum01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetFrustum of class  Camera */
#ifndef TOLUA_DISABLE_tolua_PX2_Camera_GetFrustum00
static int tolua_PX2_Camera_GetFrustum00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Camera",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Camera* self = (const Camera*)  tolua_tousertype(tolua_S,1,0);
  float dMin = ((float)  tolua_tonumber(tolua_S,2,0));
  float dMax = ((float)  tolua_tonumber(tolua_S,3,0));
  float uMin = ((float)  tolua_tonumber(tolua_S,4,0));
  float uMax = ((float)  tolua_tonumber(tolua_S,5,0));
  float rMin = ((float)  tolua_tonumber(tolua_S,6,0));
  float rMax = ((float)  tolua_tonumber(tolua_S,7,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetFrustum'", NULL);
#endif
  {
   self->GetFrustum(dMin,dMax,uMin,uMax,rMin,rMax);
   tolua_pushnumber(tolua_S,(lua_Number)dMin);
   tolua_pushnumber(tolua_S,(lua_Number)dMax);
   tolua_pushnumber(tolua_S,(lua_Number)uMin);
   tolua_pushnumber(tolua_S,(lua_Number)uMax);
   tolua_pushnumber(tolua_S,(lua_Number)rMin);
   tolua_pushnumber(tolua_S,(lua_Number)rMax);
  }
 }
 return 6;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetFrustum'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetFrustum of class  Camera */
#ifndef TOLUA_DISABLE_tolua_PX2_Camera_GetFrustum01
static int tolua_PX2_Camera_GetFrustum01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Camera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Camera* self = (const Camera*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetFrustum'", NULL);
#endif
  {
   const void* tolua_ret = (const void*)  self->GetFrustum();
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_PX2_Camera_GetFrustum00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetFrustum of class  Camera */
#ifndef TOLUA_DISABLE_tolua_PX2_Camera_GetFrustum02
static int tolua_PX2_Camera_GetFrustum02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Camera",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Camera* self = (const Camera*)  tolua_tousertype(tolua_S,1,0);
  float upFovDegrees = ((float)  tolua_tonumber(tolua_S,2,0));
  float aspectRatio = ((float)  tolua_tonumber(tolua_S,3,0));
  float dMin = ((float)  tolua_tonumber(tolua_S,4,0));
  float dMax = ((float)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetFrustum'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->GetFrustum(upFovDegrees,aspectRatio,dMin,dMax);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
   tolua_pushnumber(tolua_S,(lua_Number)upFovDegrees);
   tolua_pushnumber(tolua_S,(lua_Number)aspectRatio);
   tolua_pushnumber(tolua_S,(lua_Number)dMin);
   tolua_pushnumber(tolua_S,(lua_Number)dMax);
  }
 }
 return 5;
tolua_lerror:
 return tolua_PX2_Camera_GetFrustum01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetDMin of class  Camera */
#ifndef TOLUA_DISABLE_tolua_PX2_Camera_GetDMin00
static int tolua_PX2_Camera_GetDMin00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Camera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Camera* self = (const Camera*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetDMin'", NULL);
#endif
  {
   float tolua_ret = (float)  self->GetDMin();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetDMin'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetDMax of class  Camera */
#ifndef TOLUA_DISABLE_tolua_PX2_Camera_GetDMax00
static int tolua_PX2_Camera_GetDMax00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Camera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Camera* self = (const Camera*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetDMax'", NULL);
#endif
  {
   float tolua_ret = (float)  self->GetDMax();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetDMax'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetUMin of class  Camera */
#ifndef TOLUA_DISABLE_tolua_PX2_Camera_GetUMin00
static int tolua_PX2_Camera_GetUMin00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Camera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Camera* self = (const Camera*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetUMin'", NULL);
#endif
  {
   float tolua_ret = (float)  self->GetUMin();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetUMin'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetUMax of class  Camera */
#ifndef TOLUA_DISABLE_tolua_PX2_Camera_GetUMax00
static int tolua_PX2_Camera_GetUMax00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Camera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Camera* self = (const Camera*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetUMax'", NULL);
#endif
  {
   float tolua_ret = (float)  self->GetUMax();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetUMax'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetRMin of class  Camera */
#ifndef TOLUA_DISABLE_tolua_PX2_Camera_GetRMin00
static int tolua_PX2_Camera_GetRMin00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Camera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Camera* self = (const Camera*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetRMin'", NULL);
#endif
  {
   float tolua_ret = (float)  self->GetRMin();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetRMin'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetRMax of class  Camera */
#ifndef TOLUA_DISABLE_tolua_PX2_Camera_GetRMax00
static int tolua_PX2_Camera_GetRMax00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Camera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Camera* self = (const Camera*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetRMax'", NULL);
#endif
  {
   float tolua_ret = (float)  self->GetRMax();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetRMax'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetDepthType of class  Camera */
#ifndef TOLUA_DISABLE_tolua_PX2_Camera_GetDepthType00
static int tolua_PX2_Camera_GetDepthType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Camera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Camera* self = (const Camera*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetDepthType'", NULL);
#endif
  {
   Camera::DepthType tolua_ret = (Camera::DepthType)  self->GetDepthType();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetDepthType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetProjectionMatrix of class  Camera */
#ifndef TOLUA_DISABLE_tolua_PX2_Camera_GetProjectionMatrix00
static int tolua_PX2_Camera_GetProjectionMatrix00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Camera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Camera* self = (const Camera*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetProjectionMatrix'", NULL);
#endif
  {
   const HMatrix& tolua_ret = (const HMatrix&)  self->GetProjectionMatrix();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const HMatrix");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetProjectionMatrix'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetProjectionViewMatrix of class  Camera */
#ifndef TOLUA_DISABLE_tolua_PX2_Camera_GetProjectionViewMatrix00
static int tolua_PX2_Camera_GetProjectionViewMatrix00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Camera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Camera* self = (const Camera*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetProjectionViewMatrix'", NULL);
#endif
  {
   const HMatrix& tolua_ret = (const HMatrix&)  self->GetProjectionViewMatrix();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const HMatrix");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetProjectionViewMatrix'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetPreViewMatrix of class  Camera */
#ifndef TOLUA_DISABLE_tolua_PX2_Camera_SetPreViewMatrix00
static int tolua_PX2_Camera_SetPreViewMatrix00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Camera",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const HMatrix",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Camera* self = (Camera*)  tolua_tousertype(tolua_S,1,0);
  const HMatrix* preViewMatrix = ((const HMatrix*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetPreViewMatrix'", NULL);
#endif
  {
   self->SetPreViewMatrix(*preViewMatrix);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetPreViewMatrix'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetPreViewMatrix of class  Camera */
#ifndef TOLUA_DISABLE_tolua_PX2_Camera_GetPreViewMatrix00
static int tolua_PX2_Camera_GetPreViewMatrix00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Camera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Camera* self = (const Camera*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetPreViewMatrix'", NULL);
#endif
  {
   const HMatrix& tolua_ret = (const HMatrix&)  self->GetPreViewMatrix();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const HMatrix");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetPreViewMatrix'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: PreViewIsIdentity of class  Camera */
#ifndef TOLUA_DISABLE_tolua_PX2_Camera_PreViewIsIdentity00
static int tolua_PX2_Camera_PreViewIsIdentity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Camera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Camera* self = (const Camera*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'PreViewIsIdentity'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->PreViewIsIdentity();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'PreViewIsIdentity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetPostProjectionMatrix of class  Camera */
#ifndef TOLUA_DISABLE_tolua_PX2_Camera_SetPostProjectionMatrix00
static int tolua_PX2_Camera_SetPostProjectionMatrix00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Camera",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const HMatrix",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Camera* self = (Camera*)  tolua_tousertype(tolua_S,1,0);
  const HMatrix* postProjMatrix = ((const HMatrix*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetPostProjectionMatrix'", NULL);
#endif
  {
   self->SetPostProjectionMatrix(*postProjMatrix);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetPostProjectionMatrix'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetPostProjectionMatrix of class  Camera */
#ifndef TOLUA_DISABLE_tolua_PX2_Camera_GetPostProjectionMatrix00
static int tolua_PX2_Camera_GetPostProjectionMatrix00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Camera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Camera* self = (const Camera*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetPostProjectionMatrix'", NULL);
#endif
  {
   const HMatrix& tolua_ret = (const HMatrix&)  self->GetPostProjectionMatrix();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const HMatrix");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetPostProjectionMatrix'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: PostProjectionIsIdentity of class  Camera */
#ifndef TOLUA_DISABLE_tolua_PX2_Camera_PostProjectionIsIdentity00
static int tolua_PX2_Camera_PostProjectionIsIdentity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Camera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Camera* self = (const Camera*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'PostProjectionIsIdentity'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->PostProjectionIsIdentity();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'PostProjectionIsIdentity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Initialize of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_Initialize00
static int tolua_PX2_Renderer_Initialize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"Texture::Format",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,5,&tolua_err) || !tolua_isusertype(tolua_S,5,"Texture::Format",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  int width = ((int)  tolua_tonumber(tolua_S,2,0));
  int height = ((int)  tolua_tonumber(tolua_S,3,0));
  Texture::Format colorFormat = *((Texture::Format*)  tolua_tousertype(tolua_S,4,0));
  Texture::Format depthStencilFormat = *((Texture::Format*)  tolua_tousertype(tolua_S,5,0));
  int numMultisamples = ((int)  tolua_tonumber(tolua_S,6,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Initialize'", NULL);
#endif
  {
   self->Initialize(width,height,colorFormat,depthStencilFormat,numMultisamples);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Initialize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Terminate of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_Terminate00
static int tolua_PX2_Renderer_Terminate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Terminate'", NULL);
#endif
  {
   self->Terminate();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Terminate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetDefaultRenderer of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_SetDefaultRenderer00
static int tolua_PX2_Renderer_SetDefaultRenderer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Renderer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Renderer* renderer = ((Renderer*)  tolua_tousertype(tolua_S,2,0));
  {
   Renderer::SetDefaultRenderer(renderer);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetDefaultRenderer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetDefaultRenderer of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_GetDefaultRenderer00
static int tolua_PX2_Renderer_GetDefaultRenderer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Renderer* tolua_ret = (Renderer*)  Renderer::GetDefaultRenderer();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Renderer");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetDefaultRenderer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetWidth of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_GetWidth00
static int tolua_PX2_Renderer_GetWidth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Renderer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Renderer* self = (const Renderer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetWidth'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetWidth();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetWidth'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetHeight of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_GetHeight00
static int tolua_PX2_Renderer_GetHeight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Renderer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Renderer* self = (const Renderer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetHeight'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetHeight();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetHeight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetColorFormat of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_GetColorFormat00
static int tolua_PX2_Renderer_GetColorFormat00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Renderer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Renderer* self = (const Renderer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetColorFormat'", NULL);
#endif
  {
   Texture::Format tolua_ret = (Texture::Format)  self->GetColorFormat();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Texture::Format)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Texture::Format");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Texture::Format));
     tolua_pushusertype(tolua_S,tolua_obj,"Texture::Format");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetColorFormat'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetDepthStencilFormat of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_GetDepthStencilFormat00
static int tolua_PX2_Renderer_GetDepthStencilFormat00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Renderer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Renderer* self = (const Renderer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetDepthStencilFormat'", NULL);
#endif
  {
   Texture::Format tolua_ret = (Texture::Format)  self->GetDepthStencilFormat();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Texture::Format)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Texture::Format");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Texture::Format));
     tolua_pushusertype(tolua_S,tolua_obj,"Texture::Format");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetDepthStencilFormat'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetNumMultisamples of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_GetNumMultisamples00
static int tolua_PX2_Renderer_GetNumMultisamples00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Renderer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Renderer* self = (const Renderer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetNumMultisamples'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetNumMultisamples();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetNumMultisamples'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Bind of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_Bind00
static int tolua_PX2_Renderer_Bind00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const VertexFormat",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const VertexFormat* vformat = ((const VertexFormat*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Bind'", NULL);
#endif
  {
   self->Bind(vformat);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Bind'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: BindAll of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_BindAll00
static int tolua_PX2_Renderer_BindAll00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const VertexFormat",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const VertexFormat* vformat = ((const VertexFormat*)  tolua_tousertype(tolua_S,2,0));
  {
   Renderer::BindAll(vformat);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'BindAll'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Unbind of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_Unbind00
static int tolua_PX2_Renderer_Unbind00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const VertexFormat",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const VertexFormat* vformat = ((const VertexFormat*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Unbind'", NULL);
#endif
  {
   self->Unbind(vformat);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Unbind'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: UnbindAll of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_UnbindAll00
static int tolua_PX2_Renderer_UnbindAll00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const VertexFormat",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const VertexFormat* vformat = ((const VertexFormat*)  tolua_tousertype(tolua_S,2,0));
  {
   Renderer::UnbindAll(vformat);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'UnbindAll'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Enable of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_Enable00
static int tolua_PX2_Renderer_Enable00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const VertexFormat",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const VertexFormat* vformat = ((const VertexFormat*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Enable'", NULL);
#endif
  {
   self->Enable(vformat);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Enable'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Disable of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_Disable00
static int tolua_PX2_Renderer_Disable00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const VertexFormat",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const VertexFormat* vformat = ((const VertexFormat*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Disable'", NULL);
#endif
  {
   self->Disable(vformat);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Disable'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Bind of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_Bind01
static int tolua_PX2_Renderer_Bind01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const VertexBuffer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const VertexBuffer* vbuffer = ((const VertexBuffer*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Bind'", NULL);
#endif
  {
   self->Bind(vbuffer);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_Bind00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: BindAll of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_BindAll01
static int tolua_PX2_Renderer_BindAll01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const VertexBuffer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const VertexBuffer* vbuffer = ((const VertexBuffer*)  tolua_tousertype(tolua_S,2,0));
  {
   Renderer::BindAll(vbuffer);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_BindAll00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Unbind of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_Unbind01
static int tolua_PX2_Renderer_Unbind01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const VertexBuffer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const VertexBuffer* vbuffer = ((const VertexBuffer*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Unbind'", NULL);
#endif
  {
   self->Unbind(vbuffer);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_Unbind00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: UnbindAll of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_UnbindAll01
static int tolua_PX2_Renderer_UnbindAll01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const VertexBuffer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const VertexBuffer* vbuffer = ((const VertexBuffer*)  tolua_tousertype(tolua_S,2,0));
  {
   Renderer::UnbindAll(vbuffer);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_UnbindAll00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Enable of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_Enable01
static int tolua_PX2_Renderer_Enable01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const VertexBuffer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const VertexBuffer* vbuffer = ((const VertexBuffer*)  tolua_tousertype(tolua_S,2,0));
  unsigned int streamIndex = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
  unsigned int offset = ((unsigned int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Enable'", NULL);
#endif
  {
   self->Enable(vbuffer,streamIndex,offset);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_Enable00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Disable of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_Disable01
static int tolua_PX2_Renderer_Disable01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const VertexBuffer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const VertexBuffer* vbuffer = ((const VertexBuffer*)  tolua_tousertype(tolua_S,2,0));
  unsigned int streamIndex = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Disable'", NULL);
#endif
  {
   self->Disable(vbuffer,streamIndex);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_Disable00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Lock of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_Lock00
static int tolua_PX2_Renderer_Lock00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const VertexBuffer",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"Buffer::Locking",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const VertexBuffer* vbuffer = ((const VertexBuffer*)  tolua_tousertype(tolua_S,2,0));
  Buffer::Locking mode = *((Buffer::Locking*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Lock'", NULL);
#endif
  {
   void* tolua_ret = (void*)  self->Lock(vbuffer,mode);
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Lock'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Unlock of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_Unlock00
static int tolua_PX2_Renderer_Unlock00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const VertexBuffer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const VertexBuffer* vbuffer = ((const VertexBuffer*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Unlock'", NULL);
#endif
  {
   self->Unlock(vbuffer);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Unlock'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Update of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_Update00
static int tolua_PX2_Renderer_Update00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const VertexBuffer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const VertexBuffer* vbuffer = ((const VertexBuffer*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Update'", NULL);
#endif
  {
   self->Update(vbuffer);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Update'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: UpdateAll of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_UpdateAll00
static int tolua_PX2_Renderer_UpdateAll00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const VertexBuffer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const VertexBuffer* vbuffer = ((const VertexBuffer*)  tolua_tousertype(tolua_S,2,0));
  {
   Renderer::UpdateAll(vbuffer);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'UpdateAll'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Bind of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_Bind02
static int tolua_PX2_Renderer_Bind02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const IndexBuffer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const IndexBuffer* ibuffer = ((const IndexBuffer*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Bind'", NULL);
#endif
  {
   self->Bind(ibuffer);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_Bind01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: BindAll of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_BindAll02
static int tolua_PX2_Renderer_BindAll02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const IndexBuffer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const IndexBuffer* ibuffer = ((const IndexBuffer*)  tolua_tousertype(tolua_S,2,0));
  {
   Renderer::BindAll(ibuffer);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_BindAll01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Unbind of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_Unbind02
static int tolua_PX2_Renderer_Unbind02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const IndexBuffer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const IndexBuffer* ibuffer = ((const IndexBuffer*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Unbind'", NULL);
#endif
  {
   self->Unbind(ibuffer);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_Unbind01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: UnbindAll of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_UnbindAll02
static int tolua_PX2_Renderer_UnbindAll02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const IndexBuffer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const IndexBuffer* ibuffer = ((const IndexBuffer*)  tolua_tousertype(tolua_S,2,0));
  {
   Renderer::UnbindAll(ibuffer);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_UnbindAll01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Enable of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_Enable02
static int tolua_PX2_Renderer_Enable02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const IndexBuffer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const IndexBuffer* ibuffer = ((const IndexBuffer*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Enable'", NULL);
#endif
  {
   self->Enable(ibuffer);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_Enable01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Disable of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_Disable02
static int tolua_PX2_Renderer_Disable02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const IndexBuffer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const IndexBuffer* ibuffer = ((const IndexBuffer*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Disable'", NULL);
#endif
  {
   self->Disable(ibuffer);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_Disable01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Lock of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_Lock01
static int tolua_PX2_Renderer_Lock01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const IndexBuffer",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"Buffer::Locking",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const IndexBuffer* ibuffer = ((const IndexBuffer*)  tolua_tousertype(tolua_S,2,0));
  Buffer::Locking mode = *((Buffer::Locking*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Lock'", NULL);
#endif
  {
   void* tolua_ret = (void*)  self->Lock(ibuffer,mode);
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_PX2_Renderer_Lock00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Unlock of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_Unlock01
static int tolua_PX2_Renderer_Unlock01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const IndexBuffer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const IndexBuffer* ibuffer = ((const IndexBuffer*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Unlock'", NULL);
#endif
  {
   self->Unlock(ibuffer);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_Unlock00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Update of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_Update01
static int tolua_PX2_Renderer_Update01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const IndexBuffer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const IndexBuffer* ibuffer = ((const IndexBuffer*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Update'", NULL);
#endif
  {
   self->Update(ibuffer);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_Update00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: UpdateAll of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_UpdateAll01
static int tolua_PX2_Renderer_UpdateAll01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const IndexBuffer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const IndexBuffer* ibuffer = ((const IndexBuffer*)  tolua_tousertype(tolua_S,2,0));
  {
   Renderer::UpdateAll(ibuffer);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_UpdateAll00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Bind of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_Bind03
static int tolua_PX2_Renderer_Bind03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const Texture1D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const Texture1D* texture = ((const Texture1D*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Bind'", NULL);
#endif
  {
   self->Bind(texture);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_Bind02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: BindAll of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_BindAll03
static int tolua_PX2_Renderer_BindAll03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const Texture1D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Texture1D* texture = ((const Texture1D*)  tolua_tousertype(tolua_S,2,0));
  {
   Renderer::BindAll(texture);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_BindAll02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Unbind of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_Unbind03
static int tolua_PX2_Renderer_Unbind03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const Texture1D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const Texture1D* texture = ((const Texture1D*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Unbind'", NULL);
#endif
  {
   self->Unbind(texture);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_Unbind02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: UnbindAll of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_UnbindAll03
static int tolua_PX2_Renderer_UnbindAll03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const Texture1D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Texture1D* texture = ((const Texture1D*)  tolua_tousertype(tolua_S,2,0));
  {
   Renderer::UnbindAll(texture);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_UnbindAll02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Enable of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_Enable03
static int tolua_PX2_Renderer_Enable03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const Texture1D",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const Texture1D* texture = ((const Texture1D*)  tolua_tousertype(tolua_S,2,0));
  int textureUnit = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Enable'", NULL);
#endif
  {
   self->Enable(texture,textureUnit);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_Enable02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Disable of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_Disable03
static int tolua_PX2_Renderer_Disable03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const Texture1D",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const Texture1D* texture = ((const Texture1D*)  tolua_tousertype(tolua_S,2,0));
  int textureUnit = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Disable'", NULL);
#endif
  {
   self->Disable(texture,textureUnit);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_Disable02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Lock of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_Lock02
static int tolua_PX2_Renderer_Lock02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const Texture1D",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"Buffer::Locking",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const Texture1D* texture = ((const Texture1D*)  tolua_tousertype(tolua_S,2,0));
  int level = ((int)  tolua_tonumber(tolua_S,3,0));
  Buffer::Locking mode = *((Buffer::Locking*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Lock'", NULL);
#endif
  {
   void* tolua_ret = (void*)  self->Lock(texture,level,mode);
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_PX2_Renderer_Lock01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Unlock of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_Unlock02
static int tolua_PX2_Renderer_Unlock02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const Texture1D",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const Texture1D* texture = ((const Texture1D*)  tolua_tousertype(tolua_S,2,0));
  int level = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Unlock'", NULL);
#endif
  {
   self->Unlock(texture,level);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_Unlock01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Update of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_Update02
static int tolua_PX2_Renderer_Update02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const Texture1D",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const Texture1D* texture = ((const Texture1D*)  tolua_tousertype(tolua_S,2,0));
  int level = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Update'", NULL);
#endif
  {
   self->Update(texture,level);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_Update01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: UpdateAll of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_UpdateAll02
static int tolua_PX2_Renderer_UpdateAll02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const Texture1D",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Texture1D* texture = ((const Texture1D*)  tolua_tousertype(tolua_S,2,0));
  int level = ((int)  tolua_tonumber(tolua_S,3,0));
  {
   Renderer::UpdateAll(texture,level);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_UpdateAll01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Bind of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_Bind04
static int tolua_PX2_Renderer_Bind04(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const Texture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const Texture2D* texture = ((const Texture2D*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Bind'", NULL);
#endif
  {
   self->Bind(texture);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_Bind03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: BindAll of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_BindAll04
static int tolua_PX2_Renderer_BindAll04(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const Texture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Texture2D* texture = ((const Texture2D*)  tolua_tousertype(tolua_S,2,0));
  {
   Renderer::BindAll(texture);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_BindAll03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Unbind of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_Unbind04
static int tolua_PX2_Renderer_Unbind04(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const Texture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const Texture2D* texture = ((const Texture2D*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Unbind'", NULL);
#endif
  {
   self->Unbind(texture);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_Unbind03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: UnbindAll of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_UnbindAll04
static int tolua_PX2_Renderer_UnbindAll04(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const Texture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Texture2D* texture = ((const Texture2D*)  tolua_tousertype(tolua_S,2,0));
  {
   Renderer::UnbindAll(texture);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_UnbindAll03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Enable of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_Enable04
static int tolua_PX2_Renderer_Enable04(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const Texture2D",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const Texture2D* texture = ((const Texture2D*)  tolua_tousertype(tolua_S,2,0));
  int textureUnit = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Enable'", NULL);
#endif
  {
   self->Enable(texture,textureUnit);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_Enable03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Enable of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_Enable05
static int tolua_PX2_Renderer_Enable05(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const Texture2D",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const Texture2D* texture = ((const Texture2D*)  tolua_tousertype(tolua_S,2,0));
  int textureUnit = ((int)  tolua_tonumber(tolua_S,3,0));
  int loc = ((int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Enable'", NULL);
#endif
  {
   self->Enable(texture,textureUnit,loc);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_Enable04(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Disable of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_Disable04
static int tolua_PX2_Renderer_Disable04(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const Texture2D",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const Texture2D* texture = ((const Texture2D*)  tolua_tousertype(tolua_S,2,0));
  int textureUnit = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Disable'", NULL);
#endif
  {
   self->Disable(texture,textureUnit);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_Disable03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Lock of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_Lock03
static int tolua_PX2_Renderer_Lock03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const Texture2D",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"Buffer::Locking",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const Texture2D* texture = ((const Texture2D*)  tolua_tousertype(tolua_S,2,0));
  int level = ((int)  tolua_tonumber(tolua_S,3,0));
  Buffer::Locking mode = *((Buffer::Locking*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Lock'", NULL);
#endif
  {
   void* tolua_ret = (void*)  self->Lock(texture,level,mode);
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_PX2_Renderer_Lock02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Unlock of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_Unlock03
static int tolua_PX2_Renderer_Unlock03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const Texture2D",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const Texture2D* texture = ((const Texture2D*)  tolua_tousertype(tolua_S,2,0));
  int level = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Unlock'", NULL);
#endif
  {
   self->Unlock(texture,level);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_Unlock02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Update of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_Update03
static int tolua_PX2_Renderer_Update03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const Texture2D",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const Texture2D* texture = ((const Texture2D*)  tolua_tousertype(tolua_S,2,0));
  int level = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Update'", NULL);
#endif
  {
   self->Update(texture,level);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_Update02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: UpdateAll of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_UpdateAll03
static int tolua_PX2_Renderer_UpdateAll03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const Texture2D",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Texture2D* texture = ((const Texture2D*)  tolua_tousertype(tolua_S,2,0));
  int level = ((int)  tolua_tonumber(tolua_S,3,0));
  {
   Renderer::UpdateAll(texture,level);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_UpdateAll02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Bind of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_Bind05
static int tolua_PX2_Renderer_Bind05(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const Texture3D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const Texture3D* texture = ((const Texture3D*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Bind'", NULL);
#endif
  {
   self->Bind(texture);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_Bind04(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: BindAll of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_BindAll05
static int tolua_PX2_Renderer_BindAll05(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const Texture3D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Texture3D* texture = ((const Texture3D*)  tolua_tousertype(tolua_S,2,0));
  {
   Renderer::BindAll(texture);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_BindAll04(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Unbind of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_Unbind05
static int tolua_PX2_Renderer_Unbind05(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const Texture3D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const Texture3D* texture = ((const Texture3D*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Unbind'", NULL);
#endif
  {
   self->Unbind(texture);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_Unbind04(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: UnbindAll of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_UnbindAll05
static int tolua_PX2_Renderer_UnbindAll05(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const Texture3D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Texture3D* texture = ((const Texture3D*)  tolua_tousertype(tolua_S,2,0));
  {
   Renderer::UnbindAll(texture);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_UnbindAll04(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Enable of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_Enable06
static int tolua_PX2_Renderer_Enable06(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const Texture3D",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const Texture3D* texture = ((const Texture3D*)  tolua_tousertype(tolua_S,2,0));
  int textureUnit = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Enable'", NULL);
#endif
  {
   self->Enable(texture,textureUnit);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_Enable05(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Disable of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_Disable05
static int tolua_PX2_Renderer_Disable05(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const Texture3D",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const Texture3D* texture = ((const Texture3D*)  tolua_tousertype(tolua_S,2,0));
  int textureUnit = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Disable'", NULL);
#endif
  {
   self->Disable(texture,textureUnit);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_Disable04(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Lock of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_Lock04
static int tolua_PX2_Renderer_Lock04(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const Texture3D",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"Buffer::Locking",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const Texture3D* texture = ((const Texture3D*)  tolua_tousertype(tolua_S,2,0));
  int level = ((int)  tolua_tonumber(tolua_S,3,0));
  Buffer::Locking mode = *((Buffer::Locking*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Lock'", NULL);
#endif
  {
   void* tolua_ret = (void*)  self->Lock(texture,level,mode);
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_PX2_Renderer_Lock03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Unlock of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_Unlock04
static int tolua_PX2_Renderer_Unlock04(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const Texture3D",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const Texture3D* texture = ((const Texture3D*)  tolua_tousertype(tolua_S,2,0));
  int level = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Unlock'", NULL);
#endif
  {
   self->Unlock(texture,level);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_Unlock03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Update of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_Update04
static int tolua_PX2_Renderer_Update04(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const Texture3D",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const Texture3D* texture = ((const Texture3D*)  tolua_tousertype(tolua_S,2,0));
  int level = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Update'", NULL);
#endif
  {
   self->Update(texture,level);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_Update03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: UpdateAll of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_UpdateAll04
static int tolua_PX2_Renderer_UpdateAll04(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const Texture3D",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Texture3D* texture = ((const Texture3D*)  tolua_tousertype(tolua_S,2,0));
  int level = ((int)  tolua_tonumber(tolua_S,3,0));
  {
   Renderer::UpdateAll(texture,level);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_UpdateAll03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Bind of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_Bind06
static int tolua_PX2_Renderer_Bind06(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const TextureCube",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const TextureCube* texture = ((const TextureCube*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Bind'", NULL);
#endif
  {
   self->Bind(texture);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_Bind05(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: BindAll of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_BindAll06
static int tolua_PX2_Renderer_BindAll06(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const TextureCube",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const TextureCube* texture = ((const TextureCube*)  tolua_tousertype(tolua_S,2,0));
  {
   Renderer::BindAll(texture);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_BindAll05(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Unbind of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_Unbind06
static int tolua_PX2_Renderer_Unbind06(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const TextureCube",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const TextureCube* texture = ((const TextureCube*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Unbind'", NULL);
#endif
  {
   self->Unbind(texture);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_Unbind05(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: UnbindAll of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_UnbindAll06
static int tolua_PX2_Renderer_UnbindAll06(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const TextureCube",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const TextureCube* texture = ((const TextureCube*)  tolua_tousertype(tolua_S,2,0));
  {
   Renderer::UnbindAll(texture);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_UnbindAll05(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Enable of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_Enable07
static int tolua_PX2_Renderer_Enable07(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const TextureCube",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const TextureCube* texture = ((const TextureCube*)  tolua_tousertype(tolua_S,2,0));
  int textureUnit = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Enable'", NULL);
#endif
  {
   self->Enable(texture,textureUnit);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_Enable06(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Disable of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_Disable06
static int tolua_PX2_Renderer_Disable06(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const TextureCube",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const TextureCube* texture = ((const TextureCube*)  tolua_tousertype(tolua_S,2,0));
  int textureUnit = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Disable'", NULL);
#endif
  {
   self->Disable(texture,textureUnit);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_Disable05(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Lock of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_Lock05
static int tolua_PX2_Renderer_Lock05(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const TextureCube",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,5,&tolua_err) || !tolua_isusertype(tolua_S,5,"Buffer::Locking",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const TextureCube* texture = ((const TextureCube*)  tolua_tousertype(tolua_S,2,0));
  int face = ((int)  tolua_tonumber(tolua_S,3,0));
  int level = ((int)  tolua_tonumber(tolua_S,4,0));
  Buffer::Locking mode = *((Buffer::Locking*)  tolua_tousertype(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Lock'", NULL);
#endif
  {
   void* tolua_ret = (void*)  self->Lock(texture,face,level,mode);
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
tolua_lerror:
 return tolua_PX2_Renderer_Lock04(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Unlock of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_Unlock05
static int tolua_PX2_Renderer_Unlock05(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const TextureCube",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const TextureCube* texture = ((const TextureCube*)  tolua_tousertype(tolua_S,2,0));
  int face = ((int)  tolua_tonumber(tolua_S,3,0));
  int level = ((int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Unlock'", NULL);
#endif
  {
   self->Unlock(texture,face,level);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_Unlock04(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Update of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_Update05
static int tolua_PX2_Renderer_Update05(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const TextureCube",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const TextureCube* texture = ((const TextureCube*)  tolua_tousertype(tolua_S,2,0));
  int face = ((int)  tolua_tonumber(tolua_S,3,0));
  int level = ((int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Update'", NULL);
#endif
  {
   self->Update(texture,face,level);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_Update04(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: UpdateAll of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_UpdateAll05
static int tolua_PX2_Renderer_UpdateAll05(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const TextureCube",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const TextureCube* texture = ((const TextureCube*)  tolua_tousertype(tolua_S,2,0));
  int face = ((int)  tolua_tonumber(tolua_S,3,0));
  int level = ((int)  tolua_tonumber(tolua_S,4,0));
  {
   Renderer::UpdateAll(texture,face,level);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_UpdateAll04(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Bind of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_Bind07
static int tolua_PX2_Renderer_Bind07(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const RenderTarget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const RenderTarget* renderTarget = ((const RenderTarget*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Bind'", NULL);
#endif
  {
   self->Bind(renderTarget);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_Bind06(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: BindAll of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_BindAll07
static int tolua_PX2_Renderer_BindAll07(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const RenderTarget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const RenderTarget* renderTarget = ((const RenderTarget*)  tolua_tousertype(tolua_S,2,0));
  {
   Renderer::BindAll(renderTarget);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_BindAll06(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Unbind of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_Unbind07
static int tolua_PX2_Renderer_Unbind07(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const RenderTarget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const RenderTarget* renderTarget = ((const RenderTarget*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Unbind'", NULL);
#endif
  {
   self->Unbind(renderTarget);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_Unbind06(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: UnbindAll of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_UnbindAll07
static int tolua_PX2_Renderer_UnbindAll07(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const RenderTarget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const RenderTarget* renderTarget = ((const RenderTarget*)  tolua_tousertype(tolua_S,2,0));
  {
   Renderer::UnbindAll(renderTarget);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_UnbindAll06(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Enable of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_Enable08
static int tolua_PX2_Renderer_Enable08(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const RenderTarget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const RenderTarget* renderTarget = ((const RenderTarget*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Enable'", NULL);
#endif
  {
   self->Enable(renderTarget);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_Enable07(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Disable of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_Disable07
static int tolua_PX2_Renderer_Disable07(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const RenderTarget",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const RenderTarget* renderTarget = ((const RenderTarget*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Disable'", NULL);
#endif
  {
   self->Disable(renderTarget);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_Disable06(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: ReadColor of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_ReadColor00
static int tolua_PX2_Renderer_ReadColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"const RenderTarget",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,4,"Texture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  int i = ((int)  tolua_tonumber(tolua_S,2,0));
  const RenderTarget* renderTarget = ((const RenderTarget*)  tolua_tousertype(tolua_S,3,0));
  Texture2D* texture = ((Texture2D*)  tolua_tousertype(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ReadColor'", NULL);
#endif
  {
   self->ReadColor(i,renderTarget,texture);
    tolua_pushusertype(tolua_S,(void*)texture,"Texture2D");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ReadColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Bind of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_Bind08
static int tolua_PX2_Renderer_Bind08(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const VertexShader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const VertexShader* vshader = ((const VertexShader*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Bind'", NULL);
#endif
  {
   self->Bind(vshader);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_Bind07(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: BindAll of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_BindAll08
static int tolua_PX2_Renderer_BindAll08(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const VertexShader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const VertexShader* vshader = ((const VertexShader*)  tolua_tousertype(tolua_S,2,0));
  {
   Renderer::BindAll(vshader);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_BindAll07(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Unbind of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_Unbind08
static int tolua_PX2_Renderer_Unbind08(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const VertexShader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const VertexShader* vshader = ((const VertexShader*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Unbind'", NULL);
#endif
  {
   self->Unbind(vshader);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_Unbind07(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: UnbindAll of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_UnbindAll08
static int tolua_PX2_Renderer_UnbindAll08(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const VertexShader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const VertexShader* vshader = ((const VertexShader*)  tolua_tousertype(tolua_S,2,0));
  {
   Renderer::UnbindAll(vshader);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_UnbindAll07(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Enable of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_Enable09
static int tolua_PX2_Renderer_Enable09(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const VertexShader",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"const ShaderParameters",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const VertexShader* vshader = ((const VertexShader*)  tolua_tousertype(tolua_S,2,0));
  const ShaderParameters* parameters = ((const ShaderParameters*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Enable'", NULL);
#endif
  {
   self->Enable(vshader,parameters);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_Enable08(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Disable of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_Disable08
static int tolua_PX2_Renderer_Disable08(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const VertexShader",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"const ShaderParameters",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const VertexShader* vshader = ((const VertexShader*)  tolua_tousertype(tolua_S,2,0));
  const ShaderParameters* parameters = ((const ShaderParameters*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Disable'", NULL);
#endif
  {
   self->Disable(vshader,parameters);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_Disable07(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Bind of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_Bind09
static int tolua_PX2_Renderer_Bind09(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const PixelShader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const PixelShader* pshader = ((const PixelShader*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Bind'", NULL);
#endif
  {
   self->Bind(pshader);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_Bind08(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: BindAll of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_BindAll09
static int tolua_PX2_Renderer_BindAll09(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const PixelShader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const PixelShader* pshader = ((const PixelShader*)  tolua_tousertype(tolua_S,2,0));
  {
   Renderer::BindAll(pshader);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_BindAll08(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Unbind of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_Unbind09
static int tolua_PX2_Renderer_Unbind09(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const PixelShader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const PixelShader* pshader = ((const PixelShader*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Unbind'", NULL);
#endif
  {
   self->Unbind(pshader);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_Unbind08(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: UnbindAll of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_UnbindAll09
static int tolua_PX2_Renderer_UnbindAll09(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const PixelShader",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const PixelShader* pshader = ((const PixelShader*)  tolua_tousertype(tolua_S,2,0));
  {
   Renderer::UnbindAll(pshader);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_UnbindAll08(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Enable of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_Enable10
static int tolua_PX2_Renderer_Enable10(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const PixelShader",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"const ShaderParameters",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const PixelShader* pshader = ((const PixelShader*)  tolua_tousertype(tolua_S,2,0));
  const ShaderParameters* parameters = ((const ShaderParameters*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Enable'", NULL);
#endif
  {
   self->Enable(pshader,parameters);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_Enable09(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Disable of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_Disable09
static int tolua_PX2_Renderer_Disable09(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const PixelShader",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"const ShaderParameters",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const PixelShader* pshader = ((const PixelShader*)  tolua_tousertype(tolua_S,2,0));
  const ShaderParameters* parameters = ((const ShaderParameters*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Disable'", NULL);
#endif
  {
   self->Disable(pshader,parameters);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_Disable08(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetAlphaProperty of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_GetAlphaProperty00
static int tolua_PX2_Renderer_GetAlphaProperty00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Renderer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Renderer* self = (const Renderer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetAlphaProperty'", NULL);
#endif
  {
   const AlphaProperty* tolua_ret = (const AlphaProperty*)  self->GetAlphaProperty();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"const AlphaProperty");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetAlphaProperty'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetCullProperty of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_GetCullProperty00
static int tolua_PX2_Renderer_GetCullProperty00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Renderer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Renderer* self = (const Renderer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetCullProperty'", NULL);
#endif
  {
   const CullProperty* tolua_ret = (const CullProperty*)  self->GetCullProperty();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"const CullProperty");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetCullProperty'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetDepthProperty of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_GetDepthProperty00
static int tolua_PX2_Renderer_GetDepthProperty00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Renderer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Renderer* self = (const Renderer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetDepthProperty'", NULL);
#endif
  {
   const DepthProperty* tolua_ret = (const DepthProperty*)  self->GetDepthProperty();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"const DepthProperty");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetDepthProperty'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetOffsetProperty of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_GetOffsetProperty00
static int tolua_PX2_Renderer_GetOffsetProperty00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Renderer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Renderer* self = (const Renderer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetOffsetProperty'", NULL);
#endif
  {
   const OffsetProperty* tolua_ret = (const OffsetProperty*)  self->GetOffsetProperty();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"const OffsetProperty");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetOffsetProperty'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetStencilProperty of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_GetStencilProperty00
static int tolua_PX2_Renderer_GetStencilProperty00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Renderer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Renderer* self = (const Renderer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetStencilProperty'", NULL);
#endif
  {
   const StencilProperty* tolua_ret = (const StencilProperty*)  self->GetStencilProperty();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"const StencilProperty");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetStencilProperty'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetWireProperty of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_GetWireProperty00
static int tolua_PX2_Renderer_GetWireProperty00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Renderer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Renderer* self = (const Renderer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetWireProperty'", NULL);
#endif
  {
   const WireProperty* tolua_ret = (const WireProperty*)  self->GetWireProperty();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"const WireProperty");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetWireProperty'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetCamera of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_SetCamera00
static int tolua_PX2_Renderer_SetCamera00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Camera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  Camera* camera = ((Camera*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetCamera'", NULL);
#endif
  {
   self->SetCamera(camera);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetCamera'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetCamera of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_GetCamera00
static int tolua_PX2_Renderer_GetCamera00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetCamera'", NULL);
#endif
  {
   Camera* tolua_ret = (Camera*)  self->GetCamera();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Camera");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetCamera'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetCamera of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_GetCamera01
static int tolua_PX2_Renderer_GetCamera01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Renderer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const Renderer* self = (const Renderer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetCamera'", NULL);
#endif
  {
   const Camera* tolua_ret = (const Camera*)  self->GetCamera();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"const Camera");
  }
 }
 return 1;
tolua_lerror:
 return tolua_PX2_Renderer_GetCamera00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetViewMatrix of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_GetViewMatrix00
static int tolua_PX2_Renderer_GetViewMatrix00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Renderer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Renderer* self = (const Renderer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetViewMatrix'", NULL);
#endif
  {
   const HMatrix& tolua_ret = (const HMatrix&)  self->GetViewMatrix();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const HMatrix");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetViewMatrix'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetProjectionMatrix of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_GetProjectionMatrix00
static int tolua_PX2_Renderer_GetProjectionMatrix00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Renderer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Renderer* self = (const Renderer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetProjectionMatrix'", NULL);
#endif
  {
   const HMatrix& tolua_ret = (const HMatrix&)  self->GetProjectionMatrix();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const HMatrix");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetProjectionMatrix'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetPostProjectionMatrix of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_GetPostProjectionMatrix00
static int tolua_PX2_Renderer_GetPostProjectionMatrix00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Renderer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Renderer* self = (const Renderer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetPostProjectionMatrix'", NULL);
#endif
  {
   const HMatrix& tolua_ret = (const HMatrix&)  self->GetPostProjectionMatrix();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const HMatrix");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetPostProjectionMatrix'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetPickRay of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_GetPickRay00
static int tolua_PX2_Renderer_GetPickRay00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Renderer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"APoint",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,5,&tolua_err) || !tolua_isusertype(tolua_S,5,"AVector",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Renderer* self = (const Renderer*)  tolua_tousertype(tolua_S,1,0);
  int x = ((int)  tolua_tonumber(tolua_S,2,0));
  int y = ((int)  tolua_tonumber(tolua_S,3,0));
  APoint* origin = ((APoint*)  tolua_tousertype(tolua_S,4,0));
  AVector* direction = ((AVector*)  tolua_tousertype(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetPickRay'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->GetPickRay(x,y,*origin,*direction);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetPickRay'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: PointWorldToViewPort of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_PointWorldToViewPort00
static int tolua_PX2_Renderer_PointWorldToViewPort00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const APoint",0,&tolua_err)) ||
     !tolua_isboolean(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const APoint* point = ((const APoint*)  tolua_tousertype(tolua_S,2,0));
  bool isInBack = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'PointWorldToViewPort'", NULL);
#endif
  {
   Vector2f tolua_ret = (Vector2f)  self->PointWorldToViewPort(*point,&isInBack);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Vector2f)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Vector2f");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Vector2f));
     tolua_pushusertype(tolua_S,tolua_obj,"Vector2f");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
   tolua_pushboolean(tolua_S,(bool)isInBack);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'PointWorldToViewPort'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetClearColor of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_SetClearColor00
static int tolua_PX2_Renderer_SetClearColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Float4",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const Float4* clearColor = ((const Float4*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetClearColor'", NULL);
#endif
  {
   self->SetClearColor(*clearColor);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetClearColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetClearColor of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_GetClearColor00
static int tolua_PX2_Renderer_GetClearColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Renderer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Renderer* self = (const Renderer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetClearColor'", NULL);
#endif
  {
   const Float4& tolua_ret = (const Float4&)  self->GetClearColor();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const Float4");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetClearColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetClearDepth of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_SetClearDepth00
static int tolua_PX2_Renderer_SetClearDepth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  float clearDepth = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetClearDepth'", NULL);
#endif
  {
   self->SetClearDepth(clearDepth);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetClearDepth'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetClearDepth of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_GetClearDepth00
static int tolua_PX2_Renderer_GetClearDepth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Renderer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Renderer* self = (const Renderer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetClearDepth'", NULL);
#endif
  {
   float tolua_ret = (float)  self->GetClearDepth();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetClearDepth'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetClearStencil of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_SetClearStencil00
static int tolua_PX2_Renderer_SetClearStencil00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  unsigned int clearStencil = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetClearStencil'", NULL);
#endif
  {
   self->SetClearStencil(clearStencil);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetClearStencil'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetClearStencil of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_GetClearStencil00
static int tolua_PX2_Renderer_GetClearStencil00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Renderer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Renderer* self = (const Renderer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetClearStencil'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->GetClearStencil();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetClearStencil'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetColorMask of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_GetColorMask00
static int tolua_PX2_Renderer_GetColorMask00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Renderer",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,4,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Renderer* self = (const Renderer*)  tolua_tousertype(tolua_S,1,0);
  bool allowRed = ((bool)  tolua_toboolean(tolua_S,2,0));
  bool allowGreen = ((bool)  tolua_toboolean(tolua_S,3,0));
  bool allowBlue = ((bool)  tolua_toboolean(tolua_S,4,0));
  bool allowAlpha = ((bool)  tolua_toboolean(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetColorMask'", NULL);
#endif
  {
   self->GetColorMask(allowRed,allowGreen,allowBlue,allowAlpha);
   tolua_pushboolean(tolua_S,(bool)allowRed);
   tolua_pushboolean(tolua_S,(bool)allowGreen);
   tolua_pushboolean(tolua_S,(bool)allowBlue);
   tolua_pushboolean(tolua_S,(bool)allowAlpha);
  }
 }
 return 4;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetColorMask'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetOverrideAlphaProperty of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_SetOverrideAlphaProperty00
static int tolua_PX2_Renderer_SetOverrideAlphaProperty00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const AlphaProperty",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const AlphaProperty* alphaState = ((const AlphaProperty*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetOverrideAlphaProperty'", NULL);
#endif
  {
   self->SetOverrideAlphaProperty(alphaState);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetOverrideAlphaProperty'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetOverrideCullProperty of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_SetOverrideCullProperty00
static int tolua_PX2_Renderer_SetOverrideCullProperty00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const CullProperty",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const CullProperty* cullState = ((const CullProperty*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetOverrideCullProperty'", NULL);
#endif
  {
   self->SetOverrideCullProperty(cullState);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetOverrideCullProperty'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetOverrideDepthProperty of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_SetOverrideDepthProperty00
static int tolua_PX2_Renderer_SetOverrideDepthProperty00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const DepthProperty",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const DepthProperty* depthState = ((const DepthProperty*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetOverrideDepthProperty'", NULL);
#endif
  {
   self->SetOverrideDepthProperty(depthState);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetOverrideDepthProperty'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetOverrideOffsetProperty of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_SetOverrideOffsetProperty00
static int tolua_PX2_Renderer_SetOverrideOffsetProperty00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const OffsetProperty",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const OffsetProperty* offsetState = ((const OffsetProperty*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetOverrideOffsetProperty'", NULL);
#endif
  {
   self->SetOverrideOffsetProperty(offsetState);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetOverrideOffsetProperty'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetOverrideStencilProperty of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_SetOverrideStencilProperty00
static int tolua_PX2_Renderer_SetOverrideStencilProperty00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const StencilProperty",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const StencilProperty* stencilState = ((const StencilProperty*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetOverrideStencilProperty'", NULL);
#endif
  {
   self->SetOverrideStencilProperty(stencilState);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetOverrideStencilProperty'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetOverrideWireProperty of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_SetOverrideWireProperty00
static int tolua_PX2_Renderer_SetOverrideWireProperty00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const WireProperty",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const WireProperty* wireState = ((const WireProperty*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetOverrideWireProperty'", NULL);
#endif
  {
   self->SetOverrideWireProperty(wireState);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetOverrideWireProperty'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetOverrideAlphaProperty of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_GetOverrideAlphaProperty00
static int tolua_PX2_Renderer_GetOverrideAlphaProperty00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Renderer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Renderer* self = (const Renderer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetOverrideAlphaProperty'", NULL);
#endif
  {
   const AlphaProperty* tolua_ret = (const AlphaProperty*)  self->GetOverrideAlphaProperty();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"const AlphaProperty");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetOverrideAlphaProperty'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetOverrideCullProperty of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_GetOverrideCullProperty00
static int tolua_PX2_Renderer_GetOverrideCullProperty00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Renderer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Renderer* self = (const Renderer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetOverrideCullProperty'", NULL);
#endif
  {
   const CullProperty* tolua_ret = (const CullProperty*)  self->GetOverrideCullProperty();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"const CullProperty");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetOverrideCullProperty'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetOverrideDepthProperty of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_GetOverrideDepthProperty00
static int tolua_PX2_Renderer_GetOverrideDepthProperty00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Renderer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Renderer* self = (const Renderer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetOverrideDepthProperty'", NULL);
#endif
  {
   const DepthProperty* tolua_ret = (const DepthProperty*)  self->GetOverrideDepthProperty();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"const DepthProperty");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetOverrideDepthProperty'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetOverrideOffsetProperty of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_GetOverrideOffsetProperty00
static int tolua_PX2_Renderer_GetOverrideOffsetProperty00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Renderer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Renderer* self = (const Renderer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetOverrideOffsetProperty'", NULL);
#endif
  {
   const OffsetProperty* tolua_ret = (const OffsetProperty*)  self->GetOverrideOffsetProperty();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"const OffsetProperty");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetOverrideOffsetProperty'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetOverrideStencilProperty of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_GetOverrideStencilProperty00
static int tolua_PX2_Renderer_GetOverrideStencilProperty00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Renderer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Renderer* self = (const Renderer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetOverrideStencilProperty'", NULL);
#endif
  {
   const StencilProperty* tolua_ret = (const StencilProperty*)  self->GetOverrideStencilProperty();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"const StencilProperty");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetOverrideStencilProperty'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetOverrideWireProperty of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_GetOverrideWireProperty00
static int tolua_PX2_Renderer_GetOverrideWireProperty00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Renderer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Renderer* self = (const Renderer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetOverrideWireProperty'", NULL);
#endif
  {
   const WireProperty* tolua_ret = (const WireProperty*)  self->GetOverrideWireProperty();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"const WireProperty");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetOverrideWireProperty'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetReverseCullOrder of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_SetReverseCullOrder00
static int tolua_PX2_Renderer_SetReverseCullOrder00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  bool reverseCullOrder = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetReverseCullOrder'", NULL);
#endif
  {
   self->SetReverseCullOrder(reverseCullOrder);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetReverseCullOrder'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetReverseCullOrder of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_GetReverseCullOrder00
static int tolua_PX2_Renderer_GetReverseCullOrder00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Renderer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Renderer* self = (const Renderer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetReverseCullOrder'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->GetReverseCullOrder();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetReverseCullOrder'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Draw of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_Draw00
static int tolua_PX2_Renderer_Draw00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const VisibleSet",0,&tolua_err)) ||
     !tolua_isusertype(tolua_S,3,"GlobalMaterial",1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const VisibleSet* visibleSet = ((const VisibleSet*)  tolua_tousertype(tolua_S,2,0));
  GlobalMaterial* globalMaterial = ((GlobalMaterial*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Draw'", NULL);
#endif
  {
   self->Draw(*visibleSet,globalMaterial);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Draw'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Draw of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_Draw01
static int tolua_PX2_Renderer_Draw01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const Renderable",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const Renderable* renderable = ((const Renderable*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Draw'", NULL);
#endif
  {
   self->Draw(renderable);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_Draw00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: Draw of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_Draw02
static int tolua_PX2_Renderer_Draw02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const Renderable",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"const MaterialInstance",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const Renderable* renderable = ((const Renderable*)  tolua_tousertype(tolua_S,2,0));
  const MaterialInstance* instance = ((const MaterialInstance*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Draw'", NULL);
#endif
  {
   self->Draw(renderable,instance);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_Draw01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetAlphaProperty of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_SetAlphaProperty00
static int tolua_PX2_Renderer_SetAlphaProperty00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const AlphaProperty",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const AlphaProperty* alphaState = ((const AlphaProperty*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetAlphaProperty'", NULL);
#endif
  {
   self->SetAlphaProperty(alphaState);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetAlphaProperty'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetCullProperty of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_SetCullProperty00
static int tolua_PX2_Renderer_SetCullProperty00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const CullProperty",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const CullProperty* cullState = ((const CullProperty*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetCullProperty'", NULL);
#endif
  {
   self->SetCullProperty(cullState);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetCullProperty'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetDepthProperty of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_SetDepthProperty00
static int tolua_PX2_Renderer_SetDepthProperty00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const DepthProperty",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const DepthProperty* depthState = ((const DepthProperty*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetDepthProperty'", NULL);
#endif
  {
   self->SetDepthProperty(depthState);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetDepthProperty'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetOffsetProperty of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_SetOffsetProperty00
static int tolua_PX2_Renderer_SetOffsetProperty00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const OffsetProperty",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const OffsetProperty* offsetState = ((const OffsetProperty*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetOffsetProperty'", NULL);
#endif
  {
   self->SetOffsetProperty(offsetState);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetOffsetProperty'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetStencilProperty of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_SetStencilProperty00
static int tolua_PX2_Renderer_SetStencilProperty00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const StencilProperty",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const StencilProperty* stencilState = ((const StencilProperty*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetStencilProperty'", NULL);
#endif
  {
   self->SetStencilProperty(stencilState);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetStencilProperty'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetWireProperty of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_SetWireProperty00
static int tolua_PX2_Renderer_SetWireProperty00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const WireProperty",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  const WireProperty* wireState = ((const WireProperty*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetWireProperty'", NULL);
#endif
  {
   self->SetWireProperty(wireState);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetWireProperty'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetViewport of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_SetViewport00
static int tolua_PX2_Renderer_SetViewport00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  int xPosition = ((int)  tolua_tonumber(tolua_S,2,0));
  int yPosition = ((int)  tolua_tonumber(tolua_S,3,0));
  int width = ((int)  tolua_tonumber(tolua_S,4,0));
  int height = ((int)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetViewport'", NULL);
#endif
  {
   self->SetViewport(xPosition,yPosition,width,height);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetViewport'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetViewport of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_GetViewport00
static int tolua_PX2_Renderer_GetViewport00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Renderer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Renderer* self = (const Renderer*)  tolua_tousertype(tolua_S,1,0);
  int xPosition = ((int)  tolua_tonumber(tolua_S,2,0));
  int yPosition = ((int)  tolua_tonumber(tolua_S,3,0));
  int width = ((int)  tolua_tonumber(tolua_S,4,0));
  int height = ((int)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetViewport'", NULL);
#endif
  {
   self->GetViewport(xPosition,yPosition,width,height);
   tolua_pushnumber(tolua_S,(lua_Number)xPosition);
   tolua_pushnumber(tolua_S,(lua_Number)yPosition);
   tolua_pushnumber(tolua_S,(lua_Number)width);
   tolua_pushnumber(tolua_S,(lua_Number)height);
  }
 }
 return 4;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetViewport'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetDepthRange of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_SetDepthRange00
static int tolua_PX2_Renderer_SetDepthRange00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  float zMin = ((float)  tolua_tonumber(tolua_S,2,0));
  float zMax = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetDepthRange'", NULL);
#endif
  {
   self->SetDepthRange(zMin,zMax);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetDepthRange'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetDepthRange of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_GetDepthRange00
static int tolua_PX2_Renderer_GetDepthRange00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Renderer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Renderer* self = (const Renderer*)  tolua_tousertype(tolua_S,1,0);
  float zMin = ((float)  tolua_tonumber(tolua_S,2,0));
  float zMax = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetDepthRange'", NULL);
#endif
  {
   self->GetDepthRange(zMin,zMax);
   tolua_pushnumber(tolua_S,(lua_Number)zMin);
   tolua_pushnumber(tolua_S,(lua_Number)zMax);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetDepthRange'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Resize of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_Resize00
static int tolua_PX2_Renderer_Resize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  int width = ((int)  tolua_tonumber(tolua_S,2,0));
  int height = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Resize'", NULL);
#endif
  {
   self->Resize(width,height);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Resize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ResizeWindow of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_ResizeWindow00
static int tolua_PX2_Renderer_ResizeWindow00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  int width = ((int)  tolua_tonumber(tolua_S,2,0));
  int height = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ResizeWindow'", NULL);
#endif
  {
   self->ResizeWindow(width,height);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ResizeWindow'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ClearColorBuffer of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_ClearColorBuffer00
static int tolua_PX2_Renderer_ClearColorBuffer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ClearColorBuffer'", NULL);
#endif
  {
   self->ClearColorBuffer();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ClearColorBuffer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ClearDepthBuffer of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_ClearDepthBuffer00
static int tolua_PX2_Renderer_ClearDepthBuffer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ClearDepthBuffer'", NULL);
#endif
  {
   self->ClearDepthBuffer();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ClearDepthBuffer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ClearStencilBuffer of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_ClearStencilBuffer00
static int tolua_PX2_Renderer_ClearStencilBuffer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ClearStencilBuffer'", NULL);
#endif
  {
   self->ClearStencilBuffer();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ClearStencilBuffer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ClearBuffers of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_ClearBuffers00
static int tolua_PX2_Renderer_ClearBuffers00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ClearBuffers'", NULL);
#endif
  {
   self->ClearBuffers();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ClearBuffers'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ClearColorBuffer of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_ClearColorBuffer01
static int tolua_PX2_Renderer_ClearColorBuffer01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  int x = ((int)  tolua_tonumber(tolua_S,2,0));
  int y = ((int)  tolua_tonumber(tolua_S,3,0));
  int w = ((int)  tolua_tonumber(tolua_S,4,0));
  int h = ((int)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ClearColorBuffer'", NULL);
#endif
  {
   self->ClearColorBuffer(x,y,w,h);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_ClearColorBuffer00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: ClearDepthBuffer of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_ClearDepthBuffer01
static int tolua_PX2_Renderer_ClearDepthBuffer01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  int x = ((int)  tolua_tonumber(tolua_S,2,0));
  int y = ((int)  tolua_tonumber(tolua_S,3,0));
  int w = ((int)  tolua_tonumber(tolua_S,4,0));
  int h = ((int)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ClearDepthBuffer'", NULL);
#endif
  {
   self->ClearDepthBuffer(x,y,w,h);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_ClearDepthBuffer00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: ClearStencilBuffer of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_ClearStencilBuffer01
static int tolua_PX2_Renderer_ClearStencilBuffer01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  int x = ((int)  tolua_tonumber(tolua_S,2,0));
  int y = ((int)  tolua_tonumber(tolua_S,3,0));
  int w = ((int)  tolua_tonumber(tolua_S,4,0));
  int h = ((int)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ClearStencilBuffer'", NULL);
#endif
  {
   self->ClearStencilBuffer(x,y,w,h);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_ClearStencilBuffer00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: ClearBuffers of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_ClearBuffers01
static int tolua_PX2_Renderer_ClearBuffers01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  int x = ((int)  tolua_tonumber(tolua_S,2,0));
  int y = ((int)  tolua_tonumber(tolua_S,3,0));
  int w = ((int)  tolua_tonumber(tolua_S,4,0));
  int h = ((int)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ClearBuffers'", NULL);
#endif
  {
   self->ClearBuffers(x,y,w,h);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Renderer_ClearBuffers00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: DisplayColorBuffer of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_DisplayColorBuffer00
static int tolua_PX2_Renderer_DisplayColorBuffer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'DisplayColorBuffer'", NULL);
#endif
  {
   self->DisplayColorBuffer();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'DisplayColorBuffer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetColorMask of class  Renderer */
#ifndef TOLUA_DISABLE_tolua_PX2_Renderer_SetColorMask00
static int tolua_PX2_Renderer_SetColorMask00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Renderer",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,4,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Renderer* self = (Renderer*)  tolua_tousertype(tolua_S,1,0);
  bool allowRed = ((bool)  tolua_toboolean(tolua_S,2,0));
  bool allowGreen = ((bool)  tolua_toboolean(tolua_S,3,0));
  bool allowBlue = ((bool)  tolua_toboolean(tolua_S,4,0));
  bool allowAlpha = ((bool)  tolua_toboolean(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetColorMask'", NULL);
#endif
  {
   self->SetColorMask(allowRed,allowGreen,allowBlue,allowAlpha);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetColorMask'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetSingleton of class  ScriptManager */
#ifndef TOLUA_DISABLE_tolua_PX2_ScriptManager_GetSingleton00
static int tolua_PX2_ScriptManager_GetSingleton00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"ScriptManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   ScriptManager& tolua_ret = (ScriptManager&)  ScriptManager::GetSingleton();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"ScriptManager");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetSingleton'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CallString of class  ScriptManager */
#ifndef TOLUA_DISABLE_tolua_PX2_ScriptManager_CallString00
static int tolua_PX2_ScriptManager_CallString00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ScriptManager",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ScriptManager* self = (ScriptManager*)  tolua_tousertype(tolua_S,1,0);
  const char* str = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CallString'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->CallString(str);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CallString'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CallFile of class  ScriptManager */
#ifndef TOLUA_DISABLE_tolua_PX2_ScriptManager_CallFile00
static int tolua_PX2_ScriptManager_CallFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ScriptManager",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ScriptManager* self = (ScriptManager*)  tolua_tousertype(tolua_S,1,0);
  const char* filename = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CallFile'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->CallFile(filename);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CallFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetSingleton of class  ResourceManager */
#ifndef TOLUA_DISABLE_tolua_PX2_ResourceManager_GetSingleton00
static int tolua_PX2_ResourceManager_GetSingleton00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"ResourceManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   ResourceManager& tolua_ret = (ResourceManager&)  ResourceManager::GetSingleton();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"ResourceManager");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetSingleton'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Clear of class  ResourceManager */
#ifndef TOLUA_DISABLE_tolua_PX2_ResourceManager_Clear00
static int tolua_PX2_ResourceManager_Clear00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ResourceManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ResourceManager* self = (ResourceManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Clear'", NULL);
#endif
  {
   self->Clear();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Clear'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: BlockLoad of class  ResourceManager */
#ifndef TOLUA_DISABLE_tolua_PX2_ResourceManager_BlockLoad00
static int tolua_PX2_ResourceManager_BlockLoad00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ResourceManager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ResourceManager* self = (ResourceManager*)  tolua_tousertype(tolua_S,1,0);
  const std::string filename = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'BlockLoad'", NULL);
#endif
  {
   Object* tolua_ret = (Object*)  self->BlockLoad(filename);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Object");
   tolua_pushcppstring(tolua_S,(const char*)filename);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'BlockLoad'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: BackgroundLoad of class  ResourceManager */
#ifndef TOLUA_DISABLE_tolua_PX2_ResourceManager_BackgroundLoad00
static int tolua_PX2_ResourceManager_BackgroundLoad00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ResourceManager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ResourceManager* self = (ResourceManager*)  tolua_tousertype(tolua_S,1,0);
  const std::string filename = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'BackgroundLoad'", NULL);
#endif
  {
   ResHandle tolua_ret = (ResHandle)  self->BackgroundLoad(filename);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((ResHandle)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"ResHandle");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(ResHandle));
     tolua_pushusertype(tolua_S,tolua_obj,"ResHandle");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
   tolua_pushcppstring(tolua_S,(const char*)filename);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'BackgroundLoad'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CheckRes of class  ResourceManager */
#ifndef TOLUA_DISABLE_tolua_PX2_ResourceManager_CheckRes00
static int tolua_PX2_ResourceManager_CheckRes00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ResourceManager",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"ResHandle",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ResourceManager* self = (ResourceManager*)  tolua_tousertype(tolua_S,1,0);
  ResHandle handle = *((ResHandle*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CheckRes'", NULL);
#endif
  {
   Object* tolua_ret = (Object*)  self->CheckRes(handle);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Object");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CheckRes'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetResLoadState of class  ResourceManager */
#ifndef TOLUA_DISABLE_tolua_PX2_ResourceManager_GetResLoadState00
static int tolua_PX2_ResourceManager_GetResLoadState00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ResourceManager",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"ResHandle",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ResourceManager* self = (ResourceManager*)  tolua_tousertype(tolua_S,1,0);
  ResHandle handle = *((ResHandle*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetResLoadState'", NULL);
#endif
  {
   ResourceManager::LoadState tolua_ret = (ResourceManager::LoadState)  self->GetResLoadState(handle);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetResLoadState'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetUseGarbageCollect of class  ResourceManager */
#ifndef TOLUA_DISABLE_tolua_PX2_ResourceManager_SetUseGarbageCollect00
static int tolua_PX2_ResourceManager_SetUseGarbageCollect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ResourceManager",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ResourceManager* self = (ResourceManager*)  tolua_tousertype(tolua_S,1,0);
  bool use = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetUseGarbageCollect'", NULL);
#endif
  {
   self->SetUseGarbageCollect(use);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetUseGarbageCollect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: IsUseGarbageCollect of class  ResourceManager */
#ifndef TOLUA_DISABLE_tolua_PX2_ResourceManager_IsUseGarbageCollect00
static int tolua_PX2_ResourceManager_IsUseGarbageCollect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const ResourceManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const ResourceManager* self = (const ResourceManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'IsUseGarbageCollect'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->IsUseGarbageCollect();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'IsUseGarbageCollect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetGarbageCollectTime of class  ResourceManager */
#ifndef TOLUA_DISABLE_tolua_PX2_ResourceManager_SetGarbageCollectTime00
static int tolua_PX2_ResourceManager_SetGarbageCollectTime00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ResourceManager",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ResourceManager* self = (ResourceManager*)  tolua_tousertype(tolua_S,1,0);
  float seconds = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetGarbageCollectTime'", NULL);
#endif
  {
   self->SetGarbageCollectTime(seconds);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetGarbageCollectTime'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetGarbageCollectTime of class  ResourceManager */
#ifndef TOLUA_DISABLE_tolua_PX2_ResourceManager_GetGarbageCollectTime00
static int tolua_PX2_ResourceManager_GetGarbageCollectTime00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const ResourceManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const ResourceManager* self = (const ResourceManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetGarbageCollectTime'", NULL);
#endif
  {
   float tolua_ret = (float)  self->GetGarbageCollectTime();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetGarbageCollectTime'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: LoadBuffer of class  ResourceManager */
#ifndef TOLUA_DISABLE_tolua_PX2_ResourceManager_LoadBuffer00
static int tolua_PX2_ResourceManager_LoadBuffer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ResourceManager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isstring(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ResourceManager* self = (ResourceManager*)  tolua_tousertype(tolua_S,1,0);
  const std::string filename = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  int bufferSize = ((int)  tolua_tonumber(tolua_S,3,0));
  char* buffer = ((char*)  tolua_tostring(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'LoadBuffer'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->LoadBuffer(filename,bufferSize,buffer);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
   tolua_pushcppstring(tolua_S,(const char*)filename);
   tolua_pushnumber(tolua_S,(lua_Number)bufferSize);
   tolua_pushstring(tolua_S,(const char*)buffer);
  }
 }
 return 4;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'LoadBuffer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddTexPack of class  ResourceManager */
#ifndef TOLUA_DISABLE_tolua_PX2_ResourceManager_AddTexPack00
static int tolua_PX2_ResourceManager_AddTexPack00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ResourceManager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ResourceManager* self = (ResourceManager*)  tolua_tousertype(tolua_S,1,0);
  const std::string texPackPath = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddTexPack'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->AddTexPack(texPackPath);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
   tolua_pushcppstring(tolua_S,(const char*)texPackPath);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AddTexPack'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetTexPack of class  ResourceManager */
#ifndef TOLUA_DISABLE_tolua_PX2_ResourceManager_GetTexPack00
static int tolua_PX2_ResourceManager_GetTexPack00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ResourceManager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ResourceManager* self = (ResourceManager*)  tolua_tousertype(tolua_S,1,0);
  const std::string texPackPath = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetTexPack'", NULL);
#endif
  {
   const TexPack& tolua_ret = (const TexPack&)  self->GetTexPack(texPackPath);
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const TexPack");
   tolua_pushcppstring(tolua_S,(const char*)texPackPath);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetTexPack'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetTexPackElement of class  ResourceManager */
#ifndef TOLUA_DISABLE_tolua_PX2_ResourceManager_GetTexPackElement00
static int tolua_PX2_ResourceManager_GetTexPackElement00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ResourceManager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ResourceManager* self = (ResourceManager*)  tolua_tousertype(tolua_S,1,0);
  const std::string texPackPath = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  const std::string eleName = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetTexPackElement'", NULL);
#endif
  {
   const TexPackElement& tolua_ret = (const TexPackElement&)  self->GetTexPackElement(texPackPath,eleName);
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const TexPackElement");
   tolua_pushcppstring(tolua_S,(const char*)texPackPath);
   tolua_pushcppstring(tolua_S,(const char*)eleName);
  }
 }
 return 3;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetTexPackElement'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetWriteablePath of class  ResourceManager */
#ifndef TOLUA_DISABLE_tolua_PX2_ResourceManager_GetWriteablePath00
static int tolua_PX2_ResourceManager_GetWriteablePath00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ResourceManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ResourceManager* self = (ResourceManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetWriteablePath'", NULL);
#endif
  {
   std::string tolua_ret = (std::string)  self->GetWriteablePath();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetWriteablePath'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetResourcePath of class  ResourceManager */
#ifndef TOLUA_DISABLE_tolua_PX2_ResourceManager_GetResourcePath00
static int tolua_PX2_ResourceManager_GetResourcePath00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"ResourceManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   const std::string tolua_ret = (const std::string)  ResourceManager::GetResourcePath();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetResourcePath'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: DDSKeepCompressed of class  ResourceManager */
#ifndef TOLUA_DISABLE_tolua_PX2_ResourceManager_DDSKeepCompressed00
static int tolua_PX2_ResourceManager_DDSKeepCompressed00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ResourceManager",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ResourceManager* self = (ResourceManager*)  tolua_tousertype(tolua_S,1,0);
  bool keep = ((bool)  tolua_toboolean(tolua_S,2,true));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'DDSKeepCompressed'", NULL);
#endif
  {
   self->DDSKeepCompressed(keep);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'DDSKeepCompressed'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: IsDDSKeepCompressed of class  ResourceManager */
#ifndef TOLUA_DISABLE_tolua_PX2_ResourceManager_IsDDSKeepCompressed00
static int tolua_PX2_ResourceManager_IsDDSKeepCompressed00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"ResourceManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ResourceManager* self = (ResourceManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'IsDDSKeepCompressed'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->IsDDSKeepCompressed();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'IsDDSKeepCompressed'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Load of class  LanguageManager */
#ifndef TOLUA_DISABLE_tolua_PX2_LanguageManager_Load00
static int tolua_PX2_LanguageManager_Load00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LanguageManager",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LanguageManager* self = (LanguageManager*)  tolua_tousertype(tolua_S,1,0);
  const char* filename = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Load'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->Load(filename);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Load'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Add of class  LanguageManager */
#ifndef TOLUA_DISABLE_tolua_PX2_LanguageManager_Add00
static int tolua_PX2_LanguageManager_Add00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LanguageManager",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LanguageManager* self = (LanguageManager*)  tolua_tousertype(tolua_S,1,0);
  const char* filename = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Add'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->Add(filename);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Add'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddItem of class  LanguageManager */
#ifndef TOLUA_DISABLE_tolua_PX2_LanguageManager_AddItem00
static int tolua_PX2_LanguageManager_AddItem00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LanguageManager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LanguageManager* self = (LanguageManager*)  tolua_tousertype(tolua_S,1,0);
  const std::string key = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  const std::string langauge0 = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
  const std::string langauge1 = ((const std::string)  tolua_tocppstring(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddItem'", NULL);
#endif
  {
   self->AddItem(key,langauge0,langauge1);
   tolua_pushcppstring(tolua_S,(const char*)key);
   tolua_pushcppstring(tolua_S,(const char*)langauge0);
   tolua_pushcppstring(tolua_S,(const char*)langauge1);
  }
 }
 return 3;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AddItem'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddItem1 of class  LanguageManager */
#ifndef TOLUA_DISABLE_tolua_PX2_LanguageManager_AddItem100
static int tolua_PX2_LanguageManager_AddItem100(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LanguageManager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LanguageManager* self = (LanguageManager*)  tolua_tousertype(tolua_S,1,0);
  const std::string key = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
  const std::string langauge0 = ((const std::string)  tolua_tocppstring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddItem1'", NULL);
#endif
  {
   self->AddItem1(key,langauge0);
   tolua_pushcppstring(tolua_S,(const char*)key);
   tolua_pushcppstring(tolua_S,(const char*)langauge0);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AddItem1'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetLanguage of class  LanguageManager */
#ifndef TOLUA_DISABLE_tolua_PX2_LanguageManager_SetLanguage00
static int tolua_PX2_LanguageManager_SetLanguage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LanguageManager",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LanguageManager* self = (LanguageManager*)  tolua_tousertype(tolua_S,1,0);
  int index = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetLanguage'", NULL);
#endif
  {
   self->SetLanguage(index);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetLanguage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: HasValue of class  LanguageManager */
#ifndef TOLUA_DISABLE_tolua_PX2_LanguageManager_HasValue00
static int tolua_PX2_LanguageManager_HasValue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const LanguageManager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const LanguageManager* self = (const LanguageManager*)  tolua_tousertype(tolua_S,1,0);
  const std::string key = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'HasValue'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->HasValue(key);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
   tolua_pushcppstring(tolua_S,(const char*)key);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'HasValue'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetValue of class  LanguageManager */
#ifndef TOLUA_DISABLE_tolua_PX2_LanguageManager_GetValue00
static int tolua_PX2_LanguageManager_GetValue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LanguageManager",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LanguageManager* self = (LanguageManager*)  tolua_tousertype(tolua_S,1,0);
  const std::string key = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetValue'", NULL);
#endif
  {
   const std::string tolua_ret = (const std::string)  self->GetValue(key);
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
   tolua_pushcppstring(tolua_S,(const char*)key);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetValue'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Clear of class  LanguageManager */
#ifndef TOLUA_DISABLE_tolua_PX2_LanguageManager_Clear00
static int tolua_PX2_LanguageManager_Clear00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"LanguageManager",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  LanguageManager* self = (LanguageManager*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Clear'", NULL);
#endif
  {
   self->Clear();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Clear'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Save of class  Project */
#ifndef TOLUA_DISABLE_tolua_PX2_Project_Save00
static int tolua_PX2_Project_Save00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Project",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Project* self = (Project*)  tolua_tousertype(tolua_S,1,0);
  const std::string filename = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Save'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->Save(filename);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
   tolua_pushcppstring(tolua_S,(const char*)filename);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Save'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SaveConfig of class  Project */
#ifndef TOLUA_DISABLE_tolua_PX2_Project_SaveConfig00
static int tolua_PX2_Project_SaveConfig00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Project",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Project* self = (Project*)  tolua_tousertype(tolua_S,1,0);
  const std::string filename = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SaveConfig'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->SaveConfig(filename);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
   tolua_pushcppstring(tolua_S,(const char*)filename);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SaveConfig'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Load of class  Project */
#ifndef TOLUA_DISABLE_tolua_PX2_Project_Load00
static int tolua_PX2_Project_Load00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Project",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Project* self = (Project*)  tolua_tousertype(tolua_S,1,0);
  const std::string filename = ((const std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Load'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->Load(filename);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
   tolua_pushcppstring(tolua_S,(const char*)filename);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Load'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetSize of class  Project */
#ifndef TOLUA_DISABLE_tolua_PX2_Project_SetSize00
static int tolua_PX2_Project_SetSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Project",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Project* self = (Project*)  tolua_tousertype(tolua_S,1,0);
  float width = ((float)  tolua_tonumber(tolua_S,2,0));
  float height = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetSize'", NULL);
#endif
  {
   self->SetSize(width,height);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetSize of class  Project */
#ifndef TOLUA_DISABLE_tolua_PX2_Project_SetSize01
static int tolua_PX2_Project_SetSize01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Project",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Sizef",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Project* self = (Project*)  tolua_tousertype(tolua_S,1,0);
  const Sizef* size = ((const Sizef*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetSize'", NULL);
#endif
  {
   self->SetSize(*size);
  }
 }
 return 0;
tolua_lerror:
 return tolua_PX2_Project_SetSize00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetSize of class  Project */
#ifndef TOLUA_DISABLE_tolua_PX2_Project_GetSize00
static int tolua_PX2_Project_GetSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Project",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Project* self = (const Project*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetSize'", NULL);
#endif
  {
   const Sizef& tolua_ret = (const Sizef&)  self->GetSize();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const Sizef");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetWidth of class  Project */
#ifndef TOLUA_DISABLE_tolua_PX2_Project_GetWidth00
static int tolua_PX2_Project_GetWidth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Project",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Project* self = (const Project*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetWidth'", NULL);
#endif
  {
   float tolua_ret = (float)  self->GetWidth();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetWidth'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetHeight of class  Project */
#ifndef TOLUA_DISABLE_tolua_PX2_Project_GetHeight00
static int tolua_PX2_Project_GetHeight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Project",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Project* self = (const Project*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetHeight'", NULL);
#endif
  {
   float tolua_ret = (float)  self->GetHeight();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetHeight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetBackgroundColor of class  Project */
#ifndef TOLUA_DISABLE_tolua_PX2_Project_SetBackgroundColor00
static int tolua_PX2_Project_SetBackgroundColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Project",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const Float4",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Project* self = (Project*)  tolua_tousertype(tolua_S,1,0);
  const Float4* color = ((const Float4*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetBackgroundColor'", NULL);
#endif
  {
   self->SetBackgroundColor(*color);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetBackgroundColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetBackgroundColor of class  Project */
#ifndef TOLUA_DISABLE_tolua_PX2_Project_GetBackgroundColor00
static int tolua_PX2_Project_GetBackgroundColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Project",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Project* self = (const Project*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetBackgroundColor'", NULL);
#endif
  {
   const Float4& tolua_ret = (const Float4&)  self->GetBackgroundColor();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const Float4");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetBackgroundColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetScene of class  Project */
#ifndef TOLUA_DISABLE_tolua_PX2_Project_SetScene00
static int tolua_PX2_Project_SetScene00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Project",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Scene",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Project* self = (Project*)  tolua_tousertype(tolua_S,1,0);
  Scene* scene = ((Scene*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetScene'", NULL);
#endif
  {
   self->SetScene(scene);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetScene'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetScene of class  Project */
#ifndef TOLUA_DISABLE_tolua_PX2_Project_GetScene00
static int tolua_PX2_Project_GetScene00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Project",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Project* self = (Project*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetScene'", NULL);
#endif
  {
   Scene* tolua_ret = (Scene*)  self->GetScene();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Scene");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetScene'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetSceneFilename of class  Project */
#ifndef TOLUA_DISABLE_tolua_PX2_Project_GetSceneFilename00
static int tolua_PX2_Project_GetSceneFilename00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Project",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Project* self = (const Project*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetSceneFilename'", NULL);
#endif
  {
   const std::string tolua_ret = (const std::string)  self->GetSceneFilename();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetSceneFilename'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetSceneRenderStep of class  Project */
#ifndef TOLUA_DISABLE_tolua_PX2_Project_GetSceneRenderStep00
static int tolua_PX2_Project_GetSceneRenderStep00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Project",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Project* self = (Project*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetSceneRenderStep'", NULL);
#endif
  {
   RenderStep* tolua_ret = (RenderStep*)  self->GetSceneRenderStep();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"RenderStep");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetSceneRenderStep'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetUIFrame of class  Project */
#ifndef TOLUA_DISABLE_tolua_PX2_Project_SetUIFrame00
static int tolua_PX2_Project_SetUIFrame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Project",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"UIFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Project* self = (Project*)  tolua_tousertype(tolua_S,1,0);
  UIFrame* ui = ((UIFrame*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetUIFrame'", NULL);
#endif
  {
   self->SetUIFrame(ui);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetUIFrame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetUIFrame of class  Project */
#ifndef TOLUA_DISABLE_tolua_PX2_Project_GetUIFrame00
static int tolua_PX2_Project_GetUIFrame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Project",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Project* self = (Project*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetUIFrame'", NULL);
#endif
  {
   UIFrame* tolua_ret = (UIFrame*)  self->GetUIFrame();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"UIFrame");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetUIFrame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetUIFilename of class  Project */
#ifndef TOLUA_DISABLE_tolua_PX2_Project_GetUIFilename00
static int tolua_PX2_Project_GetUIFilename00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Project",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Project* self = (const Project*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetUIFilename'", NULL);
#endif
  {
   const std::string tolua_ret = (const std::string)  self->GetUIFilename();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetUIFilename'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddObject of class  Selection */
#ifndef TOLUA_DISABLE_tolua_PX2_Selection_AddObject00
static int tolua_PX2_Selection_AddObject00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Selection",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"PX2::Object",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Selection* self = (Selection*)  tolua_tousertype(tolua_S,1,0);
  PX2::Object* obj = ((PX2::Object*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddObject'", NULL);
#endif
  {
   self->AddObject(obj);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AddObject'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: RemoveObject of class  Selection */
#ifndef TOLUA_DISABLE_tolua_PX2_Selection_RemoveObject00
static int tolua_PX2_Selection_RemoveObject00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Selection",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"PX2::Object",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Selection* self = (Selection*)  tolua_tousertype(tolua_S,1,0);
  PX2::Object* obj = ((PX2::Object*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'RemoveObject'", NULL);
#endif
  {
   self->RemoveObject(obj);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'RemoveObject'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetObjectAt of class  Selection */
#ifndef TOLUA_DISABLE_tolua_PX2_Selection_GetObjectAt00
static int tolua_PX2_Selection_GetObjectAt00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Selection",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Selection* self = (Selection*)  tolua_tousertype(tolua_S,1,0);
  int i = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetObjectAt'", NULL);
#endif
  {
   Object* tolua_ret = (Object*)  self->GetObjectAt(i);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Object");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetObjectAt'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetNumObjects of class  Selection */
#ifndef TOLUA_DISABLE_tolua_PX2_Selection_GetNumObjects00
static int tolua_PX2_Selection_GetNumObjects00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Selection",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Selection* self = (Selection*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetNumObjects'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetNumObjects();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetNumObjects'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: IsObjectIn of class  Selection */
#ifndef TOLUA_DISABLE_tolua_PX2_Selection_IsObjectIn00
static int tolua_PX2_Selection_IsObjectIn00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Selection",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"PX2::Object",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Selection* self = (Selection*)  tolua_tousertype(tolua_S,1,0);
  PX2::Object* obj = ((PX2::Object*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'IsObjectIn'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->IsObjectIn(obj);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'IsObjectIn'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Clear of class  Selection */
#ifndef TOLUA_DISABLE_tolua_PX2_Selection_Clear00
static int tolua_PX2_Selection_Clear00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Selection",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Selection* self = (Selection*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Clear'", NULL);
#endif
  {
   self->Clear();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Clear'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetFirstObject of class  Selection */
#ifndef TOLUA_DISABLE_tolua_PX2_Selection_GetFirstObject00
static int tolua_PX2_Selection_GetFirstObject00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Selection",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Selection* self = (const Selection*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetFirstObject'", NULL);
#endif
  {
   Object* tolua_ret = (Object*)  self->GetFirstObject();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Object");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetFirstObject'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Translate of class  Selection */
#ifndef TOLUA_DISABLE_tolua_PX2_Selection_Translate00
static int tolua_PX2_Selection_Translate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Selection",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"PX2::AVector",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Selection* self = (Selection*)  tolua_tousertype(tolua_S,1,0);
  PX2::AVector vec = *((PX2::AVector*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Translate'", NULL);
#endif
  {
   self->Translate(vec);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Translate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: TranslateTo of class  Selection */
#ifndef TOLUA_DISABLE_tolua_PX2_Selection_TranslateTo00
static int tolua_PX2_Selection_TranslateTo00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Selection",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"PX2::APoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Selection* self = (Selection*)  tolua_tousertype(tolua_S,1,0);
  PX2::APoint pos = *((PX2::APoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'TranslateTo'", NULL);
#endif
  {
   self->TranslateTo(pos);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'TranslateTo'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddRolate of class  Selection */
#ifndef TOLUA_DISABLE_tolua_PX2_Selection_AddRolate00
static int tolua_PX2_Selection_AddRolate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Selection",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"PX2::AVector",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Selection* self = (Selection*)  tolua_tousertype(tolua_S,1,0);
  PX2::AVector vec = *((PX2::AVector*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddRolate'", NULL);
#endif
  {
   self->AddRolate(vec);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AddRolate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddScale of class  Selection */
#ifndef TOLUA_DISABLE_tolua_PX2_Selection_AddScale00
static int tolua_PX2_Selection_AddScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Selection",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"PX2::AVector",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Selection* self = (Selection*)  tolua_tousertype(tolua_S,1,0);
  PX2::AVector vec = *((PX2::AVector*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddScale'", NULL);
#endif
  {
   self->AddScale(vec);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AddScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetCenter of class  Selection */
#ifndef TOLUA_DISABLE_tolua_PX2_Selection_GetCenter00
static int tolua_PX2_Selection_GetCenter00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Selection",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Selection* self = (const Selection*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetCenter'", NULL);
#endif
  {
   const PX2::APoint& tolua_ret = (const PX2::APoint&)  self->GetCenter();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const PX2::APoint");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetCenter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetRadius of class  Selection */
#ifndef TOLUA_DISABLE_tolua_PX2_Selection_GetRadius00
static int tolua_PX2_Selection_GetRadius00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const Selection",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const Selection* self = (const Selection*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetRadius'", NULL);
#endif
  {
   float tolua_ret = (float)  self->GetRadius();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetRadius'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Creater */
#ifndef TOLUA_DISABLE_tolua_PX2_Creater_new00
static int tolua_PX2_Creater_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Creater",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Creater* tolua_ret = (Creater*)  Mtolua_new((Creater)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Creater");
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

/* method: new_local of class  Creater */
#ifndef TOLUA_DISABLE_tolua_PX2_Creater_new00_local
static int tolua_PX2_Creater_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Creater",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Creater* tolua_ret = (Creater*)  Mtolua_new((Creater)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Creater");
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

/* method: delete of class  Creater */
#ifndef TOLUA_DISABLE_tolua_PX2_Creater_delete00
static int tolua_PX2_Creater_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Creater",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Creater* self = (Creater*)  tolua_tousertype(tolua_S,1,0);
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

/* method: CreateActor_Rectangle of class  Creater */
#ifndef TOLUA_DISABLE_tolua_PX2_Creater_CreateActor_Rectangle00
static int tolua_PX2_Creater_CreateActor_Rectangle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Creater",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Scene",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const APoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Creater* self = (Creater*)  tolua_tousertype(tolua_S,1,0);
  Scene* scene = ((Scene*)  tolua_tousertype(tolua_S,2,0));
  const APoint* pos = ((const APoint*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CreateActor_Rectangle'", NULL);
#endif
  {
   Actor* tolua_ret = (Actor*)  self->CreateActor_Rectangle(scene,*pos);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Actor");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CreateActor_Rectangle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CreateActor_Box of class  Creater */
#ifndef TOLUA_DISABLE_tolua_PX2_Creater_CreateActor_Box00
static int tolua_PX2_Creater_CreateActor_Box00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Creater",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Scene",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const APoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Creater* self = (Creater*)  tolua_tousertype(tolua_S,1,0);
  Scene* scene = ((Scene*)  tolua_tousertype(tolua_S,2,0));
  const APoint* pos = ((const APoint*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CreateActor_Box'", NULL);
#endif
  {
   Actor* tolua_ret = (Actor*)  self->CreateActor_Box(scene,*pos);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Actor");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CreateActor_Box'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CreateActor_Sphere of class  Creater */
#ifndef TOLUA_DISABLE_tolua_PX2_Creater_CreateActor_Sphere00
static int tolua_PX2_Creater_CreateActor_Sphere00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Creater",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Scene",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const APoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Creater* self = (Creater*)  tolua_tousertype(tolua_S,1,0);
  Scene* scene = ((Scene*)  tolua_tousertype(tolua_S,2,0));
  const APoint* pos = ((const APoint*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CreateActor_Sphere'", NULL);
#endif
  {
   Actor* tolua_ret = (Actor*)  self->CreateActor_Sphere(scene,*pos);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Actor");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CreateActor_Sphere'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CreateActor_Effect of class  Creater */
#ifndef TOLUA_DISABLE_tolua_PX2_Creater_CreateActor_Effect00
static int tolua_PX2_Creater_CreateActor_Effect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Creater",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Scene",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const APoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Creater* self = (Creater*)  tolua_tousertype(tolua_S,1,0);
  Scene* scene = ((Scene*)  tolua_tousertype(tolua_S,2,0));
  const APoint* pos = ((const APoint*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CreateActor_Effect'", NULL);
#endif
  {
   Actor* tolua_ret = (Actor*)  self->CreateActor_Effect(scene,*pos);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Actor");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CreateActor_Effect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CreateActor_Character of class  Creater */
#ifndef TOLUA_DISABLE_tolua_PX2_Creater_CreateActor_Character00
static int tolua_PX2_Creater_CreateActor_Character00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Creater",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Scene",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const APoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Creater* self = (Creater*)  tolua_tousertype(tolua_S,1,0);
  Scene* scene = ((Scene*)  tolua_tousertype(tolua_S,2,0));
  const APoint* pos = ((const APoint*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CreateActor_Character'", NULL);
#endif
  {
   Character* tolua_ret = (Character*)  self->CreateActor_Character(scene,*pos);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Character");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CreateActor_Character'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CreateRectangle of class  Creater */
#ifndef TOLUA_DISABLE_tolua_PX2_Creater_CreateRectangle00
static int tolua_PX2_Creater_CreateRectangle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Creater",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Node",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const APoint",0,&tolua_err)) ||
     !tolua_isboolean(tolua_S,4,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,5,1,&tolua_err) ||
     !tolua_isboolean(tolua_S,6,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Creater* self = (Creater*)  tolua_tousertype(tolua_S,1,0);
  Node* parent = ((Node*)  tolua_tousertype(tolua_S,2,0));
  const APoint* pos = ((const APoint*)  tolua_tousertype(tolua_S,3,0));
  bool isPosWorld = ((bool)  tolua_toboolean(tolua_S,4,0));
  bool doAdd = ((bool)  tolua_toboolean(tolua_S,5,true));
  bool usePickPos = ((bool)  tolua_toboolean(tolua_S,6,true));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CreateRectangle'", NULL);
#endif
  {
   Movable* tolua_ret = (Movable*)  self->CreateRectangle(parent,*pos,isPosWorld,doAdd,usePickPos);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Movable");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CreateRectangle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CreateBox of class  Creater */
#ifndef TOLUA_DISABLE_tolua_PX2_Creater_CreateBox00
static int tolua_PX2_Creater_CreateBox00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Creater",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Node",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const APoint",0,&tolua_err)) ||
     !tolua_isboolean(tolua_S,4,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,5,1,&tolua_err) ||
     !tolua_isboolean(tolua_S,6,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Creater* self = (Creater*)  tolua_tousertype(tolua_S,1,0);
  Node* parent = ((Node*)  tolua_tousertype(tolua_S,2,0));
  const APoint* pos = ((const APoint*)  tolua_tousertype(tolua_S,3,0));
  bool isPosWorld = ((bool)  tolua_toboolean(tolua_S,4,0));
  bool doAdd = ((bool)  tolua_toboolean(tolua_S,5,true));
  bool usePickPos = ((bool)  tolua_toboolean(tolua_S,6,true));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CreateBox'", NULL);
#endif
  {
   Movable* tolua_ret = (Movable*)  self->CreateBox(parent,*pos,isPosWorld,doAdd,usePickPos);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Movable");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CreateBox'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CreateSphere of class  Creater */
#ifndef TOLUA_DISABLE_tolua_PX2_Creater_CreateSphere00
static int tolua_PX2_Creater_CreateSphere00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Creater",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Node",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const APoint",0,&tolua_err)) ||
     !tolua_isboolean(tolua_S,4,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,5,1,&tolua_err) ||
     !tolua_isboolean(tolua_S,6,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Creater* self = (Creater*)  tolua_tousertype(tolua_S,1,0);
  Node* parent = ((Node*)  tolua_tousertype(tolua_S,2,0));
  const APoint* pos = ((const APoint*)  tolua_tousertype(tolua_S,3,0));
  bool isPosWorld = ((bool)  tolua_toboolean(tolua_S,4,0));
  bool doAdd = ((bool)  tolua_toboolean(tolua_S,5,true));
  bool usePickPos = ((bool)  tolua_toboolean(tolua_S,6,true));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CreateSphere'", NULL);
#endif
  {
   Movable* tolua_ret = (Movable*)  self->CreateSphere(parent,*pos,isPosWorld,doAdd,usePickPos);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Movable");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CreateSphere'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CreateUIFrame of class  Creater */
#ifndef TOLUA_DISABLE_tolua_PX2_Creater_CreateUIFrame00
static int tolua_PX2_Creater_CreateUIFrame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Creater",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Node",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const APoint",0,&tolua_err)) ||
     !tolua_isboolean(tolua_S,4,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Creater* self = (Creater*)  tolua_tousertype(tolua_S,1,0);
  Node* parent = ((Node*)  tolua_tousertype(tolua_S,2,0));
  const APoint* pos = ((const APoint*)  tolua_tousertype(tolua_S,3,0));
  bool isPosWorld = ((bool)  tolua_toboolean(tolua_S,4,0));
  bool usePickPos = ((bool)  tolua_toboolean(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CreateUIFrame'", NULL);
#endif
  {
   UIFrame* tolua_ret = (UIFrame*)  self->CreateUIFrame(parent,*pos,isPosWorld,usePickPos);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"UIFrame");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CreateUIFrame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CreateUIPicBox of class  Creater */
#ifndef TOLUA_DISABLE_tolua_PX2_Creater_CreateUIPicBox00
static int tolua_PX2_Creater_CreateUIPicBox00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Creater",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Node",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const APoint",0,&tolua_err)) ||
     !tolua_iscppstring(tolua_S,4,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,5,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,6,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Creater* self = (Creater*)  tolua_tousertype(tolua_S,1,0);
  Node* parent = ((Node*)  tolua_tousertype(tolua_S,2,0));
  const APoint* pos = ((const APoint*)  tolua_tousertype(tolua_S,3,0));
  const std::string filename = ((const std::string)  tolua_tocppstring(tolua_S,4,0));
  bool isPosWorld = ((bool)  tolua_toboolean(tolua_S,5,0));
  bool usePickPos = ((bool)  tolua_toboolean(tolua_S,6,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CreateUIPicBox'", NULL);
#endif
  {
   UIPicBox* tolua_ret = (UIPicBox*)  self->CreateUIPicBox(parent,*pos,filename,isPosWorld,usePickPos);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"UIPicBox");
   tolua_pushcppstring(tolua_S,(const char*)filename);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CreateUIPicBox'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CreateUIPicBox of class  Creater */
#ifndef TOLUA_DISABLE_tolua_PX2_Creater_CreateUIPicBox01
static int tolua_PX2_Creater_CreateUIPicBox01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Creater",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Node",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const APoint",0,&tolua_err)) ||
     !tolua_iscppstring(tolua_S,4,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,5,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,6,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,7,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Creater* self = (Creater*)  tolua_tousertype(tolua_S,1,0);
  Node* parent = ((Node*)  tolua_tousertype(tolua_S,2,0));
  const APoint* pos = ((const APoint*)  tolua_tousertype(tolua_S,3,0));
  const std::string texPack = ((const std::string)  tolua_tocppstring(tolua_S,4,0));
  const std::string eleName = ((const std::string)  tolua_tocppstring(tolua_S,5,0));
  bool isPosWorld = ((bool)  tolua_toboolean(tolua_S,6,0));
  bool usePickPos = ((bool)  tolua_toboolean(tolua_S,7,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CreateUIPicBox'", NULL);
#endif
  {
   UIPicBox* tolua_ret = (UIPicBox*)  self->CreateUIPicBox(parent,*pos,texPack,eleName,isPosWorld,usePickPos);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"UIPicBox");
   tolua_pushcppstring(tolua_S,(const char*)texPack);
   tolua_pushcppstring(tolua_S,(const char*)eleName);
  }
 }
 return 3;
tolua_lerror:
 return tolua_PX2_Creater_CreateUIPicBox00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: CreateUIText of class  Creater */
#ifndef TOLUA_DISABLE_tolua_PX2_Creater_CreateUIText00
static int tolua_PX2_Creater_CreateUIText00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Creater",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Node",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const APoint",0,&tolua_err)) ||
     !tolua_isboolean(tolua_S,4,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Creater* self = (Creater*)  tolua_tousertype(tolua_S,1,0);
  Node* parent = ((Node*)  tolua_tousertype(tolua_S,2,0));
  const APoint* pos = ((const APoint*)  tolua_tousertype(tolua_S,3,0));
  bool isPosWorld = ((bool)  tolua_toboolean(tolua_S,4,0));
  bool usePickPos = ((bool)  tolua_toboolean(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CreateUIText'", NULL);
#endif
  {
   UIText* tolua_ret = (UIText*)  self->CreateUIText(parent,*pos,isPosWorld,usePickPos);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"UIText");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CreateUIText'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CreateUIButton of class  Creater */
#ifndef TOLUA_DISABLE_tolua_PX2_Creater_CreateUIButton00
static int tolua_PX2_Creater_CreateUIButton00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Creater",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Node",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const APoint",0,&tolua_err)) ||
     !tolua_isboolean(tolua_S,4,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Creater* self = (Creater*)  tolua_tousertype(tolua_S,1,0);
  Node* parent = ((Node*)  tolua_tousertype(tolua_S,2,0));
  const APoint* pos = ((const APoint*)  tolua_tousertype(tolua_S,3,0));
  bool isPosWorld = ((bool)  tolua_toboolean(tolua_S,4,0));
  bool usePickPos = ((bool)  tolua_toboolean(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CreateUIButton'", NULL);
#endif
  {
   UIButton* tolua_ret = (UIButton*)  self->CreateUIButton(parent,*pos,isPosWorld,usePickPos);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"UIButton");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CreateUIButton'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CreateUICheckButton of class  Creater */
#ifndef TOLUA_DISABLE_tolua_PX2_Creater_CreateUICheckButton00
static int tolua_PX2_Creater_CreateUICheckButton00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Creater",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Node",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const APoint",0,&tolua_err)) ||
     !tolua_isboolean(tolua_S,4,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Creater* self = (Creater*)  tolua_tousertype(tolua_S,1,0);
  Node* parent = ((Node*)  tolua_tousertype(tolua_S,2,0));
  const APoint* pos = ((const APoint*)  tolua_tousertype(tolua_S,3,0));
  bool isPosWorld = ((bool)  tolua_toboolean(tolua_S,4,0));
  bool usePickPos = ((bool)  tolua_toboolean(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CreateUICheckButton'", NULL);
#endif
  {
   UICheckButton* tolua_ret = (UICheckButton*)  self->CreateUICheckButton(parent,*pos,isPosWorld,usePickPos);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"UICheckButton");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CreateUICheckButton'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CreateUIEditBox of class  Creater */
#ifndef TOLUA_DISABLE_tolua_PX2_Creater_CreateUIEditBox00
static int tolua_PX2_Creater_CreateUIEditBox00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Creater",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Node",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const APoint",0,&tolua_err)) ||
     !tolua_isboolean(tolua_S,4,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Creater* self = (Creater*)  tolua_tousertype(tolua_S,1,0);
  Node* parent = ((Node*)  tolua_tousertype(tolua_S,2,0));
  const APoint* pos = ((const APoint*)  tolua_tousertype(tolua_S,3,0));
  bool isPosWorld = ((bool)  tolua_toboolean(tolua_S,4,0));
  bool usePickPos = ((bool)  tolua_toboolean(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CreateUIEditBox'", NULL);
#endif
  {
   UIEditBox* tolua_ret = (UIEditBox*)  self->CreateUIEditBox(parent,*pos,isPosWorld,usePickPos);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"UIEditBox");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CreateUIEditBox'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CreateUIProgressBar of class  Creater */
#ifndef TOLUA_DISABLE_tolua_PX2_Creater_CreateUIProgressBar00
static int tolua_PX2_Creater_CreateUIProgressBar00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Creater",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Node",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const APoint",0,&tolua_err)) ||
     !tolua_isboolean(tolua_S,4,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Creater* self = (Creater*)  tolua_tousertype(tolua_S,1,0);
  Node* parent = ((Node*)  tolua_tousertype(tolua_S,2,0));
  const APoint* pos = ((const APoint*)  tolua_tousertype(tolua_S,3,0));
  bool isPosWorld = ((bool)  tolua_toboolean(tolua_S,4,0));
  bool usePickPos = ((bool)  tolua_toboolean(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CreateUIProgressBar'", NULL);
#endif
  {
   UIProgressBar* tolua_ret = (UIProgressBar*)  self->CreateUIProgressBar(parent,*pos,isPosWorld,usePickPos);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"UIProgressBar");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CreateUIProgressBar'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CreateParticleEmitter of class  Creater */
#ifndef TOLUA_DISABLE_tolua_PX2_Creater_CreateParticleEmitter00
static int tolua_PX2_Creater_CreateParticleEmitter00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Creater",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Node",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const APoint",0,&tolua_err)) ||
     !tolua_isboolean(tolua_S,4,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Creater* self = (Creater*)  tolua_tousertype(tolua_S,1,0);
  Node* parent = ((Node*)  tolua_tousertype(tolua_S,2,0));
  const APoint* pos = ((const APoint*)  tolua_tousertype(tolua_S,3,0));
  bool isPosWorld = ((bool)  tolua_toboolean(tolua_S,4,0));
  bool usePickPos = ((bool)  tolua_toboolean(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CreateParticleEmitter'", NULL);
#endif
  {
   ParticleEmitter* tolua_ret = (ParticleEmitter*)  self->CreateParticleEmitter(parent,*pos,isPosWorld,usePickPos);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"ParticleEmitter");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CreateParticleEmitter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CreateBillboard of class  Creater */
#ifndef TOLUA_DISABLE_tolua_PX2_Creater_CreateBillboard00
static int tolua_PX2_Creater_CreateBillboard00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Creater",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Node",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const APoint",0,&tolua_err)) ||
     !tolua_isboolean(tolua_S,4,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Creater* self = (Creater*)  tolua_tousertype(tolua_S,1,0);
  Node* parent = ((Node*)  tolua_tousertype(tolua_S,2,0));
  const APoint* pos = ((const APoint*)  tolua_tousertype(tolua_S,3,0));
  bool isPosWorld = ((bool)  tolua_toboolean(tolua_S,4,0));
  bool usePickPos = ((bool)  tolua_toboolean(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CreateBillboard'", NULL);
#endif
  {
   Billboard* tolua_ret = (Billboard*)  self->CreateBillboard(parent,*pos,isPosWorld,usePickPos);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Billboard");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CreateBillboard'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CreateBeamEmitter of class  Creater */
#ifndef TOLUA_DISABLE_tolua_PX2_Creater_CreateBeamEmitter00
static int tolua_PX2_Creater_CreateBeamEmitter00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Creater",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Node",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const APoint",0,&tolua_err)) ||
     !tolua_isboolean(tolua_S,4,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Creater* self = (Creater*)  tolua_tousertype(tolua_S,1,0);
  Node* parent = ((Node*)  tolua_tousertype(tolua_S,2,0));
  const APoint* pos = ((const APoint*)  tolua_tousertype(tolua_S,3,0));
  bool isPosWorld = ((bool)  tolua_toboolean(tolua_S,4,0));
  bool usePickPos = ((bool)  tolua_toboolean(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CreateBeamEmitter'", NULL);
#endif
  {
   BeamEmitter* tolua_ret = (BeamEmitter*)  self->CreateBeamEmitter(parent,*pos,isPosWorld,usePickPos);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"BeamEmitter");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CreateBeamEmitter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CreateRibbonEmitter of class  Creater */
#ifndef TOLUA_DISABLE_tolua_PX2_Creater_CreateRibbonEmitter00
static int tolua_PX2_Creater_CreateRibbonEmitter00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Creater",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Node",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const APoint",0,&tolua_err)) ||
     !tolua_isboolean(tolua_S,4,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Creater* self = (Creater*)  tolua_tousertype(tolua_S,1,0);
  Node* parent = ((Node*)  tolua_tousertype(tolua_S,2,0));
  const APoint* pos = ((const APoint*)  tolua_tousertype(tolua_S,3,0));
  bool isPosWorld = ((bool)  tolua_toboolean(tolua_S,4,0));
  bool usePickPos = ((bool)  tolua_toboolean(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CreateRibbonEmitter'", NULL);
#endif
  {
   RibbonEmitter* tolua_ret = (RibbonEmitter*)  self->CreateRibbonEmitter(parent,*pos,isPosWorld,usePickPos);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"RibbonEmitter");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CreateRibbonEmitter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CreateSoundable of class  Creater */
#ifndef TOLUA_DISABLE_tolua_PX2_Creater_CreateSoundable00
static int tolua_PX2_Creater_CreateSoundable00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Creater",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Node",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const APoint",0,&tolua_err)) ||
     !tolua_isboolean(tolua_S,4,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Creater* self = (Creater*)  tolua_tousertype(tolua_S,1,0);
  Node* parent = ((Node*)  tolua_tousertype(tolua_S,2,0));
  const APoint* pos = ((const APoint*)  tolua_tousertype(tolua_S,3,0));
  bool isPosWorld = ((bool)  tolua_toboolean(tolua_S,4,0));
  bool usePickPos = ((bool)  tolua_toboolean(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'CreateSoundable'", NULL);
#endif
  {
   Soundable* tolua_ret = (Soundable*)  self->CreateSoundable(parent,*pos,isPosWorld,usePickPos);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Soundable");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CreateSoundable'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AddObject of class  Creater */
#ifndef TOLUA_DISABLE_tolua_PX2_Creater_AddObject00
static int tolua_PX2_Creater_AddObject00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Creater",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Object",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"Object",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Creater* self = (Creater*)  tolua_tousertype(tolua_S,1,0);
  Object* parent = ((Object*)  tolua_tousertype(tolua_S,2,0));
  Object* obj = ((Object*)  tolua_tousertype(tolua_S,3,0));
  bool command = ((bool)  tolua_toboolean(tolua_S,4,true));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AddObject'", NULL);
#endif
  {
   self->AddObject(parent,obj,command);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AddObject'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: RemoveObject of class  Creater */
#ifndef TOLUA_DISABLE_tolua_PX2_Creater_RemoveObject00
static int tolua_PX2_Creater_RemoveObject00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Creater",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Object",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Creater* self = (Creater*)  tolua_tousertype(tolua_S,1,0);
  Object* obj = ((Object*)  tolua_tousertype(tolua_S,2,0));
  bool command = ((bool)  tolua_toboolean(tolua_S,3,true));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'RemoveObject'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->RemoveObject(obj,command);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'RemoveObject'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ConvertToNode of class  Creater */
#ifndef TOLUA_DISABLE_tolua_PX2_Creater_ConvertToNode00
static int tolua_PX2_Creater_ConvertToNode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Creater",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Object",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Creater* self = (Creater*)  tolua_tousertype(tolua_S,1,0);
  Object* obj = ((Object*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ConvertToNode'", NULL);
#endif
  {
   Node* tolua_ret = (Node*)  self->ConvertToNode(obj);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Node");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ConvertToNode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ConvertToActor of class  Creater */
#ifndef TOLUA_DISABLE_tolua_PX2_Creater_ConvertToActor00
static int tolua_PX2_Creater_ConvertToActor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Creater",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Object",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Creater* self = (Creater*)  tolua_tousertype(tolua_S,1,0);
  Object* obj = ((Object*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ConvertToActor'", NULL);
#endif
  {
   Actor* tolua_ret = (Actor*)  self->ConvertToActor(obj);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Actor");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ConvertToActor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ConvertToUIPicBox of class  Creater */
#ifndef TOLUA_DISABLE_tolua_PX2_Creater_ConvertToUIPicBox00
static int tolua_PX2_Creater_ConvertToUIPicBox00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Creater",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Object",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Creater* self = (Creater*)  tolua_tousertype(tolua_S,1,0);
  Object* obj = ((Object*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ConvertToUIPicBox'", NULL);
#endif
  {
   UIPicBox* tolua_ret = (UIPicBox*)  self->ConvertToUIPicBox(obj);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"UIPicBox");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ConvertToUIPicBox'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ConvertToUIFrame of class  Creater */
#ifndef TOLUA_DISABLE_tolua_PX2_Creater_ConvertToUIFrame00
static int tolua_PX2_Creater_ConvertToUIFrame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Creater",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Object",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Creater* self = (Creater*)  tolua_tousertype(tolua_S,1,0);
  Object* obj = ((Object*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ConvertToUIFrame'", NULL);
#endif
  {
   UIFrame* tolua_ret = (UIFrame*)  self->ConvertToUIFrame(obj);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"UIFrame");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ConvertToUIFrame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Scene */
#ifndef TOLUA_DISABLE_tolua_PX2_Scene_new00
static int tolua_PX2_Scene_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Scene",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Scene* tolua_ret = (Scene*)  Mtolua_new((Scene)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Scene");
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

/* method: new_local of class  Scene */
#ifndef TOLUA_DISABLE_tolua_PX2_Scene_new00_local
static int tolua_PX2_Scene_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Scene",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Scene* tolua_ret = (Scene*)  Mtolua_new((Scene)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Scene");
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

/* method: delete of class  Scene */
#ifndef TOLUA_DISABLE_tolua_PX2_Scene_delete00
static int tolua_PX2_Scene_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Scene",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Scene* self = (Scene*)  tolua_tousertype(tolua_S,1,0);
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

/* method: SetUseCameraActor of class  Scene */
#ifndef TOLUA_DISABLE_tolua_PX2_Scene_SetUseCameraActor00
static int tolua_PX2_Scene_SetUseCameraActor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Scene",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CameraActor",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Scene* self = (Scene*)  tolua_tousertype(tolua_S,1,0);
  CameraActor* cameraActor = ((CameraActor*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetUseCameraActor'", NULL);
#endif
  {
   self->SetUseCameraActor(cameraActor);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetUseCameraActor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetUseCameraActor of class  Scene */
#ifndef TOLUA_DISABLE_tolua_PX2_Scene_GetUseCameraActor00
static int tolua_PX2_Scene_GetUseCameraActor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Scene",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Scene* self = (Scene*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetUseCameraActor'", NULL);
#endif
  {
   CameraActor* tolua_ret = (CameraActor*)  self->GetUseCameraActor();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CameraActor");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetUseCameraActor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: AttachChild of class  Scene */
#ifndef TOLUA_DISABLE_tolua_PX2_Scene_AttachChild00
static int tolua_PX2_Scene_AttachChild00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Scene",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Movable",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Scene* self = (Scene*)  tolua_tousertype(tolua_S,1,0);
  Movable* child = ((Movable*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'AttachChild'", NULL);
#endif
  {
   int tolua_ret = (int)  self->AttachChild(child);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'AttachChild'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_PX2_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_cclass(tolua_S,"Object","Object","",NULL);
  tolua_beginmodule(tolua_S,"Object");
   tolua_function(tolua_S,"GetResourcePath",tolua_PX2_Object_GetResourcePath00);
   tolua_function(tolua_S,"SetName",tolua_PX2_Object_SetName00);
   tolua_function(tolua_S,"GetName",tolua_PX2_Object_GetName00);
   tolua_function(tolua_S,"GetObjectByName",tolua_PX2_Object_GetObjectByName00);
  tolua_endmodule(tolua_S);
  tolua_function(tolua_S,"GetTimeInMicroseconds",tolua_PX2_GetTimeInMicroseconds00);
  tolua_function(tolua_S,"GetTimeInSeconds",tolua_PX2_GetTimeInSeconds00);
  tolua_cclass(tolua_S,"Logger","Logger","",NULL);
  tolua_beginmodule(tolua_S,"Logger");
   tolua_function(tolua_S,"GetSingleton",tolua_PX2_Logger_GetSingleton00);
   tolua_function(tolua_S,"LogInfo",tolua_PX2_Logger_LogInfo00);
   tolua_function(tolua_S,"LogError",tolua_PX2_Logger_LogError00);
   tolua_function(tolua_S,"LogUser",tolua_PX2_Logger_LogUser00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"APoint","APoint","HPoint",tolua_collect_APoint);
  #else
  tolua_cclass(tolua_S,"APoint","APoint","HPoint",NULL);
  #endif
  tolua_beginmodule(tolua_S,"APoint");
   tolua_function(tolua_S,"new",tolua_PX2_APoint_new00);
   tolua_function(tolua_S,"new_local",tolua_PX2_APoint_new00_local);
   tolua_function(tolua_S,".call",tolua_PX2_APoint_new00_local);
   tolua_function(tolua_S,"new",tolua_PX2_APoint_new01);
   tolua_function(tolua_S,"new_local",tolua_PX2_APoint_new01_local);
   tolua_function(tolua_S,".call",tolua_PX2_APoint_new01_local);
   tolua_function(tolua_S,"new",tolua_PX2_APoint_new02);
   tolua_function(tolua_S,"new_local",tolua_PX2_APoint_new02_local);
   tolua_function(tolua_S,".call",tolua_PX2_APoint_new02_local);
   tolua_function(tolua_S,"delete",tolua_PX2_APoint_delete00);
   tolua_function(tolua_S,".sub",tolua_PX2_APoint__sub00);
   tolua_function(tolua_S,".add",tolua_PX2_APoint__add00);
   tolua_function(tolua_S,".sub",tolua_PX2_APoint__sub01);
   tolua_function(tolua_S,".add",tolua_PX2_APoint__add01);
   tolua_function(tolua_S,".mul",tolua_PX2_APoint__mul00);
   tolua_function(tolua_S,".div",tolua_PX2_APoint__div00);
   tolua_function(tolua_S,".sub",tolua_PX2_APoint__sub02);
   tolua_function(tolua_S,"Dot",tolua_PX2_APoint_Dot00);
   tolua_variable(tolua_S,"ORIGIN",tolua_get_APoint_ORIGIN,NULL);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"AVector","AVector","HPoint",tolua_collect_AVector);
  #else
  tolua_cclass(tolua_S,"AVector","AVector","HPoint",NULL);
  #endif
  tolua_beginmodule(tolua_S,"AVector");
   tolua_function(tolua_S,"new",tolua_PX2_AVector_new00);
   tolua_function(tolua_S,"new_local",tolua_PX2_AVector_new00_local);
   tolua_function(tolua_S,".call",tolua_PX2_AVector_new00_local);
   tolua_function(tolua_S,"new",tolua_PX2_AVector_new01);
   tolua_function(tolua_S,"new_local",tolua_PX2_AVector_new01_local);
   tolua_function(tolua_S,".call",tolua_PX2_AVector_new01_local);
   tolua_function(tolua_S,"new",tolua_PX2_AVector_new02);
   tolua_function(tolua_S,"new_local",tolua_PX2_AVector_new02_local);
   tolua_function(tolua_S,".call",tolua_PX2_AVector_new02_local);
   tolua_function(tolua_S,"new",tolua_PX2_AVector_new03);
   tolua_function(tolua_S,"new_local",tolua_PX2_AVector_new03_local);
   tolua_function(tolua_S,".call",tolua_PX2_AVector_new03_local);
   tolua_function(tolua_S,"new",tolua_PX2_AVector_new04);
   tolua_function(tolua_S,"new_local",tolua_PX2_AVector_new04_local);
   tolua_function(tolua_S,".call",tolua_PX2_AVector_new04_local);
   tolua_function(tolua_S,"delete",tolua_PX2_AVector_delete00);
   tolua_function(tolua_S,".add",tolua_PX2_AVector__add00);
   tolua_function(tolua_S,".sub",tolua_PX2_AVector__sub00);
   tolua_function(tolua_S,".mul",tolua_PX2_AVector__mul00);
   tolua_function(tolua_S,".div",tolua_PX2_AVector__div00);
   tolua_function(tolua_S,".sub",tolua_PX2_AVector__sub01);
   tolua_function(tolua_S,"Length",tolua_PX2_AVector_Length00);
   tolua_function(tolua_S,"SquaredLength",tolua_PX2_AVector_SquaredLength00);
   tolua_function(tolua_S,"Dot",tolua_PX2_AVector_Dot00);
   tolua_function(tolua_S,"Normalize",tolua_PX2_AVector_Normalize00);
   tolua_function(tolua_S,"Cross",tolua_PX2_AVector_Cross00);
   tolua_function(tolua_S,"UnitCross",tolua_PX2_AVector_UnitCross00);
   tolua_function(tolua_S,"Orthonormalize",tolua_PX2_AVector_Orthonormalize00);
   tolua_function(tolua_S,"Orthonormalize",tolua_PX2_AVector_Orthonormalize01);
   tolua_function(tolua_S,"GenerateOrthonormalBasis",tolua_PX2_AVector_GenerateOrthonormalBasis00);
   tolua_function(tolua_S,"GenerateComplementBasis",tolua_PX2_AVector_GenerateComplementBasis00);
   tolua_variable(tolua_S,"ZERO",tolua_get_AVector_ZERO,NULL);
   tolua_variable(tolua_S,"UNIT_X",tolua_get_AVector_UNIT_X,NULL);
   tolua_variable(tolua_S,"UNIT_Y",tolua_get_AVector_UNIT_Y,NULL);
   tolua_variable(tolua_S,"UNIT_Z",tolua_get_AVector_UNIT_Z,NULL);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"HPoint","HPoint","",tolua_collect_HPoint);
  #else
  tolua_cclass(tolua_S,"HPoint","HPoint","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"HPoint");
   tolua_function(tolua_S,"new",tolua_PX2_HPoint_new00);
   tolua_function(tolua_S,"new_local",tolua_PX2_HPoint_new00_local);
   tolua_function(tolua_S,".call",tolua_PX2_HPoint_new00_local);
   tolua_function(tolua_S,"new",tolua_PX2_HPoint_new01);
   tolua_function(tolua_S,"new_local",tolua_PX2_HPoint_new01_local);
   tolua_function(tolua_S,".call",tolua_PX2_HPoint_new01_local);
   tolua_function(tolua_S,"new",tolua_PX2_HPoint_new02);
   tolua_function(tolua_S,"new_local",tolua_PX2_HPoint_new02_local);
   tolua_function(tolua_S,".call",tolua_PX2_HPoint_new02_local);
   tolua_function(tolua_S,"delete",tolua_PX2_HPoint_delete00);
   tolua_function(tolua_S,".geti",tolua_PX2_HPoint__geti00);
   tolua_function(tolua_S,".seti",tolua_PX2_HPoint__seti00);
   tolua_function(tolua_S,".geti",tolua_PX2_HPoint__geti01);
   tolua_function(tolua_S,"X",tolua_PX2_HPoint_X00);
   tolua_function(tolua_S,"X",tolua_PX2_HPoint_X01);
   tolua_function(tolua_S,"Y",tolua_PX2_HPoint_Y00);
   tolua_function(tolua_S,"Y",tolua_PX2_HPoint_Y01);
   tolua_function(tolua_S,"Z",tolua_PX2_HPoint_Z00);
   tolua_function(tolua_S,"Z",tolua_PX2_HPoint_Z01);
   tolua_function(tolua_S,"W",tolua_PX2_HPoint_W00);
   tolua_function(tolua_S,"W",tolua_PX2_HPoint_W01);
   tolua_function(tolua_S,".eq",tolua_PX2_HPoint__eq00);
   tolua_function(tolua_S,".lt",tolua_PX2_HPoint__lt00);
   tolua_function(tolua_S,".le",tolua_PX2_HPoint__le00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"Transform","Transform","",tolua_collect_Transform);
  #else
  tolua_cclass(tolua_S,"Transform","Transform","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"Transform");
   tolua_function(tolua_S,"new",tolua_PX2_Transform_new00);
   tolua_function(tolua_S,"new_local",tolua_PX2_Transform_new00_local);
   tolua_function(tolua_S,".call",tolua_PX2_Transform_new00_local);
   tolua_function(tolua_S,"delete",tolua_PX2_Transform_delete00);
   tolua_function(tolua_S,"MakeIdentity",tolua_PX2_Transform_MakeIdentity00);
   tolua_function(tolua_S,"MakeUnitScale",tolua_PX2_Transform_MakeUnitScale00);
   tolua_function(tolua_S,"IsIdentity",tolua_PX2_Transform_IsIdentity00);
   tolua_function(tolua_S,"IsRSMatrix",tolua_PX2_Transform_IsRSMatrix00);
   tolua_function(tolua_S,"IsUniformScale",tolua_PX2_Transform_IsUniformScale00);
   tolua_function(tolua_S,"SetRotate",tolua_PX2_Transform_SetRotate00);
   tolua_function(tolua_S,"SetMatrix",tolua_PX2_Transform_SetMatrix00);
   tolua_function(tolua_S,"SetTranslate",tolua_PX2_Transform_SetTranslate00);
   tolua_function(tolua_S,"SetScale",tolua_PX2_Transform_SetScale00);
   tolua_function(tolua_S,"SetUniformScale",tolua_PX2_Transform_SetUniformScale00);
   tolua_function(tolua_S,"GetRotate",tolua_PX2_Transform_GetRotate00);
   tolua_function(tolua_S,"GetMatrix",tolua_PX2_Transform_GetMatrix00);
   tolua_function(tolua_S,"GetTranslate",tolua_PX2_Transform_GetTranslate00);
   tolua_function(tolua_S,"GetScale",tolua_PX2_Transform_GetScale00);
   tolua_function(tolua_S,"GetUniformScale",tolua_PX2_Transform_GetUniformScale00);
   tolua_function(tolua_S,"GetNorm",tolua_PX2_Transform_GetNorm00);
   tolua_function(tolua_S,".mul",tolua_PX2_Transform__mul00);
   tolua_function(tolua_S,".mul",tolua_PX2_Transform__mul01);
   tolua_function(tolua_S,".mul",tolua_PX2_Transform__mul02);
   tolua_function(tolua_S,"Matrix",tolua_PX2_Transform_Matrix00);
   tolua_function(tolua_S,"Inverse",tolua_PX2_Transform_Inverse00);
   tolua_function(tolua_S,"InverseTransform",tolua_PX2_Transform_InverseTransform00);
   tolua_variable(tolua_S,"IDENTITY",tolua_get_Transform_IDENTITY,NULL);
   tolua_function(tolua_S,"GetStreamingSize",tolua_PX2_Transform_GetStreamingSize00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"Controlledable","Controlledable","Object",tolua_collect_Controlledable);
  #else
  tolua_cclass(tolua_S,"Controlledable","Controlledable","Object",NULL);
  #endif
  tolua_beginmodule(tolua_S,"Controlledable");
   tolua_function(tolua_S,"delete",tolua_PX2_Controlledable_delete00);
   tolua_function(tolua_S,"GetNumControllers",tolua_PX2_Controlledable_GetNumControllers00);
   tolua_function(tolua_S,"GetController",tolua_PX2_Controlledable_GetController00);
   tolua_function(tolua_S,"AttachController",tolua_PX2_Controlledable_AttachController00);
   tolua_function(tolua_S,"DetachController",tolua_PX2_Controlledable_DetachController00);
   tolua_function(tolua_S,"DetachAllControllers",tolua_PX2_Controlledable_DetachAllControllers00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"Movable","Movable","Controlledable",tolua_collect_Movable);
  #else
  tolua_cclass(tolua_S,"Movable","Movable","Controlledable",NULL);
  #endif
  tolua_beginmodule(tolua_S,"Movable");
   tolua_function(tolua_S,"delete",tolua_PX2_Movable_delete00);
   tolua_variable(tolua_S,"LocalTransform",tolua_get_Movable_LocalTransform,tolua_set_Movable_LocalTransform);
   tolua_variable(tolua_S,"WorldTransform",tolua_get_Movable_WorldTransform,tolua_set_Movable_WorldTransform);
   tolua_variable(tolua_S,"WorldTransformIsCurrent",tolua_get_Movable_WorldTransformIsCurrent,tolua_set_Movable_WorldTransformIsCurrent);
   tolua_variable(tolua_S,"WorldBound",tolua_get_Movable_WorldBound,tolua_set_Movable_WorldBound);
   tolua_variable(tolua_S,"WorldBoundIsCurrent",tolua_get_Movable_WorldBoundIsCurrent,tolua_set_Movable_WorldBoundIsCurrent);
   tolua_constant(tolua_S,"CULL_DYNAMIC",Movable::CULL_DYNAMIC);
   tolua_constant(tolua_S,"CULL_ALWAYS",Movable::CULL_ALWAYS);
   tolua_constant(tolua_S,"CULL_NEVER",Movable::CULL_NEVER);
   tolua_variable(tolua_S,"Culling",tolua_get_Movable_Culling,tolua_set_Movable_Culling);
   tolua_function(tolua_S,"Show",tolua_PX2_Movable_Show00);
   tolua_function(tolua_S,"IsShow",tolua_PX2_Movable_IsShow00);
   tolua_function(tolua_S,"Update",tolua_PX2_Movable_Update00);
   tolua_function(tolua_S,"GetParent",tolua_PX2_Movable_GetParent00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"Renderable","Renderable","Movable",tolua_collect_Renderable);
  #else
  tolua_cclass(tolua_S,"Renderable","Renderable","Movable",NULL);
  #endif
  tolua_beginmodule(tolua_S,"Renderable");
   tolua_constant(tolua_S,"PT_NONE",Renderable::PT_NONE);
   tolua_constant(tolua_S,"PT_POLYPOINT",Renderable::PT_POLYPOINT);
   tolua_constant(tolua_S,"PT_POLYSEGMENTS_DISJOINT",Renderable::PT_POLYSEGMENTS_DISJOINT);
   tolua_constant(tolua_S,"PT_POLYSEGMENTS_CONTIGUOUS",Renderable::PT_POLYSEGMENTS_CONTIGUOUS);
   tolua_constant(tolua_S,"PT_TRIANGLES",Renderable::PT_TRIANGLES);
   tolua_constant(tolua_S,"PT_TRIMESH",Renderable::PT_TRIMESH);
   tolua_constant(tolua_S,"PT_TRISTRIP",Renderable::PT_TRISTRIP);
   tolua_constant(tolua_S,"PT_TRIFAN",Renderable::PT_TRIFAN);
   tolua_constant(tolua_S,"PT_MAX_QUANTITY",Renderable::PT_MAX_QUANTITY);
   tolua_function(tolua_S,"delete",tolua_PX2_Renderable_delete00);
   tolua_function(tolua_S,"GetPrimitiveType",tolua_PX2_Renderable_GetPrimitiveType00);
   tolua_function(tolua_S,"SetVertexFormat",tolua_PX2_Renderable_SetVertexFormat00);
   tolua_function(tolua_S,"GetVertexFormat",tolua_PX2_Renderable_GetVertexFormat00);
   tolua_function(tolua_S,"GetVertexFormat",tolua_PX2_Renderable_GetVertexFormat01);
   tolua_function(tolua_S,"SetVertexBuffer",tolua_PX2_Renderable_SetVertexBuffer00);
   tolua_function(tolua_S,"GetVertexBuffer",tolua_PX2_Renderable_GetVertexBuffer00);
   tolua_function(tolua_S,"GetVertexBuffer",tolua_PX2_Renderable_GetVertexBuffer01);
   tolua_function(tolua_S,"SetIndexBuffer",tolua_PX2_Renderable_SetIndexBuffer00);
   tolua_function(tolua_S,"GetIndexBuffer",tolua_PX2_Renderable_GetIndexBuffer00);
   tolua_function(tolua_S,"GetIndexBuffer",tolua_PX2_Renderable_GetIndexBuffer01);
   tolua_function(tolua_S,"GetModelBound",tolua_PX2_Renderable_GetModelBound00);
   tolua_function(tolua_S,"GetModelBound",tolua_PX2_Renderable_GetModelBound01);
   tolua_constant(tolua_S,"RU_UI",Renderable::RU_UI);
   tolua_constant(tolua_S,"RU_GENERAL",Renderable::RU_GENERAL);
   tolua_constant(tolua_S,"RU_REFLECT",Renderable::RU_REFLECT);
   tolua_constant(tolua_S,"RU_SHADOWMAP",Renderable::RU_SHADOWMAP);
   tolua_constant(tolua_S,"RU_QUANTITY",Renderable::RU_QUANTITY);
   tolua_function(tolua_S,"AddRenderUsage",tolua_PX2_Renderable_AddRenderUsage00);
   tolua_function(tolua_S,"RemoveRenderUsage",tolua_PX2_Renderable_RemoveRenderUsage00);
   tolua_function(tolua_S,"GetRenderUsage",tolua_PX2_Renderable_GetRenderUsage00);
   tolua_constant(tolua_S,"RL_BACKGROUND",Renderable::RL_BACKGROUND);
   tolua_constant(tolua_S,"RL_SKY",Renderable::RL_SKY);
   tolua_constant(tolua_S,"RL_TERRAIN",Renderable::RL_TERRAIN);
   tolua_constant(tolua_S,"RL_SCENE",Renderable::RL_SCENE);
   tolua_constant(tolua_S,"RL_UI",Renderable::RL_UI);
   tolua_function(tolua_S,"SetRenderLayer",tolua_PX2_Renderable_SetRenderLayer00);
   tolua_function(tolua_S,"GetSortIndex",tolua_PX2_Renderable_GetSortIndex00);
   tolua_function(tolua_S,"SetMaterialInstance",tolua_PX2_Renderable_SetMaterialInstance00);
   tolua_function(tolua_S,"GetMaterialInstance",tolua_PX2_Renderable_GetMaterialInstance00);
   tolua_function(tolua_S,"AddLight",tolua_PX2_Renderable_AddLight00);
   tolua_function(tolua_S,"RemoveLight",tolua_PX2_Renderable_RemoveLight00);
   tolua_function(tolua_S,"ClearLights",tolua_PX2_Renderable_ClearLights00);
   tolua_function(tolua_S,"GetNumLights",tolua_PX2_Renderable_GetNumLights00);
   tolua_function(tolua_S,"GetLight",tolua_PX2_Renderable_GetLight00);
   tolua_constant(tolua_S,"GU_MODEL_BOUND_ONLY",Renderable::GU_MODEL_BOUND_ONLY);
   tolua_constant(tolua_S,"GU_NORMALS",Renderable::GU_NORMALS);
   tolua_constant(tolua_S,"GU_USE_GEOMETRY",Renderable::GU_USE_GEOMETRY);
   tolua_constant(tolua_S,"GU_USE_TCOORD_CHANNEL",Renderable::GU_USE_TCOORD_CHANNEL);
   tolua_function(tolua_S,"UpdateModelSpace",tolua_PX2_Renderable_UpdateModelSpace00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"Triangles","Triangles","Renderable",tolua_collect_Triangles);
  #else
  tolua_cclass(tolua_S,"Triangles","Triangles","Renderable",NULL);
  #endif
  tolua_beginmodule(tolua_S,"Triangles");
   tolua_function(tolua_S,"delete",tolua_PX2_Triangles_delete00);
   tolua_function(tolua_S,"GetNumTriangles",tolua_PX2_Triangles_GetNumTriangles00);
   tolua_function(tolua_S,"GetTriangle",tolua_PX2_Triangles_GetTriangle00);
   tolua_function(tolua_S,"GetModelTriangle",tolua_PX2_Triangles_GetModelTriangle00);
   tolua_function(tolua_S,"GetWorldTriangle",tolua_PX2_Triangles_GetWorldTriangle00);
   tolua_function(tolua_S,"GetNumVertices",tolua_PX2_Triangles_GetNumVertices00);
   tolua_function(tolua_S,"GetWorldTransform",tolua_PX2_Triangles_GetWorldTransform00);
   tolua_function(tolua_S,"GetPosition",tolua_PX2_Triangles_GetPosition00);
   tolua_function(tolua_S,"UpdateModelSpace",tolua_PX2_Triangles_UpdateModelSpace00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"TriMesh","TriMesh","Triangles",tolua_collect_TriMesh);
  #else
  tolua_cclass(tolua_S,"TriMesh","TriMesh","Triangles",NULL);
  #endif
  tolua_beginmodule(tolua_S,"TriMesh");
   tolua_function(tolua_S,"new",tolua_PX2_TriMesh_new00);
   tolua_function(tolua_S,"new_local",tolua_PX2_TriMesh_new00_local);
   tolua_function(tolua_S,".call",tolua_PX2_TriMesh_new00_local);
   tolua_function(tolua_S,"delete",tolua_PX2_TriMesh_delete00);
   tolua_function(tolua_S,"GetNumTriangles",tolua_PX2_TriMesh_GetNumTriangles00);
   tolua_function(tolua_S,"GetTriangle",tolua_PX2_TriMesh_GetTriangle00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"Node","Node","Movable",NULL);
  tolua_beginmodule(tolua_S,"Node");
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"SwitchNode","SwitchNode","Node",tolua_collect_SwitchNode);
  #else
  tolua_cclass(tolua_S,"SwitchNode","SwitchNode","Node",NULL);
  #endif
  tolua_beginmodule(tolua_S,"SwitchNode");
   tolua_function(tolua_S,"new",tolua_PX2_SwitchNode_new00);
   tolua_function(tolua_S,"new_local",tolua_PX2_SwitchNode_new00_local);
   tolua_function(tolua_S,".call",tolua_PX2_SwitchNode_new00_local);
   tolua_function(tolua_S,"delete",tolua_PX2_SwitchNode_delete00);
   tolua_function(tolua_S,"Create",tolua_PX2_SwitchNode_Create00);
   tolua_constant(tolua_S,"SN_INVALID_CHILD",SwitchNode::SN_INVALID_CHILD);
   tolua_function(tolua_S,"SetActiveChild",tolua_PX2_SwitchNode_SetActiveChild00);
   tolua_function(tolua_S,"GetActiveChild",tolua_PX2_SwitchNode_GetActiveChild00);
   tolua_function(tolua_S,"DisableAllChildren",tolua_PX2_SwitchNode_DisableAllChildren00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"Camera","Camera","Object",tolua_collect_Camera);
  #else
  tolua_cclass(tolua_S,"Camera","Camera","Object",NULL);
  #endif
  tolua_beginmodule(tolua_S,"Camera");
   tolua_function(tolua_S,"new",tolua_PX2_Camera_new00);
   tolua_function(tolua_S,"new_local",tolua_PX2_Camera_new00_local);
   tolua_function(tolua_S,".call",tolua_PX2_Camera_new00_local);
   tolua_function(tolua_S,"delete",tolua_PX2_Camera_delete00);
   tolua_function(tolua_S,"SetFrame",tolua_PX2_Camera_SetFrame00);
   tolua_function(tolua_S,"SetPosition",tolua_PX2_Camera_SetPosition00);
   tolua_function(tolua_S,"SetAxes",tolua_PX2_Camera_SetAxes00);
   tolua_function(tolua_S,"GetPosition",tolua_PX2_Camera_GetPosition00);
   tolua_function(tolua_S,"GetDVector",tolua_PX2_Camera_GetDVector00);
   tolua_function(tolua_S,"GetUVector",tolua_PX2_Camera_GetUVector00);
   tolua_function(tolua_S,"GetRVector",tolua_PX2_Camera_GetRVector00);
   tolua_function(tolua_S,"GetViewMatrix",tolua_PX2_Camera_GetViewMatrix00);
   tolua_constant(tolua_S,"VF_DMIN",Camera::VF_DMIN);
   tolua_constant(tolua_S,"VF_DMAX",Camera::VF_DMAX);
   tolua_constant(tolua_S,"VF_UMIN",Camera::VF_UMIN);
   tolua_constant(tolua_S,"VF_UMAX",Camera::VF_UMAX);
   tolua_constant(tolua_S,"VF_RMIN",Camera::VF_RMIN);
   tolua_constant(tolua_S,"VF_RMAX",Camera::VF_RMAX);
   tolua_constant(tolua_S,"VF_QUANTITY",Camera::VF_QUANTITY);
   tolua_function(tolua_S,"IsPerspective",tolua_PX2_Camera_IsPerspective00);
   tolua_function(tolua_S,"SetFrustum",tolua_PX2_Camera_SetFrustum00);
   tolua_function(tolua_S,"SetFrustum",tolua_PX2_Camera_SetFrustum01);
   tolua_function(tolua_S,"SetFrustum",tolua_PX2_Camera_SetFrustum02);
   tolua_function(tolua_S,"GetFrustum",tolua_PX2_Camera_GetFrustum00);
   tolua_function(tolua_S,"GetFrustum",tolua_PX2_Camera_GetFrustum01);
   tolua_function(tolua_S,"GetFrustum",tolua_PX2_Camera_GetFrustum02);
   tolua_function(tolua_S,"GetDMin",tolua_PX2_Camera_GetDMin00);
   tolua_function(tolua_S,"GetDMax",tolua_PX2_Camera_GetDMax00);
   tolua_function(tolua_S,"GetUMin",tolua_PX2_Camera_GetUMin00);
   tolua_function(tolua_S,"GetUMax",tolua_PX2_Camera_GetUMax00);
   tolua_function(tolua_S,"GetRMin",tolua_PX2_Camera_GetRMin00);
   tolua_function(tolua_S,"GetRMax",tolua_PX2_Camera_GetRMax00);
   tolua_constant(tolua_S,"PM_DEPTH_ZERO_TO_ONE",Camera::PM_DEPTH_ZERO_TO_ONE);
   tolua_constant(tolua_S,"PM_DEPTH_MINUS_ONE_TO_ONE",Camera::PM_DEPTH_MINUS_ONE_TO_ONE);
   tolua_constant(tolua_S,"PM_DEPTH_QUANTITY",Camera::PM_DEPTH_QUANTITY);
   tolua_function(tolua_S,"GetDepthType",tolua_PX2_Camera_GetDepthType00);
   tolua_function(tolua_S,"GetProjectionMatrix",tolua_PX2_Camera_GetProjectionMatrix00);
   tolua_function(tolua_S,"GetProjectionViewMatrix",tolua_PX2_Camera_GetProjectionViewMatrix00);
   tolua_function(tolua_S,"SetPreViewMatrix",tolua_PX2_Camera_SetPreViewMatrix00);
   tolua_function(tolua_S,"GetPreViewMatrix",tolua_PX2_Camera_GetPreViewMatrix00);
   tolua_function(tolua_S,"PreViewIsIdentity",tolua_PX2_Camera_PreViewIsIdentity00);
   tolua_function(tolua_S,"SetPostProjectionMatrix",tolua_PX2_Camera_SetPostProjectionMatrix00);
   tolua_function(tolua_S,"GetPostProjectionMatrix",tolua_PX2_Camera_GetPostProjectionMatrix00);
   tolua_function(tolua_S,"PostProjectionIsIdentity",tolua_PX2_Camera_PostProjectionIsIdentity00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"Renderer","Renderer","",NULL);
  tolua_beginmodule(tolua_S,"Renderer");
   tolua_function(tolua_S,"Initialize",tolua_PX2_Renderer_Initialize00);
   tolua_function(tolua_S,"Terminate",tolua_PX2_Renderer_Terminate00);
   tolua_function(tolua_S,"SetDefaultRenderer",tolua_PX2_Renderer_SetDefaultRenderer00);
   tolua_function(tolua_S,"GetDefaultRenderer",tolua_PX2_Renderer_GetDefaultRenderer00);
   tolua_function(tolua_S,"GetWidth",tolua_PX2_Renderer_GetWidth00);
   tolua_function(tolua_S,"GetHeight",tolua_PX2_Renderer_GetHeight00);
   tolua_function(tolua_S,"GetColorFormat",tolua_PX2_Renderer_GetColorFormat00);
   tolua_function(tolua_S,"GetDepthStencilFormat",tolua_PX2_Renderer_GetDepthStencilFormat00);
   tolua_function(tolua_S,"GetNumMultisamples",tolua_PX2_Renderer_GetNumMultisamples00);
   tolua_function(tolua_S,"Bind",tolua_PX2_Renderer_Bind00);
   tolua_function(tolua_S,"BindAll",tolua_PX2_Renderer_BindAll00);
   tolua_function(tolua_S,"Unbind",tolua_PX2_Renderer_Unbind00);
   tolua_function(tolua_S,"UnbindAll",tolua_PX2_Renderer_UnbindAll00);
   tolua_function(tolua_S,"Enable",tolua_PX2_Renderer_Enable00);
   tolua_function(tolua_S,"Disable",tolua_PX2_Renderer_Disable00);
   tolua_function(tolua_S,"Bind",tolua_PX2_Renderer_Bind01);
   tolua_function(tolua_S,"BindAll",tolua_PX2_Renderer_BindAll01);
   tolua_function(tolua_S,"Unbind",tolua_PX2_Renderer_Unbind01);
   tolua_function(tolua_S,"UnbindAll",tolua_PX2_Renderer_UnbindAll01);
   tolua_function(tolua_S,"Enable",tolua_PX2_Renderer_Enable01);
   tolua_function(tolua_S,"Disable",tolua_PX2_Renderer_Disable01);
   tolua_function(tolua_S,"Lock",tolua_PX2_Renderer_Lock00);
   tolua_function(tolua_S,"Unlock",tolua_PX2_Renderer_Unlock00);
   tolua_function(tolua_S,"Update",tolua_PX2_Renderer_Update00);
   tolua_function(tolua_S,"UpdateAll",tolua_PX2_Renderer_UpdateAll00);
   tolua_function(tolua_S,"Bind",tolua_PX2_Renderer_Bind02);
   tolua_function(tolua_S,"BindAll",tolua_PX2_Renderer_BindAll02);
   tolua_function(tolua_S,"Unbind",tolua_PX2_Renderer_Unbind02);
   tolua_function(tolua_S,"UnbindAll",tolua_PX2_Renderer_UnbindAll02);
   tolua_function(tolua_S,"Enable",tolua_PX2_Renderer_Enable02);
   tolua_function(tolua_S,"Disable",tolua_PX2_Renderer_Disable02);
   tolua_function(tolua_S,"Lock",tolua_PX2_Renderer_Lock01);
   tolua_function(tolua_S,"Unlock",tolua_PX2_Renderer_Unlock01);
   tolua_function(tolua_S,"Update",tolua_PX2_Renderer_Update01);
   tolua_function(tolua_S,"UpdateAll",tolua_PX2_Renderer_UpdateAll01);
   tolua_function(tolua_S,"Bind",tolua_PX2_Renderer_Bind03);
   tolua_function(tolua_S,"BindAll",tolua_PX2_Renderer_BindAll03);
   tolua_function(tolua_S,"Unbind",tolua_PX2_Renderer_Unbind03);
   tolua_function(tolua_S,"UnbindAll",tolua_PX2_Renderer_UnbindAll03);
   tolua_function(tolua_S,"Enable",tolua_PX2_Renderer_Enable03);
   tolua_function(tolua_S,"Disable",tolua_PX2_Renderer_Disable03);
   tolua_function(tolua_S,"Lock",tolua_PX2_Renderer_Lock02);
   tolua_function(tolua_S,"Unlock",tolua_PX2_Renderer_Unlock02);
   tolua_function(tolua_S,"Update",tolua_PX2_Renderer_Update02);
   tolua_function(tolua_S,"UpdateAll",tolua_PX2_Renderer_UpdateAll02);
   tolua_function(tolua_S,"Bind",tolua_PX2_Renderer_Bind04);
   tolua_function(tolua_S,"BindAll",tolua_PX2_Renderer_BindAll04);
   tolua_function(tolua_S,"Unbind",tolua_PX2_Renderer_Unbind04);
   tolua_function(tolua_S,"UnbindAll",tolua_PX2_Renderer_UnbindAll04);
   tolua_function(tolua_S,"Enable",tolua_PX2_Renderer_Enable04);
   tolua_function(tolua_S,"Enable",tolua_PX2_Renderer_Enable05);
   tolua_function(tolua_S,"Disable",tolua_PX2_Renderer_Disable04);
   tolua_function(tolua_S,"Lock",tolua_PX2_Renderer_Lock03);
   tolua_function(tolua_S,"Unlock",tolua_PX2_Renderer_Unlock03);
   tolua_function(tolua_S,"Update",tolua_PX2_Renderer_Update03);
   tolua_function(tolua_S,"UpdateAll",tolua_PX2_Renderer_UpdateAll03);
   tolua_function(tolua_S,"Bind",tolua_PX2_Renderer_Bind05);
   tolua_function(tolua_S,"BindAll",tolua_PX2_Renderer_BindAll05);
   tolua_function(tolua_S,"Unbind",tolua_PX2_Renderer_Unbind05);
   tolua_function(tolua_S,"UnbindAll",tolua_PX2_Renderer_UnbindAll05);
   tolua_function(tolua_S,"Enable",tolua_PX2_Renderer_Enable06);
   tolua_function(tolua_S,"Disable",tolua_PX2_Renderer_Disable05);
   tolua_function(tolua_S,"Lock",tolua_PX2_Renderer_Lock04);
   tolua_function(tolua_S,"Unlock",tolua_PX2_Renderer_Unlock04);
   tolua_function(tolua_S,"Update",tolua_PX2_Renderer_Update04);
   tolua_function(tolua_S,"UpdateAll",tolua_PX2_Renderer_UpdateAll04);
   tolua_function(tolua_S,"Bind",tolua_PX2_Renderer_Bind06);
   tolua_function(tolua_S,"BindAll",tolua_PX2_Renderer_BindAll06);
   tolua_function(tolua_S,"Unbind",tolua_PX2_Renderer_Unbind06);
   tolua_function(tolua_S,"UnbindAll",tolua_PX2_Renderer_UnbindAll06);
   tolua_function(tolua_S,"Enable",tolua_PX2_Renderer_Enable07);
   tolua_function(tolua_S,"Disable",tolua_PX2_Renderer_Disable06);
   tolua_function(tolua_S,"Lock",tolua_PX2_Renderer_Lock05);
   tolua_function(tolua_S,"Unlock",tolua_PX2_Renderer_Unlock05);
   tolua_function(tolua_S,"Update",tolua_PX2_Renderer_Update05);
   tolua_function(tolua_S,"UpdateAll",tolua_PX2_Renderer_UpdateAll05);
   tolua_function(tolua_S,"Bind",tolua_PX2_Renderer_Bind07);
   tolua_function(tolua_S,"BindAll",tolua_PX2_Renderer_BindAll07);
   tolua_function(tolua_S,"Unbind",tolua_PX2_Renderer_Unbind07);
   tolua_function(tolua_S,"UnbindAll",tolua_PX2_Renderer_UnbindAll07);
   tolua_function(tolua_S,"Enable",tolua_PX2_Renderer_Enable08);
   tolua_function(tolua_S,"Disable",tolua_PX2_Renderer_Disable07);
   tolua_function(tolua_S,"ReadColor",tolua_PX2_Renderer_ReadColor00);
   tolua_function(tolua_S,"Bind",tolua_PX2_Renderer_Bind08);
   tolua_function(tolua_S,"BindAll",tolua_PX2_Renderer_BindAll08);
   tolua_function(tolua_S,"Unbind",tolua_PX2_Renderer_Unbind08);
   tolua_function(tolua_S,"UnbindAll",tolua_PX2_Renderer_UnbindAll08);
   tolua_function(tolua_S,"Enable",tolua_PX2_Renderer_Enable09);
   tolua_function(tolua_S,"Disable",tolua_PX2_Renderer_Disable08);
   tolua_function(tolua_S,"Bind",tolua_PX2_Renderer_Bind09);
   tolua_function(tolua_S,"BindAll",tolua_PX2_Renderer_BindAll09);
   tolua_function(tolua_S,"Unbind",tolua_PX2_Renderer_Unbind09);
   tolua_function(tolua_S,"UnbindAll",tolua_PX2_Renderer_UnbindAll09);
   tolua_function(tolua_S,"Enable",tolua_PX2_Renderer_Enable10);
   tolua_function(tolua_S,"Disable",tolua_PX2_Renderer_Disable09);
   tolua_function(tolua_S,"GetAlphaProperty",tolua_PX2_Renderer_GetAlphaProperty00);
   tolua_function(tolua_S,"GetCullProperty",tolua_PX2_Renderer_GetCullProperty00);
   tolua_function(tolua_S,"GetDepthProperty",tolua_PX2_Renderer_GetDepthProperty00);
   tolua_function(tolua_S,"GetOffsetProperty",tolua_PX2_Renderer_GetOffsetProperty00);
   tolua_function(tolua_S,"GetStencilProperty",tolua_PX2_Renderer_GetStencilProperty00);
   tolua_function(tolua_S,"GetWireProperty",tolua_PX2_Renderer_GetWireProperty00);
   tolua_function(tolua_S,"SetCamera",tolua_PX2_Renderer_SetCamera00);
   tolua_function(tolua_S,"GetCamera",tolua_PX2_Renderer_GetCamera00);
   tolua_function(tolua_S,"GetCamera",tolua_PX2_Renderer_GetCamera01);
   tolua_function(tolua_S,"GetViewMatrix",tolua_PX2_Renderer_GetViewMatrix00);
   tolua_function(tolua_S,"GetProjectionMatrix",tolua_PX2_Renderer_GetProjectionMatrix00);
   tolua_function(tolua_S,"GetPostProjectionMatrix",tolua_PX2_Renderer_GetPostProjectionMatrix00);
   tolua_function(tolua_S,"GetPickRay",tolua_PX2_Renderer_GetPickRay00);
   tolua_function(tolua_S,"PointWorldToViewPort",tolua_PX2_Renderer_PointWorldToViewPort00);
   tolua_function(tolua_S,"SetClearColor",tolua_PX2_Renderer_SetClearColor00);
   tolua_function(tolua_S,"GetClearColor",tolua_PX2_Renderer_GetClearColor00);
   tolua_function(tolua_S,"SetClearDepth",tolua_PX2_Renderer_SetClearDepth00);
   tolua_function(tolua_S,"GetClearDepth",tolua_PX2_Renderer_GetClearDepth00);
   tolua_function(tolua_S,"SetClearStencil",tolua_PX2_Renderer_SetClearStencil00);
   tolua_function(tolua_S,"GetClearStencil",tolua_PX2_Renderer_GetClearStencil00);
   tolua_function(tolua_S,"GetColorMask",tolua_PX2_Renderer_GetColorMask00);
   tolua_function(tolua_S,"SetOverrideAlphaProperty",tolua_PX2_Renderer_SetOverrideAlphaProperty00);
   tolua_function(tolua_S,"SetOverrideCullProperty",tolua_PX2_Renderer_SetOverrideCullProperty00);
   tolua_function(tolua_S,"SetOverrideDepthProperty",tolua_PX2_Renderer_SetOverrideDepthProperty00);
   tolua_function(tolua_S,"SetOverrideOffsetProperty",tolua_PX2_Renderer_SetOverrideOffsetProperty00);
   tolua_function(tolua_S,"SetOverrideStencilProperty",tolua_PX2_Renderer_SetOverrideStencilProperty00);
   tolua_function(tolua_S,"SetOverrideWireProperty",tolua_PX2_Renderer_SetOverrideWireProperty00);
   tolua_function(tolua_S,"GetOverrideAlphaProperty",tolua_PX2_Renderer_GetOverrideAlphaProperty00);
   tolua_function(tolua_S,"GetOverrideCullProperty",tolua_PX2_Renderer_GetOverrideCullProperty00);
   tolua_function(tolua_S,"GetOverrideDepthProperty",tolua_PX2_Renderer_GetOverrideDepthProperty00);
   tolua_function(tolua_S,"GetOverrideOffsetProperty",tolua_PX2_Renderer_GetOverrideOffsetProperty00);
   tolua_function(tolua_S,"GetOverrideStencilProperty",tolua_PX2_Renderer_GetOverrideStencilProperty00);
   tolua_function(tolua_S,"GetOverrideWireProperty",tolua_PX2_Renderer_GetOverrideWireProperty00);
   tolua_function(tolua_S,"SetReverseCullOrder",tolua_PX2_Renderer_SetReverseCullOrder00);
   tolua_function(tolua_S,"GetReverseCullOrder",tolua_PX2_Renderer_GetReverseCullOrder00);
   tolua_function(tolua_S,"Draw",tolua_PX2_Renderer_Draw00);
   tolua_function(tolua_S,"Draw",tolua_PX2_Renderer_Draw01);
   tolua_function(tolua_S,"Draw",tolua_PX2_Renderer_Draw02);
   tolua_function(tolua_S,"SetAlphaProperty",tolua_PX2_Renderer_SetAlphaProperty00);
   tolua_function(tolua_S,"SetCullProperty",tolua_PX2_Renderer_SetCullProperty00);
   tolua_function(tolua_S,"SetDepthProperty",tolua_PX2_Renderer_SetDepthProperty00);
   tolua_function(tolua_S,"SetOffsetProperty",tolua_PX2_Renderer_SetOffsetProperty00);
   tolua_function(tolua_S,"SetStencilProperty",tolua_PX2_Renderer_SetStencilProperty00);
   tolua_function(tolua_S,"SetWireProperty",tolua_PX2_Renderer_SetWireProperty00);
   tolua_function(tolua_S,"SetViewport",tolua_PX2_Renderer_SetViewport00);
   tolua_function(tolua_S,"GetViewport",tolua_PX2_Renderer_GetViewport00);
   tolua_function(tolua_S,"SetDepthRange",tolua_PX2_Renderer_SetDepthRange00);
   tolua_function(tolua_S,"GetDepthRange",tolua_PX2_Renderer_GetDepthRange00);
   tolua_function(tolua_S,"Resize",tolua_PX2_Renderer_Resize00);
   tolua_function(tolua_S,"ResizeWindow",tolua_PX2_Renderer_ResizeWindow00);
   tolua_function(tolua_S,"ClearColorBuffer",tolua_PX2_Renderer_ClearColorBuffer00);
   tolua_function(tolua_S,"ClearDepthBuffer",tolua_PX2_Renderer_ClearDepthBuffer00);
   tolua_function(tolua_S,"ClearStencilBuffer",tolua_PX2_Renderer_ClearStencilBuffer00);
   tolua_function(tolua_S,"ClearBuffers",tolua_PX2_Renderer_ClearBuffers00);
   tolua_function(tolua_S,"ClearColorBuffer",tolua_PX2_Renderer_ClearColorBuffer01);
   tolua_function(tolua_S,"ClearDepthBuffer",tolua_PX2_Renderer_ClearDepthBuffer01);
   tolua_function(tolua_S,"ClearStencilBuffer",tolua_PX2_Renderer_ClearStencilBuffer01);
   tolua_function(tolua_S,"ClearBuffers",tolua_PX2_Renderer_ClearBuffers01);
   tolua_function(tolua_S,"DisplayColorBuffer",tolua_PX2_Renderer_DisplayColorBuffer00);
   tolua_function(tolua_S,"SetColorMask",tolua_PX2_Renderer_SetColorMask00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"ScriptManager","ScriptManager","",NULL);
  tolua_beginmodule(tolua_S,"ScriptManager");
   tolua_function(tolua_S,"GetSingleton",tolua_PX2_ScriptManager_GetSingleton00);
   tolua_function(tolua_S,"CallString",tolua_PX2_ScriptManager_CallString00);
   tolua_function(tolua_S,"CallFile",tolua_PX2_ScriptManager_CallFile00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"ResourceManager","ResourceManager","",NULL);
  tolua_beginmodule(tolua_S,"ResourceManager");
   tolua_function(tolua_S,"GetSingleton",tolua_PX2_ResourceManager_GetSingleton00);
   tolua_constant(tolua_S,"LS_UNLOADED",ResourceManager::LS_UNLOADED);
   tolua_constant(tolua_S,"LS_LOADQUE",ResourceManager::LS_LOADQUE);
   tolua_constant(tolua_S,"LS_LOADING",ResourceManager::LS_LOADING);
   tolua_constant(tolua_S,"LS_LOADED",ResourceManager::LS_LOADED);
   tolua_constant(tolua_S,"LS_MAX_STATE",ResourceManager::LS_MAX_STATE);
   tolua_function(tolua_S,"Clear",tolua_PX2_ResourceManager_Clear00);
   tolua_function(tolua_S,"BlockLoad",tolua_PX2_ResourceManager_BlockLoad00);
   tolua_function(tolua_S,"BackgroundLoad",tolua_PX2_ResourceManager_BackgroundLoad00);
   tolua_function(tolua_S,"CheckRes",tolua_PX2_ResourceManager_CheckRes00);
   tolua_function(tolua_S,"GetResLoadState",tolua_PX2_ResourceManager_GetResLoadState00);
   tolua_function(tolua_S,"SetUseGarbageCollect",tolua_PX2_ResourceManager_SetUseGarbageCollect00);
   tolua_function(tolua_S,"IsUseGarbageCollect",tolua_PX2_ResourceManager_IsUseGarbageCollect00);
   tolua_function(tolua_S,"SetGarbageCollectTime",tolua_PX2_ResourceManager_SetGarbageCollectTime00);
   tolua_function(tolua_S,"GetGarbageCollectTime",tolua_PX2_ResourceManager_GetGarbageCollectTime00);
   tolua_function(tolua_S,"LoadBuffer",tolua_PX2_ResourceManager_LoadBuffer00);
   tolua_function(tolua_S,"AddTexPack",tolua_PX2_ResourceManager_AddTexPack00);
   tolua_function(tolua_S,"GetTexPack",tolua_PX2_ResourceManager_GetTexPack00);
   tolua_function(tolua_S,"GetTexPackElement",tolua_PX2_ResourceManager_GetTexPackElement00);
   tolua_function(tolua_S,"GetWriteablePath",tolua_PX2_ResourceManager_GetWriteablePath00);
   tolua_function(tolua_S,"GetResourcePath",tolua_PX2_ResourceManager_GetResourcePath00);
   tolua_function(tolua_S,"DDSKeepCompressed",tolua_PX2_ResourceManager_DDSKeepCompressed00);
   tolua_function(tolua_S,"IsDDSKeepCompressed",tolua_PX2_ResourceManager_IsDDSKeepCompressed00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"LanguageManager","LanguageManager","",NULL);
  tolua_beginmodule(tolua_S,"LanguageManager");
   tolua_function(tolua_S,"Load",tolua_PX2_LanguageManager_Load00);
   tolua_function(tolua_S,"Add",tolua_PX2_LanguageManager_Add00);
   tolua_function(tolua_S,"AddItem",tolua_PX2_LanguageManager_AddItem00);
   tolua_function(tolua_S,"AddItem1",tolua_PX2_LanguageManager_AddItem100);
   tolua_function(tolua_S,"SetLanguage",tolua_PX2_LanguageManager_SetLanguage00);
   tolua_function(tolua_S,"HasValue",tolua_PX2_LanguageManager_HasValue00);
   tolua_function(tolua_S,"GetValue",tolua_PX2_LanguageManager_GetValue00);
   tolua_function(tolua_S,"Clear",tolua_PX2_LanguageManager_Clear00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"Project","Project","",NULL);
  tolua_beginmodule(tolua_S,"Project");
   tolua_function(tolua_S,"Save",tolua_PX2_Project_Save00);
   tolua_function(tolua_S,"SaveConfig",tolua_PX2_Project_SaveConfig00);
   tolua_function(tolua_S,"Load",tolua_PX2_Project_Load00);
   tolua_function(tolua_S,"SetSize",tolua_PX2_Project_SetSize00);
   tolua_function(tolua_S,"SetSize",tolua_PX2_Project_SetSize01);
   tolua_function(tolua_S,"GetSize",tolua_PX2_Project_GetSize00);
   tolua_function(tolua_S,"GetWidth",tolua_PX2_Project_GetWidth00);
   tolua_function(tolua_S,"GetHeight",tolua_PX2_Project_GetHeight00);
   tolua_function(tolua_S,"SetBackgroundColor",tolua_PX2_Project_SetBackgroundColor00);
   tolua_function(tolua_S,"GetBackgroundColor",tolua_PX2_Project_GetBackgroundColor00);
   tolua_function(tolua_S,"SetScene",tolua_PX2_Project_SetScene00);
   tolua_function(tolua_S,"GetScene",tolua_PX2_Project_GetScene00);
   tolua_function(tolua_S,"GetSceneFilename",tolua_PX2_Project_GetSceneFilename00);
   tolua_function(tolua_S,"GetSceneRenderStep",tolua_PX2_Project_GetSceneRenderStep00);
   tolua_function(tolua_S,"SetUIFrame",tolua_PX2_Project_SetUIFrame00);
   tolua_function(tolua_S,"GetUIFrame",tolua_PX2_Project_GetUIFrame00);
   tolua_function(tolua_S,"GetUIFilename",tolua_PX2_Project_GetUIFilename00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"Selection","Selection","",NULL);
  tolua_beginmodule(tolua_S,"Selection");
   tolua_function(tolua_S,"AddObject",tolua_PX2_Selection_AddObject00);
   tolua_function(tolua_S,"RemoveObject",tolua_PX2_Selection_RemoveObject00);
   tolua_function(tolua_S,"GetObjectAt",tolua_PX2_Selection_GetObjectAt00);
   tolua_function(tolua_S,"GetNumObjects",tolua_PX2_Selection_GetNumObjects00);
   tolua_function(tolua_S,"IsObjectIn",tolua_PX2_Selection_IsObjectIn00);
   tolua_function(tolua_S,"Clear",tolua_PX2_Selection_Clear00);
   tolua_function(tolua_S,"GetFirstObject",tolua_PX2_Selection_GetFirstObject00);
   tolua_function(tolua_S,"Translate",tolua_PX2_Selection_Translate00);
   tolua_function(tolua_S,"TranslateTo",tolua_PX2_Selection_TranslateTo00);
   tolua_function(tolua_S,"AddRolate",tolua_PX2_Selection_AddRolate00);
   tolua_function(tolua_S,"AddScale",tolua_PX2_Selection_AddScale00);
   tolua_function(tolua_S,"GetCenter",tolua_PX2_Selection_GetCenter00);
   tolua_function(tolua_S,"GetRadius",tolua_PX2_Selection_GetRadius00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"Creater","Creater","",tolua_collect_Creater);
  #else
  tolua_cclass(tolua_S,"Creater","Creater","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"Creater");
   tolua_function(tolua_S,"new",tolua_PX2_Creater_new00);
   tolua_function(tolua_S,"new_local",tolua_PX2_Creater_new00_local);
   tolua_function(tolua_S,".call",tolua_PX2_Creater_new00_local);
   tolua_function(tolua_S,"delete",tolua_PX2_Creater_delete00);
   tolua_function(tolua_S,"CreateActor_Rectangle",tolua_PX2_Creater_CreateActor_Rectangle00);
   tolua_function(tolua_S,"CreateActor_Box",tolua_PX2_Creater_CreateActor_Box00);
   tolua_function(tolua_S,"CreateActor_Sphere",tolua_PX2_Creater_CreateActor_Sphere00);
   tolua_function(tolua_S,"CreateActor_Effect",tolua_PX2_Creater_CreateActor_Effect00);
   tolua_function(tolua_S,"CreateActor_Character",tolua_PX2_Creater_CreateActor_Character00);
   tolua_function(tolua_S,"CreateRectangle",tolua_PX2_Creater_CreateRectangle00);
   tolua_function(tolua_S,"CreateBox",tolua_PX2_Creater_CreateBox00);
   tolua_function(tolua_S,"CreateSphere",tolua_PX2_Creater_CreateSphere00);
   tolua_function(tolua_S,"CreateUIFrame",tolua_PX2_Creater_CreateUIFrame00);
   tolua_function(tolua_S,"CreateUIPicBox",tolua_PX2_Creater_CreateUIPicBox00);
   tolua_function(tolua_S,"CreateUIPicBox",tolua_PX2_Creater_CreateUIPicBox01);
   tolua_function(tolua_S,"CreateUIText",tolua_PX2_Creater_CreateUIText00);
   tolua_function(tolua_S,"CreateUIButton",tolua_PX2_Creater_CreateUIButton00);
   tolua_function(tolua_S,"CreateUICheckButton",tolua_PX2_Creater_CreateUICheckButton00);
   tolua_function(tolua_S,"CreateUIEditBox",tolua_PX2_Creater_CreateUIEditBox00);
   tolua_function(tolua_S,"CreateUIProgressBar",tolua_PX2_Creater_CreateUIProgressBar00);
   tolua_function(tolua_S,"CreateParticleEmitter",tolua_PX2_Creater_CreateParticleEmitter00);
   tolua_function(tolua_S,"CreateBillboard",tolua_PX2_Creater_CreateBillboard00);
   tolua_function(tolua_S,"CreateBeamEmitter",tolua_PX2_Creater_CreateBeamEmitter00);
   tolua_function(tolua_S,"CreateRibbonEmitter",tolua_PX2_Creater_CreateRibbonEmitter00);
   tolua_function(tolua_S,"CreateSoundable",tolua_PX2_Creater_CreateSoundable00);
   tolua_function(tolua_S,"AddObject",tolua_PX2_Creater_AddObject00);
   tolua_function(tolua_S,"RemoveObject",tolua_PX2_Creater_RemoveObject00);
   tolua_function(tolua_S,"ConvertToNode",tolua_PX2_Creater_ConvertToNode00);
   tolua_function(tolua_S,"ConvertToActor",tolua_PX2_Creater_ConvertToActor00);
   tolua_function(tolua_S,"ConvertToUIPicBox",tolua_PX2_Creater_ConvertToUIPicBox00);
   tolua_function(tolua_S,"ConvertToUIFrame",tolua_PX2_Creater_ConvertToUIFrame00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"Scene","Scene","Node",tolua_collect_Scene);
  #else
  tolua_cclass(tolua_S,"Scene","Scene","Node",NULL);
  #endif
  tolua_beginmodule(tolua_S,"Scene");
   tolua_function(tolua_S,"new",tolua_PX2_Scene_new00);
   tolua_function(tolua_S,"new_local",tolua_PX2_Scene_new00_local);
   tolua_function(tolua_S,".call",tolua_PX2_Scene_new00_local);
   tolua_function(tolua_S,"delete",tolua_PX2_Scene_delete00);
   tolua_function(tolua_S,"SetUseCameraActor",tolua_PX2_Scene_SetUseCameraActor00);
   tolua_function(tolua_S,"GetUseCameraActor",tolua_PX2_Scene_GetUseCameraActor00);
   tolua_function(tolua_S,"AttachChild",tolua_PX2_Scene_AttachChild00);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_PX2 (lua_State* tolua_S) {
 return tolua_PX2_open(tolua_S);
};
#endif

