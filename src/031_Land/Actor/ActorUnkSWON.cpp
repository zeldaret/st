//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSWON.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkSWON);

ARM Actor *ActorProfileUnkSWON::Create() {
    return new(HeapIndex_2) ActorUnkSWON();
}

ARM ActorProfileUnkSWON::ActorProfileUnkSWON() :
    ActorProfile(ActorId_SWON) {}

ARM ActorUnkSWON::ActorUnkSWON() {}

ARM void ActorUnkSWON::func_ov031_020f7e34(void) {}

ARM ActorUnkSWON::~ActorUnkSWON() {}
ARM ActorProfileUnkSWON::~ActorProfileUnkSWON() {}
