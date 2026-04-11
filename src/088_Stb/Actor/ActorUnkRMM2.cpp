//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMM2.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkRMM2);

ARM Actor *ActorProfileUnkRMM2::Create() {
    return new(HeapIndex_2) ActorUnkRMM2();
}

ARM ActorProfileUnkRMM2::ActorProfileUnkRMM2() :
    ActorProfile_Derived1(ActorId_RMM2) {}

ARM ActorUnkRMM2::ActorUnkRMM2() {}

ARM void ActorUnkRMM2::func_ov088_02172248(void) {}
ARM void ActorUnkRMM2::func_ov088_02172298(void) {}

ARM ActorUnkRMM2::~ActorUnkRMM2() {}
ARM ActorProfileUnkRMM2::~ActorProfileUnkRMM2() {}
