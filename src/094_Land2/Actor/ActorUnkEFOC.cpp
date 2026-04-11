//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkEFOC.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkEFOC sActorProfileUnkEFOC;

ARM ActorProfileUnkEFOC *ActorProfileUnkEFOC::GetProfile() {
    return &sActorProfileUnkEFOC;
}

ARM Actor *ActorProfileUnkEFOC::Create() {
    return new(HeapIndex_2) ActorUnkEFOC();
}

ARM ActorProfileUnkEFOC::ActorProfileUnkEFOC() :
    ActorProfile_Derived1(ActorId_EFOC) {}

ARM ActorUnkEFOC::ActorUnkEFOC() {}

ARM void ActorUnkEFOC::func_ov094_0216ee98(void) {}
ARM void ActorUnkEFOC::func_ov094_0216ef0c(void) {}
ARM void ActorUnkEFOC::func_ov094_0216f030(void) {}
ARM void ActorUnkEFOC::func_ov094_0216f128(void) {}
ARM void ActorUnkEFOC::func_ov094_0216f13c(void) {}
ARM void ActorUnkEFOC::func_ov094_0216f1f8(void) {}
ARM void ActorUnkEFOC::func_ov094_0216f20c(void) {}
ARM void ActorUnkEFOC::func_ov094_0216f250(void) {}
ARM void ActorUnkEFOC::func_ov094_0216f28c(void) {}
ARM void ActorUnkEFOC::func_ov094_0216f3c0(void) {}
ARM void ActorUnkEFOC::func_ov094_0216f3e4(void) {}
ARM void ActorUnkEFOC::func_ov094_0216f3f8(void) {}
ARM void ActorUnkEFOC::func_ov094_0216f440(void) {}
ARM void ActorUnkEFOC::func_ov094_0216f4ac(void) {}
ARM void ActorUnkEFOC::func_ov094_0216f508(void) {}
ARM void ActorUnkEFOC::func_ov094_0216f52c(void) {}

ARM ActorUnkEFOC::~ActorUnkEFOC() {}
ARM ActorProfileUnkEFOC::~ActorProfileUnkEFOC() {}
