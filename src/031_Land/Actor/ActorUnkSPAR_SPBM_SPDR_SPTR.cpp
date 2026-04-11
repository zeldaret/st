//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSPAR_SPBM_SPDR_SPTR.hpp"
#include "System/SysNew.hpp"

// --- Actor SPAR ---

static ActorProfileUnkSPAR sActorProfileUnkSPAR;

ARM ActorProfileUnkSPAR *ActorProfileUnkSPAR::GetProfile() {
    return &sActorProfileUnkSPAR;
}

ARM Actor *ActorProfileUnkSPAR::Create() {
    return new(HeapIndex_2) ActorUnkSPAR();
}

ARM ActorProfileUnkSPAR::ActorProfileUnkSPAR() :
    ActorProfile(ActorId_SPAR) {}

ARM ActorUnkSPAR::ActorUnkSPAR() {}

// --- Actor SPBM ---

static ActorProfileUnkSPBM sActorProfileUnkSPBM;

ARM ActorProfileUnkSPBM *ActorProfileUnkSPBM::GetProfile() {
    return &sActorProfileUnkSPBM;
}

ARM Actor *ActorProfileUnkSPBM::Create() {
    return new(HeapIndex_2) ActorUnkSPBM();
}

ARM ActorProfileUnkSPBM::ActorProfileUnkSPBM() :
    ActorProfile(ActorId_SPBM) {}

ARM ActorUnkSPBM::ActorUnkSPBM() {}

// --- Actor SPDR ---

static ActorProfileUnkSPDR sActorProfileUnkSPDR;

ARM ActorProfileUnkSPDR *ActorProfileUnkSPDR::GetProfile() {
    return &sActorProfileUnkSPDR;
}

ARM Actor *ActorProfileUnkSPDR::Create() {
    return new(HeapIndex_2) ActorUnkSPDR();
}

ARM ActorProfileUnkSPDR::ActorProfileUnkSPDR() :
    ActorProfile(ActorId_SPDR) {}

ARM ActorUnkSPDR::ActorUnkSPDR() {}

// --- Actor SPTR ---

static ActorProfileUnkSPTR sActorProfileUnkSPTR;

ARM ActorProfileUnkSPTR *ActorProfileUnkSPTR::GetProfile() {
    return &sActorProfileUnkSPTR;
}

ARM Actor *ActorProfileUnkSPTR::Create() {
    return new(HeapIndex_2) ActorUnkSPTR();
}

ARM ActorProfileUnkSPTR::ActorProfileUnkSPTR() :
    ActorProfile(ActorId_SPTR) {}

ARM ActorUnkSPTR::ActorUnkSPTR() {}

ARM ActorProfileUnkSPAR::~ActorProfileUnkSPAR() {}
ARM ActorProfileUnkSPBM::~ActorProfileUnkSPBM() {}
ARM ActorProfileUnkSPDR::~ActorProfileUnkSPDR() {}
ARM ActorProfileUnkSPTR::~ActorProfileUnkSPTR() {}
