// This file was generated based on /Users/Sam/Desktop/Lensy/LensyFinal/build/iOS/Preview1/cache/ux11/LensyV2.GeneratedClasses.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions-ea70af1f.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{struct Font;}}
namespace g{namespace LensyV2{struct GeneratedClasses;}}

namespace g{
namespace LensyV2{

// public partial sealed class GeneratedClasses :4
// {
::g::Fuse::Controls::Panel_type* GeneratedClasses_typeof();
void GeneratedClasses__ctor_7_fn(GeneratedClasses* __this);
void GeneratedClasses__InitializeUX_fn(GeneratedClasses* __this);
void GeneratedClasses__New4_fn(GeneratedClasses** __retval);

struct GeneratedClasses : ::g::Fuse::Controls::Panel
{
    static uSStrong< ::g::Fuse::Font*> Miciana_Regular_;
    static uSStrong< ::g::Fuse::Font*>& Miciana_Regular() { return GeneratedClasses_typeof()->Init(), Miciana_Regular_; }
    static uSStrong< ::g::Fuse::Font*> SFUIDisplay_Bold_;
    static uSStrong< ::g::Fuse::Font*>& SFUIDisplay_Bold() { return GeneratedClasses_typeof()->Init(), SFUIDisplay_Bold_; }
    static uSStrong< ::g::Fuse::Font*> SFUIDisplay_Medium_;
    static uSStrong< ::g::Fuse::Font*>& SFUIDisplay_Medium() { return GeneratedClasses_typeof()->Init(), SFUIDisplay_Medium_; }
    static uSStrong< ::g::Fuse::Font*> SFUIText_Light_;
    static uSStrong< ::g::Fuse::Font*>& SFUIText_Light() { return GeneratedClasses_typeof()->Init(), SFUIText_Light_; }
    static uSStrong< ::g::Fuse::Font*> SFUIText_LightItalic_;
    static uSStrong< ::g::Fuse::Font*>& SFUIText_LightItalic() { return GeneratedClasses_typeof()->Init(), SFUIText_LightItalic_; }
    static uSStrong< ::g::Fuse::Font*> SFUIText_Medium_;
    static uSStrong< ::g::Fuse::Font*>& SFUIText_Medium() { return GeneratedClasses_typeof()->Init(), SFUIText_Medium_; }
    static uSStrong< ::g::Fuse::Font*> SFUIText_Regular_;
    static uSStrong< ::g::Fuse::Font*>& SFUIText_Regular() { return GeneratedClasses_typeof()->Init(), SFUIText_Regular_; }
    static uSStrong< ::g::Fuse::Font*> SFUIText_Semibold_;
    static uSStrong< ::g::Fuse::Font*>& SFUIText_Semibold() { return GeneratedClasses_typeof()->Init(), SFUIText_Semibold_; }

    void ctor_7();
    void InitializeUX();
    static GeneratedClasses* New4();
};
// }

}} // ::g::LensyV2
