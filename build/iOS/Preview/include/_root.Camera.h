// This file was generated based on /Users/Sam/Desktop/Lensy/LensyFinal/build/iOS/Preview/cache/ux11/Camera.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.App.h>
#include <Fuse.IProperties.h>
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{struct Camera;}

namespace g{

// public partial sealed class Camera :2
// {
::g::Fuse::AppBase_type* Camera_typeof();
void Camera__ctor_4_fn(Camera* __this);
void Camera__InitializeUX_fn(Camera* __this);
void Camera__New2_fn(Camera** __retval);

struct Camera : ::g::Fuse::App
{
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return Camera_typeof()->Init(), __g_static_nametable1_; }

    void ctor_4();
    void InitializeUX();
    static Camera* New2();
};
// }

} // ::g
