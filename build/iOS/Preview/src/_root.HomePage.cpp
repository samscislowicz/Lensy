// This file was generated based on /Users/Sam/Desktop/Lensy/LensyFinal/build/iOS/Preview/cache/ux11/HomePage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.GetSettingsButton.h>
#include <_root.HomePage.h>
#include <Fuse.Controls.PageControl.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Effects.DropShadow.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.HitTestMode.h>
#include <Fuse.Font.h>
#include <Fuse.Gestures.WhilePressed.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Triggers.Actions.Hide.h>
#include <Fuse.Triggers.Actions-fcab7e57.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Visual.h>
#include <LensyV2.Background.h>
#include <LensyV2.GeneratedClasses.h>
#include <LensyV2.iPhone_7.Background.h>
#include <LensyV2.iPhone_7.Base-98f381b7.h>
#include <LensyV2.iPhone_7.Base-e1db026a.h>
#include <LensyV2.iPhone_7.Enlight4.h>
#include <LensyV2.iPhone_7.Exit-23bd68d7.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.String.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[5];
static uType* TYPES[2];

namespace g{

// public partial sealed class HomePage :2
// {
// static HomePage() :5
static void HomePage__cctor_4_fn(uType* __type)
{
}

static void HomePage_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Lensy");
    ::STRINGS[1] = uString::Const("Hello and welcome to Lensy! Get started by pressing New Settings to take a picture with your phone camera of your set. After the photo is taken, your recemmended settings will be displayed!");
    ::STRINGS[2] = uString::Const("X");
    ::STRINGS[3] = uString::Const("Home");
    ::STRINGS[4] = uString::Const("New Settings");
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
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
        ::g::Fuse::Navigation::Router_typeof(), offsetof(::g::HomePage, router), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)HomePage__New5_fn, 0, true, type, 1, ::g::Fuse::Navigation::Router_typeof()));
}

::g::Fuse::Controls::Panel_type* HomePage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 112;
    options.InterfaceCount = 16;
    options.ObjectSize = sizeof(HomePage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("HomePage", options);
    type->fp_build_ = HomePage_build;
    type->fp_cctor_ = HomePage__cctor_4_fn;
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

// public HomePage(Fuse.Navigation.Router router) :9
void HomePage__ctor_8_fn(HomePage* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX() :15
void HomePage__InitializeUX_fn(HomePage* __this)
{
    __this->InitializeUX();
}

// public HomePage New(Fuse.Navigation.Router router) :9
void HomePage__New5_fn(::g::Fuse::Navigation::Router* router1, HomePage** __retval)
{
    *__retval = HomePage::New5(router1);
}

// public HomePage(Fuse.Navigation.Router router) [instance] :9
void HomePage::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    uStackFrame __("HomePage", ".ctor(Fuse.Navigation.Router)");
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :15
void HomePage::InitializeUX()
{
    uStackFrame __("HomePage", "InitializeUX()");
    ::g::Fuse::Controls::PageControl* temp = ::g::Fuse::Controls::PageControl::New4();
    ::g::Fuse::Controls::Page* temp1 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::Text* temp2 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Effects::DropShadow* temp3 = ::g::Fuse::Effects::DropShadow::New2();
    ::g::Fuse::Controls::Panel* temp4 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp5 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp6 = ::g::Fuse::Controls::Text::New3();
    ::g::LensyV2::iPhone_7::Exit_Button::Oval* temp7 = ::g::LensyV2::iPhone_7::Exit_Button::Oval::New4();
    ::g::Fuse::Gestures::WhilePressed* temp8 = ::g::Fuse::Gestures::WhilePressed::New2();
    ::g::Fuse::Triggers::Actions::Hide* temp9 = ::g::Fuse::Triggers::Actions::Hide::New2();
    ::g::Fuse::Controls::Rectangle* temp10 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Panel* temp11 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp12 = ::g::Fuse::Controls::Text::New3();
    ::g::LensyV2::iPhone_7::Base_Buttons::Line* temp13 = ::g::LensyV2::iPhone_7::Base_Buttons::Line::New4();
    ::g::LensyV2::iPhone_7::Base_Buttons::Line_0* temp14 = ::g::LensyV2::iPhone_7::Base_Buttons::Line_0::New4();
    ::g::GetSettingsButton* temp15 = ::g::GetSettingsButton::New4();
    ::g::LensyV2::iPhone_7::Enlight4* temp16 = ::g::LensyV2::iPhone_7::Enlight4::New4();
    ::g::LensyV2::iPhone_7::Background* temp17 = ::g::LensyV2::iPhone_7::Background::New4();
    ::g::LensyV2::Background* temp18 = ::g::LensyV2::Background::New4();
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    temp1->HitTestMode(6);
    temp1->ClipToBounds(true);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    temp2->Value(::STRINGS[0/*"Lensy"*/]);
    temp2->FontSize(100.0f);
    temp2->TextAlignment(1);
    temp2->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp2->X(::g::Uno::UX::Size__New1(22.93333f, 4));
    temp2->Y(::g::Uno::UX::Size__New1(10.04498f, 4));
    temp2->Font(::g::LensyV2::GeneratedClasses::Miciana_Regular());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    temp3->Size(4.0f);
    temp3->Distance(2.0f);
    temp3->Spread(0.0f);
    temp3->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp4->Width(::g::Uno::UX::Size__New1(84.0f, 4));
    temp4->Height(::g::Uno::UX::Size__New1(22.48876f, 4));
    temp4->X(::g::Uno::UX::Size__New1(8.0f, 4));
    temp4->Y(::g::Uno::UX::Size__New1(62.0f, 4));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    temp5->Value(::STRINGS[1/*"Hello and w...*/]);
    temp5->TextWrapping(1);
    temp5->FontSize(16.0f);
    temp5->TextAlignment(0);
    temp5->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp5->Width(::g::Uno::UX::Size__New1(95.0f, 4));
    temp5->Alignment(0);
    temp5->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp5->X(::g::Uno::UX::Size__New1(3.0f, 4));
    temp5->Y(::g::Uno::UX::Size__New1(9.0f, 4));
    temp5->Font(::g::LensyV2::GeneratedClasses::SFUIText_Medium());
    temp6->Value(::STRINGS[2/*"X"*/]);
    temp6->FontSize(24.0f);
    temp6->TextColor(::g::Uno::Float4__New2(0.8509804f, 0.1411765f, 0.1411765f, 1.0f));
    temp6->X(::g::Uno::UX::Size__New1(95.4f, 4));
    temp6->Y(::g::Uno::UX::Size__New1(-4.0f, 4));
    temp6->Font(::g::LensyV2::GeneratedClasses::SFUIDisplay_Bold());
    temp7->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp7->Height(::g::Uno::UX::Size__New1(30.0f, 4));
    temp7->X(::g::Uno::UX::Size__New1(48.0f, 4));
    temp7->Y(::g::Uno::UX::Size__New1(-8.0f, 4));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Actions()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp9);
    temp10->Color(::g::Uno::Float4__New2(0.8470588f, 0.8470588f, 0.8470588f, 1.0f));
    temp10->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp10->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    temp10->X(::g::Uno::UX::Size__New1(0.0f, 4));
    temp10->Y(::g::Uno::UX::Size__New1(0.0f, 4));
    temp10->Opacity(0.7f);
    temp11->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp11->Height(::g::Uno::UX::Size__New1(70.6f, 1));
    temp11->Alignment(14);
    temp11->X(::g::Uno::UX::Size__New1(0.0f, 4));
    temp11->Y(::g::Uno::UX::Size__New1(0.0f, 4));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    temp12->Value(::STRINGS[3/*"Home"*/]);
    temp12->FontSize(20.0f);
    temp12->TextColor(::g::Uno::Float4__New2(0.5137255f, 0.5137255f, 0.5137255f, 1.0f));
    temp12->Alignment(9);
    temp12->X(::g::Uno::UX::Size__New1(60.0f, 1));
    temp12->Y(::g::Uno::UX::Size__New1(0.0f, 1));
    temp12->Font(::g::LensyV2::GeneratedClasses::SFUIDisplay_Medium());
    temp13->Width(::g::Uno::UX::Size__New1(0.2666667f, 4));
    temp13->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    temp13->X(::g::Uno::UX::Size__New1(49.86666f, 4));
    temp13->Y(::g::Uno::UX::Size__New1(0.0f, 4));
    temp14->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp14->Height(::g::Uno::UX::Size__New1(1.408451f, 4));
    temp14->X(::g::Uno::UX::Size__New1(0.0f, 4));
    temp14->Y(::g::Uno::UX::Size__New1(0.0f, 4));
    temp15->X(::g::Uno::UX::Size__New1(0.0f, 1));
    temp15->Y(::g::Uno::UX::Size__New1(0.0f, 1));
    temp15->Text(::STRINGS[4/*"New Settings"*/]);
    temp16->Width(::g::Uno::UX::Size__New1(84.26667f, 4));
    temp16->Height(::g::Uno::UX::Size__New1(50.37481f, 4));
    temp16->X(::g::Uno::UX::Size__New1(15.73333f, 4));
    temp16->Y(::g::Uno::UX::Size__New1(26.08696f, 4));
    temp16->Opacity(0.5f);
    temp17->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp17->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    temp17->X(::g::Uno::UX::Size__New1(0.0f, 4));
    temp17->Y(::g::Uno::UX::Size__New1(0.0f, 4));
    temp18->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp18->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    temp18->X(::g::Uno::UX::Size__New1(194.9333f, 4));
    temp18->Y(::g::Uno::UX::Size__New1(-3.148426f, 4));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
}

// public HomePage New(Fuse.Navigation.Router router) [static] :9
HomePage* HomePage::New5(::g::Fuse::Navigation::Router* router1)
{
    HomePage* obj1 = (HomePage*)uNew(HomePage_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

} // ::g
