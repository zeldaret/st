//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMLF.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkRMLF);

Actor *ActorProfileUnkRMLF::Create() {
    return new(HeapIndex_2) ActorUnkRMLF();
}

ActorProfileUnkRMLF::ActorProfileUnkRMLF() :
    ActorProfile_Derived1(ActorId_RMLF) {}

ActorUnkRMLF::ActorUnkRMLF() {}

void ActorUnkRMLF::func_ov062_02159a6c(void) {}

ActorUnkRMLF::~ActorUnkRMLF() {}
ActorProfileUnkRMLF::~ActorProfileUnkRMLF() {}
