//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkMIFR.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkMIFR sActorProfileUnkMIFR;

ARM ActorProfileUnkMIFR *ActorProfileUnkMIFR::GetProfile() {
    return &sActorProfileUnkMIFR;
}

ARM Actor *ActorProfileUnkMIFR::Create() {
    return new(HeapIndex_2) ActorUnkMIFR();
}

ARM ActorProfileUnkMIFR::ActorProfileUnkMIFR() :
    ActorProfile_Derived1(ActorId_MIFR) {}

ARM ActorUnkMIFR::ActorUnkMIFR() {}

ARM void ActorUnkMIFR::func_ov042_02125224(void) {}
ARM void ActorUnkMIFR::func_ov042_0212537c(void) {}
ARM void ActorUnkMIFR::func_ov042_02125390(void) {}
ARM void ActorUnkMIFR::func_ov042_021253a4(void) {}
ARM void ActorUnkMIFR::func_ov042_021253e4(void) {}
ARM void ActorUnkMIFR::func_ov042_02125450(void) {}
ARM void ActorUnkMIFR::func_ov042_021254c0(void) {}
ARM void ActorUnkMIFR::func_ov042_02125620(void) {}
ARM void ActorUnkMIFR::func_ov042_02125630(void) {}
ARM void ActorUnkMIFR::func_ov042_0212569c(void) {}
ARM void ActorUnkMIFR::func_ov042_021256ac(void) {}
ARM void ActorUnkMIFR::func_ov042_0212578c(void) {}
ARM void ActorUnkMIFR::func_ov042_02125804(void) {}
ARM void ActorUnkMIFR::func_ov042_02125894(void) {}
ARM void ActorUnkMIFR::func_ov042_021258b0(void) {}
ARM void ActorUnkMIFR::func_ov042_02125924(void) {}
ARM void ActorUnkMIFR::func_ov042_02125d6c(void) {}
ARM void ActorUnkMIFR::func_ov042_02125e94(void) {}
ARM void ActorUnkMIFR::func_ov042_02125eb0(void) {}
ARM void ActorUnkMIFR::func_ov042_02125fa8(void) {}
ARM void ActorUnkMIFR::func_ov042_02126028(void) {}
ARM void ActorUnkMIFR::func_ov042_02126164(void) {}
ARM void ActorUnkMIFR::func_ov042_02126190(void) {}
ARM void ActorUnkMIFR::func_ov042_021262c8(void) {}
ARM void ActorUnkMIFR::func_ov042_02126604(void) {}
ARM void ActorUnkMIFR::func_ov042_021268cc(void) {}
ARM void ActorUnkMIFR::func_ov042_02126918(void) {}

ARM ActorUnkMIFR::~ActorUnkMIFR() {}
ARM ActorProfileUnkMIFR::~ActorProfileUnkMIFR() {}
