//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkCLZN.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkCLZN);

ARM Actor *ActorProfileUnkCLZN::Create() {
    return new(HeapIndex_2) ActorUnkCLZN();
}

ARM ActorProfileUnkCLZN::ActorProfileUnkCLZN() :
    ActorProfile(ActorId_CLZN) {}

ARM ActorUnkCLZN::ActorUnkCLZN() {}

ARM void ActorUnkCLZN::func_ov021_020f3940(void) {}
ARM void ActorUnkCLZN::func_ov021_020f3964(void) {}

ARM ActorUnkCLZN::~ActorUnkCLZN() {}
ARM ActorProfileUnkCLZN::~ActorProfileUnkCLZN() {}
