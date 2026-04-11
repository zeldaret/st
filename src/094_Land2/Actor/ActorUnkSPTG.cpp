//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSPTG.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkSPTG sActorProfileUnkSPTG;

ARM ActorProfileUnkSPTG *ActorProfileUnkSPTG::GetProfile() {
    return &sActorProfileUnkSPTG;
}

ARM Actor *ActorProfileUnkSPTG::Create() {
    return new(HeapIndex_2) ActorUnkSPTG();
}

ARM ActorProfileUnkSPTG::ActorProfileUnkSPTG() :
    ActorProfile_Derived1(ActorId_SPTG) {}

ARM ActorUnkSPTG::ActorUnkSPTG() {}

ARM void ActorUnkSPTG::func_ov094_0216c7cc(void) {}
ARM void ActorUnkSPTG::func_ov094_0216c828(void) {}
ARM void ActorUnkSPTG::func_ov094_0216c900(void) {}
ARM void ActorUnkSPTG::func_ov094_0216c92c(void) {}
ARM void ActorUnkSPTG::func_ov094_0216ce44(void) {}
ARM void ActorUnkSPTG::func_ov094_0216ce58(void) {}
ARM void ActorUnkSPTG::func_ov094_0216ce98(void) {}
ARM void ActorUnkSPTG::func_ov094_0216ceb8(void) {}
ARM void ActorUnkSPTG::func_ov094_0216cfb0(void) {}
ARM void ActorUnkSPTG::func_ov094_0216cfb4(void) {}
ARM void ActorUnkSPTG::func_ov094_0216cfd8(void) {}
ARM void ActorUnkSPTG::func_ov094_0216cfdc(void) {}
ARM void ActorUnkSPTG::func_ov094_0216d02c(void) {}
ARM void ActorUnkSPTG::func_ov094_0216d0b4(void) {}
ARM void ActorUnkSPTG::func_ov094_0216d310(void) {}
ARM void ActorUnkSPTG::func_ov094_0216d314(void) {}
ARM void ActorUnkSPTG::func_ov094_0216d388(void) {}
ARM void ActorUnkSPTG::func_ov094_0216d3d8(void) {}
ARM void ActorUnkSPTG::func_ov094_0216d674(void) {}
ARM void ActorUnkSPTG::func_ov094_0216d75c(void) {}
ARM void ActorUnkSPTG::func_ov094_0216d784(void) {}
ARM void ActorUnkSPTG::func_ov094_0216da3c(void) {}
ARM void ActorUnkSPTG::func_ov094_0216da74(void) {}
ARM void ActorUnkSPTG::func_ov094_0216da90(void) {}

ARM ActorUnkSPTG::~ActorUnkSPTG() {}
ARM ActorProfileUnkSPTG::~ActorProfileUnkSPTG() {}
