//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMA0.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkRMA0 sActorProfileUnkRMA0;

ARM ActorProfileUnkRMA0 *ActorProfileUnkRMA0::GetProfile() {
    return &sActorProfileUnkRMA0;
}

ARM Actor *ActorProfileUnkRMA0::Create() {
    return new(HeapIndex_2) ActorUnkRMA0();
}

ARM ActorProfileUnkRMA0::ActorProfileUnkRMA0() :
    ActorProfile_Derived1(ActorId_RMA0) {}

ARM ActorUnkRMA0::ActorUnkRMA0() {}

ARM void ActorUnkRMA0::func_ov068_021606f0(void) {}
ARM void ActorUnkRMA0::func_ov068_02160718(void) {}
ARM void ActorUnkRMA0::func_ov068_0216071c(void) {}

ARM ActorUnkRMA0::~ActorUnkRMA0() {}
ARM ActorProfileUnkRMA0::~ActorProfileUnkRMA0() {}
