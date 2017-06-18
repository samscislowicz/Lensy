// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Camera.Camera.h>
#include <Fuse.Camera.iOSCamera.h>
#include <Fuse.Camera.ResizeIma-56e3edfc.h>
#include <Fuse.ImageTools.Image.h>
#include <Fuse.ImageTools.ImageTools.h>
#include <Fuse.ImageTools.ResizeMode.h>
#include <Fuse.Scripting.FutureFactory-1.h>
#include <Fuse.Scripting.JSObjectUtils.h>
#include <Fuse.Scripting.NativeMember.h>
#include <Fuse.Scripting.NativePromise-2.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.Result-92713bce.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Threading.Future-1.h>
#include <Uno.Threading.Promise-1.h>
#include <Uno.UX.Resource.h>
static uString* STRINGS[3];
static uType* TYPES[7];

namespace g{
namespace Fuse{
namespace Camera{

// /Users/Sam/Library/Application Support/Fusetools/Packages/Fuse.Camera/1.0.2/$.uno
// ---------------------------------------------------------------------------------

// public sealed class Camera :34
// {
static void Camera_build(uType* type)
{
    ::STRINGS[0] = uString::Const("FuseJS/Camera");
    ::STRINGS[1] = uString::Const("takePicture");
    ::STRINGS[2] = uString::Const("Negative image size values are not supported");
    ::TYPES[0] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Fuse::ImageTools::Image_typeof(), ::g::Fuse::Scripting::Object_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Fuse::ImageTools::Image_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Scripting::ResultConverter_typeof()->MakeType(::g::Fuse::ImageTools::Image_typeof(), ::g::Fuse::Scripting::Object_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Fuse::ImageTools::Image_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::Scripting::JSObjectUtils_typeof()->MakeMethod(3/*ValueOrDefault<int>*/, ::g::Uno::Int_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4,
        type, (uintptr_t)&::g::Fuse::Camera::Camera::_instance_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Camera__New2_fn, 0, true, type, 0));
}

::g::Fuse::Scripting::NativeModule_type* Camera_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Camera);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Fuse.Camera.Camera", options);
    type->fp_build_ = Camera_build;
    type->fp_ctor_ = (void*)Camera__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public Camera() :37
void Camera__ctor_2_fn(Camera* __this)
{
    __this->ctor_2();
}

// public Camera New() :37
void Camera__New2_fn(Camera** __retval)
{
    *__retval = Camera::New2();
}

// internal static Uno.Threading.Future<Fuse.ImageTools.Image> TakePicture() :76
void Camera__TakePicture_fn(::g::Uno::Threading::Future1** __retval)
{
    *__retval = Camera::TakePicture();
}

// internal static Uno.Threading.Future<Fuse.ImageTools.Image> TakePicture(Uno.Threading.Promise<Fuse.ImageTools.Image> p) :81
void Camera__TakePicture1_fn(::g::Uno::Threading::Promise* p, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = Camera::TakePicture1(p);
}

// private static Uno.Threading.Future<Fuse.ImageTools.Image> TakePictureInterface(object[] args) :61
void Camera__TakePictureInterface_fn(uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = Camera::TakePictureInterface(args);
}

uSStrong<Camera*> Camera::_instance_;

// public Camera() [instance] :37
void Camera::ctor_2()
{
    uStackFrame __("Fuse.Camera.Camera", ".ctor()");
    ctor_1();

    if (Camera::_instance_ != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(Camera::_instance_ = this, ::STRINGS[0/*"FuseJS/Camera"*/]);
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[0/*Fuse.Scripting.NativePromise<Fuse.ImageTools.Image, Fuse.Scripting.Object>*/], ::STRINGS[1/*"takePicture"*/], uDelegate::New(::TYPES[1/*Fuse.Scripting.FutureFactory<Fuse.ImageTools.Image>*/], (void*)Camera__TakePictureInterface_fn), uDelegate::New(::TYPES[2/*Fuse.Scripting.ResultConverter<Fuse.ImageTools.Image, Fuse.Scripting.Object>*/], (void*)::g::Fuse::ImageTools::Image__Converter_fn)));
}

// public Camera New() [static] :37
Camera* Camera::New2()
{
    Camera* obj1 = (Camera*)uNew(Camera_typeof());
    obj1->ctor_2();
    return obj1;
}

// internal static Uno.Threading.Future<Fuse.ImageTools.Image> TakePicture() [static] :76
::g::Uno::Threading::Future1* Camera::TakePicture()
{
    uStackFrame __("Fuse.Camera.Camera", "TakePicture()");
    return Camera::TakePicture1((::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(::TYPES[3/*Uno.Threading.Promise<Fuse.ImageTools.Image>*/]));
}

// internal static Uno.Threading.Future<Fuse.ImageTools.Image> TakePicture(Uno.Threading.Promise<Fuse.ImageTools.Image> p) [static] :81
::g::Uno::Threading::Future1* Camera::TakePicture1(::g::Uno::Threading::Promise* p)
{
    ::g::Fuse::Camera::iOSCamera::TakePicture(p);
    return p;
}

// private static Uno.Threading.Future<Fuse.ImageTools.Image> TakePictureInterface(object[] args) [static] :61
::g::Uno::Threading::Future1* Camera::TakePictureInterface(uArray* args)
{
    uStackFrame __("Fuse.Camera.Camera", "TakePictureInterface(object[])");
    int ret2;
    int ret3;

    if (uPtr(args)->Length() == 0)
        return Camera::TakePicture();

    int width = (::g::Fuse::Scripting::JSObjectUtils__ValueOrDefault1_fn(::TYPES[4/*Fuse.Scripting.JSObjectUtils.ValueOrDefault<int>*/], args, uCRef<int>(0), uCRef<int>(0), &ret2), ret2);
    int height = (::g::Fuse::Scripting::JSObjectUtils__ValueOrDefault1_fn(::TYPES[4/*Fuse.Scripting.JSObjectUtils.ValueOrDefault<int>*/], args, uCRef<int>(1), uCRef<int>(width), &ret3), ret3);
    ::g::Uno::Threading::Promise* p = (::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(::TYPES[3/*Uno.Threading.Promise<Fuse.ImageTools.Image>*/]);

    if ((width <= 0) || (height <= 0))
    {
        uPtr(p)->Reject(::g::Uno::Exception::New2(::STRINGS[2/*"Negative im...*/]));
        return p;
    }

    ::g::Fuse::Camera::ResizeImageCallback* cb = ::g::Fuse::Camera::ResizeImageCallback::New1(p, width, height);
    Camera::TakePicture1(cb->ImagePromise());
    return p;
}
// }

// /Users/Sam/Library/Application Support/Fusetools/Packages/Fuse.Camera/1.0.2/$.uno
// ---------------------------------------------------------------------------------

// internal sealed class ResizeImageCallback :94
// {
static void ResizeImageCallback_build(uType* type)
{
    ::TYPES[3] = ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Fuse::ImageTools::Image_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::ImageTools::Image_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL);
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Camera::ResizeImageCallback, _height), 0,
        ::TYPES[3/*Uno.Threading.Promise<Fuse.ImageTools.Image>*/], offsetof(::g::Fuse::Camera::ResizeImageCallback, _promise), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Camera::ResizeImageCallback, _width), 0,
        ::TYPES[3/*Uno.Threading.Promise<Fuse.ImageTools.Image>*/], offsetof(::g::Fuse::Camera::ResizeImageCallback, _ImagePromise), 0);
}

uType* ResizeImageCallback_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(ResizeImageCallback);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Camera.ResizeImageCallback", options);
    type->fp_build_ = ResizeImageCallback_build;
    return type;
}

// public ResizeImageCallback(Uno.Threading.Promise<Fuse.ImageTools.Image> p, int width, int height) :100
void ResizeImageCallback__ctor__fn(ResizeImageCallback* __this, ::g::Uno::Threading::Promise* p, int* width, int* height)
{
    __this->ctor_(p, *width, *height);
}

// public generated Uno.Threading.Promise<Fuse.ImageTools.Image> get_ImagePromise() :96
void ResizeImageCallback__get_ImagePromise_fn(ResizeImageCallback* __this, ::g::Uno::Threading::Promise** __retval)
{
    *__retval = __this->ImagePromise();
}

// private generated void set_ImagePromise(Uno.Threading.Promise<Fuse.ImageTools.Image> value) :96
void ResizeImageCallback__set_ImagePromise_fn(ResizeImageCallback* __this, ::g::Uno::Threading::Promise* value)
{
    __this->ImagePromise(value);
}

// public ResizeImageCallback New(Uno.Threading.Promise<Fuse.ImageTools.Image> p, int width, int height) :100
void ResizeImageCallback__New1_fn(::g::Uno::Threading::Promise* p, int* width, int* height, ResizeImageCallback** __retval)
{
    *__retval = ResizeImageCallback::New1(p, *width, *height);
}

// private void ResolveResized(Fuse.ImageTools.Image img) :114
void ResizeImageCallback__ResolveResized_fn(ResizeImageCallback* __this, ::g::Fuse::ImageTools::Image* img)
{
    __this->ResolveResized(img);
}

// private void ResolveTaken(Fuse.ImageTools.Image img) :109
void ResizeImageCallback__ResolveTaken_fn(ResizeImageCallback* __this, ::g::Fuse::ImageTools::Image* img)
{
    __this->ResolveTaken(img);
}

// public ResizeImageCallback(Uno.Threading.Promise<Fuse.ImageTools.Image> p, int width, int height) [instance] :100
void ResizeImageCallback::ctor_(::g::Uno::Threading::Promise* p, int width, int height)
{
    uStackFrame __("Fuse.Camera.ResizeImageCallback", ".ctor(Uno.Threading.Promise<Fuse.ImageTools.Image>,int,int)");
    _width = width;
    _height = height;
    _promise = p;
    ImagePromise((::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(::TYPES[3/*Uno.Threading.Promise<Fuse.ImageTools.Image>*/]));
    uPtr(ImagePromise())->Then1(uDelegate::New(::TYPES[5/*Uno.Action<Fuse.ImageTools.Image>*/], (void*)ResizeImageCallback__ResolveTaken_fn, this), uDelegate::New(::TYPES[6/*Uno.Action<Uno.Exception>*/], (void*)::g::Uno::Threading::Promise__Reject_fn, uPtr(_promise)));
}

// public generated Uno.Threading.Promise<Fuse.ImageTools.Image> get_ImagePromise() [instance] :96
::g::Uno::Threading::Promise* ResizeImageCallback::ImagePromise()
{
    return _ImagePromise;
}

// private generated void set_ImagePromise(Uno.Threading.Promise<Fuse.ImageTools.Image> value) [instance] :96
void ResizeImageCallback::ImagePromise(::g::Uno::Threading::Promise* value)
{
    _ImagePromise = value;
}

// private void ResolveResized(Fuse.ImageTools.Image img) [instance] :114
void ResizeImageCallback::ResolveResized(::g::Fuse::ImageTools::Image* img)
{
    uStackFrame __("Fuse.Camera.ResizeImageCallback", "ResolveResized(Fuse.ImageTools.Image)");
    ::g::Uno::Threading::Promise__Resolve_fn(uPtr(_promise), img);
}

// private void ResolveTaken(Fuse.ImageTools.Image img) [instance] :109
void ResizeImageCallback::ResolveTaken(::g::Fuse::ImageTools::Image* img)
{
    uStackFrame __("Fuse.Camera.ResizeImageCallback", "ResolveTaken(Fuse.ImageTools.Image)");
    ImagePromise(uCast< ::g::Uno::Threading::Promise*>(::g::Fuse::ImageTools::ImageTools::Resize(img, _width, _height, 1, true), ::TYPES[3/*Uno.Threading.Promise<Fuse.ImageTools.Image>*/]));
    uPtr(ImagePromise())->Then1(uDelegate::New(::TYPES[5/*Uno.Action<Fuse.ImageTools.Image>*/], (void*)ResizeImageCallback__ResolveResized_fn, this), uDelegate::New(::TYPES[6/*Uno.Action<Uno.Exception>*/], (void*)::g::Uno::Threading::Promise__Reject_fn, uPtr(_promise)));
}

// public ResizeImageCallback New(Uno.Threading.Promise<Fuse.ImageTools.Image> p, int width, int height) [static] :100
ResizeImageCallback* ResizeImageCallback::New1(::g::Uno::Threading::Promise* p, int width, int height)
{
    ResizeImageCallback* obj1 = (ResizeImageCallback*)uNew(ResizeImageCallback_typeof());
    obj1->ctor_(p, width, height);
    return obj1;
}
// }

}}} // ::g::Fuse::Camera
