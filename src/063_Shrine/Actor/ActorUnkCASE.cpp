//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkCASE.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkCASE sActorProfileUnkCASE;

ARM ActorProfileUnkCASE *ActorProfileUnkCASE::GetProfile() {
    return &sActorProfileUnkCASE;
}

ARM Actor *ActorProfileUnkCASE::Create() {
    return new(HeapIndex_2) ActorUnkCASE();
}

ARM ActorProfileUnkCASE::ActorProfileUnkCASE() :
    ActorProfile_Derived1(ActorId_CASE) {}

ARM ActorUnkCASE::ActorUnkCASE() {}

ARM void ActorUnkCASE::func_ov063_0215ab70(void) {}
ARM void ActorUnkCASE::func_ov063_0215aba4(void) {}
ARM void ActorUnkCASE::func_ov063_0215abd8(void) {}
ARM void ActorUnkCASE::func_ov063_0215ac4c(void) {}
ARM void ActorUnkCASE::func_ov063_0215ac68(void) {}
ARM void ActorUnkCASE::func_ov063_0215ac8c(void) {}
ARM void ActorUnkCASE::func_ov063_0215acc8(void) {}
ARM void ActorUnkCASE::func_ov063_0215acec(void) {}
ARM void ActorUnkCASE::func_ov063_0215ae6c(void) {}
ARM void ActorUnkCASE::func_ov063_0215ae80(void) {}
ARM void ActorUnkCASE::func_ov063_0215ae94(void) {}
ARM void ActorUnkCASE::func_ov063_0215aefc(void) {}
ARM void ActorUnkCASE::func_ov063_0215af54(void) {}
ARM void ActorUnkCASE::func_ov063_0215af58(void) {}
ARM void ActorUnkCASE::func_ov063_0215af5c(void) {}
ARM void ActorUnkCASE::func_ov063_0215af60(void) {}
ARM void ActorUnkCASE::func_ov063_0215afa4(void) {}
ARM void ActorUnkCASE::func_ov063_0215afb8(void) {}
ARM void ActorUnkCASE::func_ov063_0215b054(void) {}
ARM void ActorUnkCASE::func_ov063_0215b090(void) {}
ARM void ActorUnkCASE::func_ov063_0215b1bc(void) {}
ARM void ActorUnkCASE::func_ov063_0215b244(void) {}
ARM void ActorUnkCASE::func_ov063_0215b2b0(void) {}
ARM void ActorUnkCASE::func_ov063_0215b2c4(void) {}
ARM void ActorUnkCASE::func_ov063_0215b2c8(void) {}
ARM void ActorUnkCASE::func_ov063_0215b2ec(void) {}
ARM void ActorUnkCASE::func_ov063_0215b624(void) {}
ARM void ActorUnkCASE::func_ov063_0215b6c8(void) {}
ARM void ActorUnkCASE::func_ov063_0215b724(void) {}
ARM void ActorUnkCASE::func_ov063_0215b7cc(void) {}
ARM void ActorUnkCASE::func_ov063_0215b814(void) {}
ARM void ActorUnkCASE::func_ov063_0215b854(void) {}
ARM void ActorUnkCASE::func_ov063_0215b8e8(void) {}
ARM void ActorUnkCASE::func_ov063_0215b99c(void) {}
ARM void ActorUnkCASE::func_ov063_0215ba64(void) {}
ARM void ActorUnkCASE::func_ov063_0215bab0(void) {}

ARM ActorUnkCASE::~ActorUnkCASE() {}
ARM ActorProfileUnkCASE::~ActorProfileUnkCASE() {}
