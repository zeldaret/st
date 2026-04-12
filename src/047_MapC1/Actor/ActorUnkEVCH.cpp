//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkEVCH.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkEVCH);

ARM Actor *ActorProfileUnkEVCH::Create() {
    return new(HeapIndex_2) ActorUnkEVCH();
}

ARM ActorProfileUnkEVCH::ActorProfileUnkEVCH() :
    ActorProfile(ActorId_EVCH) {}

ARM ActorUnkEVCH::ActorUnkEVCH() {}

ARM void ActorUnkEVCH::func_ov047_02135224(void) {}
ARM void ActorUnkEVCH::func_ov047_0213522c(void) {}
ARM void ActorUnkEVCH::func_ov047_02135268(void) {}
ARM void ActorUnkEVCH::func_ov047_021352e4(void) {}
ARM void ActorUnkEVCH::func_ov047_021352f8(void) {}

ARM ActorUnkEVCH::~ActorUnkEVCH() {}
ARM ActorProfileUnkEVCH::~ActorProfileUnkEVCH() {}
