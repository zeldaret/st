//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkBLON.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkBLON sActorProfileUnkBLON;

ARM ActorProfileUnkBLON *ActorProfileUnkBLON::GetProfile() {
    return &sActorProfileUnkBLON;
}

ARM Actor *ActorProfileUnkBLON::Create() {
    return new(HeapIndex_2) ActorUnkBLON();
}

ARM ActorProfileUnkBLON::ActorProfileUnkBLON() :
    ActorProfile(ActorId_BLON) {}

ARM ActorUnkBLON::ActorUnkBLON() {}

ARM void ActorUnkBLON::func_ov093_02177618(void) {}
ARM void ActorUnkBLON::func_ov093_02177640(void) {}
ARM void ActorUnkBLON::func_ov093_021776ec(void) {}
ARM void ActorUnkBLON::func_ov093_02177700(void) {}
ARM void ActorUnkBLON::func_ov093_02177724(void) {}
ARM void ActorUnkBLON::func_ov093_021778c4(void) {}

ARM ActorUnkBLON::~ActorUnkBLON() {}
ARM ActorProfileUnkBLON::~ActorProfileUnkBLON() {}
