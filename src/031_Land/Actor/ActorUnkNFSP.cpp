//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkNFSP.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkNFSP sActorProfileUnkNFSP;

ARM ActorProfileUnkNFSP *ActorProfileUnkNFSP::GetProfile() {
    return &sActorProfileUnkNFSP;
}

ARM Actor *ActorProfileUnkNFSP::Create() {
    return new(HeapIndex_2) ActorUnkNFSP();
}

ARM ActorProfileUnkNFSP::ActorProfileUnkNFSP() :
    ActorProfile_Derived1(ActorId_NFSP) {}

ARM ActorUnkNFSP::ActorUnkNFSP() {}

ARM void ActorUnkNFSP::func_ov031_020fb8d8(void) {}
ARM void ActorUnkNFSP::func_ov031_020fb920(void) {}
ARM void ActorUnkNFSP::func_ov031_020fb988(void) {}
ARM void ActorUnkNFSP::func_ov031_020fb994(void) {}
ARM void ActorUnkNFSP::func_ov031_020fb9b4(void) {}
ARM void ActorUnkNFSP::func_ov031_020fba60(void) {}
ARM void ActorUnkNFSP::func_ov031_020fbaec(void) {}
ARM void ActorUnkNFSP::func_ov031_020fbb88(void) {}
ARM void ActorUnkNFSP::func_ov031_020fbb8c(void) {}
ARM void ActorUnkNFSP::func_ov031_020fbba0(void) {}
ARM void ActorUnkNFSP::func_ov031_020fbbe0(void) {}
ARM void ActorUnkNFSP::func_ov031_020fbc04(void) {}
ARM void ActorUnkNFSP::func_ov031_020fbc3c(void) {}
ARM void ActorUnkNFSP::func_ov031_020fbc94(void) {}
ARM void ActorUnkNFSP::func_ov031_020fbcc0(void) {}
ARM void ActorUnkNFSP::func_ov031_020fbcf0(void) {}

ARM ActorUnkNFSP::~ActorUnkNFSP() {}
ARM ActorProfileUnkNFSP::~ActorProfileUnkNFSP() {}
