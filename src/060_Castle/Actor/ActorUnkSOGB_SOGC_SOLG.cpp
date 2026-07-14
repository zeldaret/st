//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSOGB_SOGC_SOLG.hpp"
#include "System/SysNew.hpp"

// --- Actor SOGB ---

DECL_PROFILE(ActorProfileUnkSOGB);

Actor *ActorProfileUnkSOGB::Create() {
    return new(HeapIndex_2) ActorUnkSOGB();
}

ActorProfileUnkSOGB::ActorProfileUnkSOGB() :
    ActorProfile(ActorId_SOGB) {}

ActorUnkSOGB::ActorUnkSOGB() {}

// --- Actor SOGC ---

DECL_PROFILE(ActorProfileUnkSOGC);

Actor *ActorProfileUnkSOGC::Create() {
    return new(HeapIndex_2) ActorUnkSOGC();
}

ActorProfileUnkSOGC::ActorProfileUnkSOGC() :
    ActorProfile(ActorId_SOGC) {}

ActorUnkSOGC::ActorUnkSOGC() {}

// --- Actor SOLG ---

DECL_PROFILE(ActorProfileUnkSOLG);

Actor *ActorProfileUnkSOLG::Create() {
    return new(HeapIndex_2) ActorUnkSOLG();
}

ActorProfileUnkSOLG::ActorProfileUnkSOLG() :
    ActorProfile(ActorId_SOLG) {}

ActorUnkSOLG::ActorUnkSOLG() {}

ActorProfileUnkSOGB::~ActorProfileUnkSOGB() {}
ActorProfileUnkSOGC::~ActorProfileUnkSOGC() {}
ActorProfileUnkSOLG::~ActorProfileUnkSOLG() {}
