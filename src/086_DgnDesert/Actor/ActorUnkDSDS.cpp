//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkDSDS.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkDSDS);

ARM Actor *ActorProfileUnkDSDS::Create() {
    return new(HeapIndex_2) ActorUnkDSDS();
}

ARM ActorProfileUnkDSDS::ActorProfileUnkDSDS() :
    ActorProfile_Derived1(ActorId_DSDS) {}

ARM ActorUnkDSDS::ActorUnkDSDS() {}

ARM void ActorUnkDSDS::func_ov086_021544b8(void) {}

ARM ActorUnkDSDS::~ActorUnkDSDS() {}
ARM ActorProfileUnkDSDS::~ActorProfileUnkDSDS() {}
