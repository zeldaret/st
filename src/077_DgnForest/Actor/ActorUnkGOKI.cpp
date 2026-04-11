//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkGOKI.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkGOKI sActorProfileUnkGOKI;

ARM ActorProfileUnkGOKI *ActorProfileUnkGOKI::GetProfile() {
    return &sActorProfileUnkGOKI;
}

ARM Actor *ActorProfileUnkGOKI::Create() {
    return new(HeapIndex_2) ActorUnkGOKI();
}

ARM ActorProfileUnkGOKI::ActorProfileUnkGOKI() :
    ActorProfile_Derived1(ActorId_GOKI) {}

ARM ActorUnkGOKI::ActorUnkGOKI() {}

ARM void ActorUnkGOKI::func_ov077_02158d1c(void) {}
ARM void ActorUnkGOKI::func_ov077_02158d30(void) {}
ARM void ActorUnkGOKI::func_ov077_02158e9c(void) {}
ARM void ActorUnkGOKI::func_ov077_02158eb0(void) {}
ARM void ActorUnkGOKI::func_ov077_02158ed0(void) {}
ARM void ActorUnkGOKI::func_ov077_02158f18(void) {}
ARM void ActorUnkGOKI::func_ov077_021591f4(void) {}
ARM void ActorUnkGOKI::func_ov077_02159260(void) {}
ARM void ActorUnkGOKI::func_ov077_02159318(void) {}
ARM void ActorUnkGOKI::func_ov077_02159364(void) {}
ARM void ActorUnkGOKI::func_ov077_021593d4(void) {}
ARM void ActorUnkGOKI::func_ov077_0215943c(void) {}
ARM void ActorUnkGOKI::func_ov077_021594cc(void) {}
ARM void ActorUnkGOKI::func_ov077_02159524(void) {}
ARM void ActorUnkGOKI::func_ov077_021595bc(void) {}
ARM void ActorUnkGOKI::func_ov077_02159624(void) {}
ARM void ActorUnkGOKI::func_ov077_021596b8(void) {}
ARM void ActorUnkGOKI::func_ov077_0215970c(void) {}
ARM void ActorUnkGOKI::func_ov077_02159880(void) {}
ARM void ActorUnkGOKI::func_ov077_02159a44(void) {}
ARM void ActorUnkGOKI::func_ov077_02159aa8(void) {}
ARM void ActorUnkGOKI::func_ov077_02159b5c(void) {}
ARM void ActorUnkGOKI::func_ov077_02159b8c(void) {}
ARM void ActorUnkGOKI::func_ov077_02159c3c(void) {}
ARM void ActorUnkGOKI::func_ov077_02159cc0(void) {}
ARM void ActorUnkGOKI::func_ov077_02159cdc(void) {}

ARM ActorUnkGOKI::~ActorUnkGOKI() {}
ARM ActorProfileUnkGOKI::~ActorProfileUnkGOKI() {}
