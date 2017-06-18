// This file was generated based on /Users/Sam/Desktop/Lensy/LensyFinal/build/iOS/Preview1/cache/ux11/LensyV2.GeneratedClasses.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.LensyFinal_bundle.h>
#include <Fuse.Font.h>
#include <LensyV2.GeneratedClasses.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Resource.h>
static uString* STRINGS[8];

namespace g{
namespace LensyV2{

// public partial sealed class GeneratedClasses :4
// {
// static GeneratedClasses() :14
static void GeneratedClasses__cctor_4_fn(uType* __type)
{
    GeneratedClasses::SFUIText_Medium_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::LensyFinal_bundle::SFTextMediumc5f99c0e()));
    GeneratedClasses::SFUIDisplay_Bold_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::LensyFinal_bundle::SFDisplayBoldc3eba6ab()));
    GeneratedClasses::SFUIDisplay_Medium_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::LensyFinal_bundle::SFDisplayMedium67518e1b()));
    GeneratedClasses::Miciana_Regular_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::LensyFinal_bundle::Micianada1ec29b()));
    GeneratedClasses::SFUIText_Semibold_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::LensyFinal_bundle::SFTextSemibold33243a58()));
    GeneratedClasses::SFUIText_Regular_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::LensyFinal_bundle::SFTextRegularb74254fb()));
    GeneratedClasses::SFUIText_LightItalic_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::LensyFinal_bundle::SFTextLightItalicb87d567d()));
    GeneratedClasses::SFUIText_Light_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::LensyFinal_bundle::SFTextLight273da30f()));
    ::g::Uno::UX::Resource::SetGlobalKey(GeneratedClasses::SFUIText_Medium_, ::STRINGS[0/*"SFUIText_Me...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(GeneratedClasses::SFUIDisplay_Bold_, ::STRINGS[1/*"SFUIDisplay...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(GeneratedClasses::SFUIDisplay_Medium_, ::STRINGS[2/*"SFUIDisplay...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(GeneratedClasses::Miciana_Regular_, ::STRINGS[3/*"Miciana_Reg...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(GeneratedClasses::SFUIText_Semibold_, ::STRINGS[4/*"SFUIText_Se...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(GeneratedClasses::SFUIText_Regular_, ::STRINGS[5/*"SFUIText_Re...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(GeneratedClasses::SFUIText_LightItalic_, ::STRINGS[6/*"SFUIText_Li...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(GeneratedClasses::SFUIText_Light_, ::STRINGS[7/*"SFUIText_Li...*/]);
}

static void GeneratedClasses_build(uType* type)
{
    ::STRINGS[0] = uString::Const("SFUIText_Medium");
    ::STRINGS[1] = uString::Const("SFUIDisplay_Bold");
    ::STRINGS[2] = uString::Const("SFUIDisplay_Medium");
    ::STRINGS[3] = uString::Const("Miciana_Regular");
    ::STRINGS[4] = uString::Const("SFUIText_Semibold");
    ::STRINGS[5] = uString::Const("SFUIText_Regular");
    ::STRINGS[6] = uString::Const("SFUIText_LightItalic");
    ::STRINGS[7] = uString::Const("SFUIText_Light");
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15));
    type->SetFields(105,
        ::g::Fuse::Font_typeof(), (uintptr_t)&::g::LensyV2::GeneratedClasses::Miciana_Regular_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&::g::LensyV2::GeneratedClasses::SFUIDisplay_Bold_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&::g::LensyV2::GeneratedClasses::SFUIDisplay_Medium_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&::g::LensyV2::GeneratedClasses::SFUIText_Light_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&::g::LensyV2::GeneratedClasses::SFUIText_LightItalic_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&::g::LensyV2::GeneratedClasses::SFUIText_Medium_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&::g::LensyV2::GeneratedClasses::SFUIText_Regular_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&::g::LensyV2::GeneratedClasses::SFUIText_Semibold_, uFieldFlagsStatic);
    type->Reflection.SetFields(8,
        new uField("Miciana_Regular", 105),
        new uField("SFUIDisplay_Bold", 106),
        new uField("SFUIDisplay_Medium", 107),
        new uField("SFUIText_Light", 108),
        new uField("SFUIText_LightItalic", 109),
        new uField("SFUIText_Medium", 110),
        new uField("SFUIText_Regular", 111),
        new uField("SFUIText_Semibold", 112));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)GeneratedClasses__New4_fn, 0, true, type, 0));
}

::g::Fuse::Controls::Panel_type* GeneratedClasses_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Panel_typeof();
    options.FieldCount = 113;
    options.InterfaceCount = 16;
    options.ObjectSize = sizeof(GeneratedClasses);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("LensyV2.GeneratedClasses", options);
    type->fp_build_ = GeneratedClasses_build;
    type->fp_ctor_ = (void*)GeneratedClasses__New4_fn;
    type->fp_cctor_ = GeneratedClasses__cctor_4_fn;
    type->interface15.fp_Draw = (void(*)(uObject*, ::g::Fuse::Drawing::Surface*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableDraw_fn;
    type->interface10.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface12.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface11.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface14.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface13.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface13.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualPosition_fn;
    type->interface13.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface13.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface8.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface8.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface6.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface9.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface8.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface6.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface6.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface7.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Control__OnPropertyChanged2_fn;
    type->interface8.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface8.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public GeneratedClasses() :34
void GeneratedClasses__ctor_7_fn(GeneratedClasses* __this)
{
    __this->ctor_7();
}

// private void InitializeUX() :38
void GeneratedClasses__InitializeUX_fn(GeneratedClasses* __this)
{
    __this->InitializeUX();
}

// public GeneratedClasses New() :34
void GeneratedClasses__New4_fn(GeneratedClasses** __retval)
{
    *__retval = GeneratedClasses::New4();
}

uSStrong< ::g::Fuse::Font*> GeneratedClasses::Miciana_Regular_;
uSStrong< ::g::Fuse::Font*> GeneratedClasses::SFUIDisplay_Bold_;
uSStrong< ::g::Fuse::Font*> GeneratedClasses::SFUIDisplay_Medium_;
uSStrong< ::g::Fuse::Font*> GeneratedClasses::SFUIText_Light_;
uSStrong< ::g::Fuse::Font*> GeneratedClasses::SFUIText_LightItalic_;
uSStrong< ::g::Fuse::Font*> GeneratedClasses::SFUIText_Medium_;
uSStrong< ::g::Fuse::Font*> GeneratedClasses::SFUIText_Regular_;
uSStrong< ::g::Fuse::Font*> GeneratedClasses::SFUIText_Semibold_;

// public GeneratedClasses() [instance] :34
void GeneratedClasses::ctor_7()
{
    ctor_6();
    InitializeUX();
}

// private void InitializeUX() [instance] :38
void GeneratedClasses::InitializeUX()
{
}

// public GeneratedClasses New() [static] :34
GeneratedClasses* GeneratedClasses::New4()
{
    GeneratedClasses* obj1 = (GeneratedClasses*)uNew(GeneratedClasses_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

}} // ::g::LensyV2
