//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkPCTG.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkPCTG sActorProfileUnkPCTG;

ARM ActorProfileUnkPCTG *ActorProfileUnkPCTG::GetProfile() {
    return &sActorProfileUnkPCTG;
}

ARM Actor *ActorProfileUnkPCTG::Create() {
    return new(HeapIndex_2) ActorUnkPCTG();
}

ARM ActorProfileUnkPCTG::ActorProfileUnkPCTG() :
    ActorProfile_Derived1(ActorId_PCTG) {}

ARM ActorUnkPCTG::ActorUnkPCTG() {}

ARM void ActorUnkPCTG::func_ov094_0216b484(void) {}
ARM void ActorUnkPCTG::func_ov094_0216b69c(void) {}
ARM void ActorUnkPCTG::func_ov094_0216b6dc(void) {}
ARM void ActorUnkPCTG::func_ov094_0216b714(void) {}
ARM void ActorUnkPCTG::func_ov094_0216b718(void) {}
ARM void ActorUnkPCTG::func_ov094_0216b858(void) {}
ARM void ActorUnkPCTG::func_ov094_0216b890(void) {}
ARM void ActorUnkPCTG::func_ov094_0216be38(void) {}
ARM void ActorUnkPCTG::func_ov094_0216bf58(void) {}
ARM void ActorUnkPCTG::func_ov094_0216bfa4(void) {}
ARM void ActorUnkPCTG::func_ov094_0216c1c8(void) {}
ARM void ActorUnkPCTG::func_ov094_0216c34c(void) {}
ARM void ActorUnkPCTG::func_ov094_0216c36c(void) {}

ARM ActorUnkPCTG::~ActorUnkPCTG() {}
ARM ActorProfileUnkPCTG::~ActorProfileUnkPCTG() {}
