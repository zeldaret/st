//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkTTUT.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkTTUT);

ARM Actor *ActorProfileUnkTTUT::Create() {
    return new(HeapIndex_2) ActorUnkTTUT();
}

ARM ActorProfileUnkTTUT::ActorProfileUnkTTUT() :
    ActorProfile(ActorId_TTUT) {}

ARM ActorUnkTTUT::ActorUnkTTUT() {}

ARM void ActorUnkTTUT::func_ov091_02175868(void) {}
ARM void ActorUnkTTUT::func_ov091_02175944(void) {}
ARM void ActorUnkTTUT::func_ov091_02175bbc(void) {}

ARM ActorUnkTTUT::~ActorUnkTTUT() {}
ARM ActorProfileUnkTTUT::~ActorProfileUnkTTUT() {}
