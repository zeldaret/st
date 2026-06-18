//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkTSCN.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkTSCN);

Actor *ActorProfileUnkTSCN::Create() {
    return new(HeapIndex_2) ActorUnkTSCN();
}

ActorProfileUnkTSCN::ActorProfileUnkTSCN() :
    ActorProfile(ActorId_TSCN) {}

ActorUnkTSCN::ActorUnkTSCN() {}

void ActorUnkTSCN::func_ov068_0215a8c4(void) {}
void ActorUnkTSCN::func_ov068_0215a8e0(void) {}

ActorUnkTSCN::~ActorUnkTSCN() {}
ActorProfileUnkTSCN::~ActorProfileUnkTSCN() {}
