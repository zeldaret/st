//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkTRUP.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkTRUP);

ARM Actor *ActorProfileUnkTRUP::Create() {
    return new(HeapIndex_2) ActorUnkTRUP();
}

ARM ActorProfileUnkTRUP::ActorProfileUnkTRUP() :
    ActorProfile(ActorId_TRUP) {}

ARM ActorUnkTRUP::ActorUnkTRUP() {}

ARM void ActorUnkTRUP::func_ov026_0211139c(void) {}
ARM void ActorUnkTRUP::func_ov026_02111440(void) {}
ARM void ActorUnkTRUP::func_ov026_02111498(void) {}
ARM void ActorUnkTRUP::func_ov026_02111578(void) {}

ARM ActorUnkTRUP::~ActorUnkTRUP() {}
ARM ActorProfileUnkTRUP::~ActorProfileUnkTRUP() {}
