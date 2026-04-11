//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkCLLT.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkCLLT sActorProfileUnkCLLT;

ARM ActorProfileUnkCLLT *ActorProfileUnkCLLT::GetProfile() {
    return &sActorProfileUnkCLLT;
}

ARM Actor *ActorProfileUnkCLLT::Create() {
    return new(HeapIndex_2) ActorUnkCLLT();
}

ARM ActorProfileUnkCLLT::ActorProfileUnkCLLT() :
    ActorProfile(ActorId_CLLT) {}

ARM ActorUnkCLLT::ActorUnkCLLT() {}

ARM void ActorUnkCLLT::func_ov031_020fb38c(void) {}
ARM void ActorUnkCLLT::func_ov031_020fb3c8(void) {}
ARM void ActorUnkCLLT::func_ov031_020fb40c(void) {}

ARM ActorUnkCLLT::~ActorUnkCLLT() {}
ARM ActorProfileUnkCLLT::~ActorProfileUnkCLLT() {}
