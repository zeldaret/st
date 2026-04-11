//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSHIT.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkSHIT sActorProfileUnkSHIT;

ARM ActorProfileUnkSHIT *ActorProfileUnkSHIT::GetProfile() {
    return &sActorProfileUnkSHIT;
}

ARM Actor *ActorProfileUnkSHIT::Create() {
    return new(HeapIndex_2) ActorUnkSHIT();
}

ARM ActorProfileUnkSHIT::ActorProfileUnkSHIT() :
    ActorProfile_Derived1(ActorId_SHIT) {}

ARM ActorUnkSHIT::ActorUnkSHIT() {}

ARM void ActorUnkSHIT::func_ov036_0211c1fc(void) {}
ARM void ActorUnkSHIT::func_ov036_0211c21c(void) {}
ARM void ActorUnkSHIT::func_ov036_0211c280(void) {}
ARM void ActorUnkSHIT::func_ov036_0211c580(void) {}
ARM void ActorUnkSHIT::func_ov036_0211c7dc(void) {}
ARM void ActorUnkSHIT::func_ov036_0211c7e4(void) {}
ARM void ActorUnkSHIT::func_ov036_0211c938(void) {}
ARM void ActorUnkSHIT::func_ov036_0211c94c(void) {}
ARM void ActorUnkSHIT::func_ov036_0211c96c(void) {}
ARM void ActorUnkSHIT::func_ov036_0211c970(void) {}
ARM void ActorUnkSHIT::func_ov036_0211c974(void) {}
ARM void ActorUnkSHIT::func_ov036_0211c978(void) {}
ARM void ActorUnkSHIT::func_ov036_0211c97c(void) {}
ARM void ActorUnkSHIT::func_ov036_0211c980(void) {}
ARM void ActorUnkSHIT::func_ov036_0211c984(void) {}
ARM void ActorUnkSHIT::func_ov036_0211c994(void) {}
ARM void ActorUnkSHIT::func_ov036_0211c998(void) {}
ARM void ActorUnkSHIT::func_ov036_0211c9ac(void) {}
ARM void ActorUnkSHIT::func_ov036_0211c9cc(void) {}
ARM void ActorUnkSHIT::func_ov036_0211c9d4(void) {}
ARM void ActorUnkSHIT::func_ov036_0211cddc(void) {}
ARM void ActorUnkSHIT::func_ov036_0211cdfc(void) {}
ARM void ActorUnkSHIT::func_ov036_0211ceec(void) {}
ARM void ActorUnkSHIT::func_ov036_0211d0a8(void) {}
ARM void ActorUnkSHIT::func_ov036_0211d22c(void) {}
ARM void ActorUnkSHIT::func_ov036_0211d254(void) {}
ARM void ActorUnkSHIT::func_ov036_0211d270(void) {}
ARM void ActorUnkSHIT::func_ov036_0211d28c(void) {}
ARM void ActorUnkSHIT::func_ov036_0211d2a8(void) {}
ARM void ActorUnkSHIT::func_ov036_0211d2dc(void) {}
ARM void ActorUnkSHIT::func_ov036_0211d570(void) {}
ARM void ActorUnkSHIT::func_ov036_0211d75c(void) {}
ARM void ActorUnkSHIT::func_ov036_0211d774(void) {}
ARM void ActorUnkSHIT::func_ov036_0211d790(void) {}

ARM ActorUnkSHIT::~ActorUnkSHIT() {}
ARM ActorProfileUnkSHIT::~ActorProfileUnkSHIT() {}
