//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkWIDR.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkWIDR sActorProfileUnkWIDR;

ARM ActorProfileUnkWIDR *ActorProfileUnkWIDR::GetProfile() {
    return &sActorProfileUnkWIDR;
}

ARM Actor *ActorProfileUnkWIDR::Create() {
    return new(HeapIndex_2) ActorUnkWIDR();
}

ARM ActorProfileUnkWIDR::ActorProfileUnkWIDR() :
    ActorProfile_Derived1(ActorId_WIDR) {}

ARM ActorUnkWIDR::ActorUnkWIDR() {}

ARM void ActorUnkWIDR::func_ov084_0215b0a4(void) {}
ARM void ActorUnkWIDR::func_ov084_0215b314(void) {}
ARM void ActorUnkWIDR::func_ov084_0215b328(void) {}
ARM void ActorUnkWIDR::func_ov084_0215b33c(void) {}
ARM void ActorUnkWIDR::func_ov084_0215b350(void) {}
ARM void ActorUnkWIDR::func_ov084_0215b3f4(void) {}
ARM void ActorUnkWIDR::func_ov084_0215b430(void) {}
ARM void ActorUnkWIDR::func_ov084_0215b548(void) {}
ARM void ActorUnkWIDR::func_ov084_0215b5dc(void) {}
ARM void ActorUnkWIDR::func_ov084_0215b648(void) {}
ARM void ActorUnkWIDR::func_ov084_0215b690(void) {}
ARM void ActorUnkWIDR::func_ov084_0215b748(void) {}
ARM void ActorUnkWIDR::func_ov084_0215b764(void) {}
ARM void ActorUnkWIDR::func_ov084_0215b7ac(void) {}
ARM void ActorUnkWIDR::func_ov084_0215b800(void) {}
ARM void ActorUnkWIDR::func_ov084_0215b814(void) {}
ARM void ActorUnkWIDR::func_ov084_0215ba44(void) {}
ARM void ActorUnkWIDR::func_ov084_0215ba5c(void) {}
ARM void ActorUnkWIDR::func_ov084_0215babc(void) {}
ARM void ActorUnkWIDR::func_ov084_0215bb6c(void) {}
ARM void ActorUnkWIDR::func_ov084_0215bd2c(void) {}
ARM void ActorUnkWIDR::func_ov084_0215bdec(void) {}
ARM void ActorUnkWIDR::func_ov084_0215bed0(void) {}
ARM void ActorUnkWIDR::func_ov084_0215bee8(void) {}
ARM void ActorUnkWIDR::func_ov084_0215bf98(void) {}
ARM void ActorUnkWIDR::func_ov084_0215bfe0(void) {}
ARM void ActorUnkWIDR::func_ov084_0215c014(void) {}
ARM void ActorUnkWIDR::func_ov084_0215c05c(void) {}
ARM void ActorUnkWIDR::func_ov084_0215c09c(void) {}
ARM void ActorUnkWIDR::func_ov084_0215c0ac(void) {}
ARM void ActorUnkWIDR::func_ov084_0215c0d4(void) {}
ARM void ActorUnkWIDR::func_ov084_0215c12c(void) {}
ARM void ActorUnkWIDR::func_ov084_0215c160(void) {}
ARM void ActorUnkWIDR::func_ov084_0215c198(void) {}
ARM void ActorUnkWIDR::func_ov084_0215c1d4(void) {}
ARM void ActorUnkWIDR::func_ov084_0215c520(void) {}
ARM void ActorUnkWIDR::func_ov084_0215c544(void) {}
ARM void ActorUnkWIDR::func_ov084_0215c554(void) {}
ARM void ActorUnkWIDR::func_ov084_0215c578(void) {}
ARM void ActorUnkWIDR::func_ov084_0215c594(void) {}
ARM void ActorUnkWIDR::func_ov084_0215c5f8(void) {}

ARM ActorUnkWIDR::~ActorUnkWIDR() {}
ARM ActorProfileUnkWIDR::~ActorProfileUnkWIDR() {}
