// This file was generated based on C:\ProgramData\Uno\Packages\Fuse.Controls\0.32.14\Triggers\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.TriggerAction.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct SendToBack;}}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class SendToBack :58
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* SendToBack_typeof();
void SendToBack__Perform_fn(SendToBack* __this, ::g::Fuse::Node* target);
void SendToBack__get_Target_fn(SendToBack* __this, ::g::Fuse::Visual** __retval);
void SendToBack__set_Target_fn(SendToBack* __this, ::g::Fuse::Visual* value);

struct SendToBack : ::g::Fuse::Triggers::Actions::TriggerAction
{
    uStrong< ::g::Fuse::Visual*> _Target;

    ::g::Fuse::Visual* Target();
    void Target(::g::Fuse::Visual* value);
};
// }

}}}} // ::g::Fuse::Triggers::Actions
