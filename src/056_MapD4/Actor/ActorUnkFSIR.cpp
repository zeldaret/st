//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkFSIR.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkFSIR sActorProfileUnkFSIR;

ARM ActorProfileUnkFSIR *ActorProfileUnkFSIR::GetProfile() {
    return &sActorProfileUnkFSIR;
}

ARM Actor *ActorProfileUnkFSIR::Create() {
    return new(HeapIndex_2) ActorUnkFSIR();
}

ARM ActorProfileUnkFSIR::ActorProfileUnkFSIR() :
    ActorProfile(ActorId_FSIR) {}

ARM ActorUnkFSIR::ActorUnkFSIR() {}

ARM void ActorUnkFSIR::func_ov056_0213af0c(void) {}
ARM void ActorUnkFSIR::func_ov056_0213af70(void) {}
ARM void ActorUnkFSIR::func_ov056_0213af9c(void) {}
ARM void ActorUnkFSIR::func_ov056_0213b028(void) {}
ARM void ActorUnkFSIR::func_ov056_0213b088(void) {}
ARM void ActorUnkFSIR::func_ov056_0213b0e4(void) {}
ARM void ActorUnkFSIR::func_ov056_0213b134(void) {}
ARM void ActorUnkFSIR::func_ov056_0213b138(void) {}
ARM void ActorUnkFSIR::func_ov056_0213b13c(void) {}
ARM void ActorUnkFSIR::func_ov056_0213b140(void) {}
ARM void ActorUnkFSIR::func_ov056_0213b144(void) {}
ARM void ActorUnkFSIR::func_ov056_0213b148(void) {}
ARM void ActorUnkFSIR::func_ov056_0213b234(void) {}

ARM ActorUnkFSIR::~ActorUnkFSIR() {}
ARM ActorProfileUnkFSIR::~ActorProfileUnkFSIR() {}
