//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMAJ.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkRMAJ sActorProfileUnkRMAJ;

ARM ActorProfileUnkRMAJ *ActorProfileUnkRMAJ::GetProfile() {
    return &sActorProfileUnkRMAJ;
}

ARM Actor *ActorProfileUnkRMAJ::Create() {
    return new(HeapIndex_2) ActorUnkRMAJ();
}

ARM ActorProfileUnkRMAJ::ActorProfileUnkRMAJ() :
    ActorProfile(ActorId_RMAJ) {}

ARM ActorUnkRMAJ::ActorUnkRMAJ() {}

ARM void ActorUnkRMAJ::func_ov068_02157f18(void) {}
ARM void ActorUnkRMAJ::func_ov068_02157f38(void) {}
ARM void ActorUnkRMAJ::func_ov068_02157f54(void) {}
ARM void ActorUnkRMAJ::func_ov068_02157f58(void) {}

ARM ActorUnkRMAJ::~ActorUnkRMAJ() {}
ARM ActorProfileUnkRMAJ::~ActorProfileUnkRMAJ() {}
