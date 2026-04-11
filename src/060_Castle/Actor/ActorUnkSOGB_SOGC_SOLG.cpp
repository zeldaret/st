//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSOGB_SOGC_SOLG.hpp"
#include "System/SysNew.hpp"

// --- Actor SOGB ---

static ActorProfileUnkSOGB sActorProfileUnkSOGB;

ARM ActorProfileUnkSOGB *ActorProfileUnkSOGB::GetProfile() {
    return &sActorProfileUnkSOGB;
}

ARM Actor *ActorProfileUnkSOGB::Create() {
    return new(HeapIndex_2) ActorUnkSOGB();
}

ARM ActorProfileUnkSOGB::ActorProfileUnkSOGB() :
    ActorProfile(ActorId_SOGB) {}

ARM ActorUnkSOGB::ActorUnkSOGB() {}

// --- Actor SOGC ---

static ActorProfileUnkSOGC sActorProfileUnkSOGC;

ARM ActorProfileUnkSOGC *ActorProfileUnkSOGC::GetProfile() {
    return &sActorProfileUnkSOGC;
}

ARM Actor *ActorProfileUnkSOGC::Create() {
    return new(HeapIndex_2) ActorUnkSOGC();
}

ARM ActorProfileUnkSOGC::ActorProfileUnkSOGC() :
    ActorProfile(ActorId_SOGC) {}

ARM ActorUnkSOGC::ActorUnkSOGC() {}

// --- Actor SOLG ---

static ActorProfileUnkSOLG sActorProfileUnkSOLG;

ARM ActorProfileUnkSOLG *ActorProfileUnkSOLG::GetProfile() {
    return &sActorProfileUnkSOLG;
}

ARM Actor *ActorProfileUnkSOLG::Create() {
    return new(HeapIndex_2) ActorUnkSOLG();
}

ARM ActorProfileUnkSOLG::ActorProfileUnkSOLG() :
    ActorProfile(ActorId_SOLG) {}

ARM ActorUnkSOLG::ActorUnkSOLG() {}

ARM ActorProfileUnkSOGB::~ActorProfileUnkSOGB() {}
ARM ActorProfileUnkSOGC::~ActorProfileUnkSOGC() {}
ARM ActorProfileUnkSOLG::~ActorProfileUnkSOLG() {}
