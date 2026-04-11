//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkTRCB.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkTRCB sActorProfileUnkTRCB;

ARM ActorProfileUnkTRCB *ActorProfileUnkTRCB::GetProfile() {
    return &sActorProfileUnkTRCB;
}

ARM Actor *ActorProfileUnkTRCB::Create() {
    return new(HeapIndex_2) ActorUnkTRCB();
}

ARM ActorProfileUnkTRCB::ActorProfileUnkTRCB() :
    ActorProfile(ActorId_TRCB) {}

ARM ActorUnkTRCB::ActorUnkTRCB() {}

ARM void ActorUnkTRCB::func_ov026_02110388(void) {}
ARM void ActorUnkTRCB::func_ov026_021103ac(void) {}
ARM void ActorUnkTRCB::func_ov026_021103cc(void) {}
ARM void ActorUnkTRCB::func_ov026_02110414(void) {}
ARM void ActorUnkTRCB::func_ov026_021104c0(void) {}
ARM void ActorUnkTRCB::func_ov026_02110514(void) {}
ARM void ActorUnkTRCB::func_ov026_0211059c(void) {}
ARM void ActorUnkTRCB::func_ov026_021105a0(void) {}
ARM void ActorUnkTRCB::func_ov026_021105a4(void) {}
ARM void ActorUnkTRCB::func_ov026_021105b8(void) {}
ARM void ActorUnkTRCB::func_ov026_021105f4(void) {}
ARM void ActorUnkTRCB::func_ov026_02110624(void) {}
ARM void ActorUnkTRCB::func_ov026_02110660(void) {}
ARM void ActorUnkTRCB::func_ov026_021107d0(void) {}
ARM void ActorUnkTRCB::func_ov026_021108ec(void) {}
ARM void ActorUnkTRCB::func_ov026_021109d4(void) {}

ARM ActorUnkTRCB::~ActorUnkTRCB() {}
ARM ActorProfileUnkTRCB::~ActorProfileUnkTRCB() {}
