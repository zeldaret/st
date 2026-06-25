//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMBC.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkRMBC);

Actor *ActorProfileUnkRMBC::Create() {
    return new(HeapIndex_2) ActorUnkRMBC();
}

ActorProfileUnkRMBC::ActorProfileUnkRMBC() :
    ActorProfile_Derived1(ActorId_RMBC) {}

ActorUnkRMBC::ActorUnkRMBC() {}

void ActorUnkRMBC::func_ov062_0215a464(void) {}

ActorUnkRMBC::~ActorUnkRMBC() {}
ActorProfileUnkRMBC::~ActorProfileUnkRMBC() {}
