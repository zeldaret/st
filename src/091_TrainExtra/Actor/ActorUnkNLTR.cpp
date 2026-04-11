//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkNLTR.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkNLTR sActorProfileUnkNLTR;

ARM ActorProfileUnkNLTR *ActorProfileUnkNLTR::GetProfile() {
    return &sActorProfileUnkNLTR;
}

ARM Actor *ActorProfileUnkNLTR::Create() {
    return new(HeapIndex_2) ActorUnkNLTR();
}

ARM ActorProfileUnkNLTR::ActorProfileUnkNLTR() :
    ActorProfile_Derived1(ActorId_NLTR) {}

ARM ActorUnkNLTR::ActorUnkNLTR() {}

ARM void ActorUnkNLTR::func_ov091_0216b3bc(void) {}
ARM void ActorUnkNLTR::func_ov091_0216b4d8(void) {}
ARM void ActorUnkNLTR::func_ov091_0216b518(void) {}
ARM void ActorUnkNLTR::func_ov091_0216b52c(void) {}
ARM void ActorUnkNLTR::func_ov091_0216b690(void) {}
ARM void ActorUnkNLTR::func_ov091_0216b70c(void) {}
ARM void ActorUnkNLTR::func_ov091_0216b78c(void) {}
ARM void ActorUnkNLTR::func_ov091_0216b7ac(void) {}
ARM void ActorUnkNLTR::func_ov091_0216b7b0(void) {}
ARM void ActorUnkNLTR::func_ov091_0216b8f4(void) {}
ARM void ActorUnkNLTR::func_ov091_0216b9e4(void) {}
ARM void ActorUnkNLTR::func_ov091_0216b9e8(void) {}
ARM void ActorUnkNLTR::func_ov091_0216ba14(void) {}
ARM void ActorUnkNLTR::func_ov091_0216ba6c(void) {}
ARM void ActorUnkNLTR::func_ov091_0216ba8c(void) {}
ARM void ActorUnkNLTR::func_ov091_0216bb94(void) {}
ARM void ActorUnkNLTR::func_ov091_0216bc2c(void) {}
ARM void ActorUnkNLTR::func_ov091_0216bd3c(void) {}
ARM void ActorUnkNLTR::func_ov091_0216be24(void) {}
ARM void ActorUnkNLTR::func_ov091_0216be40(void) {}
ARM void ActorUnkNLTR::func_ov091_0216bfac(void) {}
ARM void ActorUnkNLTR::func_ov091_0216bfd0(void) {}
ARM void ActorUnkNLTR::func_ov091_0216bfe0(void) {}
ARM void ActorUnkNLTR::func_ov091_0216bfe8(void) {}

ARM ActorUnkNLTR::~ActorUnkNLTR() {}
ARM ActorProfileUnkNLTR::~ActorProfileUnkNLTR() {}
