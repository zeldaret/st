//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkAJAI.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkAJAI sActorProfileUnkAJAI;

ARM ActorProfileUnkAJAI *ActorProfileUnkAJAI::GetProfile() {
    return &sActorProfileUnkAJAI;
}

ARM Actor *ActorProfileUnkAJAI::Create() {
    return new(HeapIndex_2) ActorUnkAJAI();
}

ARM ActorProfileUnkAJAI::ActorProfileUnkAJAI() :
    ActorProfile_Derived1(ActorId_AJAI) {}

ARM ActorUnkAJAI::ActorUnkAJAI() {}

ARM void ActorUnkAJAI::func_ov068_02158c14(void) {}
ARM void ActorUnkAJAI::func_ov068_02158c84(void) {}
ARM void ActorUnkAJAI::func_ov068_02158c90(void) {}
ARM void ActorUnkAJAI::func_ov068_02158cd8(void) {}
ARM void ActorUnkAJAI::func_ov068_02158d44(void) {}
ARM void ActorUnkAJAI::func_ov068_02158d74(void) {}
ARM void ActorUnkAJAI::func_ov068_02158d88(void) {}
ARM void ActorUnkAJAI::func_ov068_02158d8c(void) {}
ARM void ActorUnkAJAI::func_ov068_02158da8(void) {}
ARM void ActorUnkAJAI::func_ov068_02158ddc(void) {}
ARM void ActorUnkAJAI::func_ov068_02158eb0(void) {}
ARM void ActorUnkAJAI::func_ov068_02158f5c(void) {}
ARM void ActorUnkAJAI::func_ov068_02158f70(void) {}
ARM void ActorUnkAJAI::func_ov068_021590c0(void) {}
ARM void ActorUnkAJAI::func_ov068_021590f0(void) {}
ARM void ActorUnkAJAI::func_ov068_02159120(void) {}
ARM void ActorUnkAJAI::func_ov068_02159170(void) {}
ARM void ActorUnkAJAI::func_ov068_02159180(void) {}
ARM void ActorUnkAJAI::func_ov068_02159204(void) {}

ARM ActorUnkAJAI::~ActorUnkAJAI() {}
ARM ActorProfileUnkAJAI::~ActorProfileUnkAJAI() {}
