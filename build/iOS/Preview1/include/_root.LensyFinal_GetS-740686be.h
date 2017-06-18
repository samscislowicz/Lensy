// This file was generated based on /Users/Sam/Desktop/Lensy/LensyFinal/build/iOS/Preview1/cache/ux11/LensyFinal.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct GetSettingsButton;}
namespace g{struct LensyFinal_GetSettingsButton_Text_Property;}

namespace g{

// internal sealed class LensyFinal_GetSettingsButton_Text_Property :20
// {
::g::Uno::UX::Property1_type* LensyFinal_GetSettingsButton_Text_Property_typeof();
void LensyFinal_GetSettingsButton_Text_Property__ctor_3_fn(LensyFinal_GetSettingsButton_Text_Property* __this, ::g::GetSettingsButton* obj, ::g::Uno::UX::Selector* name);
void LensyFinal_GetSettingsButton_Text_Property__Get1_fn(LensyFinal_GetSettingsButton_Text_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval);
void LensyFinal_GetSettingsButton_Text_Property__New1_fn(::g::GetSettingsButton* obj, ::g::Uno::UX::Selector* name, LensyFinal_GetSettingsButton_Text_Property** __retval);
void LensyFinal_GetSettingsButton_Text_Property__get_Object_fn(LensyFinal_GetSettingsButton_Text_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void LensyFinal_GetSettingsButton_Text_Property__Set1_fn(LensyFinal_GetSettingsButton_Text_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin);
void LensyFinal_GetSettingsButton_Text_Property__get_SupportsOriginSetter_fn(LensyFinal_GetSettingsButton_Text_Property* __this, bool* __retval);

struct LensyFinal_GetSettingsButton_Text_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::GetSettingsButton*> _obj;

    void ctor_3(::g::GetSettingsButton* obj, ::g::Uno::UX::Selector name);
    static LensyFinal_GetSettingsButton_Text_Property* New1(::g::GetSettingsButton* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
