//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkDMEQ.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkDMEQ sActorProfileUnkDMEQ;

ARM ActorProfileUnkDMEQ *ActorProfileUnkDMEQ::GetProfile() {
    return &sActorProfileUnkDMEQ;
}

ARM Actor *ActorProfileUnkDMEQ::Create() {
    return new(HeapIndex_2) ActorUnkDMEQ();
}

ARM ActorProfileUnkDMEQ::ActorProfileUnkDMEQ() :
    ActorProfile(ActorId_DMEQ) {}

ARM ActorUnkDMEQ::ActorUnkDMEQ() {}

ARM void ActorUnkDMEQ::func_ov088_0216e31c(void) {}
ARM void ActorUnkDMEQ::func_ov088_0216e718(void) {}
ARM void ActorUnkDMEQ::func_ov088_0216e738(void) {}

ARM ActorUnkDMEQ::~ActorUnkDMEQ() {}
ARM ActorProfileUnkDMEQ::~ActorProfileUnkDMEQ() {}
