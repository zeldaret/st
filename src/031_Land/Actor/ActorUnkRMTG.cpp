//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMTG.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkRMTG);

ARM Actor *ActorProfileUnkRMTG::Create() {
    return new(HeapIndex_2) ActorUnkRMTG();
}

ARM ActorProfileUnkRMTG::ActorProfileUnkRMTG() :
    ActorProfile_Derived1(ActorId_RMTG) {}

ARM ActorUnkRMTG::ActorUnkRMTG() {}

ARM void ActorUnkRMTG::func_ov031_020ef8a0(void) {}
ARM void ActorUnkRMTG::func_ov031_020ef958(void) {}
ARM void ActorUnkRMTG::func_ov031_020ef990(void) {}

ARM ActorUnkRMTG::~ActorUnkRMTG() {}
ARM ActorProfileUnkRMTG::~ActorProfileUnkRMTG() {}
