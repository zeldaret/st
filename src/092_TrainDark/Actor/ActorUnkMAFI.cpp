//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkMAFI.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkMAFI sActorProfileUnkMAFI;

ARM ActorProfileUnkMAFI *ActorProfileUnkMAFI::GetProfile() {
    return &sActorProfileUnkMAFI;
}

ARM Actor *ActorProfileUnkMAFI::Create() {
    return new(HeapIndex_2) ActorUnkMAFI();
}

ARM ActorProfileUnkMAFI::ActorProfileUnkMAFI() :
    ActorProfile_Derived1(ActorId_MAFI) {}

ARM ActorUnkMAFI::ActorUnkMAFI() {}

ARM void ActorUnkMAFI::func_ov092_02176bf8(void) {}
ARM void ActorUnkMAFI::func_ov092_02176c34(void) {}
ARM void ActorUnkMAFI::func_ov092_02176c70(void) {}
ARM void ActorUnkMAFI::func_ov092_02176d64(void) {}
ARM void ActorUnkMAFI::func_ov092_02176da4(void) {}
ARM void ActorUnkMAFI::func_ov092_02176de0(void) {}
ARM void ActorUnkMAFI::func_ov092_02176de4(void) {}
ARM void ActorUnkMAFI::func_ov092_02176eac(void) {}
ARM void ActorUnkMAFI::func_ov092_02176eb0(void) {}
ARM void ActorUnkMAFI::func_ov092_02176efc(void) {}
ARM void ActorUnkMAFI::func_ov092_02176f78(void) {}
ARM void ActorUnkMAFI::func_ov092_02177000(void) {}
ARM void ActorUnkMAFI::func_ov092_02177040(void) {}

ARM ActorUnkMAFI::~ActorUnkMAFI() {}
ARM ActorProfileUnkMAFI::~ActorProfileUnkMAFI() {}
