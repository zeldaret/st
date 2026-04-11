//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkFLEN.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkFLEN sActorProfileUnkFLEN;

ARM ActorProfileUnkFLEN *ActorProfileUnkFLEN::GetProfile() {
    return &sActorProfileUnkFLEN;
}

ARM Actor *ActorProfileUnkFLEN::Create() {
    return new(HeapIndex_2) ActorUnkFLEN();
}

ARM ActorProfileUnkFLEN::ActorProfileUnkFLEN() :
    ActorProfile(ActorId_FLEN) {}

ARM ActorUnkFLEN::ActorUnkFLEN() {}

ARM void ActorUnkFLEN::func_ov031_020f80b8(void) {}
ARM void ActorUnkFLEN::func_ov031_020f8118(void) {}
ARM void ActorUnkFLEN::func_ov031_020f81b4(void) {}
ARM void ActorUnkFLEN::func_ov031_020f81f8(void) {}

ARM ActorUnkFLEN::~ActorUnkFLEN() {}
ARM ActorProfileUnkFLEN::~ActorProfileUnkFLEN() {}
