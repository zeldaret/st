//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkDSWT.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkDSWT);

Actor *ActorProfileUnkDSWT::Create() {
    return new(HeapIndex_2) ActorUnkDSWT();
}

ActorProfileUnkDSWT::ActorProfileUnkDSWT() :
    ActorProfile_Derived1(ActorId_DSWT) {}

ActorUnkDSWT::ActorUnkDSWT() {}

void ActorUnkDSWT::func_ov082_02157ae8(void) {}

ActorUnkDSWT::~ActorUnkDSWT() {}
ActorProfileUnkDSWT::~ActorProfileUnkDSWT() {}
