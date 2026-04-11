//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMF1.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkRMF1);

ARM Actor *ActorProfileUnkRMF1::Create() {
    return new(HeapIndex_2) ActorUnkRMF1();
}

ARM ActorProfileUnkRMF1::ActorProfileUnkRMF1() :
    ActorProfile_Derived1(ActorId_RMF1) {}

ARM ActorUnkRMF1::ActorUnkRMF1() {}

ARM void ActorUnkRMF1::func_ov064_02159414(void) {}

ARM ActorUnkRMF1::~ActorUnkRMF1() {}
ARM ActorProfileUnkRMF1::~ActorProfileUnkRMF1() {}
