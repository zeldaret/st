//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkMOCT.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkMOCT);

ARM Actor *ActorProfileUnkMOCT::Create() {
    return new(HeapIndex_2) ActorUnkMOCT();
}

ARM ActorProfileUnkMOCT::ActorProfileUnkMOCT() :
    ActorProfile(ActorId_MOCT) {}

ARM ActorUnkMOCT::ActorUnkMOCT() {}

ARM void ActorUnkMOCT::func_ov062_0215a588(void) {}
ARM void ActorUnkMOCT::func_ov062_0215a590(void) {}
ARM void ActorUnkMOCT::func_ov062_0215a5cc(void) {}
ARM void ActorUnkMOCT::func_ov062_0215a634(void) {}
ARM void ActorUnkMOCT::func_ov062_0215a670(void) {}

ARM ActorUnkMOCT::~ActorUnkMOCT() {}
ARM ActorProfileUnkMOCT::~ActorProfileUnkMOCT() {}
