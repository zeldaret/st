#include "Actor/ActorUnkNORE.hpp"
#include "System/SysNew.hpp"

#include "Unknown/UnkStruct_027e0cd8.hpp"

extern "C" void func_01ffedac(Vec2b *, VecFx32 *);

DECL_PROFILE(ActorProfileUnkNORE);

Actor *ActorProfileUnkNORE::Create() {
    return new(HeapIndex_2) ActorUnkNORE();
}

ActorProfileUnkNORE::ActorProfileUnkNORE() :
    ActorProfile(ActorId_NORE) {}

ActorUnkNORE::ActorUnkNORE() {}

bool ActorUnkNORE::vfunc_18(unk32 param1) {
    Vec2b local_vec;

    UnkStruct_027e0cd8_0C_Base *unk_obj = data_027e0cd8->mUnk_0C;

    func_01ffedac(&local_vec, &this->mPos);

    unk_obj->func_ov000_020801b0(&local_vec, 7, 1);

    UNSET_FLAG(this->mFlags, ActorFlag_Alive);

    return true;
}

ActorUnkNORE::~ActorUnkNORE() {}
ActorProfileUnkNORE::~ActorProfileUnkNORE() {}
