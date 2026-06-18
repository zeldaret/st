//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMV1.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkRMV1);

Actor *ActorProfileUnkRMV1::Create() {
    return new(HeapIndex_2) ActorUnkRMV1();
}

ActorProfileUnkRMV1::ActorProfileUnkRMV1() :
    ActorProfile_Derived1(ActorId_RMV1) {}

ActorUnkRMV1::ActorUnkRMV1() {}

void ActorUnkRMV1::func_ov067_02159ef4(void) {}

ActorUnkRMV1::~ActorUnkRMV1() {}
ActorProfileUnkRMV1::~ActorProfileUnkRMV1() {}
