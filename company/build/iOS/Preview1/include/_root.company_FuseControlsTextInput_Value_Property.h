// This file was generated based on '/Users/jimmysidney/workspace/apps-fuse/company/build/iOS/Preview1/cache/ux11/company.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct TextInput;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct company_FuseControlsTextInput_Value_Property;}

namespace g{

// internal sealed class company_FuseControlsTextInput_Value_Property :1
// {
::g::Uno::UX::Property1_type* company_FuseControlsTextInput_Value_Property_typeof();
void company_FuseControlsTextInput_Value_Property__ctor_2_fn(company_FuseControlsTextInput_Value_Property* __this, ::g::Fuse::Controls::TextInput* obj, ::g::Uno::UX::Selector* name);
void company_FuseControlsTextInput_Value_Property__Get_fn(company_FuseControlsTextInput_Value_Property* __this, uString** __retval);
void company_FuseControlsTextInput_Value_Property__New1_fn(::g::Fuse::Controls::TextInput* obj, ::g::Uno::UX::Selector* name, company_FuseControlsTextInput_Value_Property** __retval);
void company_FuseControlsTextInput_Value_Property__get_Object_fn(company_FuseControlsTextInput_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void company_FuseControlsTextInput_Value_Property__Set_fn(company_FuseControlsTextInput_Value_Property* __this, uString* v, uObject* origin);
void company_FuseControlsTextInput_Value_Property__get_SupportsOriginSetter_fn(company_FuseControlsTextInput_Value_Property* __this, bool* __retval);

struct company_FuseControlsTextInput_Value_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::TextInput*> _obj;

    void ctor_2(::g::Fuse::Controls::TextInput* obj, ::g::Uno::UX::Selector name);
    static company_FuseControlsTextInput_Value_Property* New1(::g::Fuse::Controls::TextInput* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
