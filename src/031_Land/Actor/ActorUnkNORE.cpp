//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkNORE.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkNORE);

ARM Actor *ActorProfileUnkNORE::Create() {
    return new(HeapIndex_2) ActorUnkNORE();
}

ARM ActorProfileUnkNORE::ActorProfileUnkNORE() :
    ActorProfile(ActorId_NORE) {}

ARM ActorUnkNORE::ActorUnkNORE() {}

ARM void ActorUnkNORE::func_ov031_020f7f8c(void) {}

ARM ActorUnkNORE::~ActorUnkNORE() {}
ARM ActorProfileUnkNORE::~ActorProfileUnkNORE() {}
