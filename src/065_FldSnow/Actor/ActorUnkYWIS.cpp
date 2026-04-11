//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkYWIS.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkYWIS);

ARM Actor *ActorProfileUnkYWIS::Create() {
    return new(HeapIndex_2) ActorUnkYWIS();
}

ARM ActorProfileUnkYWIS::ActorProfileUnkYWIS() :
    ActorProfile(ActorId_YWIS) {}

ARM ActorUnkYWIS::ActorUnkYWIS() {}

ARM void ActorUnkYWIS::func_ov065_021597bc(void) {}
ARM void ActorUnkYWIS::func_ov065_021597c4(void) {}
ARM void ActorUnkYWIS::func_ov065_021597f4(void) {}
ARM void ActorUnkYWIS::func_ov065_02159808(void) {}
ARM void ActorUnkYWIS::func_ov065_02159810(void) {}

ARM ActorUnkYWIS::~ActorUnkYWIS() {}
ARM ActorProfileUnkYWIS::~ActorProfileUnkYWIS() {}
