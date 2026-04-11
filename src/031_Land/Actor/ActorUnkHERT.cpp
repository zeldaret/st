//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkHERT.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkHERT sActorProfileUnkHERT;

ARM ActorProfileUnkHERT *ActorProfileUnkHERT::GetProfile() {
    return &sActorProfileUnkHERT;
}

ARM Actor *ActorProfileUnkHERT::Create() {
    return new(HeapIndex_2) ActorUnkHERT();
}

ARM ActorProfileUnkHERT::ActorProfileUnkHERT() :
    ActorProfile(ActorId_Heart) {}

ARM ActorUnkHERT::ActorUnkHERT() {}

ARM void ActorUnkHERT::func_ov031_020eed64(void) {}
ARM void ActorUnkHERT::func_ov031_020eeed8(void) {}
ARM void ActorUnkHERT::func_ov031_020eeee8(void) {}
ARM void ActorUnkHERT::func_ov031_020ef1b4(void) {}
ARM void ActorUnkHERT::func_ov031_020ef208(void) {}
ARM void ActorUnkHERT::func_ov031_020ef2ec(void) {}
ARM void ActorUnkHERT::func_ov031_020ef2f8(void) {}
ARM void ActorUnkHERT::func_ov031_020ef320(void) {}
ARM void ActorUnkHERT::func_ov031_020ef334(void) {}
ARM void ActorUnkHERT::func_ov031_020ef35c(void) {}
ARM void ActorUnkHERT::func_ov031_020ef3a0(void) {}
ARM void ActorUnkHERT::func_ov031_020ef3b8(void) {}
ARM void ActorUnkHERT::func_ov031_020ef3d0(void) {}
ARM void ActorUnkHERT::func_ov031_020ef430(void) {}
ARM void ActorUnkHERT::func_ov031_020ef444(void) {}
ARM void ActorUnkHERT::func_ov031_020ef448(void) {}
ARM void ActorUnkHERT::func_ov031_020ef458(void) {}
ARM void ActorUnkHERT::func_ov031_020ef4a8(void) {}
ARM void ActorUnkHERT::func_ov031_020ef528(void) {}
ARM void ActorUnkHERT::func_ov031_020ef570(void) {}
ARM void ActorUnkHERT::func_ov031_020ef5e8(void) {}
ARM void ActorUnkHERT::func_ov031_020ef698(void) {}
ARM void ActorUnkHERT::func_ov031_020ef6f8(void) {}
ARM void ActorUnkHERT::func_ov031_020ef730(void) {}
ARM void ActorUnkHERT::func_ov031_020ef774(void) {}
ARM void ActorUnkHERT::func_ov031_020ef794(void) {}
ARM void ActorUnkHERT::func_ov031_020ef7bc(void) {}

ARM ActorUnkHERT::~ActorUnkHERT() {}
ARM ActorProfileUnkHERT::~ActorProfileUnkHERT() {}
