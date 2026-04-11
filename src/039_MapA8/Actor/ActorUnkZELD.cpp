//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkZELD.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkZELD sActorProfileUnkZELD;

ARM ActorProfileUnkZELD *ActorProfileUnkZELD::GetProfile() {
    return &sActorProfileUnkZELD;
}

ARM Actor *ActorProfileUnkZELD::Create() {
    return new(HeapIndex_2) ActorUnkZELD();
}

ARM ActorProfileUnkZELD::ActorProfileUnkZELD() :
    ActorProfile_Derived1(ActorId_ZELD) {}

ARM ActorUnkZELD::ActorUnkZELD() {}

ARM void ActorUnkZELD::func_ov039_02119410(void) {}
ARM void ActorUnkZELD::func_ov039_02119424(void) {}
ARM void ActorUnkZELD::func_ov039_02119438(void) {}
ARM void ActorUnkZELD::func_ov039_0211944c(void) {}
ARM void ActorUnkZELD::func_ov039_021194f8(void) {}
ARM void ActorUnkZELD::func_ov039_02119524(void) {}
ARM void ActorUnkZELD::func_ov039_021195b4(void) {}
ARM void ActorUnkZELD::func_ov039_02119654(void) {}
ARM void ActorUnkZELD::func_ov039_021196e8(void) {}
ARM void ActorUnkZELD::func_ov039_02119788(void) {}
ARM void ActorUnkZELD::func_ov039_02119968(void) {}
ARM void ActorUnkZELD::func_ov039_021199c0(void) {}
ARM void ActorUnkZELD::func_ov039_02119b5c(void) {}
ARM void ActorUnkZELD::func_ov039_02119bb4(void) {}
ARM void ActorUnkZELD::func_ov039_02119d04(void) {}
ARM void ActorUnkZELD::func_ov039_02119d28(void) {}
ARM void ActorUnkZELD::func_ov039_02119d38(void) {}
ARM void ActorUnkZELD::func_ov039_02119d40(void) {}
ARM void ActorUnkZELD::func_ov039_02119d5c(void) {}
ARM void ActorUnkZELD::func_ov039_02119d78(void) {}
ARM void ActorUnkZELD::func_ov039_02119d94(void) {}
ARM void ActorUnkZELD::func_ov039_02119db8(void) {}
ARM void ActorUnkZELD::func_ov039_02119de4(void) {}
ARM void ActorUnkZELD::func_ov039_02119e00(void) {}

ARM ActorUnkZELD::~ActorUnkZELD() {}
ARM ActorProfileUnkZELD::~ActorProfileUnkZELD() {}
