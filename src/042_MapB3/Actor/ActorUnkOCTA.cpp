//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkOCTA.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkOCTA sActorProfileUnkOCTA;

ARM ActorProfileUnkOCTA *ActorProfileUnkOCTA::GetProfile() {
    return &sActorProfileUnkOCTA;
}

ARM Actor *ActorProfileUnkOCTA::Create() {
    return new(HeapIndex_2) ActorUnkOCTA();
}

ARM ActorProfileUnkOCTA::ActorProfileUnkOCTA() :
    ActorProfile_Derived1(ActorId_OCTA) {}

ARM ActorUnkOCTA::ActorUnkOCTA() {}

ARM void ActorUnkOCTA::func_ov042_02123e4c(void) {}
ARM void ActorUnkOCTA::func_ov042_02123e60(void) {}
ARM void ActorUnkOCTA::func_ov042_02123e88(void) {}
ARM void ActorUnkOCTA::func_ov042_02123ef8(void) {}
ARM void ActorUnkOCTA::func_ov042_02123f18(void) {}
ARM void ActorUnkOCTA::func_ov042_02123f60(void) {}
ARM void ActorUnkOCTA::func_ov042_021241cc(void) {}
ARM void ActorUnkOCTA::func_ov042_02124338(void) {}
ARM void ActorUnkOCTA::func_ov042_021243f4(void) {}
ARM void ActorUnkOCTA::func_ov042_021244d8(void) {}
ARM void ActorUnkOCTA::func_ov042_021245f4(void) {}
ARM void ActorUnkOCTA::func_ov042_021246a8(void) {}
ARM void ActorUnkOCTA::func_ov042_021246e0(void) {}
ARM void ActorUnkOCTA::func_ov042_0212474c(void) {}
ARM void ActorUnkOCTA::func_ov042_02124800(void) {}
ARM void ActorUnkOCTA::func_ov042_0212488c(void) {}
ARM void ActorUnkOCTA::func_ov042_021248b0(void) {}
ARM void ActorUnkOCTA::func_ov042_02124944(void) {}
ARM void ActorUnkOCTA::func_ov042_02124998(void) {}
ARM void ActorUnkOCTA::func_ov042_02124a0c(void) {}
ARM void ActorUnkOCTA::func_ov042_02124c44(void) {}
ARM void ActorUnkOCTA::func_ov042_02124cb0(void) {}
ARM void ActorUnkOCTA::func_ov042_02124dac(void) {}
ARM void ActorUnkOCTA::func_ov042_02124e24(void) {}
ARM void ActorUnkOCTA::func_ov042_02124f60(void) {}
ARM void ActorUnkOCTA::func_ov042_02125028(void) {}
ARM void ActorUnkOCTA::func_ov042_0212504c(void) {}
ARM void ActorUnkOCTA::func_ov042_02125094(void) {}
ARM void ActorUnkOCTA::func_ov042_02125110(void) {}

ARM ActorUnkOCTA::~ActorUnkOCTA() {}
ARM ActorProfileUnkOCTA::~ActorProfileUnkOCTA() {}
