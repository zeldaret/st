//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkAJTM.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkAJTM sActorProfileUnkAJTM;

ARM ActorProfileUnkAJTM *ActorProfileUnkAJTM::GetProfile() {
    return &sActorProfileUnkAJTM;
}

ARM Actor *ActorProfileUnkAJTM::Create() {
    return new(HeapIndex_2) ActorUnkAJTM();
}

ARM ActorProfileUnkAJTM::ActorProfileUnkAJTM() :
    ActorProfile(ActorId_AJTM) {}

ARM ActorUnkAJTM::ActorUnkAJTM() {}

ARM void ActorUnkAJTM::func_ov068_0215c1fc(void) {}
ARM void ActorUnkAJTM::func_ov068_0215c29c(void) {}
ARM void ActorUnkAJTM::func_ov068_0215c2a8(void) {}
ARM void ActorUnkAJTM::func_ov068_0215c2f0(void) {}
ARM void ActorUnkAJTM::func_ov068_0215c304(void) {}
ARM void ActorUnkAJTM::func_ov068_0215c464(void) {}
ARM void ActorUnkAJTM::func_ov068_0215c478(void) {}
ARM void ActorUnkAJTM::func_ov068_0215c4b0(void) {}
ARM void ActorUnkAJTM::func_ov068_0215c4e4(void) {}
ARM void ActorUnkAJTM::func_ov068_0215c58c(void) {}
ARM void ActorUnkAJTM::func_ov068_0215c590(void) {}
ARM void ActorUnkAJTM::func_ov068_0215c5ac(void) {}
ARM void ActorUnkAJTM::func_ov068_0215c79c(void) {}
ARM void ActorUnkAJTM::func_ov068_0215c840(void) {}
ARM void ActorUnkAJTM::func_ov068_0215c894(void) {}
ARM void ActorUnkAJTM::func_ov068_0215c8c0(void) {}
ARM void ActorUnkAJTM::func_ov068_0215c908(void) {}
ARM void ActorUnkAJTM::func_ov068_0215c98c(void) {}
ARM void ActorUnkAJTM::func_ov068_0215cb78(void) {}
ARM void ActorUnkAJTM::func_ov068_0215cb90(void) {}
ARM void ActorUnkAJTM::func_ov068_0215cdf8(void) {}
ARM void ActorUnkAJTM::func_ov068_0215cf38(void) {}

ARM ActorUnkAJTM::~ActorUnkAJTM() {}
ARM ActorProfileUnkAJTM::~ActorProfileUnkAJTM() {}
