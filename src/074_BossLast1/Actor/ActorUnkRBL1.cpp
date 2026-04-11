//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRBL1.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkRBL1 sActorProfileUnkRBL1;

ARM ActorProfileUnkRBL1 *ActorProfileUnkRBL1::GetProfile() {
    return &sActorProfileUnkRBL1;
}

ARM Actor *ActorProfileUnkRBL1::Create() {
    return new(HeapIndex_2) ActorUnkRBL1();
}

ARM ActorProfileUnkRBL1::ActorProfileUnkRBL1() :
    ActorProfile_Derived1(ActorId_RBL1) {}

ARM ActorUnkRBL1::ActorUnkRBL1() {}

ARM void ActorUnkRBL1::func_ov074_02150c64(void) {}
ARM void ActorUnkRBL1::func_ov074_02150c78(void) {}
ARM void ActorUnkRBL1::func_ov074_02150ebc(void) {}
ARM void ActorUnkRBL1::func_ov074_02151158(void) {}
ARM void ActorUnkRBL1::func_ov074_0215116c(void) {}
ARM void ActorUnkRBL1::func_ov074_02151180(void) {}
ARM void ActorUnkRBL1::func_ov074_02151374(void) {}
ARM void ActorUnkRBL1::func_ov074_021513b4(void) {}
ARM void ActorUnkRBL1::func_ov074_02151458(void) {}
ARM void ActorUnkRBL1::func_ov074_021514b4(void) {}
ARM void ActorUnkRBL1::func_ov074_02151630(void) {}
ARM void ActorUnkRBL1::func_ov074_021516e4(void) {}
ARM void ActorUnkRBL1::func_ov074_0215174c(void) {}
ARM void ActorUnkRBL1::func_ov074_021517ec(void) {}
ARM void ActorUnkRBL1::func_ov074_02151830(void) {}
ARM void ActorUnkRBL1::func_ov074_021518a8(void) {}
ARM void ActorUnkRBL1::func_ov074_02151920(void) {}
ARM void ActorUnkRBL1::func_ov074_02151990(void) {}
ARM void ActorUnkRBL1::func_ov074_021519f4(void) {}
ARM void ActorUnkRBL1::func_ov074_02151a18(void) {}
ARM void ActorUnkRBL1::func_ov074_02151a28(void) {}
ARM void ActorUnkRBL1::func_ov074_02151a4c(void) {}
ARM void ActorUnkRBL1::func_ov074_02151ab0(void) {}

ARM ActorUnkRBL1::~ActorUnkRBL1() {}
ARM ActorProfileUnkRBL1::~ActorProfileUnkRBL1() {}
