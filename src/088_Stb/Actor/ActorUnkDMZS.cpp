//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkDMZS.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkDMZS);

ARM Actor *ActorProfileUnkDMZS::Create() {
    return new(HeapIndex_2) ActorUnkDMZS();
}

ARM ActorProfileUnkDMZS::ActorProfileUnkDMZS() :
    ActorProfile(ActorId_DMZS) {}

ARM ActorUnkDMZS::ActorUnkDMZS() {}

ARM void ActorUnkDMZS::func_ov088_0216c470(void) {}
ARM void ActorUnkDMZS::func_ov088_0216c4d0(void) {}

ARM ActorUnkDMZS::~ActorUnkDMZS() {}
ARM ActorProfileUnkDMZS::~ActorProfileUnkDMZS() {}
