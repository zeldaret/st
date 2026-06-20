//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkTTFT.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkTTFT);

Actor *ActorProfileUnkTTFT::Create() {
    return new(HeapIndex_2) ActorUnkTTFT();
}

ActorProfileUnkTTFT::ActorProfileUnkTTFT() :
    ActorProfile(ActorId_TTFT) {}

ActorUnkTTFT::ActorUnkTTFT() {}

void ActorUnkTTFT::func_ov030_0214d6c0(void) {}
void ActorUnkTTFT::func_ov030_0214d710(void) {}
void ActorUnkTTFT::func_ov030_0214d724(void) {}

ActorUnkTTFT::~ActorUnkTTFT() {}
ActorProfileUnkTTFT::~ActorProfileUnkTTFT() {}
