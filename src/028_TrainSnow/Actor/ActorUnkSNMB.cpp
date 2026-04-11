//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSNMB.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkSNMB sActorProfileUnkSNMB;

ARM ActorProfileUnkSNMB *ActorProfileUnkSNMB::GetProfile() {
    return &sActorProfileUnkSNMB;
}

ARM Actor *ActorProfileUnkSNMB::Create() {
    return new(HeapIndex_2) ActorUnkSNMB();
}

ARM ActorProfileUnkSNMB::ActorProfileUnkSNMB() :
    ActorProfile_Derived1(ActorId_SNMB) {}

ARM ActorUnkSNMB::ActorUnkSNMB() {}

ARM void ActorUnkSNMB::func_ov028_02143290(void) {}
ARM void ActorUnkSNMB::func_ov028_021432b4(void) {}
ARM void ActorUnkSNMB::func_ov028_021432e4(void) {}
ARM void ActorUnkSNMB::func_ov028_02143440(void) {}
ARM void ActorUnkSNMB::func_ov028_021434f0(void) {}
ARM void ActorUnkSNMB::func_ov028_02143630(void) {}
ARM void ActorUnkSNMB::func_ov028_021437a8(void) {}

ARM ActorUnkSNMB::~ActorUnkSNMB() {}
ARM ActorProfileUnkSNMB::~ActorProfileUnkSNMB() {}
