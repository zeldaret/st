//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkTCAM.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkTCAM);

Actor *ActorProfileUnkTCAM::Create() {
    return new(HeapIndex_2) ActorUnkTCAM();
}

ActorProfileUnkTCAM::ActorProfileUnkTCAM() :
    ActorProfile(ActorId_TCAM) {}

ActorUnkTCAM::ActorUnkTCAM() {}

void ActorUnkTCAM::func_ov093_021772a0(void) {}
void ActorUnkTCAM::func_ov093_021772bc(void) {}
void ActorUnkTCAM::func_ov093_0217733c(void) {}
void ActorUnkTCAM::func_ov093_02177474(void) {}
void ActorUnkTCAM::func_ov093_0217747c(void) {}
void ActorUnkTCAM::func_ov093_0217748c(void) {}

ActorUnkTCAM::~ActorUnkTCAM() {}
ActorProfileUnkTCAM::~ActorProfileUnkTCAM() {}
