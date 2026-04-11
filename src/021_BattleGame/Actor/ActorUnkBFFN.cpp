//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkBFFN.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkBFFN sActorProfileUnkBFFN;

ARM ActorProfileUnkBFFN *ActorProfileUnkBFFN::GetProfile() {
    return &sActorProfileUnkBFFN;
}

ARM Actor *ActorProfileUnkBFFN::Create() {
    return new(HeapIndex_2) ActorUnkBFFN();
}

ARM ActorProfileUnkBFFN::ActorProfileUnkBFFN() :
    ActorProfile(ActorId_BFFN) {}

ARM ActorUnkBFFN::ActorUnkBFFN() {}

ARM void ActorUnkBFFN::func_ov021_020f24b8(void) {}
ARM void ActorUnkBFFN::func_ov021_020f24fc(void) {}
ARM void ActorUnkBFFN::func_ov021_020f2524(void) {}
ARM void ActorUnkBFFN::func_ov021_020f2564(void) {}
ARM void ActorUnkBFFN::func_ov021_020f25d8(void) {}
ARM void ActorUnkBFFN::func_ov021_020f269c(void) {}
ARM void ActorUnkBFFN::func_ov021_020f2714(void) {}
ARM void ActorUnkBFFN::func_ov021_020f2828(void) {}
ARM void ActorUnkBFFN::func_ov021_020f283c(void) {}
ARM void ActorUnkBFFN::func_ov021_020f2850(void) {}
ARM void ActorUnkBFFN::func_ov021_020f2878(void) {}
ARM void ActorUnkBFFN::func_ov021_020f2898(void) {}
ARM void ActorUnkBFFN::func_ov021_020f28dc(void) {}
ARM void ActorUnkBFFN::func_ov021_020f29ac(void) {}
ARM void ActorUnkBFFN::func_ov021_020f2a1c(void) {}
ARM void ActorUnkBFFN::func_ov021_020f2a28(void) {}
ARM void ActorUnkBFFN::func_ov021_020f2a4c(void) {}
ARM void ActorUnkBFFN::func_ov021_020f2b18(void) {}
ARM void ActorUnkBFFN::func_ov021_020f2b1c(void) {}
ARM void ActorUnkBFFN::func_ov021_020f2c74(void) {}
ARM void ActorUnkBFFN::func_ov021_020f2c78(void) {}
ARM void ActorUnkBFFN::func_ov021_020f2d54(void) {}
ARM void ActorUnkBFFN::func_ov021_020f3044(void) {}
ARM void ActorUnkBFFN::func_ov021_020f3264(void) {}
ARM void ActorUnkBFFN::func_ov021_020f3300(void) {}
ARM void ActorUnkBFFN::func_ov021_020f3304(void) {}
ARM void ActorUnkBFFN::func_ov021_020f3340(void) {}
ARM void ActorUnkBFFN::func_ov021_020f337c(void) {}
ARM void ActorUnkBFFN::func_ov021_020f34bc(void) {}
ARM void ActorUnkBFFN::func_ov021_020f3600(void) {}
ARM void ActorUnkBFFN::func_ov021_020f3680(void) {}
ARM void ActorUnkBFFN::func_ov021_020f3708(void) {}
ARM void ActorUnkBFFN::func_ov021_020f376c(void) {}

ARM ActorUnkBFFN::~ActorUnkBFFN() {}
ARM ActorProfileUnkBFFN::~ActorProfileUnkBFFN() {}
