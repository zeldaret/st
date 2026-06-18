//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSNMB.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkSNMB);

Actor *ActorProfileUnkSNMB::Create() {
    return new(HeapIndex_2) ActorUnkSNMB();
}

ActorProfileUnkSNMB::ActorProfileUnkSNMB() :
    ActorProfile_Derived1(ActorId_SNMB) {}

ActorUnkSNMB::ActorUnkSNMB() {}

void ActorUnkSNMB::func_ov028_02143290(void) {}
void ActorUnkSNMB::func_ov028_021432b4(void) {}
void ActorUnkSNMB::func_ov028_021432e4(void) {}
void ActorUnkSNMB::func_ov028_02143440(void) {}
void ActorUnkSNMB::func_ov028_021434f0(void) {}
void ActorUnkSNMB::func_ov028_02143630(void) {}
void ActorUnkSNMB::func_ov028_021437a8(void) {}

ActorUnkSNMB::~ActorUnkSNMB() {}
ActorProfileUnkSNMB::~ActorProfileUnkSNMB() {}
