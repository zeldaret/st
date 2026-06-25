//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkAJCR.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkAJCR);

Actor *ActorProfileUnkAJCR::Create() {
    return new(HeapIndex_2) ActorUnkAJCR();
}

ActorProfileUnkAJCR::ActorProfileUnkAJCR() :
    ActorProfile(ActorId_AJCR) {}

ActorUnkAJCR::ActorUnkAJCR() {}

void ActorUnkAJCR::func_ov068_0215d7f4(void) {}
void ActorUnkAJCR::func_ov068_0215d8d8(void) {}

ActorUnkAJCR::~ActorUnkAJCR() {}
ActorProfileUnkAJCR::~ActorProfileUnkAJCR() {}
