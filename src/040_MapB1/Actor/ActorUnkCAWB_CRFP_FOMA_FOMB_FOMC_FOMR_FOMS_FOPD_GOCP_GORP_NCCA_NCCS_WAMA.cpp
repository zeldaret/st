//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkCAWB_CRFP_FOMA_FOMB_FOMC_FOMR_FOMS_FOPD_GOCP_GORP_NCCA_NCCS_WAMA.hpp"
#include "System/SysNew.hpp"
#include "versions.h"

#if IS_JP
THUMB_BEGIN
#endif

DECL_PROFILE(ActorProfileUnkNCCS);
DECL_PROFILE(ActorProfileUnkFOMS);
DECL_PROFILE(ActorProfileUnkNCCA);
DECL_PROFILE(ActorProfileUnkWAMA);
DECL_PROFILE(ActorProfileUnkGORP);
DECL_PROFILE(ActorProfileUnkGOCP);
DECL_PROFILE(ActorProfileUnkCAWB);
DECL_PROFILE(ActorProfileUnkFOPD);
DECL_PROFILE(ActorProfileUnkFOMA);
DECL_PROFILE(ActorProfileUnkFOMB);
DECL_PROFILE(ActorProfileUnkFOMC);
DECL_PROFILE(ActorProfileUnkFOMR);
DECL_PROFILE(ActorProfileUnkCRFP);

// --- Actor NCCS ---

Actor *ActorProfileUnkNCCS::Create() {
    return NULL;
}

ActorProfileUnkNCCS::ActorProfileUnkNCCS() :
    ActorProfile_Derived1(ActorId_NCCS) {}

ActorUnkNCCS::ActorUnkNCCS() {}

// --- Actor FOMS ---

Actor *ActorProfileUnkFOMS::Create() {
    return NULL;
}

ActorProfileUnkFOMS::ActorProfileUnkFOMS() :
    ActorProfile_Derived1(ActorId_FOMS) {}

ActorUnkFOMS::ActorUnkFOMS() {}

// --- Actor NCCA ---

Actor *ActorProfileUnkNCCA::Create() {
    return new(HeapIndex_2) ActorUnkNCCA();
}

ActorProfileUnkNCCA::ActorProfileUnkNCCA() :
    ActorProfile_Derived1(ActorId_NCCA) {}

ActorUnkNCCA::ActorUnkNCCA() {}

// --- Actor WAMA ---

Actor *ActorProfileUnkWAMA::Create() {
    return new(HeapIndex_2) ActorUnkWAMA();
}

ActorProfileUnkWAMA::ActorProfileUnkWAMA() :
    ActorProfile_Derived1(ActorId_WAMA) {}

ActorUnkWAMA::ActorUnkWAMA() {}

// --- Actor GORP ---

Actor *ActorProfileUnkGORP::Create() {
    return new(HeapIndex_2) ActorUnkGORP();
}

ActorProfileUnkGORP::ActorProfileUnkGORP() :
    ActorProfile_Derived1(ActorId_GORP) {}

ActorUnkGORP::ActorUnkGORP() {}

// --- Actor GOCP ---

Actor *ActorProfileUnkGOCP::Create() {
    return new(HeapIndex_2) ActorUnkGOCP();
}

ActorProfileUnkGOCP::ActorProfileUnkGOCP() :
    ActorProfile_Derived1(ActorId_GOCP) {}

ActorUnkGOCP::ActorUnkGOCP() {}

// --- Actor CAWB ---

Actor *ActorProfileUnkCAWB::Create() {
    return new(HeapIndex_2) ActorUnkCAWB();
}

ActorProfileUnkCAWB::ActorProfileUnkCAWB() :
    ActorProfile_Derived1(ActorId_CAWB) {}

ActorUnkCAWB::ActorUnkCAWB() {}

// --- Actor FOPD ---

Actor *ActorProfileUnkFOPD::Create() {
    return new(HeapIndex_2) ActorUnkFOPD();
}

ActorProfileUnkFOPD::ActorProfileUnkFOPD() :
    ActorProfile_Derived1(ActorId_FOPD) {}

ActorUnkFOPD::ActorUnkFOPD() {}

// --- Actor FOMA ---

Actor *ActorProfileUnkFOMA::Create() {
    return new(HeapIndex_2) ActorUnkFOMA();
}

ActorProfileUnkFOMA::ActorProfileUnkFOMA() :
    ActorProfile_Derived1(ActorId_FOMA) {}

ActorUnkFOMA::ActorUnkFOMA() {}

// --- Actor FOMB ---

Actor *ActorProfileUnkFOMB::Create() {
    return new(HeapIndex_2) ActorUnkFOMB();
}

ActorProfileUnkFOMB::ActorProfileUnkFOMB() :
    ActorProfile_Derived1(ActorId_FOMB) {}

ActorUnkFOMB::ActorUnkFOMB() {}

// --- Actor FOMC ---

Actor *ActorProfileUnkFOMC::Create() {
    return new(HeapIndex_2) ActorUnkFOMC();
}

ActorProfileUnkFOMC::ActorProfileUnkFOMC() :
    ActorProfile_Derived1(ActorId_FOMC) {}

ActorUnkFOMC::ActorUnkFOMC() {}

// --- Actor FOMR ---

Actor *ActorProfileUnkFOMR::Create() {
    return new(HeapIndex_2) ActorUnkFOMR();
}

ActorProfileUnkFOMR::ActorProfileUnkFOMR() :
    ActorProfile_Derived1(ActorId_FOMR) {}

ActorUnkFOMR::ActorUnkFOMR() {}

// --- Actor CRFP ---

Actor *ActorProfileUnkCRFP::Create() {
    return new(HeapIndex_2) ActorUnkCRFP();
}

ActorProfileUnkCRFP::ActorProfileUnkCRFP() :
    ActorProfile_Derived1(ActorId_CRFP) {}

ActorUnkCRFP::ActorUnkCRFP() {}

#if IS_JP
THUMB_END
#endif

ActorProfileUnkNCCS::~ActorProfileUnkNCCS() {}
ActorProfileUnkFOMS::~ActorProfileUnkFOMS() {}
ActorProfileUnkNCCA::~ActorProfileUnkNCCA() {}
ActorProfileUnkWAMA::~ActorProfileUnkWAMA() {}
ActorProfileUnkGORP::~ActorProfileUnkGORP() {}
ActorProfileUnkGOCP::~ActorProfileUnkGOCP() {}
ActorProfileUnkCAWB::~ActorProfileUnkCAWB() {}
ActorProfileUnkFOPD::~ActorProfileUnkFOPD() {}
ActorProfileUnkFOMA::~ActorProfileUnkFOMA() {}
ActorProfileUnkFOMB::~ActorProfileUnkFOMB() {}
ActorProfileUnkFOMC::~ActorProfileUnkFOMC() {}
ActorProfileUnkFOMR::~ActorProfileUnkFOMR() {}
ActorProfileUnkCRFP::~ActorProfileUnkCRFP() {}
