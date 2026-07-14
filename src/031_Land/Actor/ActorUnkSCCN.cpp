//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSCCN.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkSCCN);

Actor *ActorProfileUnkSCCN::Create() {
    return new(HeapIndex_2) ActorUnkSCCN();
}

ActorProfileUnkSCCN::ActorProfileUnkSCCN() :
    ActorProfile(ActorId_SCCN) {}

ActorUnkSCCN::ActorUnkSCCN() {}

void ActorUnkSCCN::func_ov031_020efaa0(void) {}

ActorUnkSCCN::~ActorUnkSCCN() {}
ActorProfileUnkSCCN::~ActorProfileUnkSCCN() {}
