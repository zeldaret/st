//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkMTFL.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkMTFL sActorProfileUnkMTFL;

ARM ActorProfileUnkMTFL *ActorProfileUnkMTFL::GetProfile() {
    return &sActorProfileUnkMTFL;
}

ARM Actor *ActorProfileUnkMTFL::Create() {
    return new(HeapIndex_2) ActorUnkMTFL();
}

ARM ActorProfileUnkMTFL::ActorProfileUnkMTFL() :
    ActorProfile_Derived1(ActorId_MTFL) {}

ARM ActorUnkMTFL::ActorUnkMTFL() {}

ARM void ActorUnkMTFL::func_ov092_02170374(void) {}
ARM void ActorUnkMTFL::func_ov092_021703c4(void) {}
ARM void ActorUnkMTFL::func_ov092_02170448(void) {}
ARM void ActorUnkMTFL::func_ov092_02170458(void) {}
ARM void ActorUnkMTFL::func_ov092_0217063c(void) {}
ARM void ActorUnkMTFL::func_ov092_02170664(void) {}
ARM void ActorUnkMTFL::func_ov092_0217067c(void) {}
ARM void ActorUnkMTFL::func_ov092_02170730(void) {}
ARM void ActorUnkMTFL::func_ov092_02170774(void) {}
ARM void ActorUnkMTFL::func_ov092_021709d8(void) {}
ARM void ActorUnkMTFL::func_ov092_02170afc(void) {}
ARM void ActorUnkMTFL::func_ov092_02170d18(void) {}
ARM void ActorUnkMTFL::func_ov092_02171038(void) {}
ARM void ActorUnkMTFL::func_ov092_0217106c(void) {}
ARM void ActorUnkMTFL::func_ov092_0217108c(void) {}
ARM void ActorUnkMTFL::func_ov092_021713f0(void) {}
ARM void ActorUnkMTFL::func_ov092_02171478(void) {}
ARM void ActorUnkMTFL::func_ov092_021715a0(void) {}
ARM void ActorUnkMTFL::func_ov092_02171844(void) {}
ARM void ActorUnkMTFL::func_ov092_02171894(void) {}
ARM void ActorUnkMTFL::func_ov092_02171a2c(void) {}
ARM void ActorUnkMTFL::func_ov092_02171a84(void) {}
ARM void ActorUnkMTFL::func_ov092_02171b28(void) {}

ARM ActorUnkMTFL::~ActorUnkMTFL() {}
ARM ActorProfileUnkMTFL::~ActorProfileUnkMTFL() {}
