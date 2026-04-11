//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkBMOC.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkBMOC sActorProfileUnkBMOC;

ARM ActorProfileUnkBMOC *ActorProfileUnkBMOC::GetProfile() {
    return &sActorProfileUnkBMOC;
}

ARM Actor *ActorProfileUnkBMOC::Create() {
    return new(HeapIndex_2) ActorUnkBMOC();
}

ARM ActorProfileUnkBMOC::ActorProfileUnkBMOC() :
    ActorProfile_Derived1(ActorId_BMOC) {}

ARM ActorUnkBMOC::ActorUnkBMOC() {}

ARM void ActorUnkBMOC::func_ov091_0216e72c(void) {}
ARM void ActorUnkBMOC::func_ov091_0216e858(void) {}
ARM void ActorUnkBMOC::func_ov091_0216e9a8(void) {}
ARM void ActorUnkBMOC::func_ov091_0216ec60(void) {}
ARM void ActorUnkBMOC::func_ov091_0216ece0(void) {}
ARM void ActorUnkBMOC::func_ov091_0216edec(void) {}
ARM void ActorUnkBMOC::func_ov091_0216ee1c(void) {}

ARM ActorUnkBMOC::~ActorUnkBMOC() {}
ARM ActorProfileUnkBMOC::~ActorProfileUnkBMOC() {}
