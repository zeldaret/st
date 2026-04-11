//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMM1.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkRMM1 sActorProfileUnkRMM1;

ARM ActorProfileUnkRMM1 *ActorProfileUnkRMM1::GetProfile() {
    return &sActorProfileUnkRMM1;
}

ARM Actor *ActorProfileUnkRMM1::Create() {
    return new(HeapIndex_2) ActorUnkRMM1();
}

ARM ActorProfileUnkRMM1::ActorProfileUnkRMM1() :
    ActorProfile_Derived1(ActorId_RMM1) {}

ARM ActorUnkRMM1::ActorUnkRMM1() {}

ARM void ActorUnkRMM1::func_ov034_02119018(void) {}
ARM void ActorUnkRMM1::func_ov034_02119090(void) {}
ARM void ActorUnkRMM1::func_ov034_0211911c(void) {}
ARM void ActorUnkRMM1::func_ov034_02119238(void) {}
ARM void ActorUnkRMM1::func_ov034_02119278(void) {}

ARM ActorUnkRMM1::~ActorUnkRMM1() {}
ARM ActorProfileUnkRMM1::~ActorProfileUnkRMM1() {}
