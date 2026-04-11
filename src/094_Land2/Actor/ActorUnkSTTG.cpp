//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSTTG.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkSTTG sActorProfileUnkSTTG;

ARM ActorProfileUnkSTTG *ActorProfileUnkSTTG::GetProfile() {
    return &sActorProfileUnkSTTG;
}

ARM Actor *ActorProfileUnkSTTG::Create() {
    return new(HeapIndex_2) ActorUnkSTTG();
}

ARM ActorProfileUnkSTTG::ActorProfileUnkSTTG() :
    ActorProfile_Derived1(ActorId_STTG) {}

ARM ActorUnkSTTG::ActorUnkSTTG() {}

ARM void ActorUnkSTTG::func_ov094_0216a4a0(void) {}
ARM void ActorUnkSTTG::func_ov094_0216a4fc(void) {}
ARM void ActorUnkSTTG::func_ov094_0216a5d4(void) {}
ARM void ActorUnkSTTG::func_ov094_0216a600(void) {}
ARM void ActorUnkSTTG::func_ov094_0216a74c(void) {}
ARM void ActorUnkSTTG::func_ov094_0216a760(void) {}
ARM void ActorUnkSTTG::func_ov094_0216a768(void) {}
ARM void ActorUnkSTTG::func_ov094_0216a788(void) {}
ARM void ActorUnkSTTG::func_ov094_0216a84c(void) {}
ARM void ActorUnkSTTG::func_ov094_0216a870(void) {}
ARM void ActorUnkSTTG::func_ov094_0216a928(void) {}
ARM void ActorUnkSTTG::func_ov094_0216aa78(void) {}
ARM void ActorUnkSTTG::func_ov094_0216aae4(void) {}
ARM void ActorUnkSTTG::func_ov094_0216ab34(void) {}
ARM void ActorUnkSTTG::func_ov094_0216ada8(void) {}
ARM void ActorUnkSTTG::func_ov094_0216aec0(void) {}
ARM void ActorUnkSTTG::func_ov094_0216aee8(void) {}
ARM void ActorUnkSTTG::func_ov094_0216b150(void) {}
ARM void ActorUnkSTTG::func_ov094_0216b188(void) {}
ARM void ActorUnkSTTG::func_ov094_0216b1a4(void) {}

ARM ActorUnkSTTG::~ActorUnkSTTG() {}
ARM ActorProfileUnkSTTG::~ActorProfileUnkSTTG() {}
