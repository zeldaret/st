#include "Actor/ActorShotArrow.hpp"

#include "Actor/ActorManager.hpp"
#include "Actor/ActorUnkGYAM.hpp"
#include "Actor/ActorUnkIWTS.hpp"
#include "Actor/ActorUnkMRD2.hpp"
#include "MapObject/MapObjectUnkHOLB.hpp"
#include "System/OverlayManager.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "Unknown/UnkStruct_027e0d30.hpp"

typedef struct UnkResourceStruct2 {
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */
} UnkResourceStruct2;

typedef struct {
    /* 00 */ VecFx32 mUnk_00;
    /* 0C */ VecFx32 mUnk_0C;
    /* 18 */ unk32 mUnk_18;
    /* 1C */ VecFx32 mUnk_1C;
    /* 28 */ VecFx32 mUnk_28;
    /* 34 */
} UnkStruct_020f374c;

typedef struct {
    /* 00 */ STRUCT_PAD(0x00, 0x04);
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ unk32 mUnk_0C;
    /* 10 */ VecFx32 mUnk_10;
    /* 1C */ VecFx32 mUnk_1C;
    /* 28 */
} UnkStruct_020f38b0;

typedef struct {
    /* 00 */ STRUCT_PAD(0x00, 0x04);
    /* 04 */ VecFx32 mUnk_04;
    /* 10 */ STRUCT_PAD(0x10, 0x14);
    /* 14 */ VecFx32 mUnk_14;
    /* 20 */
} UnkStruct_020f3c38;

typedef struct {
    /* 000 */ STRUCT_PAD(0x0, 0x25B);
    /* 25B */ bool mUnk_25B;
    /* 25C */
} UnkStruct_ov060_02163ff4;

extern "C" char data_ov031_02110b3c[0x10] = "arrow";
extern "C" char data_ov031_02110b4c[0x10] = "arrow_s";

extern "C" char data_ov031_02110b5c[0x14] = "ef_arrowB";
extern "C" char data_ov031_02110b08[0x34] = "ef_arrowB";

extern UnkStruct_027e0cd8 *data_027e0cd8;
extern UnkStruct_027e0ce0 *data_027e0ce0;
extern UnkStruct_027e0d30 *data_027e0d30;
extern ActorUnkIWTS *data_027e0d80;
extern UnkStruct_027e09a8 *data_027e09a8;
extern bool data_ov060_02163fe0;
extern UnkStruct_ov060_02163ff4 data_ov060_02163ff4;
extern ActorUnkMRD2 *data_ov075_02163518;

extern "C" unk32 func_01ff9258(fx32, fx32);
extern "C" void func_01ff93c0(VecFx32 *, unk32);
;
extern "C" void func_01ff9638(VecFx32 *, s16);
extern "C" void func_01ff95a0(VecFx32 *, unk16);
extern "C" void func_01ffb714(VecFx32 *, VecFx32 *, VecFx32 *);
extern "C" unk32 func_01ffbbe0(fx32, fx32);
extern "C" bool func_01ffccf4(VecFx32 *, VecFx32 *, VecFx32 *, unk32 *);
extern "C" void func_01ffe6c4(unk32 *, u32, VecFx32 *, VecFx32 *, s32, VecFx32 *);
extern "C" void func_0200eab0(G3d_Model *, unk16, u8);
extern "C" UnkResourceStruct2 *func_0200f05c(G3d_NameList *, char *);
extern "C" void func_ov000_02057c98(ModelRender *param1, UnkSystem5 *param2);
extern "C" unk32 func_ov000_0205aeac();
extern "C" void func_ov000_0207b6c0();
extern "C" void func_ov075_02160864(ActorShotArrow *, unk32);

#define ReturnUnkPointer3(param1, param2)                                      \
    {                                                                          \
        BMDSectionModel *temp = param1;                                        \
        if (temp != NULL) {                                                    \
            UnkResourceStruct2 *ptr = func_0200f05c(&temp->modelList, param2); \
                                                                               \
            if (ptr != NULL) {                                                 \
                return (G3d_Model *) ((u32) temp + (u32) ptr->mUnk_00);        \
            }                                                                  \
        }                                                                      \
                                                                               \
        return NULL;                                                           \
    }

MapObjectProfile_Derived2_20_Base *func_ov031_020f1404() {
    return data_027e0ce0->mUnk_1C->mUnk_0C;
}

ARM inline G3d_Model *GetResource(char *str) {
    ReturnUnkPointer3(func_ov031_020f1404()->mUnk_50, str);
}

ARM inline G3d_Model *GetResource() {
    ReturnUnkPointer3(func_ov031_020f1404()->mUnk_50, data_ov031_02110b5c);
}

ARM DECL_PROFILE(ActorProfileShotArrow);

ARM Actor *ActorProfileShotArrow::Create() {
    return new(HeapIndex_2) ActorShotArrow();
}

ARM ActorProfileShotArrow::ActorProfileShotArrow() :
    ActorProfile(ActorId_AROW) {
    this->mUnk_04.Init(FLOAT_TO_FX32(0.2f));
}

ARM ActorShotArrow::ActorShotArrow() :
    mUnk_9C(true),
    mUnk_A0(GetResource()),
    mUnk_100(&this->mUnk_120, GetResource(), func_ov031_020f1404()->func_ov000_02058a84(0, data_ov031_02110b08)),
    mUnk_140(this),
    mUnk_168(0),
    mUnk_16C(0),
    mUnk_170(0x1F),
    mUnk_172(0x1F),
    mUnk_174(0),
    mUnk_176(0),
    mUnk_178(this),
    mUnk_194(this),
    mUnk_1DC(0x548, 0),
    mUnk_258(0) {
    this->mUnk_140.mUnk_04 |= 0x8000;
    this->mUnk_140.mUnk_24 = true;
    this->mUnk_224         = 0;
    this->mUnk_25B         = false;
    this->mUnk_25C         = false;
    this->mUnk_25D         = false;

    bool var_r1_2 = true;
    if (this->mUnk_5C.mParams[1] != 3 && this->mUnk_5C.mParams[1] != 4) {
        var_r1_2 = false;
    }

    if (var_r1_2) {
        this->func_ov031_020f2794(2);
    } else {
        this->func_ov031_020f2794(0);
    }

    if (gOverlayManager.IsPirateHideout() && data_ov060_02163fe0) {
        this->mUnk_25C = true;
    }
}

ARM bool ActorShotArrow::func_ov031_020f173c() {
    fx32 sin_value = SIN((u16) this->mAngle);
    fx32 cos_value = COS((u16) this->mAngle);

    this->mUnk_2C  = 0;
    this->mVel.x   = MUL_FX32(sin_value, 1024);
    this->mVel.z   = MUL_FX32(cos_value, 1024);
    this->mVel.y   = 0;
    this->mUnk_16C = VecFx32_Length(&this->mVel);

    if (func_ov000_0205aeac() != 0) {
        bool paramIs3Or4 = this->mUnk_5C.mParams[1] == 0x3 || this->mUnk_5C.mParams[1] == 0x4;
        if (paramIs3Or4) {
            VecFx32_Copy(&this->mPos, &this->mUnk_1DC.mUnk_00);
            data_027e0cd8->mUnk_0C->func_ov000_02080a5c(&this->mUnk_1DC.mUnk_00);
        }
    }
    this->func_ov031_020f1878(0x0);

    this->mUnk_194.mUnk_04 = this->mRef.Get32();
    VecFx32_Copy(&this->mPos, &this->mUnk_194.mUnk_0C);
    this->mUnk_194.mUnk_18 = FLOAT_TO_FX32(0.20f);
    this->mUnk_44          = 0x1F;
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
                data_027e0cd8->mUnk_0C->func_ov000_02080a78(&this->mUnk_1DC.mUnk_00);
            }
        }
    }

    if (this->mUnk_178.mUnk_18 & 0x1) {
        this->func_ov031_020f2cac(&this->mUnk_178.mUnk_0C.x, 0x1);
        this->mUnk_178.func_ov031_020f3304();
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
    this->mVel.y              = FLOAT_TO_FX32(0.0f);
    unk16 sin_value           = SIN((u16) this->mAngle);

    this->mVel.x = MUL_FX32(cos_value, value_func_020f2270);
    this->mVel.z = MUL_FX32(sin_value, value_func_020f2270);
}

struct UnkStruct_020f1b04 {
    /* 00 */ STRUCT_PAD(0x00, 0x0C);
    /* 0C */ unk32 mUnk_0C;
    /* 10 */ STRUCT_PAD(0x10, 0x1C);
};

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
        func_01ffe6c4(&stack.mUnk_0C, this->mRef.index, &this->mPos, &this->mPrevPos, (s16) this->mUnk_44, &this->mPos);
        if (this->func_ov000_0207e294(this->mUnk_30)) {
            UNSET_FLAG(this->mFlags, ActorFlag_Alive);
        }
        return;
    }

    this->func_ov031_020f2ef0();
}

ARM void ActorShotArrow::func_ov031_020f1c24() {
    this->mVel.x = FLOAT_TO_FX32(0.0f);
    this->mVel.y = FLOAT_TO_FX32(0.0f);
    this->mVel.z = FLOAT_TO_FX32(0.0f);

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
    if (this->mUnk_1C8.mUnk_00 && GET_FLAG(this->mUnk_1C8.mUnk_00->mFlags, ActorFlag_Alive) &&
        !GET_FLAG(this->mUnk_1C8.mUnk_00->mFlags, ActorFlag_18)) {

        VecFx32_Copy(&this->mUnk_1C8.mUnk_00->mPos, &this->mPos);

        VecFx32 vec_fx32 = this->mUnk_1C8.mUnk_04;
        func_01ff9638(&vec_fx32, this->mUnk_1C8.mUnk_00->mAngle - this->mUnk_1C8.mUnk_10);

        VecFx32_Add(&this->mPos, &vec_fx32, &this->mPos);
        this->mAngle = this->mUnk_1C8.mUnk_00->mAngle + (s16) (this->mUnk_1C8.mUnk_14 - this->mUnk_1C8.mUnk_10);
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

    data_027e0cd8->mUnk_0C->func_ov000_02080a78(&this->mUnk_1DC.mUnk_00);
}

ARM void ActorShotArrow::func_ov031_020f1dd4() {
    this->mVel.x = FLOAT_TO_FX32(0.0f);
    this->mVel.y = FLOAT_TO_FX32(0.0f);
    this->mVel.z = FLOAT_TO_FX32(0.0f);

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

    Actor *targetActor = this->mUnk_1C8.mUnk_00;
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
    data_027e0cd8->mUnk_0C->func_ov000_02080a78(&this->mUnk_1DC.mUnk_00);
}

ARM void ActorShotArrow::func_ov031_020f1f54() {
    this->mVel.x = FLOAT_TO_FX32(0.0f);
    this->mVel.y = FLOAT_TO_FX32(0.0f);
    this->mVel.z = FLOAT_TO_FX32(0.0f);
    this->func_ov031_020f2794(0x1);

    this->mUnk_174 = 0x1555;
    data_027e09a8->func_ov000_02071b30(0x8D7A, &this->mPos, 0);
    this->mUnk_16C = 0;

    if (func_ov000_0205aeac()) {
        bool paramIs3Or4 = this->mUnk_5C.mParams[1] == 0x3 || this->mUnk_5C.mParams[1] == 0x4;
        if (paramIs3Or4) {
            data_027e0cd8->mUnk_0C->func_ov000_02080a78(&this->mUnk_1DC.mUnk_00);
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
    this->mVel.y -= FLOAT_TO_FX32(0.002f);

    this->func_ov000_02098838();

    VecFx32_Copy(&this->mPos, &this->mPrevPos);
    VecFx32_Add(&this->mPos, &this->mVel, &this->mPos);
}

ARM void ActorShotArrow::func_ov031_020f2134() {
    data_027e09a8->func_ov000_02071b30(0x8D7A, &this->mPos, 0);
}

ARM void ActorShotArrow::func_ov031_020f2160() {
    if (!this->mUnk_1C8.mUnk_00 || !GET_FLAG(this->mUnk_1C8.mUnk_00->mFlags, ActorFlag_Alive)) {
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
    this->mUnk_168 = MUL_FX32(this->mUnk_168 + this->mUnk_16C, 0xccd);
}

ARM void ActorShotArrow::func_ov031_020f22d4(Mat3p *param_1, VecFx32 *param_2) {
    func_0200eab0(this->mUnk_A0.mpModel, 0x0, this->mUnk_25E);
    this->mUnk_A0.vfunc_14(param_1, param_2);
}

// non-matching
ARM void ActorShotArrow::func_ov031_020f2310() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f2654() {}

ARM void ActorShotArrow::func_ov031_020f2794(unk16 param_1) {
    switch (param_1) {
        case 0x0:
            this->mUnk_94.vfunc_08(GetResource(data_ov031_02110b3c));
            this->mUnk_25A = false;
            break;
        case 0x1:
            this->mUnk_94.vfunc_08(GetResource(data_ov031_02110b4c));
            this->mUnk_25A = false;
            break;
        case 0x2:
            this->mUnk_94.vfunc_08(GetResource(data_ov031_02110b4c));
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
    this->mUnk_178.mUnk_18 |= 2;
    this->func_ov031_020f1878(0x3);
}

ARM void ActorShotArrow::func_ov031_020f2bbc() {
    if (!(this->mUnk_4C == 0x0 || this->mUnk_4C == 0x5)) {
        return;
    }
    this->mUnk_178.mUnk_18 |= 2;
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
ARM void ActorShotArrow::func_ov031_020f311c(unk32 param_1) {}

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
    if (!this->mUnk_172) {
        return true;
    }
    u16 mUnk_172 = this->mUnk_172;
    if (mUnk_172 > param_1) {
        this->mUnk_172 -= param_1;
    } else {
        this->mUnk_172 = 0;
    }
    return false;
}

ARM ActorShotArrow *ActorShotArrow::func_ov031_020f32c4() {
    this->mPos.y = FLOAT_TO_FX32(0.0f);
    this->func_ov000_0207bffc();
    return this;
}

extern "C" void func_ov000_020982a8();

ARM ActorShotArrow_178::ActorShotArrow_178(ActorShotArrow *param1) {
    this->mUnk_08   = param1;
    this->mUnk_0C.x = FLOAT_TO_FX32(0.0f);
    this->mUnk_0C.y = FLOAT_TO_FX32(0.0f);
    this->mUnk_0C.z = FLOAT_TO_FX32(0.0f);
    this->mUnk_18   = 0;
}

ARM void ActorShotArrow_178::func_ov031_020f3304() {
    this->mUnk_18 = FLOAT_TO_FX32(0.0f);
}

// non-matching
ARM bool ActorShotArrow_178::func_ov031_020f3310() {
    if ((this->mUnk_08->mUnk_178.mUnk_18 & 0x1) == 0) {
        this->mUnk_08->func_ov031_020f2b8c();
    } else if ((this->mUnk_08->mUnk_178.mUnk_18 & 0x2) == 0) {
        if (this->mUnk_08->mUnk_4C == 0x4) {
            UNSET_FLAG(this->mUnk_08->mFlags, ActorFlag_Alive);
            return false;
        }
        this->mUnk_08->mUnk_178.mUnk_18 |= 0x1;
        this->mUnk_08->mUnk_178.mUnk_0C.z = FLOAT_TO_FX32(0.0f);
    }
    return true;
}
// non-matching
ARM bool ActorShotArrow_178::func_ov031_020f33bc() {}

ARM ActorShotArrow_194::ActorShotArrow_194(ActorShotArrow *param_1) {
    this->mUnk_2C = param_1;
    this->mUnk_30 = 0;
}

ARM inline ActorShotArrow_1C8::ActorShotArrow_1C8() {
    this->mUnk_10   = 0;
    this->mUnk_14   = 0;
    this->mUnk_00   = NULL;
    this->mUnk_04.x = 0;
    this->mUnk_04.y = 0;
    this->mUnk_04.z = 0;
}

// un-initialized parameter
ARM void ActorShotArrow_194::func_ov031_020f374c(Actor *actor) {
    UnkStruct_020f374c stack;

    stack.mUnk_28 = this->mUnk_2C->mVel;
    func_01ff93c0(&stack.mUnk_28, this->mUnk_30);
    stack.mUnk_1C = this->mUnk_0C;
    VecFx32_Add(&stack.mUnk_1C, &stack.mUnk_28, &stack.mUnk_1C);

    func_01ffb714(&stack.mUnk_1C, &actor->mVel, &stack.mUnk_1C);
    actor->vfunc_10(&stack.mUnk_0C);

    stack.mUnk_00 = stack.mUnk_0C;
    func_01ffb714(&stack.mUnk_00, &stack.mUnk_1C, &stack.mUnk_00);

    unk32 temp = func_01ff9258(stack.mUnk_00.x, stack.mUnk_00.z);
    if (temp > stack.mUnk_18 && stack.mUnk_18 > FLOAT_TO_FX32(0.15f)) {
        fx32 temp_r5 = (temp - stack.mUnk_18) + FLOAT_TO_FX32(0.15f);
        u16 value    = (u32) (s16) func_01ffbbe0(stack.mUnk_00.x, stack.mUnk_00.z);

        fx16 sin = SIN(value);
        fx16 cos = COS(value);

        stack.mUnk_28.x += MUL_FX32(sin, temp_r5);
        stack.mUnk_28.z += MUL_FX32(cos, temp_r5);
    }
    this->mUnk_2C->func_ov031_020f2f5c(&stack.mUnk_28);
    this->mUnk_2C->mUnk_1C8.mUnk_00 = actor;
}

// non-matching
ARM void ActorShotArrow_194::vfunc_10(Actor *actor) {
    UnkStruct_020f38b0 stack;
    if (this->mUnk_04 != actor->mRef.Get32() && actor->mUnk_34) {
        if (this->mUnk_2C->mUnk_4C && this->mUnk_2C->mUnk_4C != 0x5) {
            return;
        }
        if (actor->GetActorId() == ActorId_AROW) {
            return;
        }

        s16 result = func_01ffbbe0(this->mUnk_2C->mVel.x, this->mUnk_2C->mVel.z);

        switch (actor->GetActorId()) {
            case ActorId_WIDR: {
                this->func_ov031_020f374c(actor);
                this->mUnk_2C->func_ov031_020f2bec();
                if (!actor) {
                    return;
                }
                func_01ffb714(&this->mUnk_2C->mPos, &actor->mPos, &stack.mUnk_1C);
                VecFx32_Copy(&stack.mUnk_1C, &this->mUnk_2C->mUnk_1C8.mUnk_04);
                this->mUnk_2C->mUnk_1C8.mUnk_10 = actor->mAngle;
                this->mUnk_2C->mUnk_1C8.mUnk_14 = result;
                return;
            }
            case ActorId_IWTS: {
                this->func_ov031_020f374c(actor);
                stack.mUnk_0C = 0x0;
                if (!data_027e0d80->func_ov084_02153064(&this->mUnk_2C->mRef, &stack.mUnk_0C)) {
                    return;
                }
                this->mUnk_2C->func_ov031_020f311c(stack.mUnk_0C);
                this->mUnk_2C->mUnk_258 = 0x1;
                return;
            }
            case ActorId_MRD2: {
                if (data_ov075_02163518->mUnk_910 != 1) {
                    return;
                }
                this->func_ov031_020f374c(actor);
                stack.mUnk_08 = 0;
                if (!data_ov075_02163518->func_ov075_0215bbf0(&this->mUnk_2C->mRef, &stack.mUnk_08)) {
                    return;
                }
                func_ov075_02160864(this->mUnk_2C, stack.mUnk_08);
                this->mUnk_2C->mUnk_258 = 0x1;
                return;
            }
            case ActorId_RYAW: {
                this->mUnk_2C->func_ov031_020f1878(0x6);
                UNSET_FLAG(this->mUnk_2C->mFlags, ActorFlag_Visible);
                return;
            }
            case ActorId_LOCK: {
                *&stack.mUnk_04 = actor->mUnk_5C.mUnk_28;
                if (stack.mUnk_04 && (u32) (stack.mUnk_04 << 0x10) >> 0x1E) {
                    ActorUnkGYAM *lockedActor = (ActorUnkGYAM *) gpActorManager->func_01fff3b4(actor->mUnk_5C.mUnk_28);

                    if (lockedActor && lockedActor->GetActorId() == ActorId_GYAM) {
                        this->func_ov031_020f374c(actor);
                        this->mUnk_2C->func_ov031_020f311c((unk32) &lockedActor->mUnk_220);
                        SET_FLAG(this->mUnk_2C->mFlags, ActorFlag_Visible);
                        this->mUnk_2C->mUnk_258 = 0x0;
                        return;
                    }
                }
            }
            default: {
                bool var1 = true;
                if (this->mUnk_2C->mUnk_5C.mParams[1] != 0x3 && this->mUnk_2C->mUnk_5C.mParams[1] != 0x4) {
                    var1 = false;
                }
                if (!var1) {
                    this->func_ov031_020f374c(actor);
                    this->mUnk_2C->func_ov031_020f2bbc();
                    if (actor) {
                        func_01ffb714(&this->mUnk_2C->mPos, &actor->mPos, &stack.mUnk_10);
                        VecFx32_Copy(&stack.mUnk_10, &this->mUnk_2C->mUnk_1C8.mUnk_04);
                        this->mUnk_2C->mUnk_1C8.mUnk_10 = actor->mAngle;
                        this->mUnk_2C->mUnk_1C8.mUnk_14 = result;
                    }
                }
                if (this->mUnk_2C->mUnk_25C) {
                    this->mUnk_2C->mUnk_25D = true;
                }
            }
        }
    }
}

// non-matching
ARM bool ActorShotArrow_194::vfunc_0C(Actor *actor, VecFx32 *vector) {
    UnkStruct_020f3c38 stack;
    if (!(actor->mRef.Get32() != this->mUnk_04 && actor->mUnk_34) ||
        !(!this->mUnk_2C->mUnk_4C || this->mUnk_2C->mUnk_4C == 0x5)) {
        return false;
    }
    func_01ffb714(&actor->mVel, &this->mUnk_2C->mVel, &stack.mUnk_14);
    actor->vfunc_10(&stack.mUnk_04);
    if (!func_01ffccf4(&this->mUnk_0C, &stack.mUnk_04, &stack.mUnk_14, &this->mUnk_30)) {
        return false;
    }

    VecFx32_Copy(&this->mUnk_2C->mVel, vector);
    VecFx32_TryNormalize(vector);
    return true;
}

ARM void ActorShotArrow::func_ov031_020f3d04(unk16 param_1) {
    this->mUnk_176 = param_1;
    func_01ff9638(&this->mVel, -this->mAngle);
    func_01ff95a0(&this->mVel, param_1);
    func_01ff9638(&this->mVel, this->mAngle);
}

ARM ActorShotArrow_194::~ActorShotArrow_194() {}

ARM ActorShotArrow::~ActorShotArrow() {
    if (func_ov000_0205aeac()) {
        bool paramIs3Or4 = this->mUnk_5C.mParams[1] == 0x3 || this->mUnk_5C.mParams[1] == 0x4;
        if (paramIs3Or4) {
            data_027e0cd8->mUnk_0C->func_ov000_02080a78(&this->mUnk_1DC.mUnk_00);
        }
    }
}
ARM ActorProfileShotArrow::~ActorProfileShotArrow() {}
