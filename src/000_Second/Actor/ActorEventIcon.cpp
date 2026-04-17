#include "Actor/ActorEventIcon.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileEventIcon);

ARM Actor *ActorProfileEventIcon::Create() {
    return new(HeapIndex_2) ActorEventIcon();
}

ARM ActorProfileEventIcon::ActorProfileEventIcon() :
    ActorProfile(ActorId_EventIcon) {}

ARM ActorEventIcon::ActorEventIcon() {
    this->mUnk_10C = 0;
}

ARM bool ActorEventIcon::vfunc_18(unk32 param1) {
    this->mUnk_094.func_ov000_0206082c(0x5D, this->mUnk_6C);
    return true;
}

ARM ActorEventIcon::~ActorEventIcon() {}

ARM ActorProfileEventIcon::~ActorProfileEventIcon() {}
