//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMTG.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkRMTG);

Actor *ActorProfileUnkRMTG::Create() {
    return new(HeapIndex_2) ActorUnkRMTG();
}

ActorProfileUnkRMTG::ActorProfileUnkRMTG() :
    ActorProfile_Derived1(ActorId_RMTG) {}

ActorUnkRMTG::ActorUnkRMTG() {}

void ActorUnkRMTG::func_ov031_020ef8a0(void) {}
void ActorUnkRMTG::func_ov031_020ef958(void) {}
void ActorUnkRMTG::func_ov031_020ef990(void) {}

ActorUnkRMTG::~ActorUnkRMTG() {}
ActorProfileUnkRMTG::~ActorProfileUnkRMTG() {}
