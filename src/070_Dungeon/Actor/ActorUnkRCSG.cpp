//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRCSG.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkRCSG sActorProfileUnkRCSG;

ARM ActorProfileUnkRCSG *ActorProfileUnkRCSG::GetProfile() {
    return &sActorProfileUnkRCSG;
}

ARM Actor *ActorProfileUnkRCSG::Create() {
    return new(HeapIndex_2) ActorUnkRCSG();
}

ARM ActorProfileUnkRCSG::ActorProfileUnkRCSG() :
    ActorProfile(ActorId_RCSG) {}

ARM ActorUnkRCSG::ActorUnkRCSG() {}

ARM void ActorUnkRCSG::func_ov070_02143d30(void) {}
ARM void ActorUnkRCSG::func_ov070_02143de0(void) {}
ARM void ActorUnkRCSG::func_ov070_02143e54(void) {}
ARM void ActorUnkRCSG::func_ov070_02143e68(void) {}
ARM void ActorUnkRCSG::func_ov070_02143eac(void) {}
ARM void ActorUnkRCSG::func_ov070_02143f2c(void) {}
ARM void ActorUnkRCSG::func_ov070_02143f34(void) {}
ARM void ActorUnkRCSG::func_ov070_02143f38(void) {}
ARM void ActorUnkRCSG::func_ov070_02143f7c(void) {}

ARM ActorUnkRCSG::~ActorUnkRCSG() {}
ARM ActorProfileUnkRCSG::~ActorProfileUnkRCSG() {}
