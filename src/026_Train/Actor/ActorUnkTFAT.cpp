//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkTFAT.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkTFAT sActorProfileUnkTFAT;

ARM ActorProfileUnkTFAT *ActorProfileUnkTFAT::GetProfile() {
    return &sActorProfileUnkTFAT;
}

ARM Actor *ActorProfileUnkTFAT::Create() {
    return new(HeapIndex_2) ActorUnkTFAT();
}

ARM ActorProfileUnkTFAT::ActorProfileUnkTFAT() :
    ActorProfile(ActorId_TFAT) {}

ARM ActorUnkTFAT::ActorUnkTFAT() {}

ARM void ActorUnkTFAT::func_ov026_02116668(void) {}
ARM void ActorUnkTFAT::func_ov026_0211667c(void) {}
ARM void ActorUnkTFAT::func_ov026_02116680(void) {}
ARM void ActorUnkTFAT::func_ov026_0211670c(void) {}
ARM void ActorUnkTFAT::func_ov026_02116720(void) {}
ARM void ActorUnkTFAT::func_ov026_02116728(void) {}

ARM ActorUnkTFAT::~ActorUnkTFAT() {}
ARM ActorProfileUnkTFAT::~ActorProfileUnkTFAT() {}
