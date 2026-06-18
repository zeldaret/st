//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkIBSP.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkIBSP);

Actor *ActorProfileUnkIBSP::Create() {
    return new(HeapIndex_2) ActorUnkIBSP();
}

ActorProfileUnkIBSP::ActorProfileUnkIBSP() :
    ActorProfile(ActorId_IBSP) {}

ActorUnkIBSP::ActorUnkIBSP() {}

void ActorUnkIBSP::func_ov044_0212b84c(void) {}
void ActorUnkIBSP::func_ov044_0212b8a0(void) {}
void ActorUnkIBSP::func_ov044_0212b918(void) {}
void ActorUnkIBSP::func_ov044_0212bb74(void) {}

ActorUnkIBSP::~ActorUnkIBSP() {}
ActorProfileUnkIBSP::~ActorProfileUnkIBSP() {}
