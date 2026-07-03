#include "Actor/ActorPot.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfilePot);

Actor *ActorProfilePot::Create() {
    return new(HeapIndex_2) ActorPot();
}

// non-matching
ActorProfilePot::ActorProfilePot() :
    ActorProfile(ActorId_NTUB) {}

// non-matching
ActorPot::ActorPot() {}

// non-matching
void ActorPot::func_ov031_020f0cf0() {}
// non-matching
void ActorPot::func_ov031_020f0d04() {}
// non-matching
void ActorPot::func_ov031_020f0d2c() {}
// non-matching
void ActorPot::func_ov031_020f0d80() {}
// non-matching
void ActorPot::func_ov031_020f0db8() {}
// non-matching
void ActorPot::func_ov031_020f0de8() {}
// non-matching
void ActorPot::func_ov031_020f0df4() {}
// non-matching
void ActorPot::func_ov031_020f0e00() {}
// non-matching
void ActorPot::func_ov031_020f0e0c() {}
// non-matching
void ActorPot::func_ov031_020f0e18() {}
// non-matching
void ActorPot::func_ov031_020f0e24() {}
// non-matching
void ActorPot::func_ov031_020f0e30() {}
// non-matching
void ActorPot::func_ov031_020f0e3c() {}
// non-matching
void ActorPot::func_ov031_020f0e48() {}
// non-matching
void ActorPot::func_ov031_020f0e5c() {}
// non-matching
void ActorPot::func_ov031_020f0e70() {}
// non-matching
void ActorPot::func_ov031_020f0f44() {}

ActorPot::~ActorPot() {}
ActorProfilePot::~ActorProfilePot() {}
