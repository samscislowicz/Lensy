// This file was generated based on /Users/Sam/Desktop/Lensy/LensyFinal/build/iOS/Preview/cache/ux11/Home.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.App.h>
#include <Fuse.IProperties.h>
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{struct Home;}

namespace g{

// public partial sealed class Home :2
// {
::g::Fuse::AppBase_type* Home_typeof();
void Home__ctor_4_fn(Home* __this);
void Home__InitializeUX_fn(Home* __this);
void Home__New2_fn(Home** __retval);

struct Home : ::g::Fuse::App
{
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return Home_typeof()->Init(), __g_static_nametable1_; }

    void ctor_4();
    void InitializeUX();
    static Home* New2();
};
// }

} // ::g
