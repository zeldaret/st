//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkYUKI.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkYUKI sActorProfileUnkYUKI;

ARM ActorProfileUnkYUKI *ActorProfileUnkYUKI::GetProfile() {
    return &sActorProfileUnkYUKI;
}

ARM Actor *ActorProfileUnkYUKI::Create() {
    return new(HeapIndex_2) ActorUnkYUKI();
}

ARM ActorProfileUnkYUKI::ActorProfileUnkYUKI() :
    ActorProfile_Derived1(ActorId_YUKI) {}

ARM ActorUnkYUKI::ActorUnkYUKI() {}

ARM void ActorUnkYUKI::func_ov065_021580b0(void) {}
ARM void ActorUnkYUKI::func_ov065_021580c4(void) {}
ARM void ActorUnkYUKI::func_ov065_021580d8(void) {}
ARM void ActorUnkYUKI::func_ov065_021580ec(void) {}
ARM void ActorUnkYUKI::func_ov065_02158288(void) {}
ARM void ActorUnkYUKI::func_ov065_02158304(void) {}
ARM void ActorUnkYUKI::func_ov065_02158380(void) {}
ARM void ActorUnkYUKI::func_ov065_02158520(void) {}
ARM void ActorUnkYUKI::func_ov065_02158524(void) {}
ARM void ActorUnkYUKI::func_ov065_021585f4(void) {}
ARM void ActorUnkYUKI::func_ov065_02158608(void) {}
ARM void ActorUnkYUKI::func_ov065_021586a8(void) {}
ARM void ActorUnkYUKI::func_ov065_021586f4(void) {}
ARM void ActorUnkYUKI::func_ov065_0215875c(void) {}
ARM void ActorUnkYUKI::func_ov065_02158778(void) {}
ARM void ActorUnkYUKI::func_ov065_02158798(void) {}
ARM void ActorUnkYUKI::func_ov065_021587b0(void) {}
ARM void ActorUnkYUKI::func_ov065_021587d4(void) {}
ARM void ActorUnkYUKI::func_ov065_021587e4(void) {}
ARM void ActorUnkYUKI::func_ov065_02158808(void) {}
ARM void ActorUnkYUKI::func_ov065_02158854(void) {}
ARM void ActorUnkYUKI::func_ov065_0215888c(void) {}
ARM void ActorUnkYUKI::func_ov065_021588b0(void) {}
ARM void ActorUnkYUKI::func_ov065_021588dc(void) {}
ARM void ActorUnkYUKI::func_ov065_021588f8(void) {}
ARM void ActorUnkYUKI::func_ov065_02158940(void) {}
ARM void ActorUnkYUKI::func_ov065_02158960(void) {}

ARM ActorUnkYUKI::~ActorUnkYUKI() {}
ARM ActorProfileUnkYUKI::~ActorProfileUnkYUKI() {}
