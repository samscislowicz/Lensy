// This file was generated based on /Users/Sam/Desktop/Lensy/LensyFinal/build/iOS/Preview/cache/ux11/LensyFinal.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.GetSettingsButton.h>
#include <_root.LensyFinal_acce-ebe5e7cc.h>
#include <Uno.Bool.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[1];
static uType* TYPES[3];

namespace g{

// internal sealed class LensyFinal_accessor_GetSettingsButton_Text :1
// {
// static LensyFinal_accessor_GetSettingsButton_Text() :1
static void LensyFinal_accessor_GetSettingsButton_Text__cctor__fn(uType* __type)
{
    LensyFinal_accessor_GetSettingsButton_Text::Singleton_ = LensyFinal_accessor_GetSettingsButton_Text::New1();
    LensyFinal_accessor_GetSettingsButton_Text::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Text"*/]);
}

static void LensyFinal_accessor_GetSettingsButton_Text_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Text");
    ::TYPES[0] = ::g::GetSettingsButton_typeof();
    ::TYPES[1] = ::g::Uno::String_typeof();
    ::TYPES[2] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::LensyFinal_accessor_GetSettingsButton_Text::_name_, uFieldFlagsStatic,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&::g::LensyFinal_accessor_GetSettingsButton_Text::Singleton_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* LensyFinal_accessor_GetSettingsButton_Text_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(LensyFinal_accessor_GetSettingsButton_Text);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("LensyFinal_accessor_GetSettingsButton_Text", options);
    type->fp_build_ = LensyFinal_accessor_GetSettingsButton_Text_build;
    type->fp_ctor_ = (void*)LensyFinal_accessor_GetSettingsButton_Text__New1_fn;
    type->fp_cctor_ = LensyFinal_accessor_GetSettingsButton_Text__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))LensyFinal_accessor_GetSettingsButton_Text__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))LensyFinal_accessor_GetSettingsButton_Text__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))LensyFinal_accessor_GetSettingsButton_Text__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))LensyFinal_accessor_GetSettingsButton_Text__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))LensyFinal_accessor_GetSettingsButton_Text__get_SupportsOriginSetter_fn;
    return type;
}

// public generated LensyFinal_accessor_GetSettingsButton_Text() :1
void LensyFinal_accessor_GetSettingsButton_Text__ctor_1_fn(LensyFinal_accessor_GetSettingsButton_Text* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :7
void LensyFinal_accessor_GetSettingsButton_Text__GetAsObject_fn(LensyFinal_accessor_GetSettingsButton_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    uStackFrame __("LensyFinal_accessor_GetSettingsButton_Text", "GetAsObject(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::GetSettingsButton*>(obj, ::TYPES[0/*GetSettingsButton*/]))->Text(), void();
}

// public override sealed Uno.UX.Selector get_Name() :4
void LensyFinal_accessor_GetSettingsButton_Text__get_Name_fn(LensyFinal_accessor_GetSettingsButton_Text* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = LensyFinal_accessor_GetSettingsButton_Text::_name(), void();
}

// public generated LensyFinal_accessor_GetSettingsButton_Text New() :1
void LensyFinal_accessor_GetSettingsButton_Text__New1_fn(LensyFinal_accessor_GetSettingsButton_Text** __retval)
{
    *__retval = LensyFinal_accessor_GetSettingsButton_Text::New1();
}

// public override sealed Uno.Type get_PropertyType() :6
void LensyFinal_accessor_GetSettingsButton_Text__get_PropertyType_fn(LensyFinal_accessor_GetSettingsButton_Text* __this, uType** __retval)
{
    return *__retval = ::TYPES[1/*string*/], void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :8
void LensyFinal_accessor_GetSettingsButton_Text__SetAsObject_fn(LensyFinal_accessor_GetSettingsButton_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uStackFrame __("LensyFinal_accessor_GetSettingsButton_Text", "SetAsObject(Uno.UX.PropertyObject,object,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::GetSettingsButton*>(obj, ::TYPES[0/*GetSettingsButton*/]))->SetText(uCast<uString*>(v, ::TYPES[1/*string*/]), origin);
}

// public override sealed bool get_SupportsOriginSetter() :9
void LensyFinal_accessor_GetSettingsButton_Text__get_SupportsOriginSetter_fn(LensyFinal_accessor_GetSettingsButton_Text* __this, bool* __retval)
{
    return *__retval = true, void();
}

::g::Uno::UX::Selector LensyFinal_accessor_GetSettingsButton_Text::_name_;
uSStrong< ::g::Uno::UX::PropertyAccessor*> LensyFinal_accessor_GetSettingsButton_Text::Singleton_;

// public generated LensyFinal_accessor_GetSettingsButton_Text() [instance] :1
void LensyFinal_accessor_GetSettingsButton_Text::ctor_1()
{
    ctor_();
}

// public generated LensyFinal_accessor_GetSettingsButton_Text New() [static] :1
LensyFinal_accessor_GetSettingsButton_Text* LensyFinal_accessor_GetSettingsButton_Text::New1()
{
    LensyFinal_accessor_GetSettingsButton_Text* obj1 = (LensyFinal_accessor_GetSettingsButton_Text*)uNew(LensyFinal_accessor_GetSettingsButton_Text_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

} // ::g
