//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkEFWV.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkEFWV sActorProfileUnkEFWV;

ARM ActorProfileUnkEFWV *ActorProfileUnkEFWV::GetProfile() {
    return &sActorProfileUnkEFWV;
}

ARM Actor *ActorProfileUnkEFWV::Create() {
    return new(HeapIndex_2) ActorUnkEFWV();
}

ARM ActorProfileUnkEFWV::ActorProfileUnkEFWV() :
    ActorProfile_Derived1(ActorId_EFWV) {}

ARM ActorUnkEFWV::ActorUnkEFWV() {}

ARM void ActorUnkEFWV::func_ov098_0218117c(void) {}
ARM void ActorUnkEFWV::func_ov098_02181218(void) {}
ARM void ActorUnkEFWV::func_ov098_0218122c(void) {}
ARM void ActorUnkEFWV::func_ov098_021812dc(void) {}
ARM void ActorUnkEFWV::func_ov098_02181378(void) {}
ARM void ActorUnkEFWV::func_ov098_021813c8(void) {}
ARM void ActorUnkEFWV::func_ov098_021813dc(void) {}
ARM void ActorUnkEFWV::func_ov098_02181410(void) {}
ARM void ActorUnkEFWV::func_ov098_0218142c(void) {}
ARM void ActorUnkEFWV::func_ov098_02181600(void) {}
ARM void ActorUnkEFWV::func_ov098_02181624(void) {}
ARM void ActorUnkEFWV::func_ov098_02181634(void) {}
ARM void ActorUnkEFWV::func_ov098_0218163c(void) {}
ARM void ActorUnkEFWV::func_ov098_02181658(void) {}

ARM ActorUnkEFWV::~ActorUnkEFWV() {}
ARM ActorProfileUnkEFWV::~ActorProfileUnkEFWV() {}
