// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls.Native/0.35.8/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{struct ImageHandle;}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{struct ImageLoader;}}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace IO{struct BundleFile;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// internal static extern class ImageLoader :88
// {
uClassType* ImageLoader_typeof();
void ImageLoader__GetBundleAbsolutePath_fn(uString* bundlePath, uString** __retval);
void ImageLoader__Load_fn(uString* uri, ::g::Fuse::Controls::Native::ImageHandle** __retval);
void ImageLoader__Load1_fn(::g::Uno::IO::BundleFile* bundleFile, ::g::Fuse::Controls::Native::ImageHandle** __retval);
void ImageLoader__Load2_fn(::g::Uno::UX::FileSource* fileSource, ::g::Fuse::Controls::Native::ImageHandle** __retval);
void ImageLoader__LoadUri_fn(uString* uri, uObject** __retval);
void ImageLoader__ReleaseHandle_fn(::g::Fuse::Controls::Native::ImageHandle* handle);

struct ImageLoader : uObject
{
    static uSStrong< ::g::Uno::Collections::Dictionary*> _imageHandleCache_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _imageHandleCache() { return ImageLoader_typeof()->Init(), _imageHandleCache_; }

    static uString* GetBundleAbsolutePath(uString* bundlePath);
    static ::g::Fuse::Controls::Native::ImageHandle* Load(uString* uri);
    static ::g::Fuse::Controls::Native::ImageHandle* Load1(::g::Uno::IO::BundleFile* bundleFile);
    static ::g::Fuse::Controls::Native::ImageHandle* Load2(::g::Uno::UX::FileSource* fileSource);
    static uObject* LoadUri(uString* uri);
    static void ReleaseHandle(::g::Fuse::Controls::Native::ImageHandle* handle);
};
// }

}}}} // ::g::Fuse::Controls::Native
