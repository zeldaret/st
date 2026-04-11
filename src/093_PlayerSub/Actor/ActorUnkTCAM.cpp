//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkTCAM.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkTCAM sActorProfileUnkTCAM;

ARM ActorProfileUnkTCAM *ActorProfileUnkTCAM::GetProfile() {
    return &sActorProfileUnkTCAM;
}

ARM Actor *ActorProfileUnkTCAM::Create() {
    return new(HeapIndex_2) ActorUnkTCAM();
}

ARM ActorProfileUnkTCAM::ActorProfileUnkTCAM() :
    ActorProfile(ActorId_TCAM) {}

ARM ActorUnkTCAM::ActorUnkTCAM() {}

ARM void ActorUnkTCAM::func_ov093_021772a0(void) {}
ARM void ActorUnkTCAM::func_ov093_021772bc(void) {}
ARM void ActorUnkTCAM::func_ov093_0217733c(void) {}
ARM void ActorUnkTCAM::func_ov093_02177474(void) {}
ARM void ActorUnkTCAM::func_ov093_0217747c(void) {}
ARM void ActorUnkTCAM::func_ov093_0217748c(void) {}

ARM ActorUnkTCAM::~ActorUnkTCAM() {}
ARM ActorProfileUnkTCAM::~ActorProfileUnkTCAM() {}
