//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkOCGS.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkOCGS sActorProfileUnkOCGS;

ARM ActorProfileUnkOCGS *ActorProfileUnkOCGS::GetProfile() {
    return &sActorProfileUnkOCGS;
}

ARM Actor *ActorProfileUnkOCGS::Create() {
    return new(HeapIndex_2) ActorUnkOCGS();
}

ARM ActorProfileUnkOCGS::ActorProfileUnkOCGS() :
    ActorProfile_Derived1(ActorId_OCGS) {}

ARM ActorUnkOCGS::ActorUnkOCGS() {}

ARM void ActorUnkOCGS::func_ov086_0215b0fc(void) {}
ARM void ActorUnkOCGS::func_ov086_0215b110(void) {}
ARM void ActorUnkOCGS::func_ov086_0215b194(void) {}
ARM void ActorUnkOCGS::func_ov086_0215b3e8(void) {}
ARM void ActorUnkOCGS::func_ov086_0215b504(void) {}
ARM void ActorUnkOCGS::func_ov086_0215b5a8(void) {}
ARM void ActorUnkOCGS::func_ov086_0215b5f0(void) {}
ARM void ActorUnkOCGS::func_ov086_0215b628(void) {}
ARM void ActorUnkOCGS::func_ov086_0215b6f4(void) {}
ARM void ActorUnkOCGS::func_ov086_0215b730(void) {}
ARM void ActorUnkOCGS::func_ov086_0215b7c0(void) {}

ARM ActorUnkOCGS::~ActorUnkOCGS() {}
ARM ActorProfileUnkOCGS::~ActorProfileUnkOCGS() {}
