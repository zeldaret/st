//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRML0.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkRML0 sActorProfileUnkRML0;

ARM ActorProfileUnkRML0 *ActorProfileUnkRML0::GetProfile() {
    return &sActorProfileUnkRML0;
}

ARM Actor *ActorProfileUnkRML0::Create() {
    return new(HeapIndex_2) ActorUnkRML0();
}

ARM ActorProfileUnkRML0::ActorProfileUnkRML0() :
    ActorProfile_Derived1(ActorId_RML0) {}

ARM ActorUnkRML0::ActorUnkRML0() {}

ARM void ActorUnkRML0::func_ov062_02157f18(void) {}
ARM void ActorUnkRML0::func_ov062_02157f48(void) {}

ARM ActorUnkRML0::~ActorUnkRML0() {}
ARM ActorProfileUnkRML0::~ActorProfileUnkRML0() {}
