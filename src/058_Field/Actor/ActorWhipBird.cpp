#include "Actor/ActorWhipBird.hpp"

#include "Actor/ActorManager.hpp"
#include "Actor/Actor_ov031_02114438.hpp"
#include "CommonFuncs.hpp"
#include "System/Random.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_0204e5f8.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_027e09bc.hpp"

extern MtxFx43 data_027e0964;
extern VecFx32 data_027e0ca8[][2];
extern unk32 data_027e0d4c;

static VecFx32 data_ov058_02155300          = {.x = FX_F32_TO_FX32(2.0f), .y = -0x1, .z = FX_F32_TO_FX32(2.0f)};
static const VecFx32Cpp data_ov058_02155318 = VecFx32Cpp(FX_F32_TO_FX32(18.0f), FX_F32_TO_FX32(4.0f), FX_F32_TO_FX32(15.0f));
static const VecFx32Cpp data_ov058_0215530c = VecFx32Cpp(FX_F32_TO_FX32(4.0f), FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(15.0f));

static PTMF<ActorWhipBird> data_ov058_02155324[ActorWhipBirdState_Max] = {
    &ActorWhipBird::func_ov058_0214b61c, // ActorWhipBirdState_0
    &ActorWhipBird::func_ov058_0214b820, // ActorWhipBirdState_1
    &ActorWhipBird::func_ov058_0214bd98, // ActorWhipBirdState_2
    &ActorWhipBird::func_ov058_0214c078, // ActorWhipBirdState_3
    &ActorWhipBird::func_ov058_0214c334, // ActorWhipBirdState_4
};
static PTMF<ActorWhipBird> data_ov058_0215534c[ActorWhipBirdState_Max] = {
    &ActorWhipBird::func_ov058_0214b620, // ActorWhipBirdState_0
    &ActorWhipBird::func_ov058_0214b8dc, // ActorWhipBirdState_1
    &ActorWhipBird::func_ov058_0214bfa4, // ActorWhipBirdState_2
    &ActorWhipBird::func_ov058_0214c0b4, // ActorWhipBirdState_3
    &ActorWhipBird::func_ov058_0214c394, // ActorWhipBirdState_4
};
static ActorUnkZLSL_AnimationTag data_ov058_02155374[2] = {
    {0, "wpbd_wait1"},
    {1, "wpbd_wait2"},
};

class UnkStruct_UnkWPBD_bss {
public:
    /* 00 */ bool mUnk_00;
};

DECL_PROFILE(ActorProfileWhipBird);
static UnkStruct_UnkWPBD_bss data_ov058_02157110;

Actor *ActorProfileWhipBird::Create() {
    return new(HeapIndex_2) ActorWhipBird();
}

ActorProfileWhipBird::ActorProfileWhipBird() :
    ActorProfile_Derived1(ActorId_WhipBird) {
    this->mUnk_04.Init(FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(-0.5002f), FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.5f));
}

bool ActorWhipBird_32C::vfunc_08(const UnkStruct_ov031_020f3310 *param1, unk32 param2) {
    unk32 var = param1->mUnk_04->mUnk_24[param1->mUnk_00->mUnk_06] & 0x1F;
    if (var == 0x2 || var == 0x0) {
        return false;
    }

    bool ret = true;
    if (this->UnkStruct_ov031_Items_00::vfunc_08(param1, param2)) {
        this->mUnk_0C.Set(0, 15);
    } else {
        ret = false;
    }

    return ret;
}

ActorWhipBird_214::ActorWhipBird_214(ActorWhipBird *param1) :
    Actor_C4(param1) {
    this->mUnk_20 = param1;
    this->mUnk_04 = 0x2;
}

bool ActorWhipBird_214::vfunc_00(RefStruct ref, unk32 param2) {
    this->GetActorPtr<ActorWhipBird>()->func_ov058_0214cb64();
    return this->Actor_C4::vfunc_00(ref, param2);
}

ActorWhipBird::ActorWhipBird() :
    mUnk_094(NNS_G3dGetMdl(GET_PROFILE(ActorProfileWhipBird)->vfunc_04()->mUnk_50)),
    mUnk_100(&mUnk_094, GET_PROFILE(ActorProfileWhipBird)->vfunc_04()),
    mUnk_1EC(0x0),
    mUnk_1EE(0x0),
    mUnk_1F0(0x0),
    mUnk_1F2(0x0),
    mUnk_214(this),
    mUnk_238(FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(1.0f)),
    mUnk_244(FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f)),
    mUnk_250(FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f)),
    mUnk_25C(FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f)),
    mUnk_268(FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f)),
    mUnk_274(FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f)),
    mUnk_280(0x0),
    mUnk_284(0x0),
    mUnk_288(0x0),
    mUnk_28A(0x0),
    mUnk_28C(FX_F32_TO_FX32(0.0f)),
    mUnk_290(0, 0),
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
    mUnk_314(FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f)),
    mUnk_320(FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f)),
    mUnk_32C(this) {
    this->Actor::func_ov000_0209862c(0x0);

    SET_FLAGS(this->mFlags, ActorFlag_6, ActorFlag_9);
    this->mUnk_40 = &this->mUnk_214;
    MtxFx33_InitIdentity(&this->mUnk_2A8);
}

bool ActorWhipBird::Init(unk32 param1) {
#pragma unused(param1)
    if (this->Actor::func_ov000_02098a60(0x1)) {
        return false;
    }

    this->mUnk_094.func_ov000_02057c38(0x6, 0x2);
    this->mUnk_094.func_ov000_0209a7b8(this, &ActorWhipBird::func_ov058_0214d078);

    this->SetState(ActorWhipBirdState_0);

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

void ActorWhipBird::Setup() {
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

void ActorWhipBird::SetState(ActorState state) {
    this->mUnk_2C  = 0x0;
    this->mUnk_28A = 0x0;
    this->mState   = state;
    CALL_PTMF(data_ov058_02155324[this->mState]);
}

void ActorWhipBird::vfunc_24() {
    if (data_ov058_02155300.y >= FX_F32_TO_FX32(0.0f) && data_027e09b8->func_ov000_020732ec(data_ov058_02155300.y)) {
        this->Update();
        return;
    }

    if (!data_027e09b8->func_ov000_020732dc(0x2)) {
        return;
    }

    this->Update();
}

// non-matching
void ActorWhipBird::Update() {
    this->mUnk_3C = &this->mUnk_1F4;
    this->Actor::func_ov000_020989e0();

    CALL_PTMF(data_ov058_0215534c[this->mState]);
    this->Actor::func_ov000_02098838();

    this->mUnk_274.CopyOut(&this->mUnk_268);
    VecFx32_Copy(&this->mPos, &this->mPrevPos);
    VEC_Add(&this->mUnk_268.vec, &this->mVel, &this->mUnk_268.vec);

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
        if (this->mState != ActorWhipBirdState_2) {
            bool hasSong = false;
            if (GET_FLAG2(gpMiscAdvManager->mSongs, 2)) {
                hasSong = true;
            }

            if (hasSong) {
                this->SetState(ActorWhipBirdState_2);
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
void ActorWhipBird::vfunc_2C(unk32 param1) {
    if (!this->func_ov058_0214d2c4(param1)) {
        this->mUnk_295 = false;
        return;
    }

    this->mUnk_295 = true;
    if (!data_ov058_02157110.mUnk_00 && !this->mUnk_294) {
        if (data_027e0ce0->func_ov000_0208bf34(0x2)) {
            VecFx32 *vec = this->func_ov000_0209853c(PlayerType_Link);
            if (func_01ff9258(vec->x - this->mUnk_268.vec.x, vec->z - this->mUnk_268.vec.z) < 0x5000) {
                data_027e09bc->mUnk_04[param1]->mUnk_0C->func_ov000_020786dc(&this->mUnk_268.vec);
            }
        }
    }

    MtxFx33 sp44;
    MtxFx33 sp20;
    MTX_RotZ33_(&sp20, SIN(this->mUnk_1EC), COS(this->mUnk_1EC));
    MTX_Concat33(&sp20, &this->mUnk_2A8, &sp44);

    VecFx32Cpp sp14(0xA000, 0xA000, 0xA000);

    this->mUnk_094.vfunc_10(&sp14.vec, &sp44, &this->mPos);
    VecFx32Cpp sp08;
    sp08.Set(this->mPos.x, this->mPos.y + 0x80, this->mPos.z);

    this->Actor::func_ov017_020bf5c4(&sp08.vec, 0x4CD, 0x4CD, 0x1F, 0x0);
}

void ActorWhipBird::func_ov058_0214b61c() {}

void ActorWhipBird::func_ov058_0214b620() {
    this->mUnk_2F4.func_ov024_020d6d80(&this->mUnk_268.vec, &this->mVel);
    if (this->mUnk_2F4.mUnk_08 & 0x2) {
        this->SetState(ActorWhipBirdState_1);
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
void ActorWhipBird::func_ov058_0214b820() {
    if (this->mUnk_294) {
        this->SetState(ActorWhipBirdState_0);
        return;
    }

    unk16 timer =
        ((UnkStruct_027e0960_TableEntry_04_Base_Derived1 **) this->mUnk_2F4.mUnk_00->mTable.GetPtr(this->mUnk_2F4.mUnk_05)
             ->mUnk_14)[0]
            ->mUnk_14;
    if (timer >= 0) {
        this->mTimer.Set(0, timer);
    } else {
        this->SetState(ActorWhipBirdState_0);
    }

    VecFx32Cpp sp0C;
    this->mUnk_2F4.mUnk_00->mTable.GetPtr(this->mUnk_2F4.mUnk_05)->vfunc_0C(&sp0C.vec);

    sp0C.vec.y = this->mUnk_268.vec.y;

    VecFx32Cpp sp00;
    VEC_Subtract(&this->mUnk_268.vec, &sp0C.vec, &sp00.vec);

    this->mUnk_288 = FX_Atan2Idx(this->mUnk_238.vec.x, this->mUnk_238.vec.z);
}

void ActorWhipBird::func_ov058_0214b8dc() {
    VecFx32Cpp sp34;
    VecFx32Cpp sp28;
    VecFx32Cpp sp1C;

    this->mUnk_2F4.mUnk_00->mTable.Get(this->mUnk_2F4.mUnk_05).vfunc_0C(&sp34.vec);
    sp34.vec.y = this->mUnk_268.vec.y;

    this->mUnk_288 += 0x100;
    unk16 sp18 = this->mUnk_288;
    func_020169d4(&sp28.vec, &sp34.vec, &sp18, &data_ov058_02155300.z);

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

    this->func_ov058_0214bbcc(&sp28.vec, this->mUnk_280);
    if (!this->mUnk_294 && this->mTimer.HasExpired()) {
        this->mUnk_2F4.mUnk_00->mTable.Get(this->mUnk_2F4.mUnk_04).vfunc_0C(&sp34.vec);
        VEC_Subtract(&sp34.vec, &this->mPos, &sp1C.vec);

        fx16 tanValue = (fx16) FX_Atan2Idx(this->mUnk_238.vec.x, this->mUnk_238.vec.z);
        fx32 tanDelta = (fx16) ((fx16) FX_Atan2Idx(sp1C.vec.x, sp1C.vec.z) - tanValue);
        if (ABS(tanDelta) < FX_F32_TO_FX32(1.3333)) {
            this->SetState(ActorWhipBirdState_0);
        }
    }

    if (!this->mUnk_294) {
        return;
    }

    this->SetState(ActorWhipBirdState_0);
}

void ActorWhipBird::func_ov058_0214bbcc(VecFx32 *param1, fx32 newVelZ) {
    bool expiredTimer = this->mUnk_32C.mUnk_0C.HasExpired();

    if (this->mUnk_290.HasExpired()) {
        func_01ff916c(&this->mUnk_28C, 0x0, 0x52);

        if (this->mUnk_294) {
            if (data_027e0ce0->func_ov000_0208bf34(0x2) || this->mUnk_5C.mParams[0] == 0x1) {
                this->mUnk_100.vfunc_10()->mUnk_04.mUnk_04 = 0x1333;
            } else {
                this->mUnk_294              = false;
                data_ov058_02157110.mUnk_00 = false;
            }
        } else {
            fx32 unkValue = this->mUnk_100.vfunc_10()->mUnk_04.mUnk_04;
            func_01ff916c(&unkValue, 0xB33, 0x52);
            fx32 val                                   = unkValue; // mandatory
            this->mUnk_100.vfunc_10()->mUnk_04.mUnk_04 = val;
        }
    } else {
        func_01ff9218(&this->mUnk_28C, FX_F32_TO_FX32(0.5f), FX_F32_TO_FX32(0.2f));
        this->mUnk_100.vfunc_10()->mUnk_04.mUnk_04 = FX_F32_TO_FX32(1.4f);
    }

    VecFx32Cpp sp04;
    VEC_Subtract(param1, &this->mUnk_268.vec, &sp04.vec);

    if (!expiredTimer) {
        func_01ff9638(&sp04.vec, DEG_TO_ANG(45));
    }

    sp04.CopyIn(&this->mUnk_238);
    this->func_ov058_0214cfa4(0x52);
    VecFx32_Init(FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f), newVelZ, &this->mVel);
    MTX_MultVec33(&this->mVel, &this->mUnk_2A8, &this->mVel);
}

// non-matching
void ActorWhipBird::func_ov058_0214bd98() {
    VecFx32Cpp sp6C;
    UnkStackStruct1 stack;
    VecFx32Cpp vec = data_ov058_02155318;

    VecFx32_Init(vec.vec.x, vec.vec.y, vec.vec.z, &this->mPos);
    VecFx32_Init(vec.vec.x, vec.vec.y, vec.vec.z, &this->mPrevPos);
    VecFx32_Init(vec.vec.x, vec.vec.y, vec.vec.z, &this->mUnk_268.vec);
    this->mUnk_238.Set(FX_F32_TO_FX32(-1.0002f), FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f));

    this->func_ov058_0214cfa4(0x1000);
    unk16 angle = func_02016958((VecFx32 *) &data_ov058_0215530c.vec, &vec.vec);
    sp6C.Set(FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(4.0f), FX_F32_TO_FX32(0.0f));
    func_01ff9638(&sp6C.vec, angle);

    this->mUnk_320.CopyOut(&sp6C);
    VEC_Add(&this->mUnk_320.vec, &sp6C.vec, &this->mUnk_320.vec);

    sp6C.CopyOut(&this->mPos);
    sp6C.CopyIn(&this->mUnk_314);

    func_ov000_02072fd0(&stack);
    stack.mUnk_08   = 0x3C;
    stack.mUnk_00   = 0x6C;
    stack.mUnk_3A   = 0x7;
    stack.mUnk_18.s = this->func_ov058_0214d250(0xAAB);

    data_ov058_02155300.y = data_027e09b8->func_ov000_02073388(&stack, 0x0);
    this->mTimer.Set(0, 150);
    ActorLokomo *lokomo = (ActorLokomo *) func_02016fbc(ActorId_Carben, &this->mPos, 0x0);
    lokomo->func_ov058_02147d20();
}

void ActorWhipBird::func_ov058_0214bfa4() {
    VecFx32Cpp vec = data_ov058_0215530c;
    vec.vec.y      = this->mPos.y;

    if (this->mUnk_28A != 0x0) {
        return;
    }

    if (data_027e09b8->func_ov000_020732ec(data_ov058_02155300.y) != 0x0 && this->mTimer.HasExpired()) {
        this->mUnk_2CC.func_0201bb84(0x14, 0x14, 0x14);
        data_0204e5f8.func_0201b9a8(&this->mUnk_2CC);
        this->mUnk_28A += 0x1;
    }

    this->func_ov058_0214bbcc(&vec.vec, this->mUnk_280);
}

void ActorWhipBird::func_ov058_0214c078() {
    this->mUnk_25C.CopyOut(this->func_ov000_0209853c(PlayerType_Link));
    this->mTimer.Set(0, 100);
}

// non-matching
void ActorWhipBird::func_ov058_0214c0b4() {
    this->mTimer.Update();
    if (this->mTimer.HasReachedMaxU() ||
        func_01ff9258(this->mPos.x - this->mUnk_25C.vec.x, this->mPos.z - this->mUnk_25C.vec.z) < 0x1000) {
        this->SetState(ActorWhipBirdState_4);
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
    sp18.vec.y = this->Actor::func_ov000_0209853c(PlayerType_Link)->y + FX_F32_TO_FX32(3.5f);

    this->func_ov058_0214bbcc(&sp18.vec, this->mUnk_280);

    if (!this->mUnk_294) {
        return;
    }

    this->mUnk_2F4.mUnk_04 = this->mUnk_2F4.mUnk_00->func_ov000_02059da4(&this->mUnk_25C.vec);

    VecFx32_Copy(&this->mPos, &this->mUnk_2F4.mUnk_0C);
    this->SetState(ActorWhipBirdState_0);
}

void ActorWhipBird::func_ov058_0214c334() {
    if (this->mUnk_294) {
        VecFx32_Copy(&this->mPos, &this->mUnk_2F4.mUnk_0C);
        this->SetState(ActorWhipBirdState_0);
        return;
    }

    this->mTimer.Set(0, 600);
    this->mUnk_288 = FX_Atan2Idx(this->mUnk_238.vec.x, this->mUnk_238.vec.z);
}

void ActorWhipBird::func_ov058_0214c394() {
    VecFx32Cpp sp34;
    VecFx32Cpp sp28;
    VecFx32Cpp sp1C;
    unk16 sp18;

    sp34.CopyOut(&this->mUnk_25C);
    sp34.vec.y = this->mUnk_268.vec.y;

    this->mUnk_288 += 0x100;
    sp18 = this->mUnk_288;
    func_020169d4(&sp28.vec, &sp34.vec, &sp18, &data_ov058_02155300);

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

    VecFx32 *vec = this->func_ov000_0209853c(PlayerType_Link);
    sp28.vec.y   = vec->y + FX_F32_TO_FX32(3.5f);
    this->func_ov058_0214bbcc(&sp28.vec, this->mUnk_280);

    if (!this->mUnk_294 && this->mTimer.HasExpired()) {
        u8 idx                 = this->mUnk_2F4.mUnk_00->func_ov000_02059da4(&this->mUnk_25C.vec);
        this->mUnk_2F4.mUnk_04 = idx;

        this->mUnk_2F4.mUnk_00->mTable.Get(idx & 0xFF).vfunc_0C(&sp34.vec);
        VEC_Subtract(&sp34.vec, &this->mPos, &sp1C.vec);

        fx16 tanValue = (fx16) FX_Atan2Idx(this->mUnk_238.vec.x, this->mUnk_238.vec.z);
        fx32 tanDelta = (fx16) ((fx16) FX_Atan2Idx(sp1C.vec.x, sp1C.vec.z) - tanValue);
        if (ABS(tanDelta) < FX_F32_TO_FX32(1.3333)) {
            VecFx32_Copy(&this->mPos, &this->mUnk_2F4.mUnk_0C);
            this->SetState(ActorWhipBirdState_0);
        }
    }

    if (!this->mUnk_294) {
        return;
    }

    this->mUnk_2F4.mUnk_04 = this->mUnk_2F4.mUnk_00->func_ov000_02059da4(&this->mUnk_25C.vec);

    VecFx32_Copy(&this->mPos, &this->mUnk_2F4.mUnk_0C);
    this->SetState(ActorWhipBirdState_0);
}

void ActorWhipBird::func_ov058_0214c6d8() {
    VecFx32 *vec = this->Actor::func_ov000_0209853c(PlayerType_Link);

    if (func_01ff9258(vec->x - this->mPos.x, vec->z - this->mPos.z) >= 0x7000) {
        VecFx32Cpp sp0C;

        VEC_Subtract(this->Actor::func_ov000_0209853c(PlayerType_Link), &this->mPos, &sp0C.vec);
        sp0C.vec.y = FX_F32_TO_FX32(0.0f);
        VecFx32_TryNormalize(&sp0C.vec);
        this->mUnk_238.CopyOut(&sp0C);

        this->func_ov058_0214cfa4(0x1000);

        VEC_Subtract(&this->mPos, this->Actor::func_ov000_0209853c(PlayerType_Link), &sp0C.vec);
        VecFx32_TryNormalize(&sp0C.vec);

        func_01ff93c0(&sp0C.vec, FX_F32_TO_FX32(7.0f));
        VEC_Add(&sp0C.vec, this->Actor::func_ov000_0209853c(PlayerType_Link), &sp0C.vec);
        sp0C.vec.y = this->Actor::func_ov000_0209853c(PlayerType_Link)->y + FX_F32_TO_FX32(3.5f);

        VecFx32Cpp sp00 = sp0C;
        VecFx32_Init(sp00.vec.x, sp00.vec.y, sp00.vec.z, &this->mPos);
        VecFx32_Init(sp00.vec.x, sp00.vec.y, sp00.vec.z, &this->mPrevPos);
        sp0C.CopyIn(&this->mUnk_268);
    }

    this->SetState(ActorWhipBirdState_3);
}

// non-matching
void ActorWhipBird::func_ov058_0214c824() {
    this->Actor::func_ov000_02098a88(0x1, 0x1);
    ActorLokomo *lokomo = (ActorLokomo *) func_02016fbc(ActorId_Carben, &this->mPos, 0x0);
    VecFx32Cpp vec      = lokomo->mUnk_5C.mInitialPos;

    VecFx32_Init(vec.vec.x, vec.vec.y, vec.vec.z, &lokomo->mPos);
    VecFx32_Init(vec.vec.x, vec.vec.y, vec.vec.z, &lokomo->mPrevPos);
    lokomo->func_ov058_02147ca8();

    VecFx32_Init(0, 0, 0, &this->mVel);
    UNSET_FLAG(this->mFlags, ActorFlag_Visible);

    Actor *actor1 = gpActorManager->func_01fff3b4(this->mUnk_30C);
    Actor *actor2 = gpActorManager->func_01fff3b4(this->mUnk_310);

    if (actor1 != NULL) {
        actor1->func_ov000_020984d0();
    }
    if (actor2 != NULL) {
        actor2->func_ov000_020984d0();
    }

    this->mUnk_296 = true;
    data_027e09b8->func_ov000_020732fc(data_ov058_02155300.y);
    data_ov058_02155300.y = -0x1;
}

// non-matching
void ActorWhipBird::func_ov058_0214c92c() {
    func_01ff930c(&this->mUnk_1F0, this->mUnk_1EC * 2, 0x100);

    if (this->mUnk_294) {
        func_01ff930c(&this->mUnk_1EC, 0x0, 0x50);
        return;
    }

    VecFx32Cpp sp24;
    VecFx32Cpp sp18;
    VecFx32Cpp sp0C;
    VecFx32Cpp sp00;
    this->mUnk_2F4.mUnk_00->mTable.GetPtr(this->mUnk_2F4.mUnk_05)->vfunc_0C(&sp0C.vec);
    this->mUnk_2F4.mUnk_00->mTable.GetPtr(this->mUnk_2F4.mUnk_04)->vfunc_0C(&sp18.vec);

    VEC_Subtract(&sp18.vec, &sp0C.vec, &sp24.vec);
    VEC_Subtract(&sp18.vec, &this->mPos, &sp00.vec);

    fx16 tanValue = (fx16) FX_Atan2Idx(sp00.vec.x, sp00.vec.z);
    fx32 tanDelta = (fx16) ((fx16) FX_Atan2Idx(sp24.vec.x, sp24.vec.z) - tanValue);
    if (ABS(tanDelta) >= 0x2AAB) {
        return;
    }

    func_01ff930c(&this->mUnk_1EC, (fx16) tanDelta, 0x50);
}

void ActorWhipBird::func_ov058_0214ca40() {
    fx32 div = FX_Div(this->mUnk_280, FX_F32_TO_FX32(0.085f));

    this->mUnk_1EE = 0x800;
    this->mUnk_1EE = -0x2000;
    this->mUnk_1F2 += FX_MUL(div, FX_F32_TO_FX32(1.111f));
    this->mUnk_1EE = FX_MUL(this->mUnk_1EE, div);
}

bool ActorWhipBird::func_ov058_0214cab8() {
    return this->mUnk_5C.mParams[0] == 0x1;
}

void ActorWhipBird::func_ov058_0214cacc() {
    VecFx32 vec;

    VecFx32_Init(FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(-0.8002f), FX_F32_TO_FX32(0.0f), &vec);
    MTX_MultVec33(&vec, &this->mUnk_2A8, &vec);
    VecFx16_Init(vec.x, vec.y, vec.z, &this->mUnk_214.mUnk_08);

    VecFx32_Init(FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.5f), &vec);
    MTX_MultVec33(&vec, &this->mUnk_2A8, &vec);
    VecFx16_Init(vec.x, vec.y, vec.z, &this->mUnk_214.mUnk_0E);
}

void ActorWhipBird::func_ov058_0214cb64() {
    this->mUnk_290.Set(0, 0xA);
    this->mUnk_294              = true;
    data_ov058_02157110.mUnk_00 = true;
    this->mUnk_100.vfunc_1C(data_ov058_02155374[1], 0x1000, 0x19A, 0x0);
}

void ActorWhipBird::func_ov058_0214cbe8() {
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

bool ActorWhipBird::func_ov058_0214cc80() {
    MapManagerBase *data = gpCourseManager->mpMapMgr;
    if (this->mUnk_5C.mParams[1] != 0x0) {
        if (!data->func_ov000_020802ec(this->mUnk_5C.mParams[1], this->Actor::func_ov000_0209853c(PlayerType_Link))) {
            return true;
        }
    }

    return false;
}

void ActorWhipBird::func_ov058_0214ccd0() {
    ActorLokomo *lokomo = (ActorLokomo *) func_02016fbc(ActorId_Carben, &this->mPos, 0x0);
    if (lokomo == NULL) {
        return;
    }

    SET_FLAG(lokomo->mFlags, ActorFlag_Visible);

    VecFx32Cpp sp18(FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(1.0f));
    MTX_MultVec33(&sp18.vec, &this->mUnk_2A8, &sp18.vec);

    VecFx32Cpp sp0C(this->mPos);
    sp0C.vec.y -= FX_F32_TO_FX32(3.0f);
    VecFx32Cpp sp00(sp0C);

    VecFx32_Init(sp00.vec.x, sp00.vec.y, sp00.vec.z, &lokomo->mPos);
    VecFx32_Init(sp00.vec.x, sp00.vec.y, sp00.vec.z, &lokomo->mPrevPos);

    lokomo->mAngle = FX_Atan2Idx(sp18.vec.x, sp18.vec.z);
}

// non-matching
void ActorWhipBird::func_ov058_0214cd94() {
    ActorLokomo *lokomo = (ActorLokomo *) func_02016fbc(ActorId_Carben, &this->mPos, 0x0);
    if (lokomo == NULL) {
        return;
    }

    VecFx32Cpp sp24(FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(1.0f));
    VecFx32Cpp sp18;
    VecFx32Cpp sp0C;
    VecFx32Cpp sp00;
    MTX_MultVec33(&sp24.vec, &this->mUnk_2A8, &sp24.vec);

    sp18.Set(0x666, 0x666 + 0x148, 0x0);
    sp0C.Set(-0x666, 0x666 + 0x148, 0x0);
    MTX_MultVec33(&sp18.vec, &this->mUnk_2A8, &sp18.vec);
    MTX_MultVec33(&sp0C.vec, &this->mUnk_2A8, &sp0C.vec);

    if (!this->mUnk_295) {
        VEC_Add(&sp18.vec, &this->mPos, &sp18.vec);
        VEC_Add(&sp0C.vec, &this->mPos, &sp0C.vec);
    } else {
        VEC_Add(&sp18.vec, &this->mUnk_244.vec, &sp18.vec);
        VEC_Add(&sp0C.vec, &this->mUnk_244.vec, &sp0C.vec);
    }

    Actor_ov031_02114438 *actor  = (Actor_ov031_02114438 *) gpActorManager->func_01fff3b4(this->mUnk_30C);
    Actor_ov031_02114438 *actor2 = (Actor_ov031_02114438 *) gpActorManager->func_01fff3b4(this->mUnk_310);

    if (actor != NULL) {
        SET_FLAG(actor->mFlags, ActorFlag_Visible);
        actor->func_ov031_020f57e4(&sp18.vec, 0x1);

        sp00.Set(0x614, 0x19A, 0xCD - 0x19A);
        func_01ff9638(&sp00.vec, this->mAngle.angle_s);

        VEC_Add(&sp00.vec, &this->mPos, &sp00.vec);
        sp00.CopyIn(&actor->mUnk_94);
    }

    if (actor2 == NULL) {
        return;
    }

    SET_FLAG(actor2->mFlags, ActorFlag_Visible);
    actor2->func_ov031_020f57e4(&sp0C.vec, 0x1);

    sp00.Set(-0x614, 0x19A, 0xCD - 0x19A);
    func_01ff9638(&sp00.vec, this->mAngle.angle_s);

    VEC_Add(&sp00.vec, &this->mPos, &sp00.vec);
    sp00.CopyIn(&actor2->mUnk_94);
}

void ActorWhipBird::func_ov058_0214cfa4(unk32 param1) {
    Cylinder vec34;
    VecFx32Cpp vec28 = this->mUnk_238;
    vec28.vec.y      = FX_F32_TO_FX32(0.0f);

    VecFx32Cpp vec1C = this->mUnk_238;
    VecFx32Cpp vec10(FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(1.0f));

    Cylinder vec00;
    if (!func_ov000_0205f7d4(&vec00.pos, &vec10.vec, &vec28.vec)) {
        vec00.Init(FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(1.0f), FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f));
    }

    if (!func_ov000_0205f7d4(&vec34.pos, &vec28.vec, &vec1C.vec)) {
        vec34.Init(FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(1.0f));
    }

    func_ov000_0205f6e4(&vec34.pos, &vec00.pos);
    func_ov000_0205f298(&this->mUnk_298, &vec34.pos, param1);
    func_ov000_0205f478(&this->mUnk_298);
    func_ov000_0205f4fc(&this->mUnk_298, &this->mUnk_2A8);
}

void ActorWhipBird::func_ov058_0214d078(Actor *param1, G3d_RenderState *param2) {
    ActorWhipBird *thiz = (ActorWhipBird *) param1;
    MtxFx33 sp6C;
    MtxFx43 sp3C;
    MtxFx33 sp18;
    VecFx32Cpp sp0C;
    VecFx32Cpp sp00;

    G3d_RenderObject *renderObj = param2->renderObj;

    s32 val = G3d_GetCurBoneMtxId(param2);
    if (val != 0x1) {
        return;
    }

    if (renderObj->mUnk_25 == 0x2) {
        param2->callbackSegment[6]        = 0x3;
        renderObj->mUnk_25                = 0x3;
        G3d_RenderState_B4 *renderStateB4 = param2->mUnk_B4;

        renderStateB4->mUnk_00 &= ~0x2;

        u16 angle = (s16) (u32) (s16) -thiz->mUnk_1F0;
        MTX_RotX33_(&sp6C, SIN(angle), COS(angle));
        MTX_Concat33(&sp6C, &renderStateB4->mUnk_28, &renderStateB4->mUnk_28);

        angle = (s16) (u32) thiz->mUnk_1EE;
        MTX_RotZ33_(&sp6C, SIN(angle), COS(angle));
        MTX_Concat33(&sp6C, &renderStateB4->mUnk_28, &renderStateB4->mUnk_28);
        return;
    }

    if (renderObj->mUnk_25 != 0x3) {
        return;
    }
    param2->callbackSegment[6] = 0x2;
    renderObj->mUnk_25         = 0x2;
    G3d_GetCurrentMtx(&sp3C, NULL);
    func_01ffad5c(&sp3C, &data_027e0964, &sp3C);

    sp0C.CopyOut((VecFx32 *) &sp3C.values[9]);
    thiz->mUnk_250.CopyOut(&sp0C);

    MI_Copy36B(&sp3C, &sp18);

    sp00.Set(FX_F32_TO_FX32(0.015f), FX_F32_TO_FX32(-0.0951f), FX_F32_TO_FX32(0.0f));

    MTX_MultVec33(&sp00.vec, &sp18, &sp00.vec);
    VEC_Add(&sp0C.vec, &sp00.vec, &sp0C.vec);
    sp0C.CopyIn(&thiz->mUnk_244);
}

UnkStackStruct2::Inner ActorWhipBird::func_ov058_0214d250(unk16 param3) {
    UnkStackStruct2 sp4;
    sp4.s.mUnk_00 = 0x1000;
    sp4.s.mUnk_02 = param3;
    VecFx32_Reset(&sp4.s.mUnk_0C);
    func_020158e8(&sp4.s.mUnk_08, &sp4.s.mUnk_04, &sp4.s.mUnk_06, &this->mUnk_314.vec, &this->mUnk_320.vec);
    return sp4.s;
}

void ActorWhipBird_2CC::vfunc_0C() {
    this->mUnk_24->func_ov058_0214c824();
}

// non-matching
bool ActorWhipBird::func_ov058_0214d2c4(unk32 param1) {
    if (this->mUnk_30 == NULL) {
        return false;
    }

    fx32 sp24;
    VecFx32 sp18 = this->mUnk_30->pos;
    VecFx32 sp0C;
    VecFx32 sp00;

    sp24 = this->mUnk_30->pos.z;
    VEC_Add(&this->mPos, &sp18, &this->mPos);
    sp00 = data_027e0ca8[param1][0];
    sp0C = data_027e0ca8[param1][1];

    if (!(sp18.x >= sp00.x - sp24 && sp0C.x + sp24 >= sp18.x && sp18.y >= sp00.z - sp24 && sp0C.z + sp24 >= sp18.y)) {
        return false;
    }
    return sp0C.x >= sp00.x && sp0C.y >= sp00.y && sp0C.z >= sp00.z;
}
