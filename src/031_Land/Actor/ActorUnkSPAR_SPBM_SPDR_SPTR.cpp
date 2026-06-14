#include "Actor/ActorUnkSPAR_SPBM_SPDR_SPTR.hpp"
#include "System/SysNew.hpp"

// --- Actor Common ---

// non-matching
ActorDroppedItem::ActorDroppedItem() {}

void ActorDroppedItem::func_ov031_020f9f8c() {}
// non-matching
void ActorDroppedItem::func_ov031_020fa00c() {}
// non-matching
void ActorDroppedItem::func_ov031_020fa20c() {}
// non-matching
void ActorDroppedItem::func_ov031_020fa23c() {}
// non-matching
void ActorDroppedItem::func_ov031_020fa260() {}
// non-matching
void ActorDroppedItem::func_ov031_020fa424() {}
// non-matching
void ActorDroppedItem::func_ov031_020fa468() {}
// non-matching
void ActorDroppedItem::func_ov031_020fa46c() {}
// non-matching
void ActorDroppedItem::func_ov031_020fa494() {}
// non-matching
void ActorDroppedItem::func_ov031_020fa4a0() {}
// non-matching
void ActorDroppedItem::func_ov031_020fa524() {}
// non-matching
void ActorDroppedItem::func_ov031_020fa568() {}
// non-matching
void ActorDroppedItem::func_ov031_020fa5f0() {}
// non-matching
void ActorDroppedItem::func_ov031_020fa650() {}
// non-matching
void ActorDroppedItem::func_ov031_020fa664() {}
// non-matching
void ActorDroppedItem::func_ov031_020fa668() {}
// non-matching
void ActorDroppedItem::func_ov031_020fa678() {}
// non-matching
void ActorDroppedItem::func_ov031_020fa6c8() {}
// non-matching
void ActorDroppedItem::func_ov031_020fa72c() {}
// non-matching
void ActorDroppedItem::func_ov031_020fa83c() {}
// non-matching
void ActorDroppedItem::func_ov031_020fa900() {}
// non-matching
void ActorDroppedItem::func_ov031_020fa9f8() {}
// non-matching
void ActorDroppedItem::func_ov031_020faa30() {}
// non-matching
void ActorDroppedItem::func_ov031_020faa74() {}
// non-matching
void ActorDroppedItem::func_ov031_020faa94() {}
// non-matching
void ActorDroppedItem::func_ov031_020faabc() {}

// --- end Common ---

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
