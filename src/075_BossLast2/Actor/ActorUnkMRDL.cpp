//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkMRDL.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkMRDL);

ARM Actor *ActorProfileUnkMRDL::Create() {
    return new(HeapIndex_2) ActorUnkMRDL();
}

ARM ActorProfileUnkMRDL::ActorProfileUnkMRDL() :
    ActorProfile(ActorId_MRDL) {}

ARM ActorUnkMRDL::ActorUnkMRDL() {}

ARM void ActorUnkMRDL::func_ov075_0215dff4(void) {}
ARM void ActorUnkMRDL::func_ov075_0215e008(void) {}
ARM void ActorUnkMRDL::func_ov075_0215e044(void) {}
ARM void ActorUnkMRDL::func_ov075_0215e050(void) {}

ARM ActorUnkMRDL::~ActorUnkMRDL() {}
ARM ActorProfileUnkMRDL::~ActorProfileUnkMRDL() {}
