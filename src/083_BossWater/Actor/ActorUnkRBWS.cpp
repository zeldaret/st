//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRBWS.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkRBWS);

ARM Actor *ActorProfileUnkRBWS::Create() {
    return new(HeapIndex_2) ActorUnkRBWS();
}

ARM ActorProfileUnkRBWS::ActorProfileUnkRBWS() :
    ActorProfile_Derived1(ActorId_RBWS) {}

ARM ActorUnkRBWS::ActorUnkRBWS() {}

ARM void ActorUnkRBWS::func_ov083_0215c264(void) {}
ARM void ActorUnkRBWS::func_ov083_0215c2a0(void) {}
ARM void ActorUnkRBWS::func_ov083_0215c2a4(void) {}

ARM ActorUnkRBWS::~ActorUnkRBWS() {}
ARM ActorProfileUnkRBWS::~ActorProfileUnkRBWS() {}
