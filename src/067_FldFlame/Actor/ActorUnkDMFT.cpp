//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkDMFT.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkDMFT sActorProfileUnkDMFT;

ARM ActorProfileUnkDMFT *ActorProfileUnkDMFT::GetProfile() {
    return &sActorProfileUnkDMFT;
}

ARM Actor *ActorProfileUnkDMFT::Create() {
    return new(HeapIndex_2) ActorUnkDMFT();
}

ARM ActorProfileUnkDMFT::ActorProfileUnkDMFT() :
    ActorProfile(ActorId_DMFT) {}

ARM ActorUnkDMFT::ActorUnkDMFT() {}

ARM void ActorUnkDMFT::func_ov067_0215a184(void) {}
ARM void ActorUnkDMFT::func_ov067_0215a1d0(void) {}
ARM void ActorUnkDMFT::func_ov067_0215a218(void) {}
ARM void ActorUnkDMFT::func_ov067_0215a22c(void) {}
ARM void ActorUnkDMFT::func_ov067_0215a2b0(void) {}
ARM void ActorUnkDMFT::func_ov067_0215a324(void) {}
ARM void ActorUnkDMFT::func_ov067_0215a328(void) {}
ARM void ActorUnkDMFT::func_ov067_0215a3b4(void) {}
ARM void ActorUnkDMFT::func_ov067_0215a428(void) {}
ARM void ActorUnkDMFT::func_ov067_0215a4e0(void) {}
ARM void ActorUnkDMFT::func_ov067_0215a54c(void) {}
ARM void ActorUnkDMFT::func_ov067_0215a614(void) {}
ARM void ActorUnkDMFT::func_ov067_0215a64c(void) {}
ARM void ActorUnkDMFT::func_ov067_0215a6fc(void) {}
ARM void ActorUnkDMFT::func_ov067_0215a7ac(void) {}
ARM void ActorUnkDMFT::func_ov067_0215a7dc(void) {}
ARM void ActorUnkDMFT::func_ov067_0215a828(void) {}
ARM void ActorUnkDMFT::func_ov067_0215a87c(void) {}
ARM void ActorUnkDMFT::func_ov067_0215aab4(void) {}

ARM ActorUnkDMFT::~ActorUnkDMFT() {}
ARM ActorProfileUnkDMFT::~ActorProfileUnkDMFT() {}
