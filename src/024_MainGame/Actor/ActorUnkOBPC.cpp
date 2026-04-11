//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkOBPC.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkOBPC sActorProfileUnkOBPC;

ARM ActorProfileUnkOBPC *ActorProfileUnkOBPC::GetProfile() {
    return &sActorProfileUnkOBPC;
}

ARM Actor *ActorProfileUnkOBPC::Create() {
    return new(HeapIndex_2) ActorUnkOBPC();
}

ARM ActorProfileUnkOBPC::ActorProfileUnkOBPC() :
    ActorProfile(ActorId_OBPC) {}

ARM ActorUnkOBPC::ActorUnkOBPC() {}

ARM void ActorUnkOBPC::func_ov024_020d6f28(void) {}
ARM void ActorUnkOBPC::func_ov024_020d6f74(void) {}
ARM void ActorUnkOBPC::func_ov024_020d6f94(void) {}
ARM void ActorUnkOBPC::func_ov024_020d7050(void) {}
ARM void ActorUnkOBPC::func_ov024_020d7064(void) {}
ARM void ActorUnkOBPC::func_ov024_020d7154(void) {}

ARM ActorUnkOBPC::~ActorUnkOBPC() {}
ARM ActorProfileUnkOBPC::~ActorProfileUnkOBPC() {}
