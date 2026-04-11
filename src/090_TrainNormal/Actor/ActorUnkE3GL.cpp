//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkE3GL.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkE3GL sActorProfileUnkE3GL;

ARM ActorProfileUnkE3GL *ActorProfileUnkE3GL::GetProfile() {
    return &sActorProfileUnkE3GL;
}

ARM Actor *ActorProfileUnkE3GL::Create() {
    return new(HeapIndex_2) ActorUnkE3GL();
}

ARM ActorProfileUnkE3GL::ActorProfileUnkE3GL() :
    ActorProfile(ActorId_E3GL) {}

ARM ActorUnkE3GL::ActorUnkE3GL() {}

ARM void ActorUnkE3GL::func_ov090_02171054(void) {}
ARM void ActorUnkE3GL::func_ov090_02171064(void) {}
ARM void ActorUnkE3GL::func_ov090_02171074(void) {}

ARM ActorUnkE3GL::~ActorUnkE3GL() {}
ARM ActorProfileUnkE3GL::~ActorProfileUnkE3GL() {}
