#include "Actor/ActorUnkNORE.hpp"
#include "System/SysNew.hpp"

#include "Unknown/UnkStruct_027e0cd8.hpp"

extern "C" void func_01ffedac(Vec2b *, Vec3p *);

ARM DECL_PROFILE(ActorProfileUnkNORE);

ARM Actor *ActorProfileUnkNORE::Create() {
    return new(HeapIndex_2) ActorUnkNORE();
}

ARM ActorProfileUnkNORE::ActorProfileUnkNORE() :
    ActorProfile(ActorId_NORE) {}

ARM ActorUnkNORE::ActorUnkNORE() {}

ARM bool ActorUnkNORE::func_ov031_020f7f8c(void) {
    Vec2b local_vec;

    UnkStruct_027e0cd8_0c *unk_obj = data_027e0cd8->mUnk_0C;

    func_01ffedac(&local_vec, &this->mPos);

    unk_obj->func_ov000_020801b0(&local_vec, 7, 1);

    this->mFlags[0] &= ~1;

    return true;
}

ARM ActorUnkNORE::~ActorUnkNORE() {}
ARM ActorProfileUnkNORE::~ActorProfileUnkNORE() {}
