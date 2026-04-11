//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMVD.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkRMVD);

ARM Actor *ActorProfileUnkRMVD::Create() {
    return new(HeapIndex_2) ActorUnkRMVD();
}

ARM ActorProfileUnkRMVD::ActorProfileUnkRMVD() :
    ActorProfile_Derived1(ActorId_RMVD) {}

ARM ActorUnkRMVD::ActorUnkRMVD() {}

ARM void ActorUnkRMVD::func_ov059_02162830(void) {}
ARM void ActorUnkRMVD::func_ov059_021628d0(void) {}
ARM void ActorUnkRMVD::func_ov059_021628fc(void) {}
ARM void ActorUnkRMVD::func_ov059_0216294c(void) {}

ARM ActorUnkRMVD::~ActorUnkRMVD() {}
ARM ActorProfileUnkRMVD::~ActorProfileUnkRMVD() {}
