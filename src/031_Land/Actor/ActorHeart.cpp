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

typedef struct {
    unk16 mUnk_00;
    unk16 mUnk_02;
    unk16 mUnk_04;
    unk16 mUnk_06;
    unk16 mUnk_08;
    STRUCT_PAD(0x0A, 0x14);
    unk16 mUnk_14;
    STRUCT_PAD(0x16, 0x18);
    unk16 mUnk_18;
    STRUCT_PAD(0x1A, 0x1C);
    unk16 mUnk_1C;
    STRUCT_PAD(0x1E, 0x28);
    unk16 mUnk_28;
    STRUCT_PAD(0x2A, 0x3C);
} UnkStruct_ov031_020eeee8;

extern "C" void func_01ffce1c(unk16 *, unk16 *);
extern "C" int func_01ffcea0(unk32, UnkStruct_ov031_020eeee8 *);
extern "C" void func_01ffedac(u16 *, VecFx32 *);
extern "C" void func_01fff17c(UnkStruct_ov031_020eeee8 *, UnkStruct_027e0ce0 *, unk32);
extern "C" void func_02018114(unk16 *, unk16);
extern "C" void func_02098388(void);
extern "C" void func_02097bb8(void);
extern "C" void func_ov000_0205c1f0(unk32 *, unk16);
extern "C" void func_ov000_0205c204(unk32 *, VecFx32 *, unk32, unk32, unk32);
extern "C" void func_ov000_0208bc00(UnkStruct_027e0ce0 *, unk16, unk16 *);
extern "C" void func_ov000_02098838();
extern "C" void func_ov017_020bf99c(void);
extern "C" void func_ov017_02097bec(Actor_9c *);

ARM DECL_PROFILE(ActorProfileHeart);

ARM Actor *ActorProfileHeart::Create() {
    return new(HeapIndex_2) ActorHeart();
}

ARM ActorProfileHeart::ActorProfileHeart() :
    ActorProfile(ActorId_Heart) {
    this->mUnk_04.Init(FLOAT_TO_Q20(0.25));
}

ARM void ActorHeart::func_ov031_020eed64(ActorParams *param_2, unk32 param_3, unk32 param_4) {
    ActorParams actorParams;
    actorParams.func_ov000_020975f8();

    actorParams.mInitialPos = param_2->mInitialPos;
    actorParams.mUnk_28     = param_4;
    actorParams.mUnk_2C     = param_3;

    this->func_ov000_020973f4(&data_ov000_020b539c_eur, ActorId_Heart, &actorParams, 0);
}

ARM void ActorHeart::func_ov031_020f0750() {}

ARM ActorHeart::ActorHeart() :
    mUnk_94(0),
    mUnk_96(6),
    mUnk_B8(0),
    mUnk_BA(gRandom.ConditionalNext32(0) & 0x80000000 ? 0x666 : ~0x665),
    mUnk_BC(0),
    mUnk_BE(0),
    mUnk_C0(0),
    mUnk_C4(0),
    mUnk_C8(this) {

    this->mUnk_EC.x = FLOAT_TO_Q20(0.0);
    this->mUnk_EC.y = FLOAT_TO_Q20(0.0);
    this->mUnk_EC.z = FLOAT_TO_Q20(0.0);

    this->mUnk_9C = 0x13100;
    this->mUnk_40 = &this->mUnk_C8;
    u16 sp0;
    func_01ffedac(&sp0, &this->mPos);

    if (data_027e0cd8->mUnk_0C->func_ov000_02080180(&sp0) == 0x5) {
        this->mUnk_34 = (Cylinder *) &data_ov031_02113d64;
    }
}

ARM bool ActorHeart::vfunc_18(unk32 param1) {
    this->func_ov031_020ef4a8();
    return true;
}

static PTMF<ActorHeart> data_ov031_02113d74[] = {
    ActorHeart::func_ov031_020ef2f8, ActorHeart::func_ov031_020ef334, ActorHeart::func_ov031_020ef3a0,
    ActorHeart::func_ov031_020ef3d0, ActorHeart::func_ov031_020ef444, ActorHeart::func_ov031_020ef458,
};

// non-matching
void ActorHeart::vfunc_20() {
    UnkStruct_ov031_020eeee8 stack;

    stack.mUnk_02 = 0;
    stack.mUnk_04 = 0x666;
    stack.mUnk_06 = 0xfb33;

    func_01fff17c(&stack, data_027e0ce0, 0);
    func_02018114(&stack.mUnk_02, stack.mUnk_00);

    this->mUnk_C8.mUnk_08 = stack.mUnk_02; // d0
    this->mUnk_C8.mUnk_0A = stack.mUnk_04; // d2
    this->mUnk_C8.mUnk_0C = stack.mUnk_06; // d4
    stack.mUnk_02         = 0;
    stack.mUnk_04         = 0x666;
    stack.mUnk_06         = 0;
    this->mUnk_C8.mUnk_0E = 0;

    this->mUnk_C8.mUnk_10 = stack.mUnk_04; // d8
    stack.mUnk_06         = stack.mUnk_04;
    this->mUnk_C8.mUnk_12 = stack.mUnk_06; // da
    this->mUnk_3C         = (unk32) & this->mUnk_98;

    CALL_PTMF(PTMF<ActorHeart>, data_ov031_02113d74[this->mUnk_4C]);

    bool t = true;
    if (this->mUnk_94 < this->mUnk_96) {
        this->mUnk_94 = this->mUnk_96;
        this->mUnk_94++;
        t = false;
    } else {
        t = true;
    }
    if (t) {
        this->func_ov000_020989e0();

        if (this->mUnk_4C == 1) {
            func_ov000_0208bc00(data_027e0ce0, 0, &stack.mUnk_08);

            func_01ffce1c(&stack.mUnk_18, &stack.mUnk_08);

            stack.mUnk_28 += stack.mUnk_14 + (stack.mUnk_14 << 1);
            stack.mUnk_1C -= stack.mUnk_14;

            func_01ffcea0(0, &stack);

            while (1) {
                // should be lower
                this->func_ov031_020ef528();

                if (data_027e0ce0->func_01fff1a4()) {
                    func_ov000_0208bc00(data_027e0ce0, 0, &stack.mUnk_08);

                    func_01ffce1c(0, 0);

                    stack.mUnk_1C += stack.mUnk_14 + stack.mUnk_1C;
                    stack.mUnk_28 = stack.mUnk_14 + (stack.mUnk_14 << 1) + stack.mUnk_28;
                    if (func_01ffcea0(0, &stack) != 0x0) {
                        break;
                    }
                }
            }
        }

        if (!(this->mUnk_A0 & 0x3ffff)) {
            unk16 var = this->mUnk_B4;
            if (var != 0x8 && var == 0xC) {
                this->mUnk_C0 = this->mUnk_A4;
                this->mUnk_9C &= ~0x1000;
            }
        }
    }

    if (this->mUnk_5C.mUnk_24 < 0) {
        this->func_ov031_020ef208();
    }

    this->mPrevPos.x = this->mPos.x;
    this->mPrevPos.y = this->mPos.y;
    this->mPrevPos.z = this->mPos.z;

    VecFx32_Add(&this->mPos, &this->mVel, &this->mPos);
    if (this->mUnk_4C != 0x3) {
        this->func_ov000_02098910(0, 0x10);
    }
    if (this->mUnk_46 & 0x3) {
        this->mVel.y = FLOAT_TO_Q20(0.0);
    }

    VecFx32_Add(&this->mPos, &this->mUnk_EC, &this->mPos);
    this->mUnk_EC.x = FLOAT_TO_Q20(0.0);
    this->mUnk_EC.y = FLOAT_TO_Q20(0.0);
    this->mUnk_EC.z = FLOAT_TO_Q20(0.0);
}

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

// non-matching (r1 and r2 swapped)
ARM void ActorHeart::func_ov031_020ef208() {
    bool var2 = true;
    bool var1 = true;
    if (this->mUnk_4C != 0x3 && this->mUnk_4C != 0x4) {
        var1 = false;
    }
    if (!var1) {
        if (this->mUnk_4C != 0x5) {
            var2 = false;
        }
    }

    if (var2) {
        SET_FLAG(this->mFlags, ActorFlag_Visible);
        return;
    }
    if ((u8) this->mUnk_BE == 0) {
        if (this->mUnk_50 < this->mUnk_52) {
            this->mUnk_50++;
            var2 = false;
        } else {
            var2 = true;
        }

        if (var2) {
            this->mUnk_BE = 0x01;
            this->mUnk_50 = 0x00;
            this->mUnk_52 = 0x3C;
        }
        return;
    }

    if ((this->mUnk_50 % 8) < 4) {
        UNSET_FLAG(this->mFlags, ActorFlag_Visible);
    } else {
        SET_FLAG(this->mFlags, ActorFlag_Visible);
    }

    if (this->mUnk_50 < this->mUnk_52) {
        this->mUnk_50++;
        var2 = false;
    } else {
        var2 = true;
    }
    if (var2) {
        this->func_ov000_020984d0();
    }
}

ARM void ActorHeart::func_ov031_020ef2ec() {
    this->mVel.y = FLOAT_TO_Q20(0.25);
}

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
    if ((this->mUnk_46 & 0x3) == 0) {
        return;
    }
    this->func_ov031_020ef1b4(0x02);
}

ARM void ActorHeart::func_ov031_020ef35c() {
    this->mVel.x = FLOAT_TO_Q20(0.0);
    this->mVel.y = FLOAT_TO_Q20(0.0);
    this->mVel.z = FLOAT_TO_Q20(0.0);
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

ARM void ActorHeart::func_ov031_020ef3b8() {
    func_ov017_020bf99c();
    this->mUnk_98.func_ov000_02097bec();
}

ARM void ActorHeart::func_ov031_020ef3d0() {
    this->func_ov017_020bf9c8(gpActorManager->func_01fff3b4(this->mUnk_C0));
    if (!GET_FLAG(this->mFlags, ActorFlag_5)) {
        return;
    }
    this->mVel.x = FLOAT_TO_Q20(0.0);
    this->mVel.y = FLOAT_TO_Q20(0.0);
    this->mVel.z = FLOAT_TO_Q20(0.0);

    this->mUnk_9C |= 0x1000;
    this->func_ov031_020ef1b4(0x01);
}

ARM void ActorHeart::func_ov031_020ef430() {
    this->mVel.x = FLOAT_TO_Q20(0.0);
    this->mVel.y = FLOAT_TO_Q20(0.0);
    this->mVel.z = FLOAT_TO_Q20(0.0);
}

ARM void ActorHeart::func_ov031_020ef444() {
    return;
}

ARM void ActorHeart::func_ov031_020ef448() {
    this->mVel.x = FLOAT_TO_Q20(0.0);
    this->mVel.z = FLOAT_TO_Q20(0.0);
}

typedef struct {
    STRUCT_PAD(0x00, 0xE8);
    VecFx32 mUnk_E8;
} UnkActor_02ef458;

ARM void ActorHeart::func_ov031_020ef458() {
    // which actor is this ?
    UnkActor_02ef458 *actor = (UnkActor_02ef458 *) gpActorManager->func_01fff3b4(this->mUnk_C4);
    if (actor == nullptr) {
        this->func_ov031_020ef1b4(0x01);
        return;
    }
    VecFx32_Copy(&actor->mUnk_E8, &this->mPos);
}

ARM void ActorHeart::func_ov031_020ef4a8() {
    if (this->mUnk_5C.mUnk_24 >= 0) {
        this->func_ov031_020ef1b4(2);
        return;
    }

    switch (this->mUnk_5C.mUnk_2C) {
        case 0:
            this->mUnk_52 = 0xB4;
            this->mUnk_50 = 0x00;
            this->func_ov031_020ef1b4(2);
            break;

        case 1:
            this->mUnk_52 = 0x1E0;
            this->mUnk_50 = 0x00;
            this->func_ov031_020ef1b4(0);
            return;

        default:
            this->mUnk_52 = 0x1E0;
            this->mUnk_50 = 0x00;
            this->func_ov031_020ef1b4(0);
            break;
    }
}

ARM void ActorHeart::func_ov031_020ef528() {
    data_027e0ce0->func_ov000_0208bc9c(4, 1);
    data_027e09a8->func_ov000_02071b30(0x76, &this->mPos, 0);
    this->func_ov000_020984d0();
}

// non-matching
ARM void ActorHeart::func_ov031_020ef570() {
    func_ov000_02098838();
    this->mUnk_B8 += 0x666;
    this->mVel.z = FLOAT_TO_Q20(0.0);

    s16 sin_value = SIN((u16) this->mUnk_B8);
    s32 value     = ((sin_value >> 0x1F) << 6 | sin_value >> 0x1A) + (sin_value * 0x40 > ~0x800);

    this->mVel.x = ROUND_Q20(sin_value * 0x40) + value;

    if (this->mVel.y <= FLOAT_TO_Q20(-0.005)) {
        this->mVel.y = FLOAT_TO_Q20(-0.005);
    }
}

ARM void ActorHeart::vfunc_2c(unk32 param1) {
    VecFx32 iStack_20;
    VecFx32 iStack_2c;
    unk32 auStack_30;

    if (this->func_01fff5d0(param1, 0) == 0) {
        return;
    }

    iStack_20 = this->mPos;
    iStack_20.y += FLOAT_TO_Q20(0.03113);
    this->func_ov017_020bf5c4(&iStack_20, 0x400, 0x400, 0x1f, 0);

    func_ov000_0205c1f0(&auStack_30, 0x10);

    iStack_2c = this->mPos;
    iStack_2c.y += FLOAT_TO_Q20(0.33);
    func_ov000_0205c204(&auStack_30, &iStack_2c, 0xccd, 0xccd, 0x1f);
}

ARM void ActorHeart::func_ov031_020ef698() {
    switch (this->mUnk_BC) {
        case 0x00:
            if ((this->mUnk_46 & 3) == 0) {
                this->mUnk_BC += 0x01;
                this->mUnk_2C = 0x06;
            }
            break;
        case 0x01:
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
