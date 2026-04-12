//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMLF.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkRMLF);

ARM Actor *ActorProfileUnkRMLF::Create() {
    return new(HeapIndex_2) ActorUnkRMLF();
}

ARM ActorProfileUnkRMLF::ActorProfileUnkRMLF() :
    ActorProfile_Derived1(ActorId_RMLF) {}

ARM ActorUnkRMLF::ActorUnkRMLF() {}

ARM void ActorUnkRMLF::func_ov062_02159a6c(void) {}

ARM ActorUnkRMLF::~ActorUnkRMLF() {}
ARM ActorProfileUnkRMLF::~ActorProfileUnkRMLF() {}
