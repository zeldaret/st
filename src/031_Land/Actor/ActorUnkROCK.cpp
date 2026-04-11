//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkROCK.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkROCK);

ARM Actor *ActorProfileUnkROCK::Create() {
    return new(HeapIndex_2) ActorUnkROCK();
}

ARM ActorProfileUnkROCK::ActorProfileUnkROCK() :
    ActorProfile_Derived1(ActorId_ROCK) {}

ARM ActorUnkROCK::ActorUnkROCK() {}

ARM void ActorUnkROCK::func_ov031_020e897c(void) {}
ARM void ActorUnkROCK::func_ov031_020e89ac(void) {}
ARM void ActorUnkROCK::func_ov031_020e8a48(void) {}
ARM void ActorUnkROCK::func_ov031_020e8acc(void) {}
ARM void ActorUnkROCK::func_ov031_020e8afc(void) {}
ARM void ActorUnkROCK::func_ov031_020e8ba0(void) {}
ARM void ActorUnkROCK::func_ov031_020e8c08(void) {}

ARM ActorUnkROCK::~ActorUnkROCK() {}
ARM ActorProfileUnkROCK::~ActorProfileUnkROCK() {}
