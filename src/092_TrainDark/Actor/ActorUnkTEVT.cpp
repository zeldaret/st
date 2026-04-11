//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkTEVT.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkTEVT);

ARM Actor *ActorProfileUnkTEVT::Create() {
    return new(HeapIndex_2) ActorUnkTEVT();
}

ARM ActorProfileUnkTEVT::ActorProfileUnkTEVT() :
    ActorProfile(ActorId_TEVT) {}

ARM ActorUnkTEVT::ActorUnkTEVT() {}

ARM void ActorUnkTEVT::func_ov092_02177df8(void) {}
ARM void ActorUnkTEVT::func_ov092_02177fb4(void) {}
ARM void ActorUnkTEVT::func_ov092_02178050(void) {}
ARM void ActorUnkTEVT::func_ov092_02178054(void) {}
ARM void ActorUnkTEVT::func_ov092_02178488(void) {}
ARM void ActorUnkTEVT::func_ov092_02178498(void) {}

ARM ActorUnkTEVT::~ActorUnkTEVT() {}
ARM ActorProfileUnkTEVT::~ActorProfileUnkTEVT() {}
