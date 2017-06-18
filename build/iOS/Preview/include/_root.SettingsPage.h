// This file was generated based on /Users/Sam/Desktop/Lensy/LensyFinal/build/iOS/Preview/cache/ux11/SettingsPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Page.h>
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
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{struct SettingsPage;}

namespace g{

// public partial sealed class SettingsPage :2
// {
::g::Fuse::Controls::Panel_type* SettingsPage_typeof();
void SettingsPage__ctor_8_fn(SettingsPage* __this, ::g::Fuse::Navigation::Router* router1);
void SettingsPage__InitializeUX_fn(SettingsPage* __this);
void SettingsPage__New5_fn(::g::Fuse::Navigation::Router* router1, SettingsPage** __retval);

struct SettingsPage : ::g::Fuse::Controls::Page
{
    uStrong< ::g::Fuse::Navigation::Router*> router;

    void ctor_8(::g::Fuse::Navigation::Router* router1);
    void InitializeUX();
    static SettingsPage* New5(::g::Fuse::Navigation::Router* router1);
};
// }

} // ::g
