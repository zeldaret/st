//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRCFO.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkRCFO sActorProfileUnkRCFO;

ARM ActorProfileUnkRCFO *ActorProfileUnkRCFO::GetProfile() {
    return &sActorProfileUnkRCFO;
}

ARM Actor *ActorProfileUnkRCFO::Create() {
    return new(HeapIndex_2) ActorUnkRCFO();
}

ARM ActorProfileUnkRCFO::ActorProfileUnkRCFO() :
    ActorProfile(ActorId_RCFO) {}

ARM ActorUnkRCFO::ActorUnkRCFO() {}

ARM void ActorUnkRCFO::func_ov033_02119504(void) {}
ARM void ActorUnkRCFO::func_ov033_02119540(void) {}
ARM void ActorUnkRCFO::func_ov033_0211961c(void) {}
ARM void ActorUnkRCFO::func_ov033_02119828(void) {}
ARM void ActorUnkRCFO::func_ov033_0211983c(void) {}
ARM void ActorUnkRCFO::func_ov033_02119840(void) {}
ARM void ActorUnkRCFO::func_ov033_021199f4(void) {}
ARM void ActorUnkRCFO::func_ov033_02119a58(void) {}
ARM void ActorUnkRCFO::func_ov033_02119bc4(void) {}
ARM void ActorUnkRCFO::func_ov033_02119d00(void) {}
ARM void ActorUnkRCFO::func_ov033_02119d40(void) {}

ARM ActorUnkRCFO::~ActorUnkRCFO() {}
ARM ActorProfileUnkRCFO::~ActorProfileUnkRCFO() {}
