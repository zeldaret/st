//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkEFIK.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkEFIK);

ARM Actor *ActorProfileUnkEFIK::Create() {
    return new(HeapIndex_2) ActorUnkEFIK();
}

ARM ActorProfileUnkEFIK::ActorProfileUnkEFIK() :
    ActorProfile(ActorId_EFIK) {}

ARM ActorUnkEFIK::ActorUnkEFIK() {}

ARM void ActorUnkEFIK::func_ov000_0209c100(void) {}
ARM void ActorUnkEFIK::func_ov000_0209c140(void) {}
ARM void ActorUnkEFIK::func_ov000_0209c2d0(void) {}
ARM void ActorUnkEFIK::func_ov000_0209c2e4(void) {}

ARM ActorUnkEFIK::~ActorUnkEFIK() {}
ARM ActorProfileUnkEFIK::~ActorProfileUnkEFIK() {}
