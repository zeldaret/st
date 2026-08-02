#include "Actor/ActorBlast.hpp"

#include "Actor/ActorManager.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e09bc.hpp"
#include "Unknown/UnkStruct_027e09c0.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_027e0cec.hpp"

struct UnkStruct_ov031_020e5d18_00 {
    /* 00 */ Actor *mUnk_00;
    /* 04 */ STRUCT_PAD(0x04, 0x18);
    /* 18 */
};

extern "C" VecFx32 data_027e07d4;

extern "C" void func_01ffe6c4(UnkStruct_ov031_020e5d18_00 *, ActorRef, VecFx32 *, VecFx32 *, s32, VecFx32 *,
                              UnkStruct_ov031_Items_00_Base *);

DECL_PROFILE(ActorProfileBlast);

Actor *ActorProfileBlast::Create() {
    return new(HeapIndex_2) ActorBlast();
}

ActorProfileBlast::ActorProfileBlast() :
    ActorProfile(ActorId_Blast) {
    VecFx32_Init(FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), &this->mUnk_04.pos);
}

// non-matching
bool ActorBlast_E8::vfunc_0C(const UnkStruct_ov031_020e54d4 *param1, unk32 param2) {}

ActorBlast::ActorBlast() :
    mUnk_94(FLOAT_TO_FX32(0.625f)),
    mUnk_98(0x0),
    mUnk_9A(0x18),
    mUnk_E8(this) {}

bool ActorBlast::vfunc_18(unk32 param1) {
    this->mPos.y += FLOAT_TO_FX32(0.5f);

    this->mUnk_C8 = *this->mUnk_34;
    VecFx32_Add(&this->mUnk_C8.pos, &this->mPos, &this->mUnk_C8.pos);

    this->mUnk_D8 = *this->mUnk_30;
    VecFx32_Add(&this->mUnk_D8.pos, &this->mPos, &this->mUnk_D8.pos);

    data_027e09a8->func_ov000_02071b30(0xF3, &this->mPos, 0x0);
    data_027e09a8->func_ov000_02071eac(&this->mPos);

    if (this->mUnk_5C.mParams[1] == 0x1) {
        this->mUnk_F4 = FLOAT_TO_FX32(0.2f);
        this->mUnk_F0 = FLOAT_TO_FX32(1.5f);
    } else {
        this->mUnk_F4 = FLOAT_TO_FX32(0.1f);
        this->mUnk_F0 = FLOAT_TO_FX32(1.0f);
    }

    data_027e09bc->mUnk_0C->func_ov000_0207a1e0(0x6);

    if (this->mUnk_5C.mParams[0] != 0x0) {
        data_027e0cec->func_ov000_0209feac(0x812, &this->mPos, 0x2, 0x0, 0x0);
        data_027e0cec->func_ov000_0209feac(0x813, &this->mPos, 0x2, 0x0, 0x0);
        data_027e0cec->func_ov000_0209feac(0x814, &this->mPos, 0x2, 0x0, 0x0);
    } else {
        data_027e0cec->func_ov000_0209feac(0x80B, &this->mPos, 0x2, 0x0, 0x0);
        data_027e0cec->func_ov000_0209feac(0x80C, &this->mPos, 0x2, 0x0, 0x0);
        data_027e0cec->func_ov000_0209feac(0x80D, &this->mPos, 0x2, 0x0, 0x0);
        data_027e0cec->func_ov000_0209feac(0x80E, &this->mPos, 0x2, 0x0, 0x0);
        data_027e0cec->func_ov000_0209feac(0x80F, &this->mPos, 0x2, 0x0, 0x0);
    }

    UnkStruct_027e0cd8_0C_Base *data = data_027e0cd8->mUnk_0C;
    if (data->mUnk_110 == 0x7 && data->func_ov000_0208217c(&this->mPos, 0x1)) {
        ActorParams actorParams;
        ActorRef actorRef;
        actorParams.mUnk_28 = 0x0;

        actorParams.func_ov000_020975f8();
        actorParams.mUnk_28 = this->mRef;

        VecFx32_Copy(&this->mPos, &actorParams.mInitialPos);
        actorParams.mParams[0] = 0x1;
        Actor::func_ov000_020973f4(&actorRef, &data_ov000_020b539c_eur, ActorId_FLDK, &actorParams, 0x0);
    }
    return true;
}

// non-matching
void ActorBlast::vfunc_20() {
    fx32 f0       = this->mUnk_F0;
    fx32 newVal   = this->mUnk_94 + this->mUnk_F4;
    this->mUnk_94 = newVal;
    if (newVal <= f0) {
        this->mUnk_C8.size = newVal;
        this->mUnk_D8.size = newVal;
    } else {
        this->mUnk_94      = f0;
        this->mUnk_C8.size = ~FLOAT_TO_FX32(0.0f);
    }
    if (this->IsInternalTimerOut()) {
        this->func_ov000_020984d0();
        return;
    }
    if (this->mUnk_C8.size <= FLOAT_TO_FX32(0.0f)) {
        return;
    }
    this->mUnk_9C.mUnk_0C = this->mUnk_C8;

    data_027e09c0->func_ov000_0207e58c(this->mRef, 0x0, 0xC, &this->mUnk_9C);

    UnkStruct_ov031_020e5d18_00 sp14;
    sp14.mUnk_00 = NULL;

    func_01ffe6c4(&sp14, this->mRef, &data_027e07d4, &data_027e07d4, 0x1C, NULL, &this->mUnk_E8);

    sp14.mUnk_00->func_ov000_0207df88(&this->mUnk_C8, 0x0);

    if (this->func_ov000_0209867c(0x0) < 0x1000) {
        data_027e09c0->func_ov000_0207e458(0x4, 0x0, &this->mUnk_C8.pos, 0x1, NULL, 0x1);
    }

    if (!data_027e0ce0->func_01fff1a4()) {
        return;
    }
    data_027e09c0->func_ov000_0207e458(0x2, 0x1A, &this->mUnk_C8.pos, 0x2, NULL, 0x0);
}

void ActorBlast::vfunc_24() {
    fx32 f0     = this->mUnk_F0;
    fx32 newVal = this->mUnk_94 + this->mUnk_F4;
    if (newVal >= f0) {
        newVal = f0;
    }
    this->mUnk_94 = newVal;
    if (!this->IsInternalTimerOut()) {
        return;
    }
    this->func_ov000_020984d0();
}

fx32 ActorBlast::func_ov031_020e3b94() {
    return FLOAT_TO_FX32(0.5f);
}

void ActorBlast::func_ov031_020e3b9c(unk16 param1, unk16 param2) {
    ActorParams actorParams;
    ActorRef ref;

    actorParams.mUnk_28 = 0x0;
    actorParams.func_ov000_020975f8();
    actorParams.func_ov000_020975f8();

    actorParams.mUnk_28 = this->mRef;
    VecFx32_Copy(&this->mPos, &actorParams.mInitialPos);

    actorParams.mParams[0] = param1;
    actorParams.mParams[1] = param2;

    this->func_ov000_020973f4(&ref, &data_ov000_020b539c_eur, ActorId_Blast, &actorParams, 0x0);
}
