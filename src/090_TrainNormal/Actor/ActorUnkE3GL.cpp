//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkE3GL.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkE3GL);

Actor *ActorProfileUnkE3GL::Create() {
    return new(HeapIndex_2) ActorUnkE3GL();
}

ActorProfileUnkE3GL::ActorProfileUnkE3GL() :
    ActorProfile(ActorId_E3GL) {}

ActorUnkE3GL::ActorUnkE3GL() {}

void ActorUnkE3GL::func_ov090_02171054(void) {}
void ActorUnkE3GL::func_ov090_02171064(void) {}
void ActorUnkE3GL::func_ov090_02171074(void) {}

ActorUnkE3GL::~ActorUnkE3GL() {}
ActorProfileUnkE3GL::~ActorProfileUnkE3GL() {}
