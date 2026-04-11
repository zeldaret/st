//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMA3.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkRMA3 sActorProfileUnkRMA3;

ARM ActorProfileUnkRMA3 *ActorProfileUnkRMA3::GetProfile() {
    return &sActorProfileUnkRMA3;
}

ARM Actor *ActorProfileUnkRMA3::Create() {
    return new(HeapIndex_2) ActorUnkRMA3();
}

ARM ActorProfileUnkRMA3::ActorProfileUnkRMA3() :
    ActorProfile_Derived1(ActorId_RMA3) {}

ARM ActorUnkRMA3::ActorUnkRMA3() {}

ARM void ActorUnkRMA3::func_ov068_02160840(void) {}
ARM void ActorUnkRMA3::func_ov068_02160868(void) {}
ARM void ActorUnkRMA3::func_ov068_0216086c(void) {}

ARM ActorUnkRMA3::~ActorUnkRMA3() {}
ARM ActorProfileUnkRMA3::~ActorProfileUnkRMA3() {}
