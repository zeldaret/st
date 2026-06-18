//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkFLEN.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkFLEN);

Actor *ActorProfileUnkFLEN::Create() {
    return new(HeapIndex_2) ActorUnkFLEN();
}

ActorProfileUnkFLEN::ActorProfileUnkFLEN() :
    ActorProfile(ActorId_FLEN) {}

ActorUnkFLEN::ActorUnkFLEN() {}

void ActorUnkFLEN::func_ov031_020f80b8(void) {}
void ActorUnkFLEN::func_ov031_020f8118(void) {}
void ActorUnkFLEN::func_ov031_020f81b4(void) {}
void ActorUnkFLEN::func_ov031_020f81f8(void) {}

ActorUnkFLEN::~ActorUnkFLEN() {}
ActorProfileUnkFLEN::~ActorProfileUnkFLEN() {}
