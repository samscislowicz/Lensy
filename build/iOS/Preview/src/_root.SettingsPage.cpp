// This file was generated based on /Users/Sam/Desktop/Lensy/LensyFinal/build/iOS/Preview/cache/ux11/SettingsPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.SettingsPage.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.HitTestMode.h>
#include <Fuse.Font.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Visual.h>
#include <LensyV2.Background.h>
#include <LensyV2.GeneratedClasses.h>
#include <LensyV2.iPhone_7_Copy.Line.h>
#include <LensyV2.iPhone_7_Copy.Line_0.h>
#include <LensyV2.iPhone_7_Copy.Line_1.h>
#include <LensyV2.iPhone_7_Copy-3663747.h>
#include <LensyV2.iPhone_7_Copy-6f22a2ae.h>
#include <LensyV2.iPhone_7_Copy-a695b5b1.h>
#include <LensyV2.iPhone_7_Copy-a695b5b2.h>
#include <LensyV2.iPhone_7_Copy-a695b5b4.h>
#include <LensyV2.iPhone_7_Copy-ac8771a9.h>
#include <LensyV2.iPhone_7_Copy-c0350d11.h>
#include <LensyV2.iPhone_7_Copy-d6d2a06f.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.String.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[11];
static uType* TYPES[1];

namespace g{

// public partial sealed class SettingsPage :2
// {
// static SettingsPage() :5
static void SettingsPage__cctor_4_fn(uType* __type)
{
}

static void SettingsPage_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Try these settings:");
    ::STRINGS[1] = uString::Const("1/100");
    ::STRINGS[2] = uString::Const("f/12");
    ::STRINGS[3] = uString::Const("100 - 200");
    ::STRINGS[4] = uString::Const("!");
    ::STRINGS[5] = uString::Const("Open the Lensy app on your Apple Watch to see these settings conviently on your wrist while shooting!");
    ::STRINGS[6] = uString::Const("Shutter\n"
        "Speed");
    ::STRINGS[7] = uString::Const("F-STOP");
    ::STRINGS[8] = uString::Const("ISO");
    ::STRINGS[9] = uString::Const("Home");
    ::STRINGS[10] = uString::Const("New Settings");
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15));
    type->SetFields(111,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(::g::SettingsPage, router), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)SettingsPage__New5_fn, 0, true, type, 1, ::g::Fuse::Navigation::Router_typeof()));
}

::g::Fuse::Controls::Panel_type* SettingsPage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 112;
    options.InterfaceCount = 16;
    options.ObjectSize = sizeof(SettingsPage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("SettingsPage", options);
    type->fp_build_ = SettingsPage_build;
    type->fp_cctor_ = SettingsPage__cctor_4_fn;
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

// public SettingsPage(Fuse.Navigation.Router router) :9
void SettingsPage__ctor_8_fn(SettingsPage* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX() :15
void SettingsPage__InitializeUX_fn(SettingsPage* __this)
{
    __this->InitializeUX();
}

// public SettingsPage New(Fuse.Navigation.Router router) :9
void SettingsPage__New5_fn(::g::Fuse::Navigation::Router* router1, SettingsPage** __retval)
{
    *__retval = SettingsPage::New5(router1);
}

// public SettingsPage(Fuse.Navigation.Router router) [instance] :9
void SettingsPage::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    uStackFrame __("SettingsPage", ".ctor(Fuse.Navigation.Router)");
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :15
void SettingsPage::InitializeUX()
{
    uStackFrame __("SettingsPage", "InitializeUX()");
    ::g::LensyV2::Background* temp = ::g::LensyV2::Background::New4();
    ::g::Fuse::Controls::Page* temp1 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::Text* temp2 = ::g::Fuse::Controls::Text::New3();
    ::g::LensyV2::iPhone_7_Copy::Aperture_Ring* temp3 = ::g::LensyV2::iPhone_7_Copy::Aperture_Ring::New4();
    ::g::Fuse::Controls::Text* temp4 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp5 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp6 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Panel* temp7 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp8 = ::g::Fuse::Controls::Text::New3();
    ::g::LensyV2::iPhone_7_Copy::Warning_Symbol::Oval* temp9 = ::g::LensyV2::iPhone_7_Copy::Warning_Symbol::Oval::New4();
    ::g::Fuse::Controls::Text* temp10 = ::g::Fuse::Controls::Text::New3();
    ::g::LensyV2::iPhone_7_Copy::Line_Copy_5* temp11 = ::g::LensyV2::iPhone_7_Copy::Line_Copy_5::New4();
    ::g::LensyV2::iPhone_7_Copy::Line* temp12 = ::g::LensyV2::iPhone_7_Copy::Line::New4();
    ::g::LensyV2::iPhone_7_Copy::Line_Copy_4* temp13 = ::g::LensyV2::iPhone_7_Copy::Line_Copy_4::New4();
    ::g::LensyV2::iPhone_7_Copy::Line_0* temp14 = ::g::LensyV2::iPhone_7_Copy::Line_0::New4();
    ::g::LensyV2::iPhone_7_Copy::Line_Copy_3* temp15 = ::g::LensyV2::iPhone_7_Copy::Line_Copy_3::New4();
    ::g::LensyV2::iPhone_7_Copy::Line_Copy_3_0* temp16 = ::g::LensyV2::iPhone_7_Copy::Line_Copy_3_0::New4();
    ::g::LensyV2::iPhone_7_Copy::Line_1* temp17 = ::g::LensyV2::iPhone_7_Copy::Line_1::New4();
    ::g::Fuse::Controls::Text* temp18 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp19 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp20 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Panel* temp21 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp22 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp23 = ::g::Fuse::Controls::Text::New3();
    ::g::LensyV2::iPhone_7_Copy::Base_Buttons::Line* temp24 = ::g::LensyV2::iPhone_7_Copy::Base_Buttons::Line::New4();
    ::g::LensyV2::iPhone_7_Copy::Base_Buttons::Line_0* temp25 = ::g::LensyV2::iPhone_7_Copy::Base_Buttons::Line_0::New4();
    temp->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    temp->X(::g::Uno::UX::Size__New1(194.9333f, 4));
    temp->Y(::g::Uno::UX::Size__New1(-3.148426f, 4));
    temp1->HitTestMode(6);
    temp1->ClipToBounds(true);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp21);
    temp2->Value(::STRINGS[0/*"Try these s...*/]);
    temp2->FontSize(24.0f);
    temp2->TextAlignment(1);
    temp2->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp2->X(::g::Uno::UX::Size__New1(6.133333f, 4));
    temp2->Y(::g::Uno::UX::Size__New1(19.1904f, 4));
    temp2->Font(::g::LensyV2::GeneratedClasses::SFUIText_LightItalic());
    temp3->Width(::g::Uno::UX::Size__New1(18.66667f, 4));
    temp3->Height(::g::Uno::UX::Size__New1(10.49475f, 4));
    temp3->X(::g::Uno::UX::Size__New1(40.8f, 4));
    temp3->Y(::g::Uno::UX::Size__New1(6.446776f, 4));
    temp4->Value(::STRINGS[1/*"1/100"*/]);
    temp4->FontSize(24.0f);
    temp4->TextAlignment(1);
    temp4->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp4->X(::g::Uno::UX::Size__New1(41.06667f, 4));
    temp4->Y(::g::Uno::UX::Size__New1(68.66566f, 4));
    temp4->Font(::g::LensyV2::GeneratedClasses::SFUIText_Medium());
    temp5->Value(::STRINGS[2/*"f/12"*/]);
    temp5->FontSize(24.0f);
    temp5->TextAlignment(1);
    temp5->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp5->X(::g::Uno::UX::Size__New1(44.26667f, 4));
    temp5->Y(::g::Uno::UX::Size__New1(50.07496f, 4));
    temp5->Font(::g::LensyV2::GeneratedClasses::SFUIText_Medium());
    temp6->Value(::STRINGS[3/*"100 - 200"*/]);
    temp6->FontSize(24.0f);
    temp6->TextAlignment(1);
    temp6->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp6->X(::g::Uno::UX::Size__New1(34.93333f, 4));
    temp6->Y(::g::Uno::UX::Size__New1(34.63268f, 4));
    temp6->Font(::g::LensyV2::GeneratedClasses::SFUIText_Medium());
    temp7->Width(::g::Uno::UX::Size__New1(9.866667f, 4));
    temp7->Height(::g::Uno::UX::Size__New1(5.547226f, 4));
    temp7->X(::g::Uno::UX::Size__New1(5.333333f, 4));
    temp7->Y(::g::Uno::UX::Size__New1(77.51125f, 4));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    temp8->Value(::STRINGS[4/*"!"*/]);
    temp8->FontSize(24.0f);
    temp8->TextAlignment(1);
    temp8->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp8->X(::g::Uno::UX::Size__New1(45.94595f, 4));
    temp8->Y(::g::Uno::UX::Size__New1(13.51351f, 4));
    temp8->Font(::g::LensyV2::GeneratedClasses::SFUIText_Medium());
    temp9->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp9->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    temp9->X(::g::Uno::UX::Size__New1(0.0f, 4));
    temp9->Y(::g::Uno::UX::Size__New1(0.0f, 4));
    temp10->Value(::STRINGS[5/*"Open the Le...*/]);
    temp10->FontSize(16.0f);
    temp10->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp10->X(::g::Uno::UX::Size__New1(17.6f, 4));
    temp10->Y(::g::Uno::UX::Size__New1(78.26087f, 4));
    temp10->Font(::g::LensyV2::GeneratedClasses::SFUIText_Light());
    temp11->Width(::g::Uno::UX::Size__New1(37.86666f, 4));
    temp11->Height(::g::Uno::UX::Size__New1(0.149925f, 4));
    temp11->X(::g::Uno::UX::Size__New1(0.2666667f, 4));
    temp11->Y(::g::Uno::UX::Size__New1(62.21889f, 4));
    temp12->Width(::g::Uno::UX::Size__New1(37.33333f, 4));
    temp12->Height(::g::Uno::UX::Size__New1(0.149925f, 4));
    temp12->X(::g::Uno::UX::Size__New1(62.66667f, 4));
    temp12->Y(::g::Uno::UX::Size__New1(62.21889f, 4));
    temp13->Width(::g::Uno::UX::Size__New1(36.0f, 4));
    temp13->Height(::g::Uno::UX::Size__New1(0.149925f, 4));
    temp13->X(::g::Uno::UX::Size__New1(64.0f, 4));
    temp13->Y(::g::Uno::UX::Size__New1(46.02699f, 4));
    temp14->Width(::g::Uno::UX::Size__New1(35.73333f, 4));
    temp14->Height(::g::Uno::UX::Size__New1(0.149925f, 4));
    temp14->X(::g::Uno::UX::Size__New1(0.0f, 4));
    temp14->Y(::g::Uno::UX::Size__New1(46.02699f, 4));
    temp15->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp15->Height(::g::Uno::UX::Size__New1(0.2998501f, 4));
    temp15->X(::g::Uno::UX::Size__New1(0.0f, 4));
    temp15->Y(::g::Uno::UX::Size__New1(13.7931f, 4));
    temp16->Width(::g::Uno::UX::Size__New1(42.66667f, 4));
    temp16->Height(::g::Uno::UX::Size__New1(0.2998501f, 4));
    temp16->X(::g::Uno::UX::Size__New1(57.33333f, 4));
    temp16->Y(::g::Uno::UX::Size__New1(29.83508f, 4));
    temp17->Width(::g::Uno::UX::Size__New1(43.2f, 4));
    temp17->Height(::g::Uno::UX::Size__New1(0.2998501f, 4));
    temp17->X(::g::Uno::UX::Size__New1(0.0f, 4));
    temp17->Y(::g::Uno::UX::Size__New1(29.53523f, 4));
    temp18->Value(::STRINGS[6/*"Shutter\nSp...*/]);
    temp18->FontSize(24.0f);
    temp18->TextAlignment(1);
    temp18->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp18->X(::g::Uno::UX::Size__New1(39.46667f, 4));
    temp18->Y(::g::Uno::UX::Size__New1(57.57121f, 4));
    temp18->Font(::g::LensyV2::GeneratedClasses::SFUIText_Light());
    temp19->Value(::STRINGS[7/*"F-STOP"*/]);
    temp19->FontSize(24.0f);
    temp19->TextAlignment(1);
    temp19->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp19->X(::g::Uno::UX::Size__New1(38.93333f, 4));
    temp19->Y(::g::Uno::UX::Size__New1(42.72863f, 4));
    temp19->Font(::g::LensyV2::GeneratedClasses::SFUIText_Light());
    temp20->Value(::STRINGS[8/*"ISO"*/]);
    temp20->FontSize(24.0f);
    temp20->TextAlignment(1);
    temp20->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp20->X(::g::Uno::UX::Size__New1(45.6f, 4));
    temp20->Y(::g::Uno::UX::Size__New1(27.28636f, 4));
    temp20->Font(::g::LensyV2::GeneratedClasses::SFUIText_Light());
    temp21->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp21->Height(::g::Uno::UX::Size__New1(10.64468f, 4));
    temp21->X(::g::Uno::UX::Size__New1(0.0f, 4));
    temp21->Y(::g::Uno::UX::Size__New1(89.35532f, 4));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp25);
    temp22->Value(::STRINGS[9/*"Home"*/]);
    temp22->FontSize(20.0f);
    temp22->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp22->X(::g::Uno::UX::Size__New1(18.4f, 4));
    temp22->Y(::g::Uno::UX::Size__New1(28.16901f, 4));
    temp22->Font(::g::LensyV2::GeneratedClasses::SFUIDisplay_Medium());
    temp23->Value(::STRINGS[10/*"New Settings"*/]);
    temp23->FontSize(20.0f);
    temp23->TextColor(::g::Uno::Float4__New2(1.0f, 0.9960784f, 0.9960784f, 1.0f));
    temp23->X(::g::Uno::UX::Size__New1(60.0f, 4));
    temp23->Y(::g::Uno::UX::Size__New1(29.57747f, 4));
    temp23->Font(::g::LensyV2::GeneratedClasses::SFUIDisplay_Medium());
    temp24->Width(::g::Uno::UX::Size__New1(0.5333334f, 4));
    temp24->Height(::g::Uno::UX::Size__New1(98.59155f, 4));
    temp24->X(::g::Uno::UX::Size__New1(50.13334f, 4));
    temp24->Y(::g::Uno::UX::Size__New1(1.408451f, 4));
    temp25->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp25->Height(::g::Uno::UX::Size__New1(2.816901f, 4));
    temp25->X(::g::Uno::UX::Size__New1(0.0f, 4));
    temp25->Y(::g::Uno::UX::Size__New1(0.0f, 4));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
}

// public SettingsPage New(Fuse.Navigation.Router router) [static] :9
SettingsPage* SettingsPage::New5(::g::Fuse::Navigation::Router* router1)
{
    SettingsPage* obj1 = (SettingsPage*)uNew(SettingsPage_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

} // ::g
