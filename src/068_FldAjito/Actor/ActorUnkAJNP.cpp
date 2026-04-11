//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkAJNP.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkAJNP sActorProfileUnkAJNP;

THUMB ActorProfileUnkAJNP *ActorProfileUnkAJNP::GetProfile() {
    return &sActorProfileUnkAJNP;
}

THUMB Actor *ActorProfileUnkAJNP::Create() {
    return new(HeapIndex_2) ActorUnkAJNP();
}

THUMB ActorProfileUnkAJNP::ActorProfileUnkAJNP() :
    ActorProfile_Derived1(ActorId_AJNP, ActorId_WAMA) {}

THUMB ActorUnkAJNP::ActorUnkAJNP() {}

THUMB void ActorUnkAJNP::func_ov068_0215d018(void) {}
THUMB void ActorUnkAJNP::func_ov068_0215d104(void) {}
ARM void ActorUnkAJNP::func_ov068_0215d160(void) {}
ARM void ActorUnkAJNP::func_ov068_0215d268(void) {}
ARM void ActorUnkAJNP::func_ov068_0215d294(void) {}
ARM void ActorUnkAJNP::func_ov068_0215d2b4(void) {}
ARM void ActorUnkAJNP::func_ov068_0215d30c(void) {}
ARM void ActorUnkAJNP::func_ov068_0215d434(void) {}
ARM void ActorUnkAJNP::func_ov068_0215d448(void) {}
ARM void ActorUnkAJNP::func_ov068_0215d478(void) {}
ARM void ActorUnkAJNP::func_ov068_0215d47c(void) {}
ARM void ActorUnkAJNP::func_ov068_0215d500(void) {}
ARM void ActorUnkAJNP::func_ov068_0215d590(void) {}
ARM void ActorUnkAJNP::func_ov068_0215d620(void) {}
ARM void ActorUnkAJNP::func_ov068_0215d68c(void) {}
ARM void ActorUnkAJNP::func_ov068_0215d6e8(void) {}
ARM void ActorUnkAJNP::func_ov068_0215d710(void) {}

ARM ActorUnkAJNP::~ActorUnkAJNP() {}
ARM ActorProfileUnkAJNP::~ActorProfileUnkAJNP() {}
