//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkKGDN.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkKGDN sActorProfileUnkKGDN;

ARM ActorProfileUnkKGDN *ActorProfileUnkKGDN::GetProfile() {
    return &sActorProfileUnkKGDN;
}

ARM Actor *ActorProfileUnkKGDN::Create() {
    return new(HeapIndex_2) ActorUnkKGDN();
}

ARM ActorProfileUnkKGDN::ActorProfileUnkKGDN() :
    ActorProfile(ActorId_KGDN) {}

ARM ActorUnkKGDN::ActorUnkKGDN() {}

ARM void ActorUnkKGDN::func_ov041_02124248(void) {}
ARM void ActorUnkKGDN::func_ov041_021242c4(void) {}
ARM void ActorUnkKGDN::func_ov041_0212430c(void) {}
ARM void ActorUnkKGDN::func_ov041_0212450c(void) {}
ARM void ActorUnkKGDN::func_ov041_02124624(void) {}
ARM void ActorUnkKGDN::func_ov041_02124700(void) {}
ARM void ActorUnkKGDN::func_ov041_02124928(void) {}
ARM void ActorUnkKGDN::func_ov041_02124998(void) {}
ARM void ActorUnkKGDN::func_ov041_02124a30(void) {}
ARM void ActorUnkKGDN::func_ov041_02124a90(void) {}
ARM void ActorUnkKGDN::func_ov041_02124ac4(void) {}

ARM ActorUnkKGDN::~ActorUnkKGDN() {}
ARM ActorProfileUnkKGDN::~ActorProfileUnkKGDN() {}
