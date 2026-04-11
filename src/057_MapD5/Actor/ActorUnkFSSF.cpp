//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkFSSF.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkFSSF);

ARM Actor *ActorProfileUnkFSSF::Create() {
    return new(HeapIndex_2) ActorUnkFSSF();
}

ARM ActorProfileUnkFSSF::ActorProfileUnkFSSF() :
    ActorProfile(ActorId_FSSF) {}

ARM ActorUnkFSSF::ActorUnkFSSF() {}

ARM void ActorUnkFSSF::func_ov057_02139f24(void) {}
ARM void ActorUnkFSSF::func_ov057_02139fc4(void) {}
ARM void ActorUnkFSSF::func_ov057_0213a0c0(void) {}
ARM void ActorUnkFSSF::func_ov057_0213a0cc(void) {}
ARM void ActorUnkFSSF::func_ov057_0213a124(void) {}

ARM ActorUnkFSSF::~ActorUnkFSSF() {}
ARM ActorProfileUnkFSSF::~ActorProfileUnkFSSF() {}
