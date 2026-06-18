//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkDSDS.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkDSDS);

Actor *ActorProfileUnkDSDS::Create() {
    return new(HeapIndex_2) ActorUnkDSDS();
}

ActorProfileUnkDSDS::ActorProfileUnkDSDS() :
    ActorProfile_Derived1(ActorId_DSDS) {}

ActorUnkDSDS::ActorUnkDSDS() {}

void ActorUnkDSDS::func_ov086_021544b8(void) {}

ActorUnkDSDS::~ActorUnkDSDS() {}
ActorProfileUnkDSDS::~ActorProfileUnkDSDS() {}
