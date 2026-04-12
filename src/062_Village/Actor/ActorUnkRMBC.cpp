//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMBC.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkRMBC);

ARM Actor *ActorProfileUnkRMBC::Create() {
    return new(HeapIndex_2) ActorUnkRMBC();
}

ARM ActorProfileUnkRMBC::ActorProfileUnkRMBC() :
    ActorProfile_Derived1(ActorId_RMBC) {}

ARM ActorUnkRMBC::ActorUnkRMBC() {}

ARM void ActorUnkRMBC::func_ov062_0215a464(void) {}

ARM ActorUnkRMBC::~ActorUnkRMBC() {}
ARM ActorProfileUnkRMBC::~ActorProfileUnkRMBC() {}
