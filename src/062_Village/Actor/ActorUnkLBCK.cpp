//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkLBCK.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkLBCK sActorProfileUnkLBCK;

ARM ActorProfileUnkLBCK *ActorProfileUnkLBCK::GetProfile() {
    return &sActorProfileUnkLBCK;
}

ARM Actor *ActorProfileUnkLBCK::Create() {
    return new(HeapIndex_2) ActorUnkLBCK();
}

ARM ActorProfileUnkLBCK::ActorProfileUnkLBCK() :
    ActorProfile_Derived1(ActorId_LBCK) {}

ARM ActorUnkLBCK::ActorUnkLBCK() {}

ARM void ActorUnkLBCK::func_ov062_02159044(void) {}
ARM void ActorUnkLBCK::func_ov062_02159078(void) {}
ARM void ActorUnkLBCK::func_ov062_02159248(void) {}
ARM void ActorUnkLBCK::func_ov062_0215925c(void) {}
ARM void ActorUnkLBCK::func_ov062_02159270(void) {}
ARM void ActorUnkLBCK::func_ov062_0215927c(void) {}
ARM void ActorUnkLBCK::func_ov062_02159618(void) {}
ARM void ActorUnkLBCK::func_ov062_0215963c(void) {}
ARM void ActorUnkLBCK::func_ov062_021596e0(void) {}
ARM void ActorUnkLBCK::func_ov062_0215995c(void) {}
ARM void ActorUnkLBCK::func_ov062_021599a8(void) {}

ARM ActorUnkLBCK::~ActorUnkLBCK() {}
ARM ActorProfileUnkLBCK::~ActorProfileUnkLBCK() {}
