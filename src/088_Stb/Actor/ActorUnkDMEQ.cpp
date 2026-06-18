//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkDMEQ.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkDMEQ);

Actor *ActorProfileUnkDMEQ::Create() {
    return new(HeapIndex_2) ActorUnkDMEQ();
}

ActorProfileUnkDMEQ::ActorProfileUnkDMEQ() :
    ActorProfile(ActorId_DMEQ) {}

ActorUnkDMEQ::ActorUnkDMEQ() {}

void ActorUnkDMEQ::func_ov088_0216e31c(void) {}
void ActorUnkDMEQ::func_ov088_0216e718(void) {}
void ActorUnkDMEQ::func_ov088_0216e738(void) {}

ActorUnkDMEQ::~ActorUnkDMEQ() {}
ActorProfileUnkDMEQ::~ActorProfileUnkDMEQ() {}
