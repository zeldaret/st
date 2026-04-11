//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMV1.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkRMV1);

ARM Actor *ActorProfileUnkRMV1::Create() {
    return new(HeapIndex_2) ActorUnkRMV1();
}

ARM ActorProfileUnkRMV1::ActorProfileUnkRMV1() :
    ActorProfile_Derived1(ActorId_RMV1) {}

ARM ActorUnkRMV1::ActorUnkRMV1() {}

ARM void ActorUnkRMV1::func_ov067_02159ef4(void) {}

ARM ActorUnkRMV1::~ActorUnkRMV1() {}
ARM ActorProfileUnkRMV1::~ActorProfileUnkRMV1() {}
