//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkHYSW.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkHYSW sActorProfileUnkHYSW;

ARM ActorProfileUnkHYSW *ActorProfileUnkHYSW::GetProfile() {
    return &sActorProfileUnkHYSW;
}

ARM Actor *ActorProfileUnkHYSW::Create() {
    return new(HeapIndex_2) ActorUnkHYSW();
}

ARM ActorProfileUnkHYSW::ActorProfileUnkHYSW() :
    ActorProfile(ActorId_HYSW) {}

ARM ActorUnkHYSW::ActorUnkHYSW() {}

ARM void ActorUnkHYSW::func_ov057_0213aa74(void) {}
ARM void ActorUnkHYSW::func_ov057_0213aab8(void) {}
ARM void ActorUnkHYSW::func_ov057_0213ab2c(void) {}
ARM void ActorUnkHYSW::func_ov057_0213ab40(void) {}

ARM ActorUnkHYSW::~ActorUnkHYSW() {}
ARM ActorProfileUnkHYSW::~ActorProfileUnkHYSW() {}
