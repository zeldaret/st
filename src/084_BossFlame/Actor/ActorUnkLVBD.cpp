//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkLVBD.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkLVBD sActorProfileUnkLVBD;

ARM ActorProfileUnkLVBD *ActorProfileUnkLVBD::GetProfile() {
    return &sActorProfileUnkLVBD;
}

ARM Actor *ActorProfileUnkLVBD::Create() {
    return new(HeapIndex_2) ActorUnkLVBD();
}

ARM ActorProfileUnkLVBD::ActorProfileUnkLVBD() :
    ActorProfile_Derived1(ActorId_LVBD) {}

ARM ActorUnkLVBD::ActorUnkLVBD() {}

ARM void ActorUnkLVBD::func_ov084_0215ec28(void) {}
ARM void ActorUnkLVBD::func_ov084_0215edc0(void) {}
ARM void ActorUnkLVBD::func_ov084_0215edd4(void) {}
ARM void ActorUnkLVBD::func_ov084_0215ede8(void) {}
ARM void ActorUnkLVBD::func_ov084_0215edfc(void) {}
ARM void ActorUnkLVBD::func_ov084_0215ef1c(void) {}
ARM void ActorUnkLVBD::func_ov084_0215ef20(void) {}
ARM void ActorUnkLVBD::func_ov084_0215f0c8(void) {}
ARM void ActorUnkLVBD::func_ov084_0215f108(void) {}
ARM void ActorUnkLVBD::func_ov084_0215f3bc(void) {}
ARM void ActorUnkLVBD::func_ov084_0215f3f8(void) {}
ARM void ActorUnkLVBD::func_ov084_0215f830(void) {}
ARM void ActorUnkLVBD::func_ov084_0215f954(void) {}
ARM void ActorUnkLVBD::func_ov084_0215f9ac(void) {}
ARM void ActorUnkLVBD::func_ov084_0215fad0(void) {}
ARM void ActorUnkLVBD::func_ov084_0215fca0(void) {}
ARM void ActorUnkLVBD::func_ov084_0215fdd4(void) {}
ARM void ActorUnkLVBD::func_ov084_02160054(void) {}
ARM void ActorUnkLVBD::func_ov084_0216009c(void) {}
ARM void ActorUnkLVBD::func_ov084_021600d8(void) {}
ARM void ActorUnkLVBD::func_ov084_02160148(void) {}
ARM void ActorUnkLVBD::func_ov084_0216019c(void) {}
ARM void ActorUnkLVBD::func_ov084_021601b4(void) {}
ARM void ActorUnkLVBD::func_ov084_021601c0(void) {}
ARM void ActorUnkLVBD::func_ov084_02160284(void) {}
ARM void ActorUnkLVBD::func_ov084_021602d8(void) {}
ARM void ActorUnkLVBD::func_ov084_02160314(void) {}
ARM void ActorUnkLVBD::func_ov084_02160384(void) {}
ARM void ActorUnkLVBD::func_ov084_021603a0(void) {}
ARM void ActorUnkLVBD::func_ov084_021603fc(void) {}

ARM ActorUnkLVBD::~ActorUnkLVBD() {}
ARM ActorProfileUnkLVBD::~ActorProfileUnkLVBD() {}
