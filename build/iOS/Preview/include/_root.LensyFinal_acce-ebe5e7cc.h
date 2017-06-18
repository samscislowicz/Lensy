// This file was generated based on /Users/Sam/Desktop/Lensy/LensyFinal/build/iOS/Preview/cache/ux11/LensyFinal.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.PropertyAccessor.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct LensyFinal_accessor_GetSettingsButton_Text;}

namespace g{

// internal sealed class LensyFinal_accessor_GetSettingsButton_Text :1
// {
::g::Uno::UX::PropertyAccessor_type* LensyFinal_accessor_GetSettingsButton_Text_typeof();
void LensyFinal_accessor_GetSettingsButton_Text__ctor_1_fn(LensyFinal_accessor_GetSettingsButton_Text* __this);
void LensyFinal_accessor_GetSettingsButton_Text__GetAsObject_fn(LensyFinal_accessor_GetSettingsButton_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval);
void LensyFinal_accessor_GetSettingsButton_Text__get_Name_fn(LensyFinal_accessor_GetSettingsButton_Text* __this, ::g::Uno::UX::Selector* __retval);
void LensyFinal_accessor_GetSettingsButton_Text__New1_fn(LensyFinal_accessor_GetSettingsButton_Text** __retval);
void LensyFinal_accessor_GetSettingsButton_Text__get_PropertyType_fn(LensyFinal_accessor_GetSettingsButton_Text* __this, uType** __retval);
void LensyFinal_accessor_GetSettingsButton_Text__SetAsObject_fn(LensyFinal_accessor_GetSettingsButton_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin);
void LensyFinal_accessor_GetSettingsButton_Text__get_SupportsOriginSetter_fn(LensyFinal_accessor_GetSettingsButton_Text* __this, bool* __retval);

struct LensyFinal_accessor_GetSettingsButton_Text : ::g::Uno::UX::PropertyAccessor
{
    static ::g::Uno::UX::Selector _name_;
    static ::g::Uno::UX::Selector& _name() { return LensyFinal_accessor_GetSettingsButton_Text_typeof()->Init(), _name_; }
    static uSStrong< ::g::Uno::UX::PropertyAccessor*> Singleton_;
    static uSStrong< ::g::Uno::UX::PropertyAccessor*>& Singleton() { return LensyFinal_accessor_GetSettingsButton_Text_typeof()->Init(), Singleton_; }

    void ctor_1();
    static LensyFinal_accessor_GetSettingsButton_Text* New1();
};
// }

} // ::g
