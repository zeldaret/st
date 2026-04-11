//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkNTUB.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkNTUB sActorProfileUnkNTUB;

ARM ActorProfileUnkNTUB *ActorProfileUnkNTUB::GetProfile() {
    return &sActorProfileUnkNTUB;
}

ARM Actor *ActorProfileUnkNTUB::Create() {
    return new(HeapIndex_2) ActorUnkNTUB();
}

ARM ActorProfileUnkNTUB::ActorProfileUnkNTUB() :
    ActorProfile(ActorId_NTUB) {}

ARM ActorUnkNTUB::ActorUnkNTUB() {}

ARM void ActorUnkNTUB::func_ov031_020f0cf0(void) {}
ARM void ActorUnkNTUB::func_ov031_020f0d04(void) {}
ARM void ActorUnkNTUB::func_ov031_020f0d2c(void) {}
ARM void ActorUnkNTUB::func_ov031_020f0d80(void) {}
ARM void ActorUnkNTUB::func_ov031_020f0db8(void) {}
ARM void ActorUnkNTUB::func_ov031_020f0de8(void) {}
ARM void ActorUnkNTUB::func_ov031_020f0df4(void) {}
ARM void ActorUnkNTUB::func_ov031_020f0e00(void) {}
ARM void ActorUnkNTUB::func_ov031_020f0e0c(void) {}
ARM void ActorUnkNTUB::func_ov031_020f0e18(void) {}
ARM void ActorUnkNTUB::func_ov031_020f0e24(void) {}
ARM void ActorUnkNTUB::func_ov031_020f0e30(void) {}
ARM void ActorUnkNTUB::func_ov031_020f0e3c(void) {}
ARM void ActorUnkNTUB::func_ov031_020f0e48(void) {}
ARM void ActorUnkNTUB::func_ov031_020f0e5c(void) {}
ARM void ActorUnkNTUB::func_ov031_020f0e70(void) {}
ARM void ActorUnkNTUB::func_ov031_020f0f44(void) {}

ARM ActorUnkNTUB::~ActorUnkNTUB() {}
ARM ActorProfileUnkNTUB::~ActorProfileUnkNTUB() {}
