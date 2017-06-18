// This file was generated based on '/Users/Sam/Library/Application Support/Fusetools/Packages/Fuse.Camera/1.0.2/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Camera{struct iOSCamera;}}}
namespace g{namespace Fuse{namespace ImageTools{struct Image;}}}
namespace g{namespace Uno{namespace Threading{struct Promise;}}}

namespace g{
namespace Fuse{
namespace Camera{

// public sealed extern class iOSCamera :11
// {
uType* iOSCamera_typeof();
void iOSCamera__ctor__fn(iOSCamera* __this);
void iOSCamera__New1_fn(iOSCamera** __retval);
void iOSCamera__TakePicture_fn(::g::Uno::Threading::Promise* p);
void iOSCamera__TakePictureInternal_fn(uDelegate* onComplete, uDelegate* onFail);

struct iOSCamera : uObject
{
    void ctor_();
    static iOSCamera* New1();
    static void TakePicture(::g::Uno::Threading::Promise* p);
    static void TakePictureInternal(uDelegate* onComplete, uDelegate* onFail);
};
// }

}}} // ::g::Fuse::Camera
