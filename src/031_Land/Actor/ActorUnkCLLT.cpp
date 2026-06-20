//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkCLLT.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkCLLT);

Actor *ActorProfileUnkCLLT::Create() {
    return new(HeapIndex_2) ActorUnkCLLT();
}

ActorProfileUnkCLLT::ActorProfileUnkCLLT() :
    ActorProfile(ActorId_CLLT) {}

ActorUnkCLLT::ActorUnkCLLT() {}

void ActorUnkCLLT::func_ov031_020fb38c(void) {}
void ActorUnkCLLT::func_ov031_020fb3c8(void) {}
void ActorUnkCLLT::func_ov031_020fb40c(void) {}

ActorUnkCLLT::~ActorUnkCLLT() {}
ActorProfileUnkCLLT::~ActorProfileUnkCLLT() {}
