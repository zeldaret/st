//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMM2.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkRMM2);

Actor *ActorProfileUnkRMM2::Create() {
    return new(HeapIndex_2) ActorUnkRMM2();
}

ActorProfileUnkRMM2::ActorProfileUnkRMM2() :
    ActorProfile_Derived1(ActorId_RMM2) {}

ActorUnkRMM2::ActorUnkRMM2() {}

void ActorUnkRMM2::func_ov088_02172248(void) {}
void ActorUnkRMM2::func_ov088_02172298(void) {}

ActorUnkRMM2::~ActorUnkRMM2() {}
ActorProfileUnkRMM2::~ActorProfileUnkRMM2() {}
