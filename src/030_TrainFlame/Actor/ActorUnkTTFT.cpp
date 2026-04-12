//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkTTFT.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkTTFT);

ARM Actor *ActorProfileUnkTTFT::Create() {
    return new(HeapIndex_2) ActorUnkTTFT();
}

ARM ActorProfileUnkTTFT::ActorProfileUnkTTFT() :
    ActorProfile(ActorId_TTFT) {}

ARM ActorUnkTTFT::ActorUnkTTFT() {}

ARM void ActorUnkTTFT::func_ov030_0214d6c0(void) {}
ARM void ActorUnkTTFT::func_ov030_0214d710(void) {}
ARM void ActorUnkTTFT::func_ov030_0214d724(void) {}

ARM ActorUnkTTFT::~ActorUnkTTFT() {}
ARM ActorProfileUnkTTFT::~ActorProfileUnkTTFT() {}
