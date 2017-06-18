// This file was generated based on /Users/Sam/Desktop/Lensy/LensyFinal/build/iOS/Preview1/cache/ux11/LensyFinal.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.GetSettingsButton.h>
#include <_root.LensyFinal_GetS-740686be.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class LensyFinal_GetSettingsButton_Text_Property :20
// {
static void LensyFinal_GetSettingsButton_Text_Property_build(uType* type)
{
    ::TYPES[0] = ::g::GetSettingsButton_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*GetSettingsButton*/], offsetof(::g::LensyFinal_GetSettingsButton_Text_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* LensyFinal_GetSettingsButton_Text_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(LensyFinal_GetSettingsButton_Text_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("LensyFinal_GetSettingsButton_Text_Property", options);
    type->fp_build_ = LensyFinal_GetSettingsButton_Text_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))LensyFinal_GetSettingsButton_Text_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))LensyFinal_GetSettingsButton_Text_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))LensyFinal_GetSettingsButton_Text_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))LensyFinal_GetSettingsButton_Text_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public LensyFinal_GetSettingsButton_Text_Property(GetSettingsButton obj, Uno.UX.Selector name) :23
void LensyFinal_GetSettingsButton_Text_Property__ctor_3_fn(LensyFinal_GetSettingsButton_Text_Property* __this, ::g::GetSettingsButton* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed string Get(Uno.UX.PropertyObject obj) :25
void LensyFinal_GetSettingsButton_Text_Property__Get1_fn(LensyFinal_GetSettingsButton_Text_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    uStackFrame __("LensyFinal_GetSettingsButton_Text_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::GetSettingsButton*>(obj, ::TYPES[0/*GetSettingsButton*/]))->Text(), void();
}

// public LensyFinal_GetSettingsButton_Text_Property New(GetSettingsButton obj, Uno.UX.Selector name) :23
void LensyFinal_GetSettingsButton_Text_Property__New1_fn(::g::GetSettingsButton* obj, ::g::Uno::UX::Selector* name, LensyFinal_GetSettingsButton_Text_Property** __retval)
{
    *__retval = LensyFinal_GetSettingsButton_Text_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :24
void LensyFinal_GetSettingsButton_Text_Property__get_Object_fn(LensyFinal_GetSettingsButton_Text_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string v, Uno.UX.IPropertyListener origin) :26
void LensyFinal_GetSettingsButton_Text_Property__Set1_fn(LensyFinal_GetSettingsButton_Text_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin)
{
    uStackFrame __("LensyFinal_GetSettingsButton_Text_Property", "Set(Uno.UX.PropertyObject,string,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::GetSettingsButton*>(obj, ::TYPES[0/*GetSettingsButton*/]))->SetText(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :27
void LensyFinal_GetSettingsButton_Text_Property__get_SupportsOriginSetter_fn(LensyFinal_GetSettingsButton_Text_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public LensyFinal_GetSettingsButton_Text_Property(GetSettingsButton obj, Uno.UX.Selector name) [instance] :23
void LensyFinal_GetSettingsButton_Text_Property::ctor_3(::g::GetSettingsButton* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public LensyFinal_GetSettingsButton_Text_Property New(GetSettingsButton obj, Uno.UX.Selector name) [static] :23
LensyFinal_GetSettingsButton_Text_Property* LensyFinal_GetSettingsButton_Text_Property::New1(::g::GetSettingsButton* obj, ::g::Uno::UX::Selector name)
{
    LensyFinal_GetSettingsButton_Text_Property* obj1 = (LensyFinal_GetSettingsButton_Text_Property*)uNew(LensyFinal_GetSettingsButton_Text_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
