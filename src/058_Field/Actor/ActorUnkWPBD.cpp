#include "Actor/ActorUnkWPBD.hpp"

#include "CommonFuncs.hpp"
#include "System/Random.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"

extern unk32 data_027e0d4c;

static VecFx32 data_ov058_02155300 = {.x = 0x2000, .y = -0x1, .z = 0x2000};

static PTMF<ActorUnkWPBD> data_ov058_0215534c[ActorUnkWPBDState_Max] = {
    &ActorUnkWPBD::func_ov058_0214b620, // ActorUnkWPBDState_0
    &ActorUnkWPBD::func_ov058_0214b8dc, // ActorUnkWPBDState_1
    &ActorUnkWPBD::func_ov058_0214bfa4, // ActorUnkWPBDState_2
    &ActorUnkWPBD::func_ov058_0214c0b4, // ActorUnkWPBDState_3
    &ActorUnkWPBD::func_ov058_0214c394, // ActorUnkWPBDState_4
};
static PTMF<ActorUnkWPBD> data_ov058_02155324[ActorUnkWPBDState_Max] = {
    &ActorUnkWPBD::func_ov058_0214b61c, // ActorUnkWPBDState_0
    &ActorUnkWPBD::func_ov058_0214b820, // ActorUnkWPBDState_1
    &ActorUnkWPBD::func_ov058_0214bd98, // ActorUnkWPBDState_2
    &ActorUnkWPBD::func_ov058_0214c078, // ActorUnkWPBDState_3
    &ActorUnkWPBD::func_ov058_0214c334, // ActorUnkWPBDState_4
};
static ActorUnkZLSL_AnimationTag data_ov058_02155374[2] = {
    {0, "wpbd_wait1"},
    {1, "wpbd_wait2"},
};

DECL_PROFILE(ActorProfileUnkWPBD);

Actor *ActorProfileUnkWPBD::Create() {
    return new(HeapIndex_2) ActorUnkWPBD();
}

ActorProfileUnkWPBD::ActorProfileUnkWPBD() :
    ActorProfile_Derived1(ActorId_WPBD) {
    this->mUnk_04.Init(FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(-0.5002f), FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.5f));
}

bool ActorUnkWPBD_32C::vfunc_08(const UnkStruct_ov031_020f3310 *param1, unk32 param2) {
    unk32 var = param1->mUnk_04->mUnk_24[param1->mUnk_00->mUnk_06] & 0x1F;
    if (var == 0x2 || var == 0x0) {
        return false;
    }

    bool ret = true;
    if (this->UnkStruct_ov031_Items_00::vfunc_08(param1, param2)) {
        this->mUnk_0E = 0xF;
        this->mUnk_0C = 0x0;
    } else {
        ret = false;
    }

    return ret;
}

ActorUnkWPBD_214::ActorUnkWPBD_214(ActorUnkWPBD *param1) :
    Actor_C4(param1) {
    this->mUnk_20 = param1;
    this->mUnk_04 = 0x2;
}

bool ActorUnkWPBD_214::vfunc_00(RefStruct ref, unk32 param2) {
    this->GetActorPtr<ActorUnkWPBD>()->func_ov058_0214cb64();
    return this->Actor_C4::vfunc_00(ref, param2);
}

ActorUnkWPBD::ActorUnkWPBD() :
    mUnk_094(G3d_GetModelPtr(GET_PROFILE(ActorProfileUnkWPBD)->vfunc_04()->mUnk_50)),
    mUnk_100(&mUnk_094, GET_PROFILE(ActorProfileUnkWPBD)->vfunc_04()),
    mUnk_1EC(0x0),
    mUnk_1EE(0x0),
    mUnk_1F0(0x0),
    mUnk_1F2(0x0),
    mUnk_214(this),
    mUnk_238(0x0),
    mUnk_23C(0x0),
    mUnk_240(0x1000),
    mUnk_244(0x0),
    mUnk_248(0x0),
    mUnk_24C(0x0),
    mUnk_250(0x0),
    mUnk_254(0x0),
    mUnk_258(0x0),
    mUnk_25C(FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f)),
    mUnk_268(FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f)),
    mUnk_274(FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f)),
    mUnk_280(0x0),
    mUnk_284(0x0),
    mUnk_288(0x0),
    mUnk_28A(0x0),
    mUnk_28C(FX_F32_TO_FX32(0.0f)),
    mUnk_290(0x0),
    mUnk_292(0x0),
    mUnk_294(false),
    mUnk_295(false),
    mUnk_296(false),
    mUnk_298(0x1),
    mUnk_29C(0x1),
    mUnk_2A0(0x1),
    mUnk_2A4(0x1),
    mUnk_2CC(this),
    mUnk_30C(0),
    mUnk_310(0),
    mUnk_314(0x0),
    mUnk_318(0x0),
    mUnk_31C(0x0),
    mUnk_320(0x0),
    mUnk_324(0x0),
    mUnk_328(0x0),
    mUnk_32C(this) {
    this->Actor::func_ov000_0209862c(0x0);

    SET_FLAGS(this->mFlags, ActorFlag_6, ActorFlag_9);
    this->mUnk_40 = &this->mUnk_214;
    MtxFx33_InitIdentity(&this->mUnk_2A8);
}

bool ActorUnkWPBD::Init(unk32 param1) {
#pragma unused(param1)
    if (this->Actor::func_ov000_02098a60(0x1)) {
        return false;
    }

    this->mUnk_094.func_ov000_02057c38(0x6, 0x2);
    this->mUnk_094.func_ov000_0209a7b8(this, &ActorUnkWPBD::func_ov058_0214d078);

    this->SetState(ActorUnkWPBDState_0);

    this->mUnk_100.vfunc_1C(data_ov058_02155374[0], 0x1000, 0x19A, 0x0);

    u8 sp18 = this->mUnk_5C.mUnk_0E;
    this->mUnk_2F4.func_ov024_020d6680(&this->mPos, &sp18);
    this->mUnk_2F4.mUnk_00->mTable.GetPtr(this->mUnk_2F4.mUnk_04)->vfunc_0C(&this->mPos);

    this->mUnk_268.CopyOut(&this->mPos);

    this->func_ov058_0214cfa4(0x1000);
    this->mUnk_214.mUnk_1C = 0x1;

    if (this->func_ov058_0214cab8()) {
        bool hasSong = true;
        if (!GET_FLAG2(gpMiscAdvManager->mSongs, 2)) {
            hasSong = false;
        }

        if (!hasSong) {
            this->func_ov058_0214cb64();
            this->mUnk_284 = 0xB8;
            this->mUnk_280 = 0xB8;
            this->func_ov058_0214cbe8();
        } else {
            return false;
        }
    }

    return true;
}

void ActorUnkWPBD::Setup() {
    if (this->func_ov058_0214cab8()) {
        ActorLokomo *carben = (ActorLokomo *) func_02016fbc(ActorId_Carben, &this->mPos, 0x0);
        if (carben != NULL) {
            carben->func_ov058_02147d20();
        }
    }

    if (data_027e09a4->mUnk_00.sceneIndex == SceneIndex_f_forest3) {
        return;
    }

    if (data_027e0d4c != 0x0) {
        return;
    }

    ActorParams params;
    RefStruct ref;

    params.mUnk_28.Reset();
    params.func_ov000_020975f8();
    params.func_ov000_020975f8();

    Actor::func_ov000_020973f4(&ref, &data_ov000_020b539c_eur, ActorId_WPCH, &params, 0x0);
}

void ActorUnkWPBD::SetState(ActorState state) {
    this->mUnk_2C  = 0x0;
    this->mUnk_28A = 0x0;
    this->mState   = state;
    CALL_PTMF(data_ov058_02155324[this->mState]);
}

// non-matching
void ActorUnkWPBD::vfunc_24() {
    if (data_ov058_02155300.y < FX_F32_TO_FX32(0.0f) || data_027e09b8->func_ov000_020732ec(data_ov058_02155300.y)) {
        this->Update();
        return;
    }

    if (!data_027e09b8->func_ov000_020732dc(0x2)) {
        return;
    }

    this->Update();
}

// non-matching
void ActorUnkWPBD::Update() {
    this->mUnk_3C = &this->mUnk_1F4;
    this->Actor::func_ov000_020989e0();

    CALL_PTMF(data_ov058_0215534c[this->mState]);
    this->Actor::func_ov000_02098838();

    this->mUnk_274.CopyOut(&this->mUnk_268);
    VecFx32_Copy(&this->mPos, &this->mPrevPos);
    VecFx32_Add(&this->mUnk_268.vec, &this->mVel, &this->mUnk_268.vec);

    // VecFx32_Init(this->mUnk_268.vec.x, this->mUnk_268.vec.y - this->mUnk_28C, this->mUnk_268.vec.z, &this->mPos);
    this->mPos.x = this->mUnk_268.vec.x;
    this->mPos.z = this->mUnk_268.vec.z;
    this->mPos.y = this->mUnk_268.vec.y - this->mUnk_28C;

    this->func_ov058_0214c92c();
    this->func_ov058_0214ca40();

    UnkStruct_ov031_020e5d18_00 spC;
    spC.mUnk_00                         = NULL;
    UnkStruct_ov031_020e5d18_00 *pActor = &spC;
    func_01ffe6c4(&pActor->mUnk_00, this->mRef, &this->mUnk_268.vec, &this->mUnk_274.vec, (s16) this->mUnk_44,
                  &this->mUnk_268.vec, &this->mUnk_32C);
    ((Actor *) pActor)->func_ov000_0207e294(this->mUnk_30);

    this->mUnk_100.vfunc_34();
    this->func_ov058_0214cacc();

    if (this->func_ov058_0214cab8() && !this->mUnk_296) {
        if (this->mState != ActorUnkWPBDState_2) {
            bool hasSong = false;
            if (GET_FLAG2(gpMiscAdvManager->mSongs, 2)) {
                hasSong = true;
            }

            if (hasSong) {
                this->SetState(ActorUnkWPBDState_2);
            }
        }

        this->func_ov058_0214ccd0();
        this->func_ov058_0214cd94();
    }

    data_027e09a8->func_ov000_02071d34(&this->mRef, 0x9912, &this->mPos, 0x0);
    if (this->mUnk_100.vfunc_30() != 0x1) {
        return;
    }

    if (this->mUnk_100.vfunc_10()->mUnk_04.func_02015080(0x7000) == 0x0 &&
        this->mUnk_100.vfunc_10()->mUnk_04.func_02015080(0x12000) == 0x0 &&
        this->mUnk_100.vfunc_10()->mUnk_04.func_02015080(0x1D000) == 0x0 &&
        this->mUnk_100.vfunc_10()->mUnk_04.func_02015080(0x28000) == 0x0) {
        return;
    }

    data_027e09a8->func_ov000_02071b30(0x9913, &this->mPos, 0x0);
}

// non-matching
void ActorUnkWPBD::vfunc_2C(unk32 param1) {
    if (!this->func_ov058_0214d2c4()) {
        this->mUnk_295 = false;
        return;
    }

    this->mUnk_295 = true;
}

void ActorUnkWPBD::func_ov058_0214b61c() {}

void ActorUnkWPBD::func_ov058_0214b620() {
    this->mUnk_2F4.func_ov024_020d6d80(&this->mUnk_268.vec, &this->mVel);
    if (this->mUnk_2F4.mUnk_08 & 0x2) {
        this->SetState(ActorUnkWPBDState_1);
    }

    VecFx32 sp18;
    this->mUnk_2F4.mUnk_00->mTable.GetPtr(this->mUnk_2F4.mUnk_04)->vfunc_0C(&sp18);

    if (!this->mUnk_294) {
        if (this->mUnk_100.vfunc_30() == 0x0 && func_01ff916c(&this->mUnk_280, this->mUnk_284, 0x1)) {
            this->mUnk_284 = gRandom.Next32(42) + 0x133;
            this->mUnk_100.vfunc_1C(data_ov058_02155374[1], 0x1000, 0x19A, 0x0);
        }

        if (this->mUnk_100.vfunc_30() == 0x1 && func_01ff916c(&this->mUnk_280, this->mUnk_284, 0x4)) {
            this->mUnk_284 = gRandom.Next32(42) + 0xB8;
            this->mUnk_100.vfunc_1C(data_ov058_02155374[0], 0x1000, 0x19A, 0x0);
        }
    }

    this->func_ov058_0214bbcc(&sp18, this->mUnk_280);
}

// non-matching
void ActorUnkWPBD::func_ov058_0214b820() {}
// non-matching
void ActorUnkWPBD::func_ov058_0214b8dc() {}
// non-matching
void ActorUnkWPBD::func_ov058_0214bbcc(VecFx32 *param1, fx32 param2) {}
// non-matching
void ActorUnkWPBD::func_ov058_0214bd98() {}
// non-matching
void ActorUnkWPBD::func_ov058_0214bfa4() {}

void ActorUnkWPBD::func_ov058_0214c078() {
    this->mUnk_25C.CopyOut(this->func_ov000_0209853c(0x0));
    this->mTimer.Set(0, 100);
}

// non-matching
void ActorUnkWPBD::func_ov058_0214c0b4() {
    this->mTimer.Update();
    if (this->mTimer.HasReachedMaxU() ||
        func_01ff9258(this->mPos.x - this->mUnk_25C.vec.x, this->mPos.z - this->mUnk_25C.vec.z) < 0x1000) {
        this->SetState(ActorUnkWPBDState_4);
    }

    if (!this->mUnk_294) {
        if (this->mUnk_100.vfunc_30() == 0x0 && func_01ff916c(&this->mUnk_280, this->mUnk_284, 0x1)) {
            this->mUnk_284 = gRandom.Next32(42) + 0x133;
            this->mUnk_100.vfunc_1C(data_ov058_02155374[1], 0x1000, 0x19A, 0x0);
        }

        if (this->mUnk_100.vfunc_30() == 0x1 && func_01ff916c(&this->mUnk_280, this->mUnk_284, 0x4)) {
            this->mUnk_284 = gRandom.Next32(42) + 0xB8;
            this->mUnk_100.vfunc_1C(data_ov058_02155374[0], 0x1000, 0x19A, 0x0);
        }
    }

    VecFx32Cpp sp18;
    sp18.CopyOut(&this->mUnk_25C);
    sp18.vec.y = this->Actor::func_ov000_0209853c(0x0)->y + 0x3800;

    this->func_ov058_0214bbcc(&sp18.vec, this->mUnk_280);

    if (!this->mUnk_294) {
        return;
    }

    this->mUnk_2F4.mUnk_04 = this->mUnk_2F4.mUnk_00->func_ov000_02059da4(&this->mUnk_25C.vec);

    VecFx32_Copy(&this->mPos, &this->mUnk_2F4.mUnk_0C);
    this->SetState(ActorUnkWPBDState_0);
}

void ActorUnkWPBD::func_ov058_0214c334() {
    if (this->mUnk_294) {
        VecFx32_Copy(&this->mPos, &this->mUnk_2F4.mUnk_0C);
        this->SetState(ActorUnkWPBDState_0);
        return;
    }

    this->mTimer.Set(0, 600);
    this->mUnk_288 = FX_Atan2Idx(this->mUnk_238, this->mUnk_240);
}

// non-matching
void ActorUnkWPBD::func_ov058_0214c394() {}
// non-matching
void ActorUnkWPBD::func_ov058_0214c6d8() {}
// non-matching
void ActorUnkWPBD::func_ov058_0214c824() {}
// non-matching
void ActorUnkWPBD::func_ov058_0214c92c() {}
// non-matching
void ActorUnkWPBD::func_ov058_0214ca40() {}

bool ActorUnkWPBD::func_ov058_0214cab8() {
    return this->mUnk_5C.mParams[0] == 0x1;
}

// non-matching
void ActorUnkWPBD::func_ov058_0214cacc() {}
// non-matching
void ActorUnkWPBD::func_ov058_0214cb64() {}

void ActorUnkWPBD::func_ov058_0214cbe8() {
    ActorParams params;
    RefStruct ref1;
    RefStruct ref2;

    params.mUnk_28.Reset();
    params.func_ov000_020975f8();
    params.mUnk_28 = this->mRef;

    VecFx32_Copy(&this->mPos, &params.mInitialPos);

    Actor::func_ov000_020973f4(&ref1, &data_ov000_020b539c_eur, ActorId_SWHI, &params, 0x0);
    this->mUnk_30C = ref1;

    Actor::func_ov000_020973f4(&ref2, &data_ov000_020b539c_eur, ActorId_SWHI, &params, 0x0);
    this->mUnk_310 = ref2;
}

bool ActorUnkWPBD::func_ov058_0214cc80() {
    UnkStruct_027e0cd8_0C_Base *data = data_027e0cd8->mUnk_0C;
    if (this->mUnk_5C.mParams[1] != 0x0) {
        if (!data->func_ov000_020802ec(this->mUnk_5C.mParams[1], this->Actor::func_ov000_0209853c(0x0))) {
            return true;
        }
    }

    return false;
}

// non-matching
void ActorUnkWPBD::func_ov058_0214ccd0() {}
// non-matching
void ActorUnkWPBD::func_ov058_0214cd94() {}
// non-matching
void ActorUnkWPBD::func_ov058_0214cfa4(unk32 param1) {}
// non-matching
void ActorUnkWPBD::func_ov058_0214d078(Actor *param1, G3d_RenderState *param2) {}
// non-matching
void ActorUnkWPBD::func_ov058_0214d250() {}

void ActorUnkWPBD_2CC::vfunc_0C() {
    this->mUnk_24->func_ov058_0214c824();
}

// non-matching
bool ActorUnkWPBD::func_ov058_0214d2c4() {}
