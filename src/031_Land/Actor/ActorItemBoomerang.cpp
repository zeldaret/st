#include "Actor/ActorItemBoomerang.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e0cec.hpp"
#include "Unknown/UnkStruct_027e0d2c.hpp"

extern "C" unk32 func_ov000_0205aeac();

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
void ActorItemBoomerang::func_ov031_020e4a20() {
    VecFx32_Copy(&this->mPos, &this->mPrevPos);
    VecFx32_Add(&this->mPos, &this->mVel, &this->mPos);

    if (func_ov000_0205aeac() && this->mUnk_128 == 0x1 || this->mUnk_128 == 0x2) {
        VecFx32_Copy(&this->mPos, &this->mUnk_140);
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
void ActorItemBoomerang::func_ov031_020e52a0() {}
// non-matching
void ActorItemBoomerang::func_ov031_020e5354() {}

void ActorItemBoomerang::func_ov031_020e53c8(Actor *actor) {
    data_027e0d2c->func_ov031_020d95c8(actor->mRef);
}

void ActorItemBoomerang::func_ov031_020e53e4(Actor *actor) {
    data_027e0d2c->func_ov031_020d95c8(actor->mRef);
}

extern "C" bool func_ov000_0207b754();

// non-matching
bool ActorItemBoomerang::func_ov031_020e5400(Actor *actor) {
    if (actor) {
        if (actor->mRef.Get32() && actor->mVel.x == FLOAT_TO_FX32(0.0f) && actor->mVel.y == FLOAT_TO_FX32(0.0f) &&
            actor->mVel.z == FLOAT_TO_FX32(0.0f)) {
            this->mUnk_2C = 0x0;
            return func_ov000_0207b754();
        }
    }
    return false;
}

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
