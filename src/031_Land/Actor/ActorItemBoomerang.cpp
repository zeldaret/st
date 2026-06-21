#include "Actor/ActorItemBoomerang.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileItemBoomerang);

Actor *ActorProfileItemBoomerang::Create() {
    return new(HeapIndex_2) ActorItemBoomerang();
}

ActorProfileItemBoomerang::ActorProfileItemBoomerang() :
    ActorProfile(ActorId_ITBM) {}

ActorItemBoomerang::ActorItemBoomerang() {}

// non-matching
void ActorItemBoomerang::func_ov031_020e45fc() {}
// non-matching
void ActorItemBoomerang::func_ov031_020e4760() {}
// non-matching
void ActorItemBoomerang::func_ov031_020e4774() {}
// non-matching
void ActorItemBoomerang::func_ov031_020e4788() {}
// non-matching
void ActorItemBoomerang::func_ov031_020e48d0() {}
// non-matching
void ActorItemBoomerang::func_ov031_020e4994() {}
// non-matching
void ActorItemBoomerang::func_ov031_020e49b0() {}
// non-matching
void ActorItemBoomerang::func_ov031_020e4a20() {}
// non-matching
void ActorItemBoomerang::func_ov031_020e5034() {}
// non-matching
void ActorItemBoomerang::func_ov031_020e5220() {}
// non-matching
void ActorItemBoomerang::func_ov031_020e52a0() {}
// non-matching
void ActorItemBoomerang::func_ov031_020e5354() {}
// non-matching
void ActorItemBoomerang::func_ov031_020e53c8() {}
// non-matching
void ActorItemBoomerang::func_ov031_020e53e4() {}
// non-matching
void ActorItemBoomerang::func_ov031_020e5400() {}
// non-matching
void ActorItemBoomerang::func_ov031_020e544c() {}
// non-matching
void ActorItemBoomerang::func_ov031_020e5488() {}
// non-matching
void ActorItemBoomerang::func_ov031_020e54a4() {}
// non-matching
void ActorItemBoomerang::func_ov031_020e54d4() {}
// non-matching
void ActorItemBoomerang::func_ov031_020e5704() {}
// non-matching
void ActorItemBoomerang::func_ov031_020e5710() {}
// non-matching
void ActorItemBoomerang::func_ov031_020e572c() {}

ActorItemBoomerang::~ActorItemBoomerang() {}
ActorProfileItemBoomerang::~ActorProfileItemBoomerang() {}
