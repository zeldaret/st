#include "Actor/ActorTearLight.hpp"

#include "Actor/ActorManager.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_020431b8.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e09b4.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_027e0cec.hpp"
#include "Unknown/UnkStruct_027e0d34.hpp"
#include "Unknown/UnkStruct_027e0d38.hpp"
#include "nitro/fx.h"

class UnkStruct_ov071_0215f92c : public UnkStruct_ov031_Items_00 {
public:
    /* 00 (base) */
    /* 04 */ u16 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */

    UnkStruct_ov071_0215f92c();
};

class UnkActor_ov071_0215ffbc : public Actor {
public:
    /* 00 (base) */
    /* 94 */ STRUCT_PAD(0x94, 0xE8);
    /* E8 */ VecFx32 mUnk_E8;
};

extern "C" unk32 data_ov000_020aecf8;
extern "C" VecFx32 data_ov071_02164bd4;

extern "C" void func_01ffb714(VecFx32 *, VecFx32 *, VecFx32 *);
extern "C" void func_01ffedac(Vec2bCpp *, VecFx32 *);
extern "C" fx32 func_ov000_02080068(fx32 x);
extern "C" fx32 func_ov000_02080080(fx32 x);

static ActorUnkZLSL_AnimationTag data_ov071_02164be0 = {0x0, "szku"};
static ActorTearLight_UnkStruct data_ov071_02164cd8  = {.fct = 0x0};
static ActorTearLight_UnkStruct data_ov071_02164ce0  = {.fct = ActorTearLight::func_ov071_0215fed4};
static ActorTearLight_UnkStruct data_ov071_02164ce8  = {.fct = ActorTearLight::func_ov071_0215ff08};
static ActorTearLight_UnkStruct data_ov071_02164cf0  = {.fct = ActorTearLight::func_ov071_0215ff3c};
static ActorTearLight_UnkStruct data_ov071_02164cf8  = {.fct = ActorTearLight::func_ov071_0215ff3c};
static ActorTearLight_UnkStruct data_ov071_02164d00  = {.fct = ActorTearLight::func_ov071_0215ffb8};
static ActorTearLight_UnkStruct data_ov071_02164d08  = {.fct = ActorTearLight::func_ov071_0215ffbc};

DECL_PROFILE(ActorProfileTearLight);

Actor *ActorProfileTearLight::Create() {
    return new(HeapIndex_2) ActorTearLight();
}

ActorProfileTearLight::ActorProfileTearLight() :
    ActorProfile_Derived1(ActorId_TearLight) {
    this->mUnk_18 = 0x0;
    this->mUnk_1A = 0x1000;
    this->mUnk_04.Init(FLOAT_TO_FX32(0.4f));
}

// non-matching
ActorTearLight::ActorTearLight() :
    mUnk_0A4(G3d_GetModelPtr(GET_PROFILE(ActorProfileTearLight)->mUnk_3C.mUnk_50)),
    mUnk_104(&this->mUnk_120, &this->mUnk_0A4, GET_PROFILE(ActorProfileTearLight)->vfunc_04()),
    mUnk_120(&this->mUnk_140, NULL),
    mUnk_160(*(ActorTearLight_UnkStruct *) &data_020431b8),
    mUnk_188(0x0),
    mUnk_18C(true),
    mUnk_18D(false),
    mUnk_190(0x0),
    mUnk_194(this),
    mUnk_1B8(0x0),
    mUnk_1B9(0x1),
    mUnk_1BC(0x1000, 0x1) {
    this->mUnk_44 = 0xA3;
    SET_FLAG(this->mFlags, ActorFlag_13);
    this->mUnk_168.mUnk_04 = 0x13010;
    VecFx32_Init(FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), &this->mUnk_094);
}

// non-matching
bool ActorTearLight::vfunc_18(unk32 param1) {
    SET_FLAG(this->mFlags, ActorFlag_11);
    this->mItemId = ItemId_ForceGem_60;

    this->mUnk_204[0].mUnk_04 = 0xD0A3;
    this->mUnk_204[1].mUnk_04 = 0xD0A4;

    this->mUnk_204[0].mUnk_08 = 0x2;
    this->mUnk_204[1].mUnk_08 = 0x2;

    this->func_ov071_0215fd04();

    this->mUnk_18D = true;
    return true;
}

void ActorTearLight::vfunc_1C() {
    if (this->mUnk_5C.mParams[0] != 0x1) {
        return;
    }
    data_027e0cd8->mUnk_0C->func_ov000_02080a5c(&this->mUnk_1BC.mUnk_00);
}

void ActorTearLight::vfunc_20() {
    this->func_ov071_0215f92c();
    this->func_ov071_0215f824();

    this->mUnk_104.vfunc_34();

    if (this->mUnk_5C.mParams[0] != 0x1) {
        return;
    }

    VecFx32_Copy(&this->mPos, &this->mUnk_1BC.mUnk_00);
}

void ActorTearLight::vfunc_24() {
    if (this->mState == ActorUnkSZKUState_3) {
        this->func_ov071_0215f92c();
    }
    this->func_ov071_0215f824();

    if (this->mState == ActorUnkSZKUState_2) {
        if (this->mUnk_1B8 != 0x0) {
            this->IsTimerOut();
            if (this->mUnk_50 == 0x14) {
                this->func_ov071_0215fca4();
                VecFx32_Init(FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), &this->mVel);
                this->mUnk_1B8 = 0x0;
                SET_FLAG(this->mFlags, ActorFlag_Visible);
                return;
            }
        } else {
            this->func_ov071_0215f92c();
        }
    }

    if (this->mState == ActorUnkSZKUState_1) {
        this->mAngle = 0x0;
        this->func_ov071_0215f92c();
    }
    this->mUnk_104.vfunc_34();
}

void ActorTearLight::vfunc_2C(unk32 param1) {
    if (!this->func_01fff5d0(param1, 0x0)) {
        return;
    }
    Mat3p matrix;
    Mat3p_InitYRotation(&matrix, SIN((u16) this->mAngle), COS((u16) this->mAngle));

    VecFx32 vecC = this->mPos;
    vecC.y += FLOAT_TO_FX32(0.5f);

    this->mUnk_0A4.vfunc_10(&data_ov071_02164bd4, &matrix, &vecC);

    data_027e09b4->func_ov017_020c08c4(&vecC, 0x333, 0x333, 0x1F, 0x0, 0x1);
}

// non-matching
void ActorTearLight::vfunc_30(Actor_vfunc_30 *param1) {
    this->func_ov017_020bef88(param1, GET_PROFILE(ActorProfileTearLight), 0x1);
}

void ActorTearLight::func_ov071_0215f7f4(ActorState state) {
    this->mState  = state;
    this->mUnk_2C = data_ov000_020aecf8;
}

void ActorTearLight::func_ov071_0215f80c() {
    UNSET_FLAG(this->mFlags, ActorFlag_5);
    this->func_ov071_0215fca4();
}

void ActorTearLight::func_ov071_0215f824() {
    switch (this->mState) {
        case ActorUnkSZKUState_3:
        case ActorUnkSZKUState_8: {
            UnkStruct_027e0cec *data = data_027e0cec;
            for (ActorTearLight_204 *playerGet = this->mUnk_204; playerGet != this->mUnk_204 + ARRAY_LEN(this->mUnk_204);
                 ++playerGet) {
                data->func_ov000_020a0110(playerGet);
            }
            break;
        }
        default:
            if (this->func_ov017_020beeec(0x4000)) {
                VecFx32 vec = this->mPos;
                vec.y += FLOAT_TO_FX32(0.5f);
                UnkStruct_027e0cec *data = data_027e0cec;
                for (ActorTearLight_204 *playerGet = this->mUnk_204; playerGet != this->mUnk_204 + ARRAY_LEN(this->mUnk_204);
                     ++playerGet) {
                    data->func_ov000_020a0140(playerGet, &vec);
                }
                break;
            }
            UnkStruct_027e0cec *data = data_027e0cec;
            for (ActorTearLight_204 *playerGet = this->mUnk_204; playerGet != this->mUnk_204 + ARRAY_LEN(this->mUnk_204);
                 ++playerGet) {
                data->func_ov000_020a0110(playerGet);
            }
            break;
    }
}

// non-matching
void ActorTearLight::func_ov071_0215f92c() {
    if (this->mState != ActorUnkSZKUState_8 && !this->func_ov017_020beeec(0x4000)) {
        return;
    }

    // weird

    if (GET_FLAG(this->mFlags, ActorFlag_5)) {
        this->func_ov071_0215f80c();
    }
    VecFx32_Copy(&this->mPos, &this->mPrevPos);
    VecFx32_Add(&this->mPos, &this->mVel, &this->mPos);

    if ((this->mUnk_44 || this->mVel.y >= 0) || this->mState == ActorUnkSZKUState_4) {
        UnkStruct_ov071_0215f92c sp4;
        this->func_ov000_02098910(&sp4, 0x10);
        if (sp4.mUnk_04 & 1) {
            this->func_ov071_0215fc54();
        } else if (this->mUnk_46 & 1) {
            Vec2bCpp sp0;

            UnkStruct_027e0cd8_0C_Base *temp_r7 = data_027e0cd8->mUnk_0C;
            func_01ffedac(&sp0, &this->mPos);
            if (!temp_r7->func_ov000_02082008(&sp0)) {
                this->func_ov071_0215fc54();
                return;
            }
            VecFx32_Copy(&this->mPos, &this->mUnk_094);
            this->mUnk_094.x = func_ov000_02080068(sp0.x);
            this->mUnk_094.y = func_ov000_02080080(sp0.y);
            if (!this->mUnk_1B9) {
                data_027e09a8->func_ov000_02071b30(0x98BF, &this->mPos, 0x0);
            } else {
                data_027e09a8->func_ov000_02071b30(0x98BE, &this->mPos, 0x0);
                this->mUnk_1B9 = true;
            }
            fx32 temp_r1 = this->mVel.y;
            bool temp_gt = temp_r1 > -0x800;
            this->mVel.y = FLOAT_TO_FX32(0.0f);
            if (!temp_gt) {
                VecFx32_Init(FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.25f), FLOAT_TO_FX32(0.0f), &this->mVel);
            } else if (temp_r1 >= 0xFFFFFE66) {
                this->func_ov071_0215fd04();
            } else {
                fx32 temp_r1_2 = (0 - temp_r1) * 3;
                VecFx32_Init(FLOAT_TO_FX32(0.0f), (temp_r1_2 + ((u32) (temp_r1_2 >> 1) >> 0x1E)) >> 2, FLOAT_TO_FX32(0.0f),
                             &this->mVel);
            }
        }
        if (this->mState == ActorUnkSZKUState_4 && this->mUnk_46 & 0x9F) {
            this->func_ov071_0215f80c();
        }
    }

    this->func_ov000_020989e0();
    if (!(this->mUnk_168.mUnk_08 & 0x3FFFF)) {
        return;
    }
    switch (this->mUnk_168.mUnk_1C) {
        case 4:
            if (!data_027e0d38->func_ov031_020d9c04(0x1, 0x0, 0x1)) {
                break;
            }
            this->func_ov071_0215fdd4();
            break;
        case 16:
            if (this->mUnk_168.mUnk_0C.type_index == 0x100 && this->mUnk_168.mUnk_0C.unk_id == 0) {
                this->func_ov071_0215fd80();
                break;
            }
            break;
        default:
            break;
    }
}

void ActorTearLight::func_ov071_0215fc0c() {
    UnkStruct_027e0cec *data = data_027e0cec;
    for (ActorTearLight_204 *playerGet = this->mUnk_204; playerGet != this->mUnk_204 + ARRAY_LEN(this->mUnk_204);
         ++playerGet) {
        data->func_ov000_020a0110(playerGet);
    }
    this->func_ov071_0215fd80();
}

// non-matching
void ActorTearLight::func_ov071_0215fc54() {
    this->func_ov071_0215f7f4(ActorUnkSZKUState_0);

    this->mUnk_18D = false;

    this->func_ov017_020bfa50(&this->mUnk_094, 0x14);

    this->mUnk_4A[0] = 0x0;
    this->mUnk_44    = 0x1;

    this->mUnk_160 = data_ov071_02164cd8;
}

// non-matching
void ActorTearLight::func_ov071_0215fca4() {
    this->func_ov071_0215f7f4(ActorUnkSZKUState_1);

    this->mUnk_52 = 0xFFFF;
    this->mUnk_50 = 0x0000;

    VecFx32_Init(FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.25f), FLOAT_TO_FX32(0.0f), &this->mVel);

    this->mUnk_4A[0] = 0x0;
    this->mUnk_44    = 0xA3;

    this->mUnk_160 = data_ov071_02164ce0;
    this->mUnk_1B9 = 0x0;
}

// non-matching
void ActorTearLight::func_ov071_0215fd04() {
    this->func_ov071_0215f7f4(ActorUnkSZKUState_2);

    bool temp_r0 = this->mUnk_5C.mUnk_0F;
    bool var_z   = false;
    if (temp_r0) {
        var_z = !this->mUnk_18C;
    }
    this->mUnk_4A[0] = 0x1;
    if (!var_z) {
        var_z = !this->mUnk_18D;
    }

    this->mUnk_52 = 0xFFFF;
    this->mUnk_50 = 0x0000;
    VecFx32_Init(FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), &this->mVel);
    this->mUnk_44 = 0;
    if (var_z) {
        this->mUnk_18C = false;
    }
    this->mUnk_18D = true;
    this->mUnk_160 = data_ov071_02164ce8;
}

// non-matching
void ActorTearLight::func_ov071_0215fd80() {
    this->func_ov071_0215f7f4(ActorUnkSZKUState_3);

    this->mUnk_52 = 0xFFFF;
    this->mUnk_50 = 0x0000;
    VecFx32_Init(FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), &this->mVel);

    this->mUnk_4A[0] = 0x0;
    this->mUnk_44    = 0x0;

    this->mUnk_160 = data_ov071_02164cf0;
}

// non-matching
void ActorTearLight::func_ov071_0215fdd4() {
    this->func_ov071_0215f7f4(ActorUnkSZKUState_4);

    this->mUnk_52 = 0xFFFF;
    this->mUnk_50 = 0x0000;

    this->mUnk_4A[0] = 0x0;
    VecFx32_Init(FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), &this->mVel);

    this->vfunc_40();

    this->mUnk_44 = (s16) this->mUnk_44 & ~0x20;
    this->mUnk_168.func_ov000_02097bec();

    this->mUnk_44 = 0x9F;
    this->mUnk_46 = 0x00;

    this->mUnk_160 = data_ov071_02164cf8;
}

// non-matching
void ActorTearLight::func_ov071_0215fe54() {
    this->func_ov071_0215f7f4(ActorUnkSZKUState_6);
    this->mUnk_2C = 0x0;
    VecFx32_Init(FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), &this->mVel);

    this->mUnk_160 = data_ov071_02164d00;
}

// non-matching
void ActorTearLight::func_ov071_0215fe94() {
    this->func_ov071_0215f7f4(ActorUnkSZKUState_7);
    this->mUnk_2C = 0x0;
    VecFx32_Init(FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), &this->mVel);

    this->mUnk_160 = data_ov071_02164d08;
}

void ActorTearLight::func_ov071_0215fed4() {
    this->IsTimerOut();
    this->func_ov000_02098838();
    this->mUnk_3C = &this->mUnk_168;
}

void ActorTearLight::func_ov071_0215ff08() {
    this->IsTimerOut();
    this->mAngle += 0x222; // TODO DEG_ANGLE
    this->mUnk_3C = &this->mUnk_168;
}

void ActorTearLight::func_ov071_0215ff3c() {
    this->IsTimerOut();

    if (!data_027e09b8->func_01ffd420()) {
        if (data_027e0d34->TryItemGive(this->mItemId)) {
            this->func_ov000_02098a88(0, 1);
            this->Kill();
            this->func_ov000_020984f0();
        }
    }
}

void ActorTearLight::func_ov071_0215ffb8() {}

void ActorTearLight::func_ov071_0215ffbc() {
    UnkActor_ov071_0215ffbc *actor = (UnkActor_ov071_0215ffbc *) gpActorManager->func_01fff3b4(this->mUnk_190);
    if (actor == NULL) {
        this->func_ov071_0215fca4();
        return;
    }
    func_01ffb714(&actor->mUnk_E8, &this->mPos, &this->mVel);
}

ActorTearLight_194::ActorTearLight_194(ActorTearLight *param1) :
    Actor_C4(param1) {
    this->mUnk_20 = param1;
    this->mUnk_04 = 0x1;
}

bool ActorTearLight_194::vfunc_00(ActorRef ref, unk32 param2) {
    if (param2 != 0x0) {
        ActorTearLight *actor = this->GetActorPtr<ActorTearLight>();
        actor->mUnk_190       = ref;
        actor->func_ov071_0215fe54();
    }
    return this->Actor_C4::vfunc_00(ref, param2);
}

bool ActorTearLight_194::vfunc_04() {
    this->GetActorPtr<ActorTearLight>()->func_ov071_0215fe94();
    return this->Actor_C4::vfunc_04();
}

void ActorTearLight_194::vfunc_0C(VecFx32 *param1) {
    this->GetActorPtr<ActorTearLight>()->func_ov071_0215fca4();
    return this->Actor_C4::vfunc_0C(param1);
}

void ActorTearLight_194::vfunc_08() {
    this->GetActorPtr<ActorTearLight>()->func_ov071_0215fc0c();
    return this->Actor_C4::vfunc_08();
}

ActorTearLight_204::ActorTearLight_204() :
    UnkStruct_PlayerGet_ec(NULL),
    mUnk_04(-0x1),
    mUnk_08(0x0) {}

ActorTearLight_104::~ActorTearLight_104() {}
