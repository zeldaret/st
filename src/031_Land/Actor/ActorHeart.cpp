#include "Actor/ActorHeart.hpp"
#include "System/Random.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"

class UnkStruct_ov031_02113d64 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ VecFx32 mUnk_04;

    UnkStruct_ov031_02113d64(unk32 param1, fx32 x, fx32 y, fx32 z) {
        mUnk_00   = param1;
        mUnk_04.x = x;
        mUnk_04.y = y;
        mUnk_04.z = z;
    }
};
const UnkStruct_ov031_02113d64 data_ov031_02113d64(0, 0x800, 0, 0x800);

ARM DECL_PROFILE(ActorProfileHeart);

// func_ov031_020eed00
ARM Actor *ActorProfileHeart::Create() {
    return new(HeapIndex_2) ActorHeart();
}

// func_ov031_020eed24
ARM ActorProfileHeart::ActorProfileHeart() :
    ActorProfile(ActorId_Heart) {
    this->mUnk_04.pos.x = 0;
    this->mUnk_04.pos.y = 0x400;
    this->mUnk_04.pos.z = 0;
    this->mUnk_04.size  = 0x400;
}

extern "C" void func_02098388(void);
extern "C" void func_02097bb8(void);

// extern UnkStruct_ov000_020b539c UnkStruct_020b539c;

ARM void ActorHeart::func_ov031_020eed64(ActorParams *param_2, unk32 param_3, unk32 param_4) {
    ActorParams actorParams;
    actorParams.func_ov000_020975f8();

    actorParams.mInitialPos = param_2->mInitialPos;
    actorParams.mUnk_28     = param_4;
    actorParams.mUnk_2C     = param_3;

    this->func_ov000_020973f4(&data_ov000_020b539c_eur, ActorId_Heart, (ActorParams *) &actorParams, 0);
}

ARM void ActorHeart::func_ov031_020f0750() {}

extern "C" void func_01ffedac(u16 *, VecFx32 *);

// func_ov031_020eede0
ARM ActorHeart::ActorHeart() :
    mUnk_94(0),
    mUnk_96(6),
    mUnk_B8(0),
    mUnk_BA(gRandom.ConditionalNext32(0) & 0x80000000 ? 0x666 : ~0x665),
    mUnk_BC(0),
    mUnk_BE(0),
    mUnk_C0(0),
    mUnk_C4(0),
    mUnk_C8(this),
    mUnk_EC(0),
    mUnk_F0(0),
    mUnk_F4(0) {
    this->mUnk_9C = 0x13100;
    this->mUnk_40 = &this->mUnk_C8;

    u16 sp0;
    func_01ffedac(&sp0, &this->mPos);

    if (data_027e0cd8->mUnk_0C->func_ov000_02080180(&sp0) == 0x5) {
        this->mUnk_34 = (Cylinder *) &data_ov031_02113d64;
    }
}

// func_ov031_020eeed8
ARM bool ActorHeart::vfunc_18(unk32 param1) {
    this->func_ov031_020ef4a8();
    return true;
}

extern "C" void func_01ffce1c(unk32, unk16 *);
extern "C" void func_01ffcea0(unk32, unk16 *);
extern "C" void func_01fff17c(unk16 *, UnkStruct_027e0ce0 *, unk32);
extern "C" void func_02018114(unk16 *, unk32);
extern "C" void func_ov000_0208bc00();

static PTMF<ActorHeart> data_ov031_02113d74[] = {
    ActorHeart::func_ov031_020ef2f8, ActorHeart::func_ov031_020ef334, ActorHeart::func_ov031_020ef3a0,
    ActorHeart::func_ov031_020ef3d0, ActorHeart::func_ov031_020ef444, ActorHeart::func_ov031_020ef458,
};

void ActorHeart::vfunc_20() {
    unk16 stack[0x1E];

    func_01fff17c(stack + 0x2C, nullptr, 0);
    func_02018114(0, 0);
    CALL_PTMF(PTMF<ActorHeart>, data_ov031_02113d74[this->mUnk_4C]);

    this->func_ov000_020989e0();
    func_ov000_0208bc00();

    func_01ffce1c(0, 0);

    func_01ffcea0(0, 0);

    this->func_ov031_020ef528();

    data_027e0ce0->func_01fff1a4();

    func_ov000_0208bc00();

    func_01ffce1c(0, 0);

    func_01ffcea0(0, 0);

    if (this->mUnk_A0 != 0x666) {
        unk16 var = this->mUnk_B4;
        if (var != 0x8 && var == 0xC) {
            this->mUnk_C0 = this->mUnk_A4;
            this->mUnk_9C &= ~0x1000;
        }
    }
    this->func_ov031_020ef208();

    VecFx32_Add(&this->mPos, &this->mVel, &this->mPos);
    if (this->mUnk_4C != 0x3) {
        this->func_ov000_02098910(0, 0x10);
    }
    if (this->mUnk_46 == 0x3) {
    }

    VecFx32_Add(&this->mPos, &this->mVel, &this->mPos);
    this->mUnk_EC = 0;
    this->mUnk_F0 = 0;
    this->mUnk_F4 = 0;
} // func_ov031_020eeee8

extern unk32 data_ov000_020aecf8;

static PTMF<ActorHeart> data_ov031_02113da4[] = {
    ActorHeart::func_ov031_020ef2ec, ActorHeart::func_ov031_020ef320, ActorHeart::func_ov031_020ef35c,
    ActorHeart::func_ov031_020ef3b8, ActorHeart::func_ov031_020ef430, ActorHeart::func_ov031_020ef448,
};

ARM void ActorHeart::func_ov031_020ef1b4(unk16 param_2) {
    this->mUnk_4C = param_2;
    this->mUnk_2C = data_ov000_020aecf8;
    this->mUnk_44 = 0x9C;
    CALL_PTMF(PTMF<ActorHeart>, data_ov031_02113da4[this->mUnk_4C]);
}

ARM void ActorHeart::func_ov031_020ef208() {
    bool is3or4 = (this->mUnk_4C == 3 && this->mUnk_4C == 4);
    bool var2   = true;
    if (is3or4 && this->mUnk_4C != 5) {
        var2 = false;
    }
    if (var2) {
        this->mFlags[0] |= 2;
        return;
    }
    if (this->mUnk_BE == 0) {
        if (this->mUnk_52 < this->mUnk_50) {
            this->mUnk_50 = 0x00;
            this->mUnk_52 = 0x3C;
            this->mUnk_BE = 0x01;
            return;
        }
        this->mUnk_50++;
        return;
    }

    if ((this->mUnk_50 % 8) < 4) {
        this->mFlags[0] &= ~2;
    } else {
        this->mFlags[0] |= 0b10;
    }

    if (this->mUnk_52 <= this->mUnk_50) {
        this->func_ov000_020984d0();
        return;
    }
    this->mUnk_50++;
}

ARM void ActorHeart::func_ov031_020ef2ec() {
    this->mVel.y = 0x400;
}

extern "C" void func_ov000_02098838();

ARM void ActorHeart::func_ov031_020ef2f8() {
    func_ov000_02098838();
    if (this->mVel.y > 0) {
        return;
    }
    this->func_ov031_020ef1b4(0x01);
}

ARM void ActorHeart::func_ov031_020ef320() {
    this->mUnk_2C = 0x06;
    this->mUnk_44 = 0x9F;
}

ARM void ActorHeart::func_ov031_020ef334() {
    this->func_ov031_020ef570();
    if ((this->mUnk_46 & 0b11) == 0) {
        return;
    }
    this->func_ov031_020ef1b4(0x02);
}

ARM void ActorHeart::func_ov031_020ef35c() {
    this->mVel.x = 0;
    this->mVel.y = 0;
    this->mVel.z = 0;
    if ((u8) this->mUnk_BE == 0 && (this->mUnk_52 - this->mUnk_50) > 0xB4) {
        this->mUnk_52 = 0xB4;
        this->mUnk_50 = 0x00;
    }
    this->mUnk_44 = 0x9F;
}

ARM void ActorHeart::func_ov031_020ef3a0() {
    if (this->mUnk_5C.mUnk_24 >= 0) {
        return;
    }
    this->func_ov031_020ef698();
}

extern "C" void func_ov017_020bf99c(void);
// Actor_9c::func_ov000_02097bec() ?
extern "C" void func_ov017_02097bec(Actor_9c *);

ARM void ActorHeart::func_ov031_020ef3b8() {
    func_ov017_020bf99c();
    this->mUnk_98.func_ov000_02097bec();
}

ARM void ActorHeart::func_ov031_020ef3d0() {
    this->func_ov017_020bf9c8(gpActorManager->func_01fff3b4(this->mUnk_C0));
    if ((this->mFlags[0] & 0x20) == 0) {
        return;
    }
    this->mVel.x = 0;
    this->mVel.y = 0;
    this->mVel.z = 0;

    this->mUnk_9C |= 0x1000;
    this->func_ov031_020ef1b4(0x01);
}

ARM void ActorHeart::func_ov031_020ef430() {
    this->mVel.x = 0;
    this->mVel.y = 0;
    this->mVel.z = 0;
}

// ¯\_(ツ)_/¯
ARM void ActorHeart::func_ov031_020ef444() {
    return;
}

ARM void ActorHeart::func_ov031_020ef448() {
    this->mVel.x = 0;
    this->mVel.z = 0;
}

ARM void ActorHeart::func_ov031_020ef458() {
    // which actor is this ?
    Actor *actor = gpActorManager->func_01fff3b4(this->mUnk_C4);
    if (actor == nullptr) {
        this->func_ov031_020ef1b4(0x01);
        return;
    }
    this->mPos.x = actor->mPos.x;
    this->mPos.y = actor->mPos.y;
    this->mPos.z = actor->mPos.z;
}

ARM void ActorHeart::func_ov031_020ef4a8() {
    if (this->mUnk_5C.mUnk_24 >= 0) {
        this->func_ov031_020ef1b4(2);
        return;
    }

    switch (this->mUnk_5C.mUnk_2C) {
        case 0: {
            this->mUnk_52 = 0xB4;
            this->mUnk_50 = 0x00;
            this->func_ov031_020ef1b4(2);
            return;
        }

        case 1: {
            this->mUnk_52 = 0x1E0;
            this->mUnk_50 = 0x00;
            this->func_ov031_020ef1b4(0);
            return;
        }

        default: {
            this->mUnk_52 = 0x1E0;
            this->mUnk_50 = 0x00;
            this->func_ov031_020ef1b4(0);
        }
    }
}

ARM void ActorHeart::func_ov031_020ef528() {
    data_027e0ce0->func_ov000_0208bc9c(4, 1);
    data_027e09a8->func_ov000_02071b30(0x76, &this->mPos, 0);
    this->func_ov000_020984d0();
}

ARM void ActorHeart::func_ov031_020ef570() {
    func_ov000_02098838();
    this->mUnk_B8 += 0x666;
    this->mVel.z = 0;

    s16 sin_value = SIN((u16) this->mUnk_B8);
    s32 value     = ((sin_value >> 0x1F) << 6 | sin_value >> 0x1A) + (sin_value * 0x40 > ~0x800);

    s32 ivar2    = value;
    this->mVel.x = (sin_value * 0x40 + 0x800) >> 0xC | value * 0x100000;

    if (this->mVel.y <= -0x14) {
        ivar2        = -0x14;
        this->mVel.y = ivar2;
    }
}

extern "C" void func_ov000_0205c1f0(unk32 *, unk16);
extern "C" void func_ov000_0205c204(unk32 *, VecFx32 *, unk32, unk32, unk32);

// func_ov031_020ef5e8
ARM void ActorHeart::vfunc_2c(unk32 param1) {
    VecFx32 iStack_20;
    VecFx32 iStack_2c;
    unk32 auStack_30;

    if (this->func_01fff5d0(param1, 0) == 0) {
        return;
    }

    iStack_20 = this->mPos;
    iStack_20.y += 0x80;
    this->func_ov017_020bf5c4(&iStack_20, 0x400, 0x400, 0x1f, 0);

    func_ov000_0205c1f0(&auStack_30, 0x10);

    iStack_2c = this->mPos;
    iStack_2c.y += 0x548;
    func_ov000_0205c204(&auStack_30, &iStack_2c, 0xccd, 0xccd, 0x1f);
}

ARM void ActorHeart::func_ov031_020ef698() {
    switch (this->mUnk_BC) {
        case 0x00: {
            if ((this->mUnk_46 & 3) == 0) {
                this->mUnk_BC += 0x01;
                this->mUnk_2C = 0x06;
            }
            break;
        }
        case 0x01: {
            this->func_ov031_020ef570();
            if ((this->mUnk_46 & 3) != 0) {
                this->mVel.x  = 0;
                this->mVel.y  = 0;
                this->mVel.z  = 0;
                this->mUnk_BC = 0;
            }
            break;
        }
    }
}

#define GET_ACTORHEART(this) reinterpret_cast<ActorHeart *>((this)->mUnk_20)

ARM ActorHeart_c4::ActorHeart_c4(Actor *param1) :
    Actor_c4(param1) {
    this->mUnk_20 = param1;
    this->mUnk_04 = 1;
}

// non-matching
ARM unk32 ActorHeart_c4::vfunc_00(Actor_c4_stack param_2, unk32 param_3) {
    if (param_3 != 0) {
        ActorHeart *pHeart = GET_ACTORHEART(this);
        pHeart->mUnk_C4    = param_2.param1;
        pHeart->func_ov031_020ef1b4(0x04);
    }

    return this->Actor_c4::vfunc_00(param_2, param_3);
}

ARM void ActorHeart_c4::vfunc_04() {
    GET_ACTORHEART(this)->func_ov031_020ef1b4(0x05);
    this->Actor_c4::vfunc_04();
}

ARM void ActorHeart_c4::vfunc_0c(unk32 param1) {
    GET_ACTORHEART(this)->func_ov031_020ef1b4(0x01);
    this->Actor_c4::vfunc_0c(param1);
}

ARM void ActorHeart_c4::vfunc_08() {
    GET_ACTORHEART(this)->func_ov031_020ef528();
    this->Actor_c4::vfunc_08();
}
