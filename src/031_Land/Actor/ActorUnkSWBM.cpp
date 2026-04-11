//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSWBM.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkSWBM sActorProfileUnkSWBM;

ARM ActorProfileUnkSWBM *ActorProfileUnkSWBM::GetProfile() {
    return &sActorProfileUnkSWBM;
}

ARM Actor *ActorProfileUnkSWBM::Create() {
    return new(HeapIndex_2) ActorUnkSWBM();
}

ARM ActorProfileUnkSWBM::ActorProfileUnkSWBM() :
    ActorProfile(ActorId_SWBM) {}

ARM ActorUnkSWBM::ActorUnkSWBM() {}

ARM void ActorUnkSWBM::func_ov031_020e6c60(void) {}
ARM void ActorUnkSWBM::func_ov031_020e6c74(void) {}
ARM void ActorUnkSWBM::func_ov031_020e6c88(void) {}
ARM void ActorUnkSWBM::func_ov031_020e6d48(void) {}
ARM void ActorUnkSWBM::func_ov031_020e6d80(void) {}
ARM void ActorUnkSWBM::func_ov031_020e6e84(void) {}
ARM void ActorUnkSWBM::func_ov031_020e6ef8(void) {}
ARM void ActorUnkSWBM::func_ov031_020e7160(void) {}
ARM void ActorUnkSWBM::func_ov031_020e718c(void) {}
ARM void ActorUnkSWBM::func_ov031_020e7294(void) {}
ARM void ActorUnkSWBM::func_ov031_020e72f0(void) {}
ARM void ActorUnkSWBM::func_ov031_020e7334(void) {}

ARM ActorUnkSWBM::~ActorUnkSWBM() {}
ARM ActorProfileUnkSWBM::~ActorProfileUnkSWBM() {}
