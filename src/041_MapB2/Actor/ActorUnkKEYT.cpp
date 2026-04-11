//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkKEYT.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkKEYT sActorProfileUnkKEYT;

ARM ActorProfileUnkKEYT *ActorProfileUnkKEYT::GetProfile() {
    return &sActorProfileUnkKEYT;
}

ARM Actor *ActorProfileUnkKEYT::Create() {
    return new(HeapIndex_2) ActorUnkKEYT();
}

ARM ActorProfileUnkKEYT::ActorProfileUnkKEYT() :
    ActorProfile(ActorId_KEYT) {}

ARM ActorUnkKEYT::ActorUnkKEYT() {}

ARM void ActorUnkKEYT::func_ov041_02123c7c(void) {}
ARM void ActorUnkKEYT::func_ov041_02123cf8(void) {}
ARM void ActorUnkKEYT::func_ov041_02123d40(void) {}
ARM void ActorUnkKEYT::func_ov041_02123d88(void) {}
ARM void ActorUnkKEYT::func_ov041_02123eb8(void) {}
ARM void ActorUnkKEYT::func_ov041_02123ff8(void) {}
ARM void ActorUnkKEYT::func_ov041_02124094(void) {}
ARM void ActorUnkKEYT::func_ov041_021240c0(void) {}
ARM void ActorUnkKEYT::func_ov041_02124164(void) {}

ARM ActorUnkKEYT::~ActorUnkKEYT() {}
ARM ActorProfileUnkKEYT::~ActorProfileUnkKEYT() {}
