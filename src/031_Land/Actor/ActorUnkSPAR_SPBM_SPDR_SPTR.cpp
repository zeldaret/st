//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSPAR_SPBM_SPDR_SPTR.hpp"
#include "System/SysNew.hpp"

// --- Actor SPAR ---

ARM DECL_PROFILE(ActorProfileUnkSPAR);

ARM Actor *ActorProfileUnkSPAR::Create() {
    return new(HeapIndex_2) ActorUnkSPAR();
}

ARM ActorProfileUnkSPAR::ActorProfileUnkSPAR() :
    ActorProfile(ActorId_SPAR) {}

ARM ActorUnkSPAR::ActorUnkSPAR() {}

// --- Actor SPBM ---

ARM DECL_PROFILE(ActorProfileUnkSPBM);

ARM Actor *ActorProfileUnkSPBM::Create() {
    return new(HeapIndex_2) ActorUnkSPBM();
}

ARM ActorProfileUnkSPBM::ActorProfileUnkSPBM() :
    ActorProfile(ActorId_SPBM) {}

ARM ActorUnkSPBM::ActorUnkSPBM() {}

// --- Actor SPDR ---

ARM DECL_PROFILE(ActorProfileUnkSPDR);

ARM Actor *ActorProfileUnkSPDR::Create() {
    return new(HeapIndex_2) ActorUnkSPDR();
}

ARM ActorProfileUnkSPDR::ActorProfileUnkSPDR() :
    ActorProfile(ActorId_SPDR) {}

ARM ActorUnkSPDR::ActorUnkSPDR() {}

// --- Actor SPTR ---

ARM DECL_PROFILE(ActorProfileUnkSPTR);

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
