//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkVRGN.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkVRGN);

ARM Actor *ActorProfileUnkVRGN::Create() {
    return new(HeapIndex_2) ActorUnkVRGN();
}

ARM ActorProfileUnkVRGN::ActorProfileUnkVRGN() :
    ActorProfile(ActorId_VRGN) {}

ARM ActorUnkVRGN::ActorUnkVRGN() {}

ARM void ActorUnkVRGN::func_ov094_02168468(void) {}
ARM void ActorUnkVRGN::func_ov094_0216849c(void) {}
ARM void ActorUnkVRGN::func_ov094_02168588(void) {}
ARM void ActorUnkVRGN::func_ov094_021685bc(void) {}
ARM void ActorUnkVRGN::func_ov094_02168624(void) {}

ARM ActorUnkVRGN::~ActorUnkVRGN() {}
ARM ActorProfileUnkVRGN::~ActorProfileUnkVRGN() {}
