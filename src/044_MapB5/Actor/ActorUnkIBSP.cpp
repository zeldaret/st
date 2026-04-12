//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkIBSP.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkIBSP);

ARM Actor *ActorProfileUnkIBSP::Create() {
    return new(HeapIndex_2) ActorUnkIBSP();
}

ARM ActorProfileUnkIBSP::ActorProfileUnkIBSP() :
    ActorProfile(ActorId_IBSP) {}

ARM ActorUnkIBSP::ActorUnkIBSP() {}

ARM void ActorUnkIBSP::func_ov044_0212b84c(void) {}
ARM void ActorUnkIBSP::func_ov044_0212b8a0(void) {}
ARM void ActorUnkIBSP::func_ov044_0212b918(void) {}
ARM void ActorUnkIBSP::func_ov044_0212bb74(void) {}

ARM ActorUnkIBSP::~ActorUnkIBSP() {}
ARM ActorProfileUnkIBSP::~ActorProfileUnkIBSP() {}
