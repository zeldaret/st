#define VECFX32_CTORS

#include "Actor/ActorKeese.hpp"

#include "Actor/ActorManager.hpp"
#include "Map/MapObjectId.hpp"
#include "MapObject/MapObjectUnkSKDI.hpp"
#include "System/Random.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e09b4.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_027e0cec.hpp"

extern "C" u16 data_ov000_020aecf0[];
extern "C" u16 data_ov000_020aecf4[];
extern "C" unk32 data_ov000_020aecf8;
extern "C" unk32 data_ov000_020aecfc[];

extern "C" void *data_ov032_02121ed4;

extern "C" bool func_01ff916c(fx32 *, unk32, unk32);
extern "C" unk32 func_01ff9258(fx32, fx32);
extern "C" fx16 func_01ffbbe0(fx32, fx32);
extern "C" void func_01fff05c(u32 *, UnkStruct_027e0cd8_0C_Base *, VecFx32 *);
extern "C" bool func_02016b8c(VecFx32 *, VecFx32 *, unk32, UnkAngleStruct, unk32, unk32);

extern "C" s8 func_ov000_02059da4(UnkStruct_027e0960_TableEntry *, VecFx32 *param1);

static const VecFx32 data_ov032_021224d8(FLOAT_TO_FX32(1.7f), FLOAT_TO_FX32(0.5f), FLOAT_TO_FX32(1.7f));
static ActorUnkZLSL_AnimationTag data_ov032_021224e4             = {.index = 0, .name = "fly"};
static ActorUnkZLSL_AnimationTag data_ov032_021224fc             = {.index = 0, .name = "keeth", .unknown = 1};
static PTMF<ActorKeese> data_ov032_0212258c[ActorKeeseState_Max] = {
    ActorKeese::func_ov032_0211e9ec, // ActorKeeseState_0
    ActorKeese::func_ov032_0211ece8, // ActorKeeseState_1
    ActorKeese::func_ov032_0211f1f0, // ActorKeeseState_2
    ActorKeese::func_ov032_0211f054, // ActorKeeseState_3
    ActorKeese::func_ov032_0211f300, // ActorKeeseState_4
    ActorKeese::func_ov032_0211f3ac, // ActorKeeseState_5
    ActorKeese::func_ov032_0211f4a4, // ActorKeeseState_6
    ActorKeese::func_ov032_0211f560, // ActorKeeseState_7
    ActorKeese::func_ov032_0211f604, // ActorKeeseState_8
    ActorKeese::func_ov032_0211f6bc, // ActorKeeseState_9
};
static PTMF<ActorKeese> data_ov032_021225dc[ActorKeeseState_Max] = {
    ActorKeese::func_ov032_0211eb60, // ActorKeeseState_0
    ActorKeese::func_ov032_0211ee5c, // ActorKeeseState_1
    ActorKeese::func_ov032_0211f1f4, // ActorKeeseState_2
    ActorKeese::func_ov032_0211f0a8, // ActorKeeseState_3
    ActorKeese::func_ov032_0211f310, // ActorKeeseState_4
    ActorKeese::func_ov032_0211f404, // ActorKeeseState_5
    ActorKeese::func_ov032_0211f50c, // ActorKeeseState_6
    ActorKeese::func_ov032_0211f58c, // ActorKeeseState_7
    ActorKeese::func_ov032_0211f614, // ActorKeeseState_8
    ActorKeese::func_ov032_0211f804, // ActorKeeseState_9
};

DECL_PROFILE(ActorProfileKeese);

Actor *ActorProfileKeese::Create() {
    return new(HeapIndex_2) ActorKeese();
}

ActorProfileKeese::ActorProfileKeese() :
    ActorProfile_Derived1(ActorId_Keese) {
    this->mUnk_04.Init(FLOAT_TO_FX32(0.4f));

    this->vfunc_04()->mUnk_15 = 0x1;
}

ModelRender_ov032_02122568::ModelRender_ov032_02122568(G3d_Model *pModel) :
    UnkStruct_ov000_020b3268(pModel),
    mUnk_6C(this->ModelRenderBase::func_ov000_02057f18(&data_ov032_02121ed4)) {}

// non-matching last instruction order
ActorKeese::ActorKeese() :
    mUnk_0B0(G3d_GetModelPtr(GET_PROFILE(ActorProfileKeese)->vfunc_04()->mUnk_50)),
    mUnk_120(&this->mUnk_0B0, GET_PROFILE(ActorProfileKeese)->vfunc_04()),
    mUnk_1CC(&this->mUnk_0B0, GET_PROFILE(ActorProfileKeese)->vfunc_04()),
    mUnk_228(0x0),
    mUnk_22A(0x0),
    mUnk_244(0x0),
    mUnk_246(0x0),
    mUnk_278(NULL),
    mUnk_27C(-0x1),
    mUnk_280(0x0),
    mUnk_29C(0x0),
    mUnk_2A0(0x0),
    mUnk_2A4(0x0),
    mUnk_2A8(0x0),
    mUnk_2AC(this),
    mUnk_2C4(FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f)),
    mUnk_2D0(NULL),
    mUnk_2D4(0x0) {
    this->Actor::func_ov000_0209862c(0x4);

    SET_FLAGS(this->mFlags, ActorFlag_6, ActorFlag_9);
    *(s16 *) &this->mUnk_44 &= ~0x20;

    this->mUnk_A4 = &data_ov032_021224d8;
}

ActorKeese_2AC::ActorKeese_2AC(ActorKeese *param1) :
    mUnk_08(param1),
    mUnk_0C(FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f)) {}

ActorKeese_2AC::~ActorKeese_2AC() {
    this->mUnk_08 = NULL;
}

bool ActorKeese_2AC::vfunc_08(const UnkStruct_ov031_020f3310 *param1, unk32 param2) {
    VecFx16_Copy2VecFx32(&param1->mUnk_08, &this->mUnk_0C);
    this->UnkStruct_ov031_Items_00::vfunc_08(param1, param2);
}

// non-matching
bool ActorKeese_2AC::vfunc_0C(const UnkStruct_ov031_020e54d4 *param1, unk32 *param2, unk32 param3) {}

bool ActorKeese::vfunc_18(unk32 param1) {
    this->mUnk_0B0.func_ov000_02057c38(0x6, 0x2);
    this->mUnk_0B0.func_ov000_0209a7b8(this, &ActorKeese::func_ov032_0211faf0);

    this->func_ov032_0211e0c0();
    this->func_ov032_0211e380();

    this->mUnk_120.vfunc_1C(data_ov032_021224e4, 0x1000, 0x19A, 0x0);

    this->mUnk_2C = 0x0;
    SET_FLAG(this->mFlags, ActorFlag_13);

    return true;
}

void ActorKeese::func_ov032_0211e0c0() {
    this->func_ov032_0211e0d4(this->mUnk_5C.mParams[0], 0x0);
}

// non-matching (cf below)
void ActorKeese::func_ov032_0211e0d4(s16 param1, unk32 param2) {
    if (this->mUnk_22A == param1) {
        return;
    }

    this->mUnk_22A = param1;

    switch (param1) {
        case 0x0:
            this->mUnk_1CC.func_ov000_02099ddc(data_ov032_021224fc, 0x1000, 0x0);

            this->mUnk_278.func_ov000_020a0334();

            for (ActorKeese_284 *ptr = this->mUnk_284; ptr != this->mUnk_284 + ARRAY_LEN(this->mUnk_284); ++ptr) {
                ptr->func_ov000_020a0334();
            }
            break;

        case 0x1: {
            this->mUnk_1CC.func_ov000_02099ddc(data_ov032_021224fc, 0x1000, 0x2000);

            // does not match add r4, r6, #0x284 then str r1 [r4, #0x4]
            this->mUnk_284[0].mUnk_04 = 0xD045;
            this->mUnk_284[0].mUnk_08 = 0x2;
            this->mUnk_284[1].mUnk_04 = 0xD046;
            this->mUnk_284[1].mUnk_08 = 0x2;

            UnkStruct_027e0cec *data = data_027e0cec;
            for (ActorKeese_284 *ptr = this->mUnk_284; ptr != this->mUnk_284 + ARRAY_LEN(this->mUnk_284); ++ptr) {
                data->func_ov000_020a0140(ptr, &this->mUnk_2C4);
            }

            if (param2 != 0x0) {
                data_027e09a8->func_ov000_02071b30(0x9823, &this->mPos, 0x0);
            }

            this->mUnk_278.func_ov000_020a0334();
            break;
        }

        case 0x2:
            this->mUnk_1CC.func_ov000_02099ddc(data_ov032_021224fc, 0x1000, 0x1000);

            this->mUnk_27C = 0x877;
            this->mUnk_280 = 0x2;

            data_027e0cec->func_ov000_020a0140(&this->mUnk_278, &this->mUnk_2C4);

            if (param2 != 0x0) {
                data_027e09a8->func_ov000_02071b30(0x9822, &this->mPos, 0x0);
            }

            for (ActorKeese_284 *ptr = this->mUnk_284; ptr != this->mUnk_284 + ARRAY_LEN(this->mUnk_284); ++ptr) {
                ptr->func_ov000_020a0334();
            }
            break;

        default:
            break;
    }
}

void ActorKeese::func_ov032_0211e308() {
    switch (this->mUnk_22A) {
        case 0x1: {
            UnkStruct_027e0cec *data = data_027e0cec;
            for (ActorKeese_284 *ptr = this->mUnk_284; ptr != this->mUnk_284 + ARRAY_LEN(this->mUnk_284); ++ptr) {
                data->func_ov000_020a0140(ptr, &this->mUnk_2C4);
            }
            break;
        }

        case 0x2:
            data_027e0cec->func_ov000_020a0140(&this->mUnk_278, &this->mUnk_2C4);
            break;

        default:
            break;
    }
}

void ActorKeese::func_ov032_0211e380() {
    switch (this->mUnk_5C.mParams[1]) {
        case 0x0:
            this->SetState(ActorKeeseState_0);
            break;

        case 0x1: {
            u8 sp00 = this->mUnk_5C.mUnk_0E;
            this->mUnk_22C.func_ov024_020d6680(&this->mPos, &sp00);

            this->mUnk_22C.mUnk_04 = func_ov000_02059da4(this->mUnk_22C.mUnk_00, &this->mPos);

            this->SetState(ActorKeeseState_1);
            break;
        }

        case 0x2:
            this->SetState(ActorKeeseState_9);
            break;

        default:
            break;
    }
}

void ActorKeese::func_ov032_0211e40c() {
    this->mUnk_2C  = 0x0;
    this->mUnk_228 = 0x0;
}

void ActorKeese::SetState(ActorState state) {
    this->func_ov032_0211e40c();

    this->mState = state;

    CALL_PTMF(PTMF<ActorKeese>, data_ov032_0212258c[this->mState]);
}

// non-matching
void ActorKeese::func_ov032_0211e468() {}

void ActorKeese::vfunc_20() {
    if (this->mState != ActorKeeseState_9 && !this->Actor_Derived2::func_ov017_020bef4c(0x4000) && this->mUnk_48 != 0x0) {
        bool noReturn = true;
        if (this->mState != ActorKeeseState_7 && this->mState != ActorKeeseState_6) {
            noReturn = false;
        }
        if (!noReturn) {
            return;
        }
    }

    this->mUnk_3C = &this->mUnk_248;
    CALL_PTMF(PTMF<ActorKeese>, data_ov032_021225dc[this->mState]);

    if (this->mState == ActorKeeseState_9) {
        return;
    }

    this->Actor_Derived2::func_ov017_020bf894(&this->mUnk_268);

    if (this->mUnk_22A != 2) {
        this->func_ov000_02098b8c(0x1, &this->mUnk_2AC);
    } else {
        this->func_ov000_02098b8c(0x0, &this->mUnk_2AC);
    }

    this->func_ov032_0211e308();

    if (this->mUnk_46 & 1) {
        this->mVel.y = FLOAT_TO_FX32(0.0f);
    }

    if ((this->mUnk_120.vfunc_28()->func_02015080(0x1000) != 0 || this->mUnk_120.vfunc_28()->func_02015080(0x9000) != 0) &&
        GET_FLAG(this->mFlags, ActorFlag_14)) {
        switch (this->mUnk_22A) {
            case 0x0:
                data_027e09a8->func_ov000_02071b30(0x981F, &this->mPos, 0x0);
                break;

            case 0x1:
                data_027e09a8->func_ov000_02071b30(0x9821, &this->mPos, 0x0);
                break;

            case 0x2:
                data_027e09a8->func_ov000_02071b30(0x9820, &this->mPos, 0x0);
                break;

            default:
                data_027e09a8->func_ov000_02071b30(0x981F, &this->mPos, 0x0);
                break;
        }
    }

    this->func_ov032_0211e468();

    if (!GET_FLAG(this->mFlags, ActorFlag_14)) {
        return;
    }

    this->mUnk_120.vfunc_34();
}

// non-matching
void ActorKeese::vfunc_2C(unk32 param1) {
    if (!this->func_01fff5d0(param1, 0x0)) {
        this->mUnk_278.func_ov000_020a0334();

        for (ActorKeese_284 *ptr = this->mUnk_284; ptr != this->mUnk_284 + ARRAY_LEN(this->mUnk_284); ++ptr) {
            ptr->func_ov000_020a0334();
        }

        return;
    }

    VecFx32 *og = this->mUnk_0B0.func_01ffc6d4(this->mAngleStruct, &this->mPos);
    VecFx32 vec;
    VecFx32_Init(og->x, og->y, og->z, &vec);

    data_027e09b4->func_ov017_020c08c4(&vec, 0x4CD, 0x4CD, 0x1F, 0x0, 0x1);
}

// non-matching
void ActorKeese::func_ov032_0211e9ec() {
    this->mUnk_52 = gRandom.Next32(0x1F) + 0x1E;
    this->mUnk_50 = 0x0;

    u32 sp00;

    func_01fff05c(&sp00, data_027e0cd8->mUnk_0C, &this->mPos);

    bool var_r6 = false;
    if ((*&sp00 & 0x1F) == 0xF && ((*&sp00 >> 5) & 3) == 2) {
        var_r6 = true;
    }

    fx32 unk = this->mUnk_5C.mInitialPos.y;
    if (var_r6) {
        unk = data_027e0cd8->mUnk_0C->vfunc_28(&this->mPos, 0x1, 0x0);
    }

    this->mUnk_29C = unk + 0x800 + gRandom.Next32(0x99B) + 0xFFFFFB33;
    gRandom.UpdateRandomValue();
    s32 var_r1   = this->mUnk_2A8;
    bool temp_gt = var_r1 > 0;
    if (temp_gt > 0) {
        var_r1 = 0xFFFFF8E4;
    }
    this->mUnk_2A4 = 0x19A;
    if (!temp_gt) {
        var_r1 = 0x71C;
    }
    this->mUnk_2A8 = var_r1;
}

void ActorKeese::func_ov032_0211eb60() {
    if (this->mUnk_46 & 0x1C) {
        this->mAngle = func_01ffbbe0(this->mUnk_2AC.mUnk_0C.x, this->mUnk_2AC.mUnk_0C.z);
    }

    this->mAngle += this->mUnk_2A8;

    if (this->IsTimerOut()) {
        this->func_ov032_0211e380();
    }

    func_01ff916c(&this->mUnk_2A0, this->mUnk_2A4, 0xA4);
    func_01ff916c(&this->mPos.y, this->mUnk_29C, 0xA4);

    this->Actor::func_ov000_0209a008(this->mUnk_2A0, this->mAngle);

    if (this->IsTimerOut()) {
        if (func_01ff9258(this->mPos.x - this->mUnk_5C.mInitialPos.x, this->mPos.z - this->mUnk_5C.mInitialPos.z) > 0x2000) {
            this->SetState(ActorKeeseState_3);
            return;
        }
    }

    if (this->func_ov032_0211f9c4()) {
        this->SetState(ActorKeeseState_8);
        return;
    }

    VecFx32 *vec = data_027e0ce0->func_01fff148(0x0);

    if (!func_02016b8c(&this->mPos, vec, 0x3000, this->mAngleStruct, 0x1000, 0x1)) {
        return;
    }

    this->SetState(ActorKeeseState_2);
}

// non-matching
void ActorKeese::func_ov032_0211ece8() {}
// non-matching
void ActorKeese::func_ov032_0211ee5c() {}

void ActorKeese::func_ov032_0211f054() {
    this->mUnk_52 = gRandom.Next32(0x1F) + 0x1E;
    this->mUnk_50 = 0x0;
}

// non-matching
void ActorKeese::func_ov032_0211f0a8() {}
// non-matching
void ActorKeese::func_ov032_0211f1f0() {}
// non-matching
void ActorKeese::func_ov032_0211f1f4() {
    bool val = this->func_ov032_0211f93c(data_027e0ce0->func_01fff148(0x0), 0xB6);

    if (this->mUnk_5C.mParams[1] == 0x1) {
        VecFx32 sp00;
        this->mUnk_22C.mUnk_00->mTable.GetPtr(this->mUnk_22C.mUnk_04)->vfunc_0C(&sp00);

        if (func_01ff9258(this->mPos.x - sp00.x, this->mPos.z - sp00.z) > 0x2000) {
            this->func_ov032_0211e380();

            this->Actor::func_ov000_0209a008(this->mUnk_2A0, this->mAngle);
            return;
        }
    }

    if (func_01ff9258(this->mPos.x - this->mUnk_5C.mInitialPos.x, this->mPos.z - this->mUnk_5C.mInitialPos.z) > 0x2000) {
        this->SetState(ActorKeeseState_3);

        this->Actor::func_ov000_0209a008(this->mUnk_2A0, this->mAngle);
        return;
    }

    if (this->func_ov032_0211f9c4()) {
        this->SetState(ActorKeeseState_8);
    } else if (val || this->mUnk_46 & 0x1C) {
        this->func_ov032_0211e380();
    }

    this->Actor::func_ov000_0209a008(this->mUnk_2A0, this->mAngle);
}

void ActorKeese::func_ov032_0211f300() {
    this->mUnk_248.func_ov000_02097bec();
}

// non-matching (270 + 2)
void ActorKeese::func_ov032_0211f310() {
    this->Actor_Derived2::func_ov000_020992dc();

    if (GET_FLAG(this->mFlags, ActorFlag_5)) {
        if (this->mUnk_48 <= 0x0) {
            this->vfunc_54(0x0);
        } else {
            if (this->mUnk_268.mUnk_08 >= this->mUnk_268.mUnk_0A) {
                this->func_ov032_0211e380();
            } else {
                this->SetState(ActorKeeseState_6);
            }
        }
    }

    this->Actor::func_ov000_02098838();

    VecFx32_Copy(&this->mPos, &this->mPrevPos);
    VecFx32_Add(&this->mPos, &this->mVel, &this->mPos);
}

// non-matching (regalloc)
void ActorKeese::func_ov032_0211f3ac() {
    this->Actor::func_ov017_020bf634(&this->mUnk_248.mUnk_10, data_ov000_020aecfc[0], data_ov000_020aecf4[0]);

    this->mUnk_248.func_ov000_02097bec();

    this->mUnk_120.vfunc_28()->mUnk_04 = FLOAT_TO_FX32(1.2f);
    this->mUnk_2C                      = 0x7B;
}

void ActorKeese::func_ov032_0211f404() {
    this->func_ov017_020bf688();

    if (GET_FLAG(this->mFlags, ActorFlag_5)) {
        if (this->mUnk_48 <= 0x0) {
            this->Actor::func_ov000_020984d0();
            this->Actor::func_ov017_020bf3e0(0x1, FLOAT_TO_FX32(0.0f));

            this->Actor_Derived2::func_ov000_020997c4(0x0);
        } else {
            this->func_ov032_0211e380();
        }
    }

    if (!(this->mUnk_46 & 0x1)) {
        this->mAngle += 0xE39; // DEG_TO_ANG leads to d/fflt, d/fadd d/ffix if non int value. E39 seems to be between 22 and 23
    }

    this->Actor::func_ov000_02098838();

    VecFx32_Copy(&this->mPos, &this->mPrevPos);
    VecFx32_Add(&this->mPos, &this->mVel, &this->mPos);
}

void ActorKeese::func_ov032_0211f4a4() {
    this->Actor_Derived2::func_ov000_02099450(&this->mUnk_268, &this->mUnk_248.mUnk_10, 0x0, data_ov000_020aecf0[0]);

    this->mUnk_2C = data_ov000_020aecf8;

    this->mUnk_248.func_ov000_02097bec();

    this->mUnk_120.vfunc_28()->mUnk_04 = FLOAT_TO_FX32(0.8f);
}

void ActorKeese::func_ov032_0211f50c() {
    this->Actor_Derived2::func_ov000_020994a0();

    if (GET_FLAG(this->mFlags, ActorFlag_5)) {
        this->func_ov032_0211e380();
    }

    this->Actor::func_ov000_02098838();

    VecFx32_Copy(&this->mPos, &this->mPrevPos);
    VecFx32_Add(&this->mPos, &this->mVel, &this->mPos);
}

void ActorKeese::func_ov032_0211f560() {
    this->Actor_Derived2::func_ov000_02098f34(&this->mUnk_248.mUnk_10);

    this->vfunc_40();

    this->mUnk_248.func_ov000_02097bec();
}

void ActorKeese::func_ov032_0211f58c() {
    this->vfunc_44();

    if (GET_FLAG(this->mFlags, ActorFlag_5)) {
        VecFx32_Init(FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), &this->mUnk_248.mUnk_10);

        this->mUnk_268.func_ov000_02099a0c();

        this->SetState(ActorKeeseState_6);
    }

    this->Actor::func_ov000_02098838();

    VecFx32_Copy(&this->mPos, &this->mPrevPos);
    VecFx32_Add(&this->mPos, &this->mVel, &this->mPos);
}

void ActorKeese::func_ov032_0211f604() {
    this->mUnk_2A4 = 0x19A;
}

// non-matching
void ActorKeese::func_ov032_0211f614() {}
// non-matching
void ActorKeese::func_ov032_0211f6bc() {}

extern "C" void func_ov017_020c26f8(unk32, VecFx32 *, unk32, unk32);

// non-matching (instruction order)
void ActorKeese::func_ov032_0211f804() {
    Actor *actor = gpActorManager->func_01fff3b4(this->mUnk_2D4);

    switch (this->mUnk_228) {
        case 0x0:
            if (actor != NULL) {
                break;
            }

            ++this->mUnk_228;
            this->mUnk_52 = 0x1E;
            this->mUnk_50 = 0x00;
            break;

        case 0x1: {
            if (!this->IsTimerOut()) {
                return;
            }

            VecFx32 vec = this->mPos;
            vec.y -= FLOAT_TO_FX32(1.0f);

            func_ov017_020c26f8(0x1, &vec, 0x1, 0x2);

            ++this->mUnk_228;
            this->mUnk_52 = 0xA;
            this->mUnk_50 = 0x0;
            break;
        }

        case 0x2:
            if (!this->IsTimerOut()) {
                return;
            }

            this->SetState(ActorKeeseState_9);
            break;

        default:
            break;
    }
}

// non-matching
bool ActorKeese::func_ov032_0211f93c(VecFx32 *param1, unk32 param2) {}

// non-matching (vec should movs into r5)
bool ActorKeese::func_ov032_0211f9c4() {
    if (this->mUnk_22A != 0x0) {
        return false;
    }

    UnkStruct_ov032_0212251c sp04;

    VecFx32 *vec = sp04.func_020170ac(&this->mPos);
    if (vec == NULL || func_01ff9258(this->mPos.x - vec->x, this->mPos.z - vec->z) > 0x3000) {
        return false;
    }

    this->mUnk_2D0 = this->mUnk_38;
    return true;
}

// non-matching (stack size 0x14 expected but 0xC here)
bool ActorKeese::func_ov032_0211fa4c(unk32 param1) {
    if (param1 == 0x1) {
        return false;
    }

    if (this->mUnk_22A != 0x1) {
        if (this->mUnk_22A != 0x2) {
            return false;
        }

        data_027e0ce0->func_ov000_0208bc1c(param1, 0x1, 0x6, 0x0, 0x0, 0x0);
        return true;
    }

    data_027e0ce0->func_ov000_0208bc1c(param1, 0x1, 0x8, 0x0, 0x0, 0x0);
    return true;
}

// non-matching
void ActorKeese::func_ov032_0211faf0(void *param1, unk32 param2) {}

UnkStruct_ov032_0212251c::UnkStruct_ov032_0212251c() :
    UnkStruct_ov000_020b34c4(MapObjectId_SKDI) {}

bool UnkStruct_ov032_0212251c::vfunc_00(MapObject *param1) {
    // MapObjectUnkSKDI guessed with ctor and MapObjectUnkSKDI::vfunc_40 exists and returns number
    return this->UnkStruct_ov000_020b34c4::vfunc_00(param1) && ((MapObjectUnkSKDI *) param1)->vfunc_40() == 0x1;
}

ActorKeese_284::ActorKeese_284() :
    UnkSystem7(NULL),
    mUnk_04(-0x1),
    mUnk_08(0x0) {}
