// This file was generated based on '/Users/Sam/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/1.0.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// public abstract interface IOffscreenRendererHost :498
// {
uInterfaceType* IOffscreenRendererHost_typeof();

struct IOffscreenRendererHost
{
    void(*fp_get_RenderToTexture)(uObject*, bool*);
    static bool RenderToTexture(const uInterface& __this) { bool __retval; return __this.VTable<IOffscreenRendererHost>()->fp_get_RenderToTexture(__this, &__retval), __retval; }
};
// }

}}}} // ::g::Fuse::Controls::Native
