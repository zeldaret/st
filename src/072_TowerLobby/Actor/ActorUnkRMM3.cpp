//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMM3.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkRMM3);

ARM Actor *ActorProfileUnkRMM3::Create() {
    return new(HeapIndex_2) ActorUnkRMM3();
}

ARM ActorProfileUnkRMM3::ActorProfileUnkRMM3() :
    ActorProfile_Derived1(ActorId_RMM3) {}

ARM ActorUnkRMM3::ActorUnkRMM3() {}

ARM void ActorUnkRMM3::func_ov072_0215220c(void) {}
ARM void ActorUnkRMM3::func_ov072_021522dc(void) {}
ARM void ActorUnkRMM3::func_ov072_0215233c(void) {}
ARM void ActorUnkRMM3::func_ov072_02152350(void) {}

ARM ActorUnkRMM3::~ActorUnkRMM3() {}
ARM ActorProfileUnkRMM3::~ActorProfileUnkRMM3() {}
