//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkDMWS.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkDMWS);

ARM Actor *ActorProfileUnkDMWS::Create() {
    return new(HeapIndex_2) ActorUnkDMWS();
}

ARM ActorProfileUnkDMWS::ActorProfileUnkDMWS() :
    ActorProfile_Derived1(ActorId_DMWS) {}

ARM ActorUnkDMWS::ActorUnkDMWS() {}

ARM void ActorUnkDMWS::func_ov088_021716d8(void) {}
ARM void ActorUnkDMWS::func_ov088_0217172c(void) {}
ARM void ActorUnkDMWS::func_ov088_0217173c(void) {}
ARM void ActorUnkDMWS::func_ov088_02171750(void) {}
ARM void ActorUnkDMWS::func_ov088_02171764(void) {}

ARM ActorUnkDMWS::~ActorUnkDMWS() {}
ARM ActorProfileUnkDMWS::~ActorProfileUnkDMWS() {}
