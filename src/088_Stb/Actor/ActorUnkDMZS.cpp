//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkDMZS.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkDMZS);

Actor *ActorProfileUnkDMZS::Create() {
    return new(HeapIndex_2) ActorUnkDMZS();
}

ActorProfileUnkDMZS::ActorProfileUnkDMZS() :
    ActorProfile(ActorId_DMZS) {}

ActorUnkDMZS::ActorUnkDMZS() {}

void ActorUnkDMZS::func_ov088_0216c470(void) {}
void ActorUnkDMZS::func_ov088_0216c4d0(void) {}

ActorUnkDMZS::~ActorUnkDMZS() {}
ActorProfileUnkDMZS::~ActorProfileUnkDMZS() {}
