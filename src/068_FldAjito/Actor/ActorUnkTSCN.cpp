//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkTSCN.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkTSCN sActorProfileUnkTSCN;

ARM ActorProfileUnkTSCN *ActorProfileUnkTSCN::GetProfile() {
    return &sActorProfileUnkTSCN;
}

ARM Actor *ActorProfileUnkTSCN::Create() {
    return new(HeapIndex_2) ActorUnkTSCN();
}

ARM ActorProfileUnkTSCN::ActorProfileUnkTSCN() :
    ActorProfile(ActorId_TSCN) {}

ARM ActorUnkTSCN::ActorUnkTSCN() {}

ARM void ActorUnkTSCN::func_ov068_0215a8c4(void) {}
ARM void ActorUnkTSCN::func_ov068_0215a8e0(void) {}

ARM ActorUnkTSCN::~ActorUnkTSCN() {}
ARM ActorProfileUnkTSCN::~ActorProfileUnkTSCN() {}
