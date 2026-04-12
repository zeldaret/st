//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkCAWB_CRFP_FOMA_FOMB_FOMC_FOMR_FOMS_FOPD_GOCP_GORP_NCCA_NCCS_WAMA.hpp"
#include "System/SysNew.hpp"

OV040_ARM DECL_PROFILE(ActorProfileUnkNCCS);
OV040_ARM DECL_PROFILE(ActorProfileUnkFOMS);
OV040_ARM DECL_PROFILE(ActorProfileUnkNCCA);
OV040_ARM DECL_PROFILE(ActorProfileUnkWAMA);
OV040_ARM DECL_PROFILE(ActorProfileUnkGORP);
OV040_ARM DECL_PROFILE(ActorProfileUnkGOCP);
OV040_ARM DECL_PROFILE(ActorProfileUnkCAWB);
OV040_ARM DECL_PROFILE(ActorProfileUnkFOPD);
OV040_ARM DECL_PROFILE(ActorProfileUnkFOMA);
OV040_ARM DECL_PROFILE(ActorProfileUnkFOMB);
OV040_ARM DECL_PROFILE(ActorProfileUnkFOMC);
OV040_ARM DECL_PROFILE(ActorProfileUnkFOMR);
OV040_ARM DECL_PROFILE(ActorProfileUnkCRFP);

// --- Actor NCCS ---

OV040_ARM Actor *ActorProfileUnkNCCS::Create() {
    return NULL;
}

OV040_ARM ActorProfileUnkNCCS::ActorProfileUnkNCCS() :
    ActorProfile_Derived1(ActorId_NCCS) {}

OV040_ARM ActorUnkNCCS::ActorUnkNCCS() {}

// --- Actor FOMS ---

OV040_ARM Actor *ActorProfileUnkFOMS::Create() {
    return NULL;
}

OV040_ARM ActorProfileUnkFOMS::ActorProfileUnkFOMS() :
    ActorProfile_Derived1(ActorId_FOMS) {}

OV040_ARM ActorUnkFOMS::ActorUnkFOMS() {}

// --- Actor NCCA ---

OV040_ARM Actor *ActorProfileUnkNCCA::Create() {
    return new(HeapIndex_2) ActorUnkNCCA();
}

OV040_ARM ActorProfileUnkNCCA::ActorProfileUnkNCCA() :
    ActorProfile_Derived1(ActorId_NCCA) {}

OV040_ARM ActorUnkNCCA::ActorUnkNCCA() {}

// --- Actor WAMA ---

OV040_ARM Actor *ActorProfileUnkWAMA::Create() {
    return new(HeapIndex_2) ActorUnkWAMA();
}

OV040_ARM ActorProfileUnkWAMA::ActorProfileUnkWAMA() :
    ActorProfile_Derived1(ActorId_WAMA) {}

OV040_ARM ActorUnkWAMA::ActorUnkWAMA() {}

// --- Actor GORP ---

OV040_ARM Actor *ActorProfileUnkGORP::Create() {
    return new(HeapIndex_2) ActorUnkGORP();
}

OV040_ARM ActorProfileUnkGORP::ActorProfileUnkGORP() :
    ActorProfile_Derived1(ActorId_GORP) {}

OV040_ARM ActorUnkGORP::ActorUnkGORP() {}

// --- Actor GOCP ---

OV040_ARM Actor *ActorProfileUnkGOCP::Create() {
    return new(HeapIndex_2) ActorUnkGOCP();
}

OV040_ARM ActorProfileUnkGOCP::ActorProfileUnkGOCP() :
    ActorProfile_Derived1(ActorId_GOCP) {}

OV040_ARM ActorUnkGOCP::ActorUnkGOCP() {}

// --- Actor CAWB ---

OV040_ARM Actor *ActorProfileUnkCAWB::Create() {
    return new(HeapIndex_2) ActorUnkCAWB();
}

OV040_ARM ActorProfileUnkCAWB::ActorProfileUnkCAWB() :
    ActorProfile_Derived1(ActorId_CAWB) {}

OV040_ARM ActorUnkCAWB::ActorUnkCAWB() {}

// --- Actor FOPD ---

OV040_ARM Actor *ActorProfileUnkFOPD::Create() {
    return new(HeapIndex_2) ActorUnkFOPD();
}

OV040_ARM ActorProfileUnkFOPD::ActorProfileUnkFOPD() :
    ActorProfile_Derived1(ActorId_FOPD) {}

OV040_ARM ActorUnkFOPD::ActorUnkFOPD() {}

// --- Actor FOMA ---

OV040_ARM Actor *ActorProfileUnkFOMA::Create() {
    return new(HeapIndex_2) ActorUnkFOMA();
}

OV040_ARM ActorProfileUnkFOMA::ActorProfileUnkFOMA() :
    ActorProfile_Derived1(ActorId_FOMA) {}

OV040_ARM ActorUnkFOMA::ActorUnkFOMA() {}

// --- Actor FOMB ---

OV040_ARM Actor *ActorProfileUnkFOMB::Create() {
    return new(HeapIndex_2) ActorUnkFOMB();
}

OV040_ARM ActorProfileUnkFOMB::ActorProfileUnkFOMB() :
    ActorProfile_Derived1(ActorId_FOMB) {}

OV040_ARM ActorUnkFOMB::ActorUnkFOMB() {}

// --- Actor FOMC ---

OV040_ARM Actor *ActorProfileUnkFOMC::Create() {
    return new(HeapIndex_2) ActorUnkFOMC();
}

OV040_ARM ActorProfileUnkFOMC::ActorProfileUnkFOMC() :
    ActorProfile_Derived1(ActorId_FOMC) {}

OV040_ARM ActorUnkFOMC::ActorUnkFOMC() {}

// --- Actor FOMR ---

OV040_ARM Actor *ActorProfileUnkFOMR::Create() {
    return new(HeapIndex_2) ActorUnkFOMR();
}

OV040_ARM ActorProfileUnkFOMR::ActorProfileUnkFOMR() :
    ActorProfile_Derived1(ActorId_FOMR) {}

OV040_ARM ActorUnkFOMR::ActorUnkFOMR() {}

// --- Actor CRFP ---

OV040_ARM Actor *ActorProfileUnkCRFP::Create() {
    return new(HeapIndex_2) ActorUnkCRFP();
}

OV040_ARM ActorProfileUnkCRFP::ActorProfileUnkCRFP() :
    ActorProfile_Derived1(ActorId_CRFP) {}

OV040_ARM ActorUnkCRFP::ActorUnkCRFP() {}

ARM ActorProfileUnkNCCS::~ActorProfileUnkNCCS() {}
ARM ActorProfileUnkFOMS::~ActorProfileUnkFOMS() {}
ARM ActorProfileUnkNCCA::~ActorProfileUnkNCCA() {}
ARM ActorProfileUnkWAMA::~ActorProfileUnkWAMA() {}
ARM ActorProfileUnkGORP::~ActorProfileUnkGORP() {}
ARM ActorProfileUnkGOCP::~ActorProfileUnkGOCP() {}
ARM ActorProfileUnkCAWB::~ActorProfileUnkCAWB() {}
ARM ActorProfileUnkFOPD::~ActorProfileUnkFOPD() {}
ARM ActorProfileUnkFOMA::~ActorProfileUnkFOMA() {}
ARM ActorProfileUnkFOMB::~ActorProfileUnkFOMB() {}
ARM ActorProfileUnkFOMC::~ActorProfileUnkFOMC() {}
ARM ActorProfileUnkFOMR::~ActorProfileUnkFOMR() {}
ARM ActorProfileUnkCRFP::~ActorProfileUnkCRFP() {}
