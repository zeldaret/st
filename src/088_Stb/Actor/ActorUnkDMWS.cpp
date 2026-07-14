//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkDMWS.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkDMWS);

Actor *ActorProfileUnkDMWS::Create() {
    return new(HeapIndex_2) ActorUnkDMWS();
}

ActorProfileUnkDMWS::ActorProfileUnkDMWS() :
    ActorProfile_Derived1(ActorId_DMWS) {}

ActorUnkDMWS::ActorUnkDMWS() {}

void ActorUnkDMWS::func_ov088_021716d8(void) {}
void ActorUnkDMWS::func_ov088_0217172c(void) {}
void ActorUnkDMWS::func_ov088_0217173c(void) {}
void ActorUnkDMWS::func_ov088_02171750(void) {}
void ActorUnkDMWS::func_ov088_02171764(void) {}

ActorUnkDMWS::~ActorUnkDMWS() {}
ActorProfileUnkDMWS::~ActorProfileUnkDMWS() {}
