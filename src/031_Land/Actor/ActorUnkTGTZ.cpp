#include "Actor/ActorUnkTGTZ.hpp"

#include "Actor/ActorManager.hpp"
#include "Actor/ActorUnkNTTZ.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_0204af1c.hpp"
#include "Unknown/UnkStruct_027e0998.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"

struct UnkStruct_ov000_02077590 {
    /* 00 */ s16 mUnk_00;
    /* 02 */ s16 mUnk_02;
    /* 04 */ s16 mUnk_04;
    /* 06 */ s16 mUnk_06;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ VecFx32 mUnk_0C;
    /* 18 */ u16 mUnk_18;
    /* 1A */ u16 mUnk_1A;
    /* 1C */ u16 mUnk_1C;
    /* 1E */ u16 mUnk_1E;
};

extern "C" bool func_01ff916c(void *, int, int);
extern "C" void func_01ff9638(VecFx32 *, s16);
extern "C" void func_01ffa7a0(VecFx32 *, Mat3p *, VecFx32 *);
extern "C" void func_ov000_02072fd0(UnkStackStruct1 *);
extern "C" UnkStruct_ov000_02077590 *func_ov000_02077590(unk32);

#if IS_JP
static const Vec3p data_ov031_02116344(FLOAT_TO_FX32(1.5f), FLOAT_TO_FX32(2.0f), FLOAT_TO_FX32(0.0f));
#else
static unk32 data_ov031_02114584[0x2]  = {0};
static const char *data_ov031_021145a4 = "target";
#endif
extern unk32 data_ov031_02116b54 = 0x0;
extern UnkStruct_ov019_020d24c8_28_258_00 data_ov031_02116b58(NULL, 0);

DECL_PROFILE(ActorProfileUnkTGTZ);

Actor *ActorProfileUnkTGTZ::Create() {
    return new(HeapIndex_2) ActorUnkTGTZ();
}

ActorProfileUnkTGTZ::ActorProfileUnkTGTZ() :
    ActorProfile_Derived1(ActorId_TGTZ) {
    this->mUnk_04.Init(FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(2.0f), FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.5f));
}

// non-matching
ActorUnkTGTZ::ActorUnkTGTZ() :
#if IS_JP
    mUnk_094(NULL),
    mUnk_09C(true),
#else
    mUnk_094(NULL, 0xC, NULL),
#endif
    mUnk_1B4(NULL),
    mUnk_1B8(0x0),
    mUnk_1BC(-0x1),
    mUnk_1C0(0x0),
    mUnk_1C2(0x0),
    mUnk_1C4(FLOAT_TO_FX32(0.0f)),
    mUnk_1CC(0x0),
    mUnk_1D0(0x0),
    mUnk_1D2(0x0),
    mUnk_1D4(0x0),
    mUnk_1D6(0x0),
    mUnk_1D8(false),
    mUnk_1DC(0x0) {
    Mat3p_InitIdentity(&this->mUnk_190);
    this->func_ov000_0209862c(0x0);
}

// non-matching
void ActorUnkTGTZ::func_ov031_020f6984() {}

// non-matching
bool ActorUnkTGTZ::vfunc_18(unk32 param1) {
    if (this->mUnk_5C.mUnk_1A[0] != 0x0) {
        this->mPos.y = MUL_FX32(this->mUnk_5C.mUnk_1A[0] << 0xC, 0x1333);
    }
    Mat3p_InitYRotation(&this->mUnk_190, SIN((u16) this->mAngle), COS((u16) this->mAngle));
    data_ov031_02116b58.func_ov000_0205fc20(0x5D, 0x32, NULL, NULL);
    ((UnkStruct_ov019_020d24c8_28_258_00 *) GET_PROFILE(ActorProfileUnkNTTZ))->func_ov000_0205fc20(0x5D, 0x31, NULL, NULL);

    unk32 temp_r3_2 = this->mUnk_5C.mParams[1];
    unk32 temp_r0   = (u16) (((s16) this->mAngle + 0x2000)) >> 0xE;
    if ((temp_r0 != 0) && (temp_r0 != 2)) {
        this->mUnk_1C8 = (UnkStruct_ov019_020d24c8_28_258_00 *) GET_PROFILE(ActorProfileUnkNTTZ);
    } else {
        this->mUnk_1C8 = &data_ov031_02116b58;
    }
    if (temp_r3_2 != 0) {
        unk32 temp_r1_3 = this->mUnk_5C.mParams[2];
        if (temp_r1_3 != 0) {
            this->mUnk_1D4 = temp_r1_3;
        }
        this->mUnk_1CC = 1;
        this->mUnk_1D6 = temp_r3_2;
        if (temp_r1_3 == 0) {
            this->mUnk_1D4 = temp_r3_2;
        }
    }
    if (this->mUnk_5C.mUnk_1A[0] == 0 || !this->func_ov000_02098a60(0x0)) {
        this->func_ov031_020f6f20(0x2);
    } else {
        this->func_ov031_020f6f20(0x0);
    }

    return true;
}

// non-matching
void ActorUnkTGTZ::vfunc_20() {
    switch (this->mUnk_1B8) {
        case 0x0:
            if (!this->func_ov000_02098a60(0x0)) {
                break;
            }
            UnkStackStruct1 stack;
            func_ov000_02072fd0(&stack);

            stack.mUnk_08 = 0x4B;
            stack.mUnk_00 = 0x80;
            stack.mUnk_3A = 0x7;

            UnkStruct_ov000_02077590 *r3 = func_ov000_02077590(0x1);
            stack.mUnk_18                = r3->mUnk_00;
            stack.mUnk_1A                = r3->mUnk_02;
            stack.mUnk_1C                = r3->mUnk_04;
            stack.mUnk_1E                = r3->mUnk_06;
            stack.mUnk_20                = r3->mUnk_08;

            stack.mUnk_24 = r3->mUnk_0C;

            u16 unk_1A    = r3->mUnk_1A;
            u16 unk_18    = r3->mUnk_18;
            stack.mUnk_30 = unk_18;
            stack.mUnk_32 = unk_1A;

            u16 unk_1C    = r3->mUnk_1C;
            u16 unk_1E    = r3->mUnk_1E;
            stack.mUnk_36 = unk_1E;
            stack.mUnk_34 = unk_1C;
            stack.mUnk_38 |= 0x80;

            stack.mUnk_0C.x = this->mPos.x;
            stack.mUnk_0C.y = this->mPos.y;
            stack.mUnk_0C.z = this->mPos.z;
            stack.mUnk_0C.y = this->mPos.y + FLOAT_TO_FX32(1.0f);
            this->mUnk_1BC  = data_027e09b8->func_ov000_02073388(&stack, 0x0);
            this->func_ov031_020f6f20(0x1);
            break;
        case 0x2:
            if (this->mUnk_5C.mUnk_1A[0] == 0x0) {
                break;
            }
            if (this->func_ov000_02098a60(0x0)) {
                break;
            }
            if (this->mUnk_1B4 != NULL) {
                this->mUnk_1B4->func_ov000_020984d0();
                this->mUnk_1B4 = NULL;
            }
            this->func_ov031_020f6f20(0x0);
            break;
        case 0x1:
            if (data_027e09b8->func_ov000_020732ec(this->mUnk_1BC) == 0x0) {
                return;
            }
            u16 var1 = this->mUnk_1C2;
            u16 var2 = this->mUnk_1C0;
            if (var2 >= var1) {
                data_027e09a8->func_ov000_02071b30(0xF0, &this->mPos, 0x0);
                this->func_ov031_020f6f20(0x2);
                if (!this->mUnk_5C.mUnk_0F) {
                    return;
                }
                data_027e09a8->func_ov000_020716dc(0x1E);
                return;
            }
            if (var2 >= var1) {
                func_01ff916c(&this->mUnk_1C4, 0x0, 0x333);
            }
            break;
        case 0x3:
            if (!this->IsInternalTimerOut()) {
                break;
            }
            this->func_ov031_020f6f20(0x5);
            break;
        case 0x5:
            if (this->mUnk_1D8) {
                break;
            }
            if (!func_01ff916c(&this->mUnk_1C4, 0x1000, 0x19A)) {
                break;
            }
            this->func_ov031_020f6f20(0x6);
            break;
        case 0x4:
            if (this->mUnk_1D8) {
                break;
            }
            if (!func_01ff916c(&this->mUnk_1C4, -0x1000, 0x19A)) {
                break;
            }
            this->func_ov031_020f6f20(0x3);
            break;
        case 0x6:
            if (!this->IsInternalTimerOut()) {
                break;
            }
            this->func_ov031_020f6f20(0x4);
            break;
        default:
            break;
    }
    if (this->mUnk_1CC == 0x1) {
        ActorUnkNTTZ *actor = this->mUnk_1B4;
        VecFx32 vecSp0C     = actor->mPos;
        vecSp0C.y           = this->mPos.y + this->mUnk_1C4 + FLOAT_TO_FX32(1.5f);

        VecFx32 vecSp00 = vecSp0C;
        VecFx32_Init(vecSp00.x, vecSp00.y, vecSp00.z, &actor->mPos);
        VecFx32_Init(vecSp00.x, vecSp00.y, vecSp00.z, &actor->mPrevPos);
    }
    if (this->mUnk_1C0 < this->mUnk_1C2) {
        ++this->mUnk_1C0;
    }
}

void ActorUnkTGTZ::vfunc_24() {
    this->vfunc_20();
}

void ActorUnkTGTZ::func_ov031_020f6e5c(ActorRef param1) {
    if (param1.type_index == 0x0) {
        return;
    }
    Actor *actor = gpActorManager->func_01fff3b4(param1);
    if (actor != NULL) {
        UNSET_FLAG(actor->mFlags, ActorFlag_Alive);
    }
}

void ActorUnkTGTZ::func_ov031_020f6ea8(ActorRef *param0, u16 param1, const VecFx32 *param2, s16 param3, u16 param4) {
    ActorParams params;

    params.mUnk_28 = 0;
    params.func_ov000_020975f8();

    params.mInitialPos.x = param2->x;
    params.mInitialPos.y = param2->y;
    params.mInitialPos.z = param2->z;

    params.mParams[0] = param1;
    params.mParams[1] = param3;
    params.mParams[2] = param4;

    Actor::func_ov000_020973f4(param0, &data_ov000_020b539c_eur, ActorId_EventIcon, &params, 0);
}

void ActorUnkTGTZ::func_ov031_020f6f20(unk32 param1) {
    this->mUnk_1B8 = param1;
    this->mUnk_1C2 = 0xFFFF;
    this->mUnk_1C0 = 0x0;

    switch (param1) {
        case 0x0:
            this->mUnk_1BC = -0x1;
            this->mUnk_1C4 = FLOAT_TO_FX32(3.0f);
            UNSET_FLAG(this->mFlags, ActorFlag_Visible);
            this->func_ov031_020f6e5c(this->mUnk_1DC);
            this->mUnk_1DC = 0x0;
            break;
        case 0x1:
            this->mUnk_1C2 = 0x1E;
            this->mUnk_1C0 = 0x0;
            SET_FLAG(this->mFlags, ActorFlag_Visible);
            ActorRef ref;
            this->func_ov031_020f6ea8(&ref, 0x0, &this->mPos, 0x0, 0x1);
            this->mUnk_1DC = ref;
            break;
        case 0x2:
            this->mUnk_1BC = -0x1;
            this->mUnk_1C4 = FLOAT_TO_FX32(0.0f);
            SET_FLAG(this->mFlags, ActorFlag_Visible);

            VecFx32 vec1;
#if IS_JP
            func_01ffa7a0((VecFx32 *) &data_ov031_02116344, &this->mUnk_190, &vec1);
#else
            this->mUnk_094.func_ov000_02057d9c();
            VecFx32 *pVec = this->mUnk_094.func_ov000_0205a7a8(this->mUnk_094.func_ov000_0205a778(data_ov031_021145a4));
            func_01ffa7a0(pVec, &this->mUnk_190, &vec1);
#endif

            vec1.y -= FLOAT_TO_FX32(0.5f);

            this->func_ov031_020f7358();

            VecFx32 vec2;
            vec2.x = vec1.x + this->mPos.x;
            vec2.y = vec1.y + this->mPos.y;
            vec2.z = vec1.z + this->mPos.z;

            VecFx32 vec3 = vec2;

            ActorUnkNTTZ *actor = this->mUnk_1B4;
            VecFx32_Init(vec3.x, vec3.y, vec3.z, &actor->mPos);
            VecFx32_Init(vec3.x, vec3.y, vec3.z, &actor->mPrevPos);

            if (this->mUnk_1CC != 0x1) {
                break;
            }

            this->func_ov031_020f6f20(0x3);
            break;
        case 0x3:
            this->mUnk_1C4 = FLOAT_TO_FX32(-1.0002f);
            SET_FLAG(this->mFlags, ActorFlag_Visible);
            this->mUnk_1D2 = this->mUnk_1D4;
            this->mUnk_1D0 = 0x0;
            break;
        case 0x5:
            data_027e09a8->func_ov000_02071b30(0x10E, &this->mPos, 0x0);
            break;
        case 0x4:
            data_027e09a8->func_ov000_02071b30(0x10F, &this->mPos, 0x0);
            SET_FLAG(this->mFlags, ActorFlag_Visible);
            break;
        case 0x6:
            this->mUnk_1C4 = FLOAT_TO_FX32(1.0f);
            this->mUnk_1D2 = this->mUnk_1D6;
            this->mUnk_1D0 = 0x0;
            break;
        default:
            break;
    }
}

// non-matching
void ActorUnkTGTZ::vfunc_30(Actor_vfunc_30 *param1) {
    if (this->mUnk_1B8 == 0x0) {
        return;
    }
    unk32 var;
    if (this->mUnk_1C8->mUnk_04 & 0x1) {
        var = 0x1;
    } else {
        var = 0x0;
    }

    if (param1->mUnk_00 != var || param1->mUnk_01 != var) {
        return;
    }
    Vec2s vec2s;

    if (!data_027e0998->vfunc_00(&this->mPos, &vec2s, (u16 *) &this->mRef)) {
        return;
    }

    unk32 var_r5 = 0;
    unk32 var_r6 = 0;
    switch (((u16) (((s16) this->mAngle + 0x2000)) >> 0xE)) {
        case 0x3:
            var_r5 = 0x10000 >> 0x10;
            break;
        case 0x0:
            var_r6 = -0x10000 >> 0x10;
            break;
        default:
            break;
    }

    data_027e0998->func_ov000_02061a70();

    data_0204af1c.func_0201aa44(this->mUnk_1C8, NULL, 0x2, NULL);
}

void ActorUnkTGTZ::vfunc_2C(unk32 param1) {
    if (!this->func_01fff5d0(param1, 0x0)) {
        return;
    }
    VecFx32 vec1;

    if (this->mUnk_1CC == 0x0) {
        VecFx32_Init(-this->mUnk_1C4, FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), &vec1);
        func_01ff9638(&vec1, this->mAngle);
    } else {
        VecFx32_Init(FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), &vec1);
        func_01ff9638(&vec1, this->mAngle);
        vec1.y = this->mUnk_1C4;
    }

    VecFx32 vec2 = this->mPos;

    VecFx32_Add(&vec2, &vec1, &vec2);

    this->mUnk_094.vfunc_14(&this->mUnk_190, &vec2);
}

void ActorUnkTGTZ::func_ov031_020f7358() {
    ActorParams params;
    ActorRef ref;

    params.mUnk_28 = 0x0;
    params.func_ov000_020975f8();

    params.mInitialAngle = this->mAngle;
    params.mUnk_28       = this->mRef;

    Actor::func_ov000_020973f4(&ref, &data_ov000_020b539c_eur, ActorId_NTTZ, &params, 0x0);

    ActorUnkNTTZ *actor = (ActorUnkNTTZ *) gpActorManager->func_01fff3b4(ref);
    this->mUnk_1B4      = actor;

    u16 value = this->mUnk_5C.mParams[0];
    if (value == 0x0) {
        value = 0x2;
    }
    this->mUnk_1B4->mUnk_94 = value << 0xC;
}

void ActorUnkTGTZ::func_ov031_020f73e4() {
    this->mUnk_1D8 = true;
}

void ActorUnkTGTZ::func_ov031_020f73f0() {
    this->mUnk_1D8 = false;
}
