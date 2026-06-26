#include "Actor/ActorItemBoomerang.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e09b4.hpp"
#include "Unknown/UnkStruct_027e0cec.hpp"
#include "Unknown/UnkStruct_027e0d2c.hpp"

extern "C" unk32 func_ov000_0205aeac();

DECL_PROFILE(ActorProfileItemBoomerang);

Actor *ActorProfileItemBoomerang::Create() {
    return new(HeapIndex_2) ActorItemBoomerang();
}

ActorProfileItemBoomerang::ActorProfileItemBoomerang() :
    ActorProfile(ActorId_ITBM) {}

ActorItemBoomerang::ActorItemBoomerang() :
    mUnk_94(data_027e0ce0->func_ov000_0208ed30(0x0, 0x1, ItemManager::func_ov000_020a8974(0x1)->mUnk_10)),
    mUnk_9C(true),
    mUnk_11C(this),
    mUnk_138(0x0),
    mUnk_13A(0x0),
    mUnk_13C((u16) 0x8D71),
    mUnk_140(0x1000, 0x0) {
    this->mState  = ActorItemBoomerangState_0;
    this->mUnk_52 = 0xFFFF;
    this->mUnk_50 = 0x0;
}

// non-matching
ActorItemBoomerang_A0::~ActorItemBoomerang_A0() {}
// non-matching
ActorItemBoomerang_CC::~ActorItemBoomerang_CC() {}

// non-matching
bool ActorItemBoomerang::vfunc_18(unk32 param1) {}

// non-matching
void ActorItemBoomerang::SetState(ActorState state) {
    this->mState  = state;
    this->mUnk_52 = FLOAT_TO_FX32(0.0f);
    this->mUnk_50 = FLOAT_TO_FX32(15.9998f);
}

void ActorItemBoomerang::func_ov031_020e49b0(unk32 param1) {
    data_027e09a8->func_ov000_02071b30(param1, &this->mPos, 0);
    data_027e09a8->func_ov000_02071eac(&this->mPos);
    this->func_ov031_020e5220();

    if (this->mState == ActorItemBoomerangState_1) {
        return;
    }
    this->mVel.x = FLOAT_TO_FX32(0.0f);
    this->mVel.y = FLOAT_TO_FX32(0.0f);
    this->mVel.z = FLOAT_TO_FX32(0.0f);

    data_027e0d2c->func_ov031_020d95b4();
    this->SetState(ActorItemBoomerangState_1);
}

// non-matching
void ActorItemBoomerang::vfunc_20() {
    VecFx32_Copy(&this->mPos, &this->mPrevPos);
    VecFx32_Add(&this->mPos, &this->mVel, &this->mPos);

    if (func_ov000_0205aeac() && this->mUnk_128 == 0x1 || this->mUnk_128 == 0x2) {
        // VecFx32_Copy(&this->mPos, &this->mUnk_140);
    }

    this->IsTimerOut();
    this->mAngle += 0x2000;
    this->func_ov031_020e52a0();
    data_027e09a8->func_ov000_02071d34(&this->mRef, this->mUnk_13C, &this->mPos, 0x0);

    switch (this->mState) {
        case ActorItemBoomerangState_0:
            break;
        case ActorItemBoomerangState_1:
            break;
        default:
            break;
    }
}

// non-matching
void ActorItemBoomerang::func_ov031_020e5034() {}

void ActorItemBoomerang::func_ov031_020e5220() {
    data_027e0cec->func_ov000_0209feac(0x81A, &this->mPos, 0x2, 0x0, 0x0);
    data_027e0cec->func_ov000_0209feac(0x81B, &this->mPos, 0x2, 0x0, 0x0);
    data_027e0cec->func_ov000_0209feac(0x81C, &this->mPos, 0x2, 0x0, 0x0);
}

// non-matching
void ActorItemBoomerang::func_ov031_020e52a0() {
    this->mUnk_12C->func_ov000_020a0334();
}
// non-matching
void ActorItemBoomerang::vfunc_2C(unk32 param1) {
    if (Actor::func_01fff5d0(param1, 0x0)) {
        this->mUnk_94.func_01ffc6d4((u16) this->mAngle, &this->mPos);
        data_027e09b4->func_ov017_020c08c4(&this->mPos, 0x400, 0x400, 0x1F, 0x0, 0x1);
    }
}

void ActorItemBoomerang_A0::vfunc_10(Actor *actor) {
    data_027e0d2c->func_ov031_020d95c8(actor->mRef);
}

void ActorItemBoomerang_CC::vfunc_10(Actor *actor) {
    data_027e0d2c->func_ov031_020d95c8(actor->mRef);
}

// non-matching
bool ActorItemBoomerang_CC::vfunc_0C(Actor *actor, VecFx32 *param2) {
    if (actor) {
        if (actor->mRef.Get32() == this->mUnk_2C && actor->mVel.x == FLOAT_TO_FX32(0.0f) &&
            actor->mVel.y == FLOAT_TO_FX32(0.0f) && actor->mVel.z == FLOAT_TO_FX32(0.0f)) {
            this->mUnk_2C = 0x0;
            return UnkStruct_ov031_Items_01::vfunc_0C(actor, param2);
        }
    }
    return false;
}

void ActorItemBoomerang_Unknown::func_ov031_020e45fc() {
    this->mUnk_00   = 0x0;
    this->mUnk_04.x = FLOAT_TO_FX32(-0.1003f);
    this->mUnk_04.y = FLOAT_TO_FX32(0.0f);
    this->mUnk_04.z = FLOAT_TO_FX32(0.3f);
}

// non-matching
ActorItemBoomerang_11C::ActorItemBoomerang_11C(ActorItemBoomerang *param1) :
    mUnk_08(param1) {}
// non-matching
ActorItemBoomerang_11C::~ActorItemBoomerang_11C() {}
// non-matching
bool ActorItemBoomerang_11C::vfunc_08(const UnkStruct_ov031_020f3310 *param1) {}
// non-matching
void ActorItemBoomerang_11C::vfunc_10() {}

void ActorItemBoomerang_Unknown::func_ov031_020e5704() {
    this->mUnk_00 = 0;
}

ActorItemBoomerang::~ActorItemBoomerang() {}
ActorProfileItemBoomerang::~ActorProfileItemBoomerang() {}
