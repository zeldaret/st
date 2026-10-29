#include "Actor/ActorKenzo.hpp"

#include "Actor/ActorUnkZLSL_ZSRS.hpp"
#include "CommonFuncs.hpp"
#include "System/Random.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "mem.h"

struct UnkStruct_ov058_0215330 {
    /* 00 */ unk32 mUnk_00[0x4];
};

extern unk32 data_ov000_020aed08;

extern unk32 data_ov058_02153300[];
extern char data_ov058_02153308[]; // = "crft"
extern char data_ov058_02153318[]; // = "hammer"
extern Vec2p data_ov058_02153328;  // this is not a Vec2p
extern UnkStruct_ov058_0215330 data_ov058_02153330;

static ActorUnkZLSL_AnimationTag data_ov058_02154f90[] = {
    {0x0, "wait"}, {0x1, "walk"}, {0x2, "talk"}, {0x3, "action"}, {0x4, "action_wait"},
};

static PTMF<ActorKenzo> data_ov058_02154f38[ActorKenzoState_Max] = {
    &ActorKenzo::vfunc_0E0, // ActorKenzoState_0
    &ActorKenzo::vfunc_0E4, // ActorKenzoState_1
    &ActorKenzo::vfunc_0E8, // ActorKenzoState_2
    &ActorKenzo::vfunc_0EC, // ActorKenzoState_3
    &ActorKenzo::vfunc_0F0, // ActorKenzoState_4
    &ActorKenzo::vfunc_0F4, // ActorKenzoState_5
    &ActorKenzo::vfunc_0F8, // ActorKenzoState_6
    &ActorKenzo::vfunc_0FC, // ActorKenzoState_7
    &ActorKenzo::vfunc_100, // ActorKenzoState_8
    &ActorKenzo::vfunc_11C, // ActorKenzoState_9
    &ActorKenzo::vfunc_120, // ActorKenzoState_10
};

static PTMF<ActorKenzo> data_ov058_02154ee0[ActorKenzoState_Max] = {
    &ActorKenzo::vfunc_0BC, // ActorKenzoState_0
    &ActorKenzo::vfunc_0C0, // ActorKenzoState_1
    &ActorKenzo::vfunc_0C4, // ActorKenzoState_2
    &ActorKenzo::vfunc_0C8, // ActorKenzoState_3
    &ActorKenzo::vfunc_0CC, // ActorKenzoState_4
    &ActorKenzo::vfunc_0D0, // ActorKenzoState_5
    &ActorKenzo::vfunc_0D4, // ActorKenzoState_6
    &ActorKenzo::vfunc_0D8, // ActorKenzoState_7
    &ActorKenzo::vfunc_0DC, // ActorKenzoState_8
    &ActorKenzo::vfunc_114, // ActorKenzoState_9
    &ActorKenzo::vfunc_118, // ActorKenzoState_10
};

DECL_PROFILE(ActorProfileKenzo);

Actor *ActorProfileKenzo::Create() {
    return new(HeapIndex_2) ActorKenzo();
}

ActorProfileKenzo::ActorProfileKenzo() :
    ActorProfile_Derived1(ActorId_CRFT) {
    this->mUnk_04.Init(FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.7101f), FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.6101f));
    this->mUnk_1C = 0x1400;
    this->mUnk_18 = 0x1;
    this->mUnk_1A = 0x2000;
    this->mUnk_1E |= 0x1;
}

ActorKenzo::ActorKenzo() :
    ActorKenzo_Base(&mUnk_24C, data_ov000_020b539c_eur.mUnk_30->vfunc_04()),
    mUnk_24C(G3d_GetUnkPtr(data_ov000_020b539c_eur.mUnk_30->vfunc_04()->mUnk_50, data_ov058_02153308)),
    mUnk_2BC(G3d_GetUnkPtr(data_ov000_020b539c_eur.mUnk_30->vfunc_04()->mUnk_50, data_ov058_02153318)),
    mUnk_31C(-0x1),
    mUnk_350(0, 0),
    mUnk_354(0x6) {
    this->mUnk_0B8 = &data_ov058_02154f90[0];

    if (this->func_ov058_02148710()) {
        UnkStruct_ov058_0215330 data = data_ov058_02153330;
        this->mUnk_31C               = this->mUnk_24C.func_ov000_02057f18(&data);
    }

    memset(&this->mUnk_320, 0, sizeof(this->mUnk_320));
}

bool ActorKenzo::Init(unk32 param1) {
    this->Actor_Derived1::Init(param1);

    this->mUnk_0E4 = &ActorKenzo::func_ov058_02148b04;
    this->mUnk_15C = data_ov058_02153300;
    this->mUnk_0DC = 0x4000;
}

void ActorKenzo::SetState(ActorState state) {
    this->mUnk_4A[0] = 0x5;
    this->mState     = state;

    this->vfunc_104();

    CALL_PTMF(PTMF<ActorKenzo>, data_ov058_02154ee0[this->mState]);
}

void ActorKenzo::vfunc_54(unk32 param1) {
    this->ActorCharacter::vfunc_54(param1);

    bool val = false;
    if (this->func_ov058_0214885c()) {
        val = true;
    }
    if (!val) {
        return;
    }

    if (this->mUnk_5C.mParams[2] != 0x3) {
        return;
    }

    ActorUnk_vfunc_B0 stack = ActorUnk_vfunc_B0();
    stack.mpActor           = this;

    stack.mUnk_0C = this->mUnk_5C.mUnk_20;
    stack.mUnk_14 = 0x0;
    stack.mUnk_18 = -0x1;
    stack.mUnk_1C = -0x1;
    stack.mUnk_20 = false;
    stack.mUnk_21 = false;
    stack.mUnk_32 = 0x1;

    this->GetOffsetPos(&stack.mUnk_34);

    data_027e09b8->func_ov000_02073470(&stack, 0x0);
}

void ActorKenzo::Setup() {
    if (!GET_FLAG(this->mFlags, ActorFlag_Alive)) {
        return;
    }

    if (GET_FLAG(data_027e09b8->mAdventureFlags, AdventureFlag_KenzoBoardsTrainToBuildFence) &&
        this->Actor_Derived1::func_ov000_020a8db0()) {
        if (this->mUnk_5C.mUnk_18[0] == 0x3 && this->mUnk_5C.mUnk_1A[0] == 0x1E4 && !this->func_ov058_0214885c()) {
            func_ov040_0212bab4(0x1E4);

            UNSET_FLAG(this->mFlags, ActorFlag_Alive);
        }
    }

    this->Actor_Derived1::Setup();
}

// non-matching (regalloc)
void ActorKenzo::Update() {
    if (!this->vfunc_108(0x6800)) {
        return;
    }

    if ((u16) (this->mUnk_5C.mParams[2] + 0xFFFF) <= 0x2 && this->Actor_Derived1::func_ov000_020a8dd0()) {
        UNSET_FLAG(this->mFlags, ActorFlag_Alive);
    }

    this->vfunc_60();

    CALL_PTMF(PTMF<ActorKenzo>, data_ov058_02154f38[this->mState]);
    if (!GET_FLAG(this->mFlags, ActorFlag_Visible)) {
        return;
    }

    this->Actor::func_ov000_02098838();

    VecFx32_Copy(&this->mPos, &this->mPrevPos);
    VecFx32_Add(&this->mPos, &this->mVel, &this->mPos);

    this->vfunc_A4();
    this->mUnk_094.mUnk_0C->vfunc_34();
    this->vfunc_10C();
}

bool ActorKenzo::vfunc_5C() {
    bool retValue = this->Actor_Derived1::vfunc_5C();

    if (retValue && (this->mUnk_5C.mParams[2] == 0x1 ||
                     (this->mUnk_5C.mParams[2] == 0x0 && this->Actor_Derived1::func_ov000_020a8dd0()))) {
        UNSET_FLAG(this->mFlags, ActorFlag_Alive);
    }

    return retValue;
}

void ActorKenzo::vfunc_0BC() {
    if (this->func_ov058_02148710()) {
        this->SetState(ActorKenzoState_9);
        return;
    }

    this->ActorCharacter::vfunc_0BC();
}

// non-matching (str order for 350 and 352)
void ActorKenzo::vfunc_0CC() {
    if (this->func_ov058_02148710()) {
        this->mVel.x = FX_F32_TO_FX32(0.0f);
        this->mVel.z = FX_F32_TO_FX32(0.0f);

        this->SetState(ActorKenzoState_10);

        this->mUnk_350.SetAlt(0, 0);
        this->mUnk_0B0 = this->GetUnk0B0() & 0xFFEF;
        return;
    }

    this->ActorCharacter::vfunc_0CC();
}

void ActorKenzo::vfunc_0D0() {
    this->ActorCharacter::vfunc_0D0();

    if (!this->func_ov058_02148710()) {
        return;
    }

    this->vfunc_98(0x4);
}

void ActorKenzo::vfunc_114() {
    this->mUnk_0B0 |= 0x10;
    this->vfunc_98(0x3);

    this->mUnk_350.Set(0, gRandom.Next32(4) + 3);
}

void ActorKenzo::vfunc_118() {
    this->mUnk_0B0 &= ~0x10;
    this->vfunc_98(0x4);

    this->mUnk_350.Set(0, gRandom.Next32(3) + 1);
}

void ActorKenzo::vfunc_11C() {
    this->mUnk_0B0 |= 0x10;
    if (this->mUnk_094.mUnk_0C->vfunc_28()->func_02015244()) {
        this->mUnk_350.Update();

        if (this->mUnk_350.GetMax() != 0x0 && this->mUnk_350.value >= this->mUnk_350.max) {
            this->SetState(ActorKenzoState_10);
        }
    }

    this->vfunc_124();
}

void ActorKenzo::vfunc_120() {
    if (this->mUnk_094.mUnk_0C->vfunc_28()->func_02015244()) {
        this->mUnk_350.Update();

        if (this->mUnk_350.GetMax() != 0x0 && this->mUnk_350.value >= this->mUnk_350.max) {
            this->SetState(ActorKenzoState_9);
        }
    }
}

bool ActorKenzo::func_ov058_02148710() {
    return this->mUnk_5C.mParams[1] == 0x1;
}

void ActorKenzo::vfunc_124() {
    Vec2p data = data_ov058_02153328;

    this->vfunc_128(&data, 0x1);
}

// non-matching first parameter is not a Vec2p
void ActorKenzo::vfunc_128(Vec2p *param1, unk32 param2) {
    if (param1 == NULL) {
        return;
    }

    for (unk32 index = 0; index < param2; index++) {
        if (this->mUnk_094.mUnk_0C->vfunc_28()->func_02015080(param1->coords[index]) != 0) {
            this->func_ov058_021487c8(param1->coords[index], &this->mPos);
            break;
        }
    }
}

void ActorKenzo::func_ov058_021487c8(unk32 param1, VecFx32 *param2) {
    data_027e09a8->func_ov000_02071b30(param1, param2, 0x0);
}

unk32 ActorKenzo::vfunc_7C(unk32 param1) {
#pragma unused(param1)
    return 0x1;
}

bool ActorKenzo::vfunc_9C() {
    PassengerManager *instance = gpPassengerManager;
    instance->TryBoardTrain(this->GetActorId(), SceneIndex_f_bridge2, 0xFF);
    return true;
}

unk32 ActorKenzo::vfunc_A0() {
    if (this->func_ov058_0214885c()) {
        PassengerManager *instance = gpPassengerManager;

        this->mUnk_354 = this->func_ov058_021488d8();

        instance->TryResetAtDestination();
    }

    return 0x1;
}

bool ActorKenzo::func_ov058_0214885c() {
    PassengerManager *instance = gpPassengerManager;

    if (instance->CanCompleteTrip()) {
        instance = instance->GetInstance();

        ActorId passagerId = instance->mPassenger.mActorId;
        if (passagerId == this->GetActorId() || passagerId == ActorId_CRFP) {
            if (data_027e09a4->mUnk_00.sceneIndex == instance->mPassenger.mSceneIndex) {
                return true;
            }
        }
    }

    return false;
}

s16 ActorKenzo::func_ov058_021488d8() {
    s16 var = 5 - gpPassengerManager->GetHappinessCond();

    if (var >= 0x5) {
        return 0x4;
    }

    return var;
}

// non-matching
unk32 ActorKenzo::vfunc_80(unk32 param1, unk32 param2) {
    unk32 params = (u8) (param1 + 1) | (param2 << 8);
    if (params != 0x301) {
        if (params == 0x502) {
            if (this->mUnk_354 == 6) {
                this->mUnk_354 = this->func_ov058_021488d8();
            }
            return this->mUnk_354;
        }

    } else {
        PassengerManager *instance = gpPassengerManager;
        if (instance->CanCompleteTrip()) {
            return 0x1;
        }

        unk32 retVal;
        if (instance->IsCaughtByPirates()) {
            retVal = 2;
        } else {
            retVal = 0;
        }
        return retVal;
    }
    return 0x0;
}

bool ActorKenzo::vfunc_48(unk32 param1) {
    bool val = true;
    if (this->func_ov058_02148710() && data_027e09a4->mUnk_00.sceneIndex == SceneIndex_f_bridge2) {
        val = false;
    }

    if (val) {
        return this->Actor::vfunc_48(param1);
    }

    VecFx32 vec = *this->Actor::func_ov000_0209853c(param1);
    func_01ffb714(&vec, &this->mPos, &vec);

    fx32 y = vec.y;
    if (y < FX_F32_TO_FX32(0.0f)) {
        y = -y;
    }
    if (y < data_ov000_020aed08 && func_01ff9258(vec.x, vec.z) < 0x299A) {
        return true;
    }

    return false;
}

void ActorKenzo::vfunc_A4() {
    this->Actor_Derived1::vfunc_A4();

    if (!(this->mUnk_0B0 & 0x10)) {
        return;
    }

    func_01ff930c(&this->mUnk_0DA, 0x0, 0x16C);
}

void ActorKenzo::vfunc_2C(unk32 param1) {
    if (!this->Actor::func_01fff5d0(param1, 0x0)) {
        return;
    }

    if (!GET_FLAG(this->mFlags, ActorFlag_Visible)) {
        return;
    }

    this->vfunc_B8();
    this->mUnk_24C.func_01ffc6d4(this->mAngle, &this->mPos);

    if (this->mUnk_31C < 0x0) {
        return;
    }

    this->mUnk_2BC.func_ov000_02058038(&this->mUnk_320);
}

void ActorKenzo::func_ov058_02148b04(Actor *param1, G3d_RenderState *param2) {
    ActorKenzo *thiz = (ActorKenzo *) param1;

    if (thiz->mUnk_31C < 0) {
        return;
    }

    G3d_RenderObject *renderObj = param2->renderObj;

    s32 val = param2->flag & 0x10 ? param2->currentBoneMtxId : -1;
    if (val != thiz->mUnk_31C) {
        return;
    }

    if (renderObj->mUnk_25 == 0x2) {
        param2->callbackSegment[6] = 0x3;
        renderObj->mUnk_25         = 0x3;
        return;
    }

    if (renderObj->mUnk_25 != 0x3) {
        return;
    }

    G3d_GetCurrentMtx(&thiz->mUnk_320, NULL);

    param2->callbackSegment[6] = 0x2;
    renderObj->mUnk_25         = 0x2;
}
