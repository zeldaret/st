#include "Actor/ActorShotArrow.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "Unknown/UnkStruct_027e0d30.hpp"

typedef struct {
    /* 000 */ STRUCT_PAD(0x0, 0x25B);
    /* 25B */ bool mUnk_25B;
} UnkStruct_ov060_02163ff4;

char data_ov031_02110b3c[0xF]  = "arrow";
char data_ov031_02110b4c[0x13] = "arrow_s";

extern UnkStruct_027e0cd8 *data_027e0cd8;
extern UnkStruct_027e0ce0 *data_027e0ce0;
extern UnkStruct_027e0d30 *data_027e0d30;
extern UnkStruct_027e09a8 *data_027e09a8;
extern UnkStruct_ov060_02163ff4 data_ov060_02163ff4;

extern "C" void func_01ff9638(VecFx32 *, s16);
extern "C" void func_01ff95a0(VecFx32 *, unk16);
extern "C" void func_01ffb714(VecFx32 *, VecFx32 *, VecFx32 *);
extern "C" void func_0200eab0(unk32, unk16, u8);
extern "C" unk32 *func_0200f05c(u32, char *);
extern "C" void func_ov000_02057c98(UnkSystem4 *param1, UnkSystem5 *param2);
extern "C" unk32 func_ov000_0205aeac();
extern "C" void func_ov000_0207b6c0();

ARM DECL_PROFILE(ActorProfileShotArrow);

ARM Actor *ActorProfileShotArrow::Create() {
    return new(HeapIndex_2) ActorShotArrow();
}

ARM ActorProfileShotArrow::ActorProfileShotArrow() :
    ActorProfile(ActorId_AROW) {
    this->mUnk_04.Init(FLOAT_TO_Q20(0.2f));
}

// non-matching
ARM ActorShotArrow::ActorShotArrow() :
    mUnk_A0(UnkSystem4(0x0)),
    mUnk_100(UnkSystem5(0x0, 0)) {}

ARM UnkStruct_027e0ce0_1C_0C *ActorShotArrow::func_ov031_020f1404() {
    return data_027e0ce0->mUnk_1C->mUnk_0C;
}

// non-matching ?
ARM ActorShotArrow *ActorShotArrow::func_ov031_020f1608() {
    func_ov000_0207b6c0();
    return this;
}

// non-matching
ARM bool ActorShotArrow::func_ov031_020f173c() {
    fx32 cos_value = COS(this->mAngle);
    fx32 sin_value = SIN(this->mAngle);

    this->mVel.z   = MUL_Q20(sin_value, 1024);
    this->mVel.x   = MUL_Q20(cos_value, 1024);
    this->mUnk_2C  = 0;
    this->mVel.y   = 0;
    this->mUnk_16C = VecFx32_Length(&this->mVel);

    if (func_ov000_0205aeac() != 0) {
        bool paramIs3Or4 = this->mUnk_5C.mParams[1] == 0x3 || this->mUnk_5C.mParams[1] == 0x4;
        if (paramIs3Or4) {
            VecFx32_Copy(&this->mPos, &this->mUnk_1DC);
            data_027e0cd8->mUnk_0C->func_ov000_02080a5c(&this->mUnk_1DC);
        }
    }
    this->func_ov031_020f1878(0x0);

    this->mUnk_198 = (u32) this->mRef.index;
    VecFx32_Copy(&this->mPos, &this->mUnk_1A0);
    this->mUnk_1AC = 0x333;
    this->mUnk_44  = 0x1F;
    return true;
}

ARM void ActorShotArrow::func_ov031_020f1868() {
    this->mUnk_2C = 0;
}

ARM void ActorShotArrow::func_ov031_020f1874() {}

static PTMF<ActorShotArrow> data_ov031_021142c0[] = {ActorShotArrow::func_ov031_020f1a64, ActorShotArrow::func_ov031_020f1c24,
                                                     ActorShotArrow::func_ov031_020f1dd4, ActorShotArrow::func_ov031_020f1f54,
                                                     ActorShotArrow::func_ov031_020f206c, ActorShotArrow::func_ov031_020f2134,
                                                     ActorShotArrow::func_ov031_020f21dc, ActorShotArrow::func_ov031_020f1874};

ARM void ActorShotArrow::func_ov031_020f1878(s16 param_1) {
    this->mUnk_4C = param_1;
    this->func_ov031_020f1868();

    CALL_PTMF(PTMF<ActorShotArrow>, data_ov031_021142c0[this->mUnk_4C]);
}

ARM void ActorShotArrow::func_ov031_020f18bc() {
    if (this->mUnk_25A) {
        if (this->mUnk_25E < 0x1F) {
            if ((this->mUnk_25E = this->mUnk_25E + 0x4 & 0xFF) >= 0x1F) {
                this->mUnk_25E = 0x1F;
            }
        }
        this->mUnk_100.func_01ffc3b4();
    }
    if (func_ov000_0205aeac() != 0) {
        bool paramIs3Or4 = this->mUnk_5C.mParams[1] == 0x3 || this->mUnk_5C.mParams[1] == 0x4;
        if (paramIs3Or4) {
            this->func_ov031_020f3000();
        }
    }

    if (this->mUnk_4C != 0x1 && this->mUnk_4C != 0x2 && this->mUnk_4C != 0x3) {
        return;
    }
    this->func_ov031_020f3258(0x1);
    this->func_ov031_020f2280();
}

// non-matching
ARM void ActorShotArrow::func_ov031_020f1958() {}

static PTMF<ActorShotArrow> data_ov031_02114300[] = {ActorShotArrow::func_ov031_020f1b04, ActorShotArrow::func_ov031_020f1c7c,
                                                     ActorShotArrow::func_ov031_020f1e3c, ActorShotArrow::func_ov031_020f2010,
                                                     ActorShotArrow::func_ov031_020f20bc, ActorShotArrow::func_ov031_020f2160,
                                                     ActorShotArrow::func_ov031_020f2214, ActorShotArrow::func_ov031_020f1958};

// non-matching
ARM void ActorShotArrow::func_ov031_020f195c() {
    this->mUnk_3C = (unk32) & this->mUnk_140;
    CALL_PTMF(PTMF<ActorShotArrow>, data_ov031_02114300[this->mUnk_4C]);

    if (this->mUnk_25A) {
        if (this->mUnk_25E < 0x1F) {
            if ((this->mUnk_25E = this->mUnk_25E + 0x4 & 0xFF) >= 0x1F) {
                this->mUnk_25E = 0x1F;
            }
        }
        this->mUnk_100.func_01ffc3b4();
    }
    if (func_ov000_0205aeac() != 0) {
        bool paramIs3Or4 = this->mUnk_5C.mParams[1] == 0x3 || this->mUnk_5C.mParams[1] == 0x4;
        if (paramIs3Or4) {
            if (this->mUnk_170 > 0x10) {
                this->func_ov031_020f3000();
            } else {
                data_027e0cd8->mUnk_0C->func_ov000_02080a78(&this->mUnk_1DC);
            }
        }
    }

    if (this->mUnk_190 & 0x1) {
        this->func_ov031_020f2cac(&this->mUnk_184, 0x1);
        this->mUnk_178->func_ov031_020f3304();
    }
    this->func_ov031_020f229c();
}

// non-matching
ARM void ActorShotArrow::func_ov031_020f1a64() {
    if (this->mUnk_5C.mParams[1] == 0x1 || this->mUnk_5C.mParams[1] == 0x4) {
        this->mUnk_50 = 0x0;
        this->mUnk_52 = 0x78;
    } else {
        this->mUnk_50 = 0x0;
        this->mUnk_52 = 0x3C;
    }
    unk32 value_func_020f2270 = this->func_ov031_020f2270();
    unk16 cos_value           = COS((u16) this->mAngle);
    this->mVel.y              = FLOAT_TO_Q20(0.0f);
    unk16 sin_value           = SIN((u16) this->mAngle);

    this->mVel.x = MUL_Q20(cos_value, value_func_020f2270);
    this->mVel.z = MUL_Q20(sin_value, value_func_020f2270);
}

struct UnkStruct_020f1b04 {
    /* 00 */ STRUCT_PAD(0x00, 0x0C);
    /* 0C */ unk32 mUnk_0C;
    /* 10 */ STRUCT_PAD(0x10, 0x1C);
};

extern "C" void func_01ffe6c4(unk32 *, unk32, VecFx32 *, VecFx32 *, s32, VecFx32 *);

// non-matching
ARM void ActorShotArrow::func_ov031_020f1b04() {
    UnkStruct_020f1b04 stack;
    bool var2;
    if (this->mUnk_50 < this->mUnk_52) {
        this->mUnk_50++;
        var2 = false;
    } else {
        var2 = true;
    }
    if (var2) {
        this->func_ov031_020f1878(0x6);
        return;
    }
    this->func_ov031_020f28ac();
    this->func_ov000_02098838();

    VecFx32_Copy(&this->mPos, &this->mPrevPos);
    VecFx32_Add(&this->mPos, &this->mVel, &this->mPos);

    this->mUnk_16C = VecFx32_Length(&this->mVel);

    if ((unk32) this->mUnk_5C.mParams[1] == 0x1 || this->mUnk_5C.mParams[1] == 0x4) {
        data_027e0d30->func_ov031_020d9684(this->mUnk_5C.mParams[2], &this->mPos);
    }

    if (!this->func_ov017_020beeec(0x0)) {
        stack.mUnk_0C = 0;
        func_01ffe6c4(&stack.mUnk_0C, (unk32) this->mRef.index, &this->mPos, &this->mPrevPos, (s16) this->mUnk_44,
                      &this->mPos);
        if (this->func_ov000_0207e294(this->mUnk_30)) {
            UNSET_FLAG(this->mFlags, ActorFlag_Alive);
        }
        return;
    }

    this->func_ov031_020f2ef0();
}

ARM void ActorShotArrow::func_ov031_020f1c24() {
    this->mVel.x = FLOAT_TO_Q20(0.0f);
    this->mVel.y = FLOAT_TO_Q20(0.0f);
    this->mVel.z = FLOAT_TO_Q20(0.0f);

    this->func_ov031_020f2794(0x1);
    this->mUnk_174 = 0x1555;

    data_027e09a8->func_ov000_02071b30(0x8D7A, &this->mPos, 0);
    this->mUnk_16C = 0;
}

extern "C" void func_01ff9638(VecFx32 *vec, s16 angle);

// non-matching
ARM void ActorShotArrow::func_ov031_020f1c7c() {
    if (this->func_ov031_020f3210(0x1)) {
        UNSET_FLAG(this->mFlags, ActorFlag_Alive);
    }
    Actor *targetActor = this->mUnk_1C8;
    if (targetActor && GET_FLAG(targetActor->mFlags, ActorFlag_Alive) && !GET_FLAG(targetActor->mFlags, ActorFlag_18)) {

        VecFx32_Copy(&targetActor->mPos, &this->mPos);

        VecFx32 vec_fx32 = this->mUnk_1CC;
        func_01ff9638(&vec_fx32, targetActor->mAngle - this->mUnk_1D8);

        VecFx32_Add(&this->mPos, &vec_fx32, &this->mPos);

        this->mAngle = targetActor->mAngle + (s16) (this->mUnk_1DA - this->mUnk_1D8);
    } else {
        this->func_ov031_020f2c08(0x400);
    }
    this->func_ov031_020f2280();
    this->func_ov000_02098838();

    VecFx32_Copy(&this->mPos, &this->mPrevPos);
    VecFx32_Add(&this->mPos, &this->mVel, &this->mPos);
    if (!func_ov000_0205aeac()) {
        return;
    }

    bool paramIs3Or4 = this->mUnk_5C.mParams[1] == 0x3 || this->mUnk_5C.mParams[1] == 0x4;
    if (!paramIs3Or4) {
        return;
    }

    data_027e0cd8->mUnk_0C->func_ov000_02080a78(&this->mUnk_1DC);
}

ARM void ActorShotArrow::func_ov031_020f1dd4() {
    this->mVel.x = FLOAT_TO_Q20(0.0f);
    this->mVel.y = FLOAT_TO_Q20(0.0f);
    this->mVel.z = FLOAT_TO_Q20(0.0f);

    this->func_ov031_020f2794(0x1);
    this->mUnk_174 = 0x1555;

    data_027e09a8->func_ov000_02071b30(0x8D7A, &this->mPos, 0);
    this->mUnk_16C = 0;
    this->mUnk_50  = 0;
    this->mUnk_52  = this->mUnk_258;
}

ARM void ActorShotArrow::func_ov031_020f1e3c() {
    if (!this->mUnk_25B) {
        bool var2;
        if (this->mUnk_50 < this->mUnk_52) {
            this->mUnk_50++;
            var2 = false;
        } else {
            var2 = true;
        }
        if (var2) {
            if (this->func_ov031_020f3210(0x1)) {
                UNSET_FLAG(this->mFlags, ActorFlag_Alive);
                return;
            }
            this->mUnk_52 = this->mUnk_258;
            this->mUnk_50 = 0;
        }
    }

    Actor *targetActor = this->mUnk_1C8;
    if (!targetActor || !GET_FLAG(targetActor->mFlags, ActorFlag_Alive) || GET_FLAG(targetActor->mFlags, ActorFlag_18)) {
        this->func_ov031_020f2c08(0x400);
    }
    this->func_ov031_020f2280();
    this->func_ov000_02098838();

    VecFx32_Copy(&this->mPos, &this->mPrevPos);
    VecFx32_Add(&this->mPos, &this->mVel, &this->mPos);
    if (!func_ov000_0205aeac()) {
        return;
    }
    bool paramIs3Or4 = this->mUnk_5C.mParams[1] == 0x3 || this->mUnk_5C.mParams[1] == 0x4;
    if (!paramIs3Or4) {
        return;
    }
    data_027e0cd8->mUnk_0C->func_ov000_02080a78(&this->mUnk_1DC);
}

ARM void ActorShotArrow::func_ov031_020f1f54() {
    this->mVel.x = FLOAT_TO_Q20(0.0f);
    this->mVel.y = FLOAT_TO_Q20(0.0f);
    this->mVel.z = FLOAT_TO_Q20(0.0f);
    this->func_ov031_020f2794(0x1);

    this->mUnk_174 = 0x1555;
    data_027e09a8->func_ov000_02071b30(0x8D7A, &this->mPos, 0);
    this->mUnk_16C = 0;

    if (func_ov000_0205aeac()) {
        bool paramIs3Or4 = this->mUnk_5C.mParams[1] == 0x3 || this->mUnk_5C.mParams[1] == 0x4;
        if (paramIs3Or4) {
            data_027e0cd8->mUnk_0C->func_ov000_02080a78(&this->mUnk_1DC);
        }
    }

    if (!this->mUnk_25C) {
        return;
    }

    if (!this->mUnk_25D) {
        data_ov060_02163ff4.mUnk_25B = true;
    }
}

ARM void ActorShotArrow::func_ov031_020f2010() {
    if (this->func_ov031_020f3210(0x1) != 0) {
        UNSET_FLAG(this->mFlags, ActorFlag_Alive);
    }

    this->func_ov031_020f2280();
    this->func_ov000_02098838();

    VecFx32_Copy(&this->mPos, &this->mPrevPos);
    VecFx32_Add(&this->mPos, &this->mVel, &this->mPos);
}

ARM void ActorShotArrow::func_ov031_020f206c() {
    this->func_ov031_020f2794(0);
    this->mUnk_170 = 0x10;
    this->mUnk_16C = 0;
    this->mUnk_168 = 0;

    if (this->mUnk_25C != 0x0) {
        if (this->mUnk_25D == 0x0) {
            data_ov060_02163ff4.mUnk_25B = true;
        }
    }
}

ARM void ActorShotArrow::func_ov031_020f20bc() {
    if (this->func_ov031_020f3210(0x1) != 0) {
        UNSET_FLAG(this->mFlags, ActorFlag_Alive);
    }

    this->mUnk_176 += ~0x11C6;
    this->mVel.y -= FLOAT_TO_Q20(0.002f);

    this->func_ov000_02098838();

    VecFx32_Copy(&this->mPos, &this->mPrevPos);
    VecFx32_Add(&this->mPos, &this->mVel, &this->mPos);
}

ARM void ActorShotArrow::func_ov031_020f2134() {
    data_027e09a8->func_ov000_02071b30(0x8D7A, &this->mPos, 0);
}

ARM void ActorShotArrow::func_ov031_020f2160() {
    if (!this->mUnk_1C8 || !GET_FLAG(this->mUnk_1C8->mFlags, ActorFlag_Alive)) {
        this->func_ov031_020f2c08(0x400);
        return;
    }
    this->func_ov000_02098838();

    VecFx32_Copy(&this->mPos, &this->mPrevPos);
    VecFx32_Add(&this->mPos, &this->mVel, &this->mPos);

    this->mUnk_16C = VecFx32_Length(&this->mVel);
    this->func_ov031_020f2f9c();
    this->func_ov031_020f2ef0();
}

ARM void ActorShotArrow::func_ov031_020f21dc() {
    this->mUnk_172 = 0;
    this->mUnk_16C = 0;
    if (!this->mUnk_25C) {
        return;
    }
    if (!this->mUnk_25D) {
        data_ov060_02163ff4.mUnk_25B = true;
    }
}

ARM void ActorShotArrow::func_ov031_020f2214() {
    if (this->mUnk_170 > (s16) 0x4) {
        this->mUnk_170 -= 0x4;
    } else {
        UNSET_FLAG(this->mFlags, ActorFlag_Alive);
    }

    this->func_ov000_02098838();

    VecFx32_Copy(&this->mPos, &this->mPrevPos);
    VecFx32_Add(&this->mPos, &this->mVel, &this->mPos);
}

ARM unk32 ActorShotArrow::func_ov031_020f2270() {
    return (this->mUnk_5C.mParams[0] << 0x4) + 0x400;
}

ARM void ActorShotArrow::func_ov031_020f2280() {
    // temp var needed
    unk32 opposite_174 = -this->mUnk_174;
    this->mUnk_174     = ((opposite_174 << 0x4) - opposite_174) >> 0x4;
}

ARM void ActorShotArrow::func_ov031_020f229c() {
    this->mUnk_168 = MUL_Q20(this->mUnk_168 + this->mUnk_16C, 0xccd);
}

ARM void ActorShotArrow::func_ov031_020f22d4(Mat3p *param_1, VecFx32 *param_2) {
    func_0200eab0(this->mUnk_A0.mUnk_04, 0x0, this->mUnk_25E);
    this->mUnk_A0.vfunc_14(param_1, param_2);
}

// non-matching
ARM void ActorShotArrow::func_ov031_020f2310() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f2654() {}

ARM void ActorShotArrow::func_ov031_020f2794(unk16 param_1) {
    unk32 mUnk_50;
    unk32 arg;
    unk32 *var1;
    switch (param_1) {
        case 0x0:
            mUnk_50 = this->func_ov031_020f1404()->mUnk_50;
            if (mUnk_50 != 0 && (var1 = func_0200f05c(mUnk_50 + 8, data_ov031_02110b3c))) {
                arg = mUnk_50 + *var1;
            } else {
                arg = 0;
            }
            this->mUnk_94.vfunc_08(arg);
            this->mUnk_25A = false;
            break;
        case 0x1:
            mUnk_50 = this->func_ov031_020f1404()->mUnk_50;
            if (mUnk_50 != 0 && (var1 = func_0200f05c(mUnk_50 + 8, data_ov031_02110b4c))) {
                arg = mUnk_50 + *var1;
            } else {
                arg = 0;
            }
            this->mUnk_94.vfunc_08(arg);
            this->mUnk_25A = false;
            break;
        case 0x2:
            mUnk_50 = this->func_ov031_020f1404()->mUnk_50;
            if (mUnk_50 != 0 && (var1 = func_0200f05c(mUnk_50 + 8, data_ov031_02110b4c))) {
                arg = mUnk_50 + *var1;
            } else {
                arg = 0;
            }
            this->mUnk_94.vfunc_08(arg);
            this->mUnk_25A = true;
            func_ov000_02057c98(&this->mUnk_A0, &this->mUnk_100);
            break;
    }
}

// non-matching
ARM void ActorShotArrow::func_ov031_020f28ac() {}

ARM void ActorShotArrow::func_ov031_020f2b8c() {
    if (!(this->mUnk_4C == 0x0 || this->mUnk_4C == 0x5)) {
        return;
    }
    this->mUnk_190 |= 2;
    this->func_ov031_020f1878(0x3);
}

ARM void ActorShotArrow::func_ov031_020f2bbc() {
    if (!(this->mUnk_4C == 0x0 || this->mUnk_4C == 0x5)) {
        return;
    }
    this->mUnk_190 |= 2;
    this->func_ov031_020f1878(0x1);
}

ARM void ActorShotArrow::func_ov031_020f2bec() {
    if (this->mUnk_4C != 0) {
        return;
    }
    this->func_ov031_020f1878(0x5);
}

// non-matching
ARM void ActorShotArrow::func_ov031_020f2c08(unk16) {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f2cac(unk32 *, unk32) {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f2ef0() {}

void ActorShotArrow::func_ov031_020f2f5c(VecFx32 *param_1) {
    VecFx32_Copy(&this->mPos, &this->mPrevPos);
    VecFx32_Add(&this->mPos, param_1, &this->mPos);
    func_01ffb714(&this->mPos, &this->mVel, &this->mPos);
}

// non-matching
ARM void ActorShotArrow::func_ov031_020f2f9c() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f3000() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f311c() {}

ARM bool ActorShotArrow::func_ov031_020f3210(u16 param_1) {
    if (this->mUnk_25B) {
        return false;
    }
    if (this->mUnk_170 == 0) {
        return true;
    }
    u32 value = this->mUnk_170 - param_1;
    if (this->mUnk_170 <= param_1) {
        value = 0;
    }
    this->mUnk_170 = value;
    this->func_ov031_020f3258(param_1);
    return false;
}

// non-matching
ARM bool ActorShotArrow::func_ov031_020f3258(u16 param_1) {
    u16 value = this->mUnk_172;
    if (value == 0x0) {
        return true;
    }
    if (value > param_1) {
        this->mUnk_172 -= param_1;
    } else {
        this->mUnk_172 = 0;
    }
    return false;
}

// non-matching
ARM void ActorShotArrow::func_ov031_020f3288() {}

ARM ActorShotArrow *ActorShotArrow::func_ov031_020f32c4() {
    this->mPos.y = FLOAT_TO_Q20(0.0f);
    this->func_ov000_0207bffc();
    return this;
}

// non-matching
ARM ActorShotArrow *ActorShotArrow::func_ov031_020f32e0() {
    this->mPos.y = FLOAT_TO_Q20(0.0f);
    this->func_ov000_0207bffc();
    return this;
}

ARM void ActorShotArrow::func_ov031_020f3304() {
    *(fx16 *) &this->mPrevPos.z = FLOAT_TO_Q20(0.0f);
}

// non-matching
ARM void ActorShotArrow::func_ov031_020f3310() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f33bc() {}

// non-matching
ARM void ActorShotArrow::func_ov031_020f370c(unk32 param_1) {
    this->mPos.y     = FLOAT_TO_Q20(0.0f);
    this->mPos.z     = FLOAT_TO_Q20(0.0f);
    this->mPrevPos.x = FLOAT_TO_Q20(0.0f);
    this->mPrevPos.y = FLOAT_TO_Q20(0.0f);
    this->mPrevPos.z = FLOAT_TO_Q20(0.0f);
    this->mVel.x     = FLOAT_TO_Q20(0.0f);
    this->mVel.y     = FLOAT_TO_Q20(0.0f);
    this->mVel.z     = FLOAT_TO_Q20(0.0f);
    this->mAngle     = 0;
    this->mUnk_2C    = param_1;
    this->mUnk_30    = nullptr;
}

// non-matching
ARM void ActorShotArrow::func_ov031_020f374c() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f38b0() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f3c38() {}

ARM void ActorShotArrow::func_ov031_020f3d04(unk16 param_1) {
    this->mUnk_176 = param_1;
    func_01ff9638(&this->mVel, -this->mAngle);
    func_01ff95a0(&this->mVel, param_1);
    func_01ff9638(&this->mVel, this->mAngle);
}

// non-matching
ARM ActorShotArrow *ActorShotArrow::func_ov031_020f3d4c() {
    operator delete(this);
    return this;
}

ARM ActorShotArrow::~ActorShotArrow() {}
ARM ActorProfileShotArrow::~ActorProfileShotArrow() {}
