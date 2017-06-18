// This file was generated based on '/Users/Sam/Library/Application Support/Fusetools/Packages/Fuse.Camera/1.0.2/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Camera.iOSCamera.h>
#include <Fuse.ImageTools.Image.h>
#include <Fuse.ImageTools.Image-3344558a.h>
#include <iOS/CameraHelper.h>
#include <Uno.Action-1.h>
#include <Uno.String.h>
#include <Uno.Threading.Promise-1.h>
#include <uObjC.Foreign.h>
static uType* TYPES[1];

namespace g{
namespace Fuse{
namespace Camera{

// public sealed extern class iOSCamera :11
// {
static void iOSCamera_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)iOSCamera__New1_fn, 0, true, type, 0));
}

uType* iOSCamera_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(iOSCamera);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Camera.iOSCamera", options);
    type->fp_build_ = iOSCamera_build;
    type->fp_ctor_ = (void*)iOSCamera__New1_fn;
    return type;
}

// public generated iOSCamera() :11
void iOSCamera__ctor__fn(iOSCamera* __this)
{
    __this->ctor_();
}

// public generated iOSCamera New() :11
void iOSCamera__New1_fn(iOSCamera** __retval)
{
    *__retval = iOSCamera::New1();
}

// internal static void TakePicture(Uno.Threading.Promise<Fuse.ImageTools.Image> p) :13
void iOSCamera__TakePicture_fn(::g::Uno::Threading::Promise* p)
{
    iOSCamera::TakePicture(p);
}

// private static void TakePictureInternal(Uno.Action<string> onComplete, Uno.Action<string> onFail) :20
void iOSCamera__TakePictureInternal_fn(uDelegate* onComplete, uDelegate* onFail)
{
    iOSCamera::TakePictureInternal(onComplete, onFail);
}

// public generated iOSCamera() [instance] :11
void iOSCamera::ctor_()
{
}

// public generated iOSCamera New() [static] :11
iOSCamera* iOSCamera::New1()
{
    iOSCamera* obj1 = (iOSCamera*)uNew(iOSCamera_typeof());
    obj1->ctor_();
    return obj1;
}

// internal static void TakePicture(Uno.Threading.Promise<Fuse.ImageTools.Image> p) [static] :13
void iOSCamera::TakePicture(::g::Uno::Threading::Promise* p)
{
    ::g::Fuse::ImageTools::ImagePromiseCallback* cb = ::g::Fuse::ImageTools::ImagePromiseCallback::New1(p);
    iOSCamera::TakePictureInternal(uDelegate::New(::TYPES[0/*Uno.Action<string>*/], (void*)::g::Fuse::ImageTools::ImagePromiseCallback__Resolve_fn, cb), uDelegate::New(::TYPES[0/*Uno.Action<string>*/], (void*)::g::Fuse::ImageTools::ImagePromiseCallback__Reject_fn, cb));
}

// private static void TakePictureInternal(Uno.Action<string> onComplete, Uno.Action<string> onFail) [static] :20
void iOSCamera::TakePictureInternal(uDelegate* onComplete, uDelegate* onFail)
{
    @autoreleasepool
    {
        [] (::uObjC::Function<void, ::NSString*> onComplete, ::uObjC::Function<void, ::NSString*> onFail) -> void
        {
            [[CameraHelper instance] takePictureWithCompletionHandler:onComplete onFail:onFail];
        } ([] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void, ::NSString*>
        {
            return __delegateRef == nil ? (::uObjC::Function<void, ::NSString*>)nil : (^ void (::NSString* arg)
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid(::uObjC::UnoString(arg));
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: onComplete]), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void, ::NSString*>
        {
            return __delegateRef == nil ? (::uObjC::Function<void, ::NSString*>)nil : (^ void (::NSString* arg)
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid(::uObjC::UnoString(arg));
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: onFail]));
        
    }
    
}
// }

}}} // ::g::Fuse::Camera
