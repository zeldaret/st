#include "Actor/ActorEventIcon.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileEventIcon);

Actor *ActorProfileEventIcon::Create() {
    return new(HeapIndex_2) ActorEventIcon();
}

ActorProfileEventIcon::ActorProfileEventIcon() :
    ActorProfile(ActorId_EventIcon) {}

ActorEventIcon::ActorEventIcon() {
    this->mUnk_10C = 0;
}

bool ActorEventIcon::vfunc_18(unk32 param1) {
    this->mUnk_094.func_ov000_0206082c(0x5D, this->mUnk_5C.mParams[0]);
    return true;
}

ActorEventIcon::~ActorEventIcon() {}

ActorProfileEventIcon::~ActorProfileEventIcon() {}
