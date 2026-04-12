//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkDMTR.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkDMTR);

ARM Actor *ActorProfileUnkDMTR::Create() {
    return new(HeapIndex_2) ActorUnkDMTR();
}

ARM ActorProfileUnkDMTR::ActorProfileUnkDMTR() :
    ActorProfile(ActorId_DMTR) {}

ARM ActorUnkDMTR::ActorUnkDMTR() {}

ARM void ActorUnkDMTR::func_ov088_0216c74c(void) {}
ARM void ActorUnkDMTR::func_ov088_0216c818(void) {}
ARM void ActorUnkDMTR::func_ov088_0216cb08(void) {}
ARM void ActorUnkDMTR::func_ov088_0216cbf0(void) {}

ARM ActorUnkDMTR::~ActorUnkDMTR() {}
ARM ActorProfileUnkDMTR::~ActorProfileUnkDMTR() {}
