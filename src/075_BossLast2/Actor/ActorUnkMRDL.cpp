//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkMRDL.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkMRDL);

Actor *ActorProfileUnkMRDL::Create() {
    return new(HeapIndex_2) ActorUnkMRDL();
}

ActorProfileUnkMRDL::ActorProfileUnkMRDL() :
    ActorProfile(ActorId_MRDL) {}

ActorUnkMRDL::ActorUnkMRDL() {}

void ActorUnkMRDL::func_ov075_0215dff4(void) {}
void ActorUnkMRDL::func_ov075_0215e008(void) {}
void ActorUnkMRDL::func_ov075_0215e044(void) {}
void ActorUnkMRDL::func_ov075_0215e050(void) {}

ActorUnkMRDL::~ActorUnkMRDL() {}
ActorProfileUnkMRDL::~ActorProfileUnkMRDL() {}
