#include "Actor/ActorKeese.hpp"
#include "Actor/ActorId.hpp"
#include "Actor/ActorItemBoomerang.hpp"
#include "CommonFuncs.hpp"

#include "Actor/ActorManager.hpp"
#include "Map/MapObjectId.hpp"
#include "MapObject/MapObjectManager.hpp"
#include "MapObject/MapObjectUnkSKDI.hpp"
#include "RefStruct.hpp"
#include "System/Random.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e09b4.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_027e0cec.hpp"
#include "Unknown/UnkStruct_027e0d38.hpp"
#include "flags.h"
#include "global.h"
#include "math.hpp"
#include "nitro/fx.h"
#include "nitro/math.h"

extern u16 data_ov000_020aecf0[];
extern u16 data_ov000_020aecf4[];
extern unk32 data_ov000_020aecf8;
extern unk32 data_ov000_020aecfc[];
extern MtxFx43 data_027e0964;

static const VecFx32Cpp data_ov032_021224d8(FX_F32_TO_FX32(1.7f), FX_F32_TO_FX32(0.5f), FX_F32_TO_FX32(1.7f));
static ActorUnkZLSL_AnimationTag data_ov032_021224e4 = {.index = 0, .name = "fly"};

static const struct {
    int unk_00;
    char unk_04[16];
} data_ov032_02121ed0 = {0x1333, "base"};

static ActorUnkZLSL_AnimationTag data_ov032_021224fc = {.index = 0, .name = "keeth", .unknown = 1};

static PTMF<ActorKeese> data_ov032_0212258c[ActorKeeseState_Max] = {
    &ActorKeese::func_ov032_0211e9ec, // ActorKeeseState_0
    &ActorKeese::func_ov032_0211ece8, // ActorKeeseState_1
    &ActorKeese::func_ov032_0211f1f0, // ActorKeeseState_2
    &ActorKeese::func_ov032_0211f054, // ActorKeeseState_3
    &ActorKeese::func_ov032_0211f300, // ActorKeeseState_4
    &ActorKeese::func_ov032_0211f3ac, // ActorKeeseState_5
    &ActorKeese::func_ov032_0211f4a4, // ActorKeeseState_6
    &ActorKeese::func_ov032_0211f560, // ActorKeeseState_7
    &ActorKeese::func_ov032_0211f604, // ActorKeeseState_8
    &ActorKeese::func_ov032_0211f6bc, // ActorKeeseState_9
};

static PTMF<ActorKeese> data_ov032_021225dc[ActorKeeseState_Max] = {
    &ActorKeese::func_ov032_0211eb60, // ActorKeeseState_0
    &ActorKeese::func_ov032_0211ee5c, // ActorKeeseState_1
    &ActorKeese::func_ov032_0211f1f4, // ActorKeeseState_2
    &ActorKeese::func_ov032_0211f0a8, // ActorKeeseState_3
    &ActorKeese::func_ov032_0211f310, // ActorKeeseState_4
    &ActorKeese::func_ov032_0211f404, // ActorKeeseState_5
    &ActorKeese::func_ov032_0211f50c, // ActorKeeseState_6
    &ActorKeese::func_ov032_0211f58c, // ActorKeeseState_7
    &ActorKeese::func_ov032_0211f614, // ActorKeeseState_8
    &ActorKeese::func_ov032_0211f804, // ActorKeeseState_9
};

DECL_PROFILE(ActorProfileKeese);

Actor *ActorProfileKeese::Create() {
    return new(HeapIndex_2) ActorKeese();
}

ActorProfileKeese::ActorProfileKeese() :
    ActorProfile_Derived1(ActorId_Keese) {
    this->mUnk_04.Init(FX_F32_TO_FX32(0.4f));

    this->vfunc_04()->mUnk_15 = 0x1;
}

ModelRender_ov032_02122568::ModelRender_ov032_02122568(G3d_Model *pModel) :
    UnkStruct_ov000_020b3268(pModel),
    mUnk_6C(this->ModelRenderBase::func_ov000_02057f18(&data_ov032_02121ed0.unk_04)) {}

ActorKeese::ActorKeese() :
    mUnk_0B0(G3d_GetModelPtr(GET_PROFILE(ActorProfileKeese)->vfunc_04()->mUnk_50)),
    mUnk_120(&this->mUnk_0B0, GET_PROFILE(ActorProfileKeese)->vfunc_04()),
    mUnk_1CC(&this->mUnk_0B0, GET_PROFILE(ActorProfileKeese)->vfunc_04()),
    mUnk_228(0x0),
    mUnk_22A(0x0),
    mUnk_244(0x0),
    mUnk_246(0x0),
    mUnk_278(-1, 0),
    mUnk_29C(0x0),
    mUnk_2A0(0x0),
    mUnk_2A4(0x0),
    mUnk_2A8(0x0),
    mUnk_2AC(this),
    mUnk_2C4(FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f)),
    mUnk_2D0(0),
    mUnk_2D4(0x0) {
    this->Actor::func_ov000_0209862c(0x4);
    SET_FLAG(this->mFlags, ActorFlag_6);
    *(s16 *) &this->mUnk_44 &= ~0x20;
    SET_FLAG(this->mFlags, ActorFlag_9);
    this->mUnk_A4 = &data_ov032_021224d8.vec;
}

ActorKeese_2AC::ActorKeese_2AC(ActorKeese *param1) :
    mUnk_08(param1),
    mUnk_0C(FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f)) {}

ActorKeese_2AC::~ActorKeese_2AC() {
    this->mUnk_08 = NULL;
}

bool ActorKeese_2AC::vfunc_08(const UnkStruct_ov031_020f3310 *param1, unk32 param2) {
    VecFx16_Copy2VecFx32(&param1->mUnk_08, &this->mUnk_0C.vec);
    return this->UnkStruct_ov031_Items_00::vfunc_08(param1, param2);
}

bool ActorKeese_2AC::vfunc_0C(RefStruct ref, UnkStruct_ov031_020e54d4 *param2, const VecFx32 *param3, const VecFx32 *param4) {
    if (ref.moRef.unk_00_u16 & 0x1000) {
        MapObjRef moRef           = ref.moRef;
        Vec2bCpp pos              = moRef.GetUnk02();
        MapObjectUnkSKDI *temp_r4 = (MapObjectUnkSKDI *) gpMapObjManager->func_01fff498(pos);

        if (temp_r4->GetMapObjectId() == MapObjectId_Torch) {
            if (this->mUnk_08->mPos.y >= this->mUnk_08->mUnk_5C.mInitialPos.y + FX_F32_TO_FX32(0.2f)) {
                if (this->mUnk_08->mState != ActorKeeseState_7 && temp_r4->vfunc_40() == MapObjUnkSKDIState_1) {
                    if (temp_r4->vfunc_38() == 0) {
                        this->mUnk_08->func_ov032_0211e0d4(2, 1);
                    } else if (temp_r4->vfunc_38() == 1) {
                        this->mUnk_08->func_ov032_0211e0d4(1, 1);
                    }
                }

                return false;
            }
        }
    }

    return this->UnkStruct_027e0ce0_38_Base::vfunc_0C(ref, param2, param3, param4);
}

bool ActorKeese::Init(unk32 param1) {
#pragma unused(param1)

    this->mUnk_0B0.func_ov000_02057c38(0x6, 0x2);
    this->mUnk_0B0.func_ov000_0209a7b8(this, ActorKeese::func_ov032_0211faf0);

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

void ActorKeese::func_ov032_0211e0d4(s16 param1, unk32 param2) {
    if (this->mUnk_22A == param1) {
        return;
    }

    this->mUnk_22A = param1;

    switch (param1) {
        case 0x0:
            this->mUnk_1CC.func_ov000_02099ddc(data_ov032_021224fc, 0x1000, 0x0);

            this->mUnk_278.func_ov000_020a0334();

            for (ActorKeese_284 *ptr = this->mUnk_284; ptr != &this->mUnk_284[ARRAY_LEN(this->mUnk_284)]; ++ptr) {
                ptr->func_ov000_020a0334();
            }
            break;

        case 0x1: {
            this->mUnk_1CC.func_ov000_02099ddc(data_ov032_021224fc, 0x1000, 0x2000);

            ActorKeese_284 *ptr = this->mUnk_284;
            ptr[0].mUnk_04      = 0xD045;
            ptr[0].mUnk_08      = 0x2;
            ptr[1].mUnk_04      = 0xD046;
            ptr[1].mUnk_08      = 0x2;

            UnkStruct_027e0cec *data = data_027e0cec;
            for (ActorKeese_284 *ptr = this->mUnk_284; ptr != &this->mUnk_284[ARRAY_LEN(this->mUnk_284)]; ++ptr) {
                data->func_ov000_020a0140(ptr, &this->mUnk_2C4.vec);
            }

            if (param2 != 0x0) {
                data_027e09a8->func_ov000_02071b30(0x9823, &this->mPos, 0x0);
            }

            this->mUnk_278.func_ov000_020a0334();
            break;
        }

        case 0x2:
            this->mUnk_1CC.func_ov000_02099ddc(data_ov032_021224fc, 0x1000, 0x1000);

            this->mUnk_278.mUnk_04 = 0x877;
            this->mUnk_278.mUnk_08 = 0x2;

            data_027e0cec->func_ov000_020a0140(&this->mUnk_278, &this->mUnk_2C4.vec);

            if (param2 != 0x0) {
                data_027e09a8->func_ov000_02071b30(0x9822, &this->mPos, 0x0);
            }

            for (ActorKeese_284 *ptr = this->mUnk_284; ptr != &this->mUnk_284[ARRAY_LEN(this->mUnk_284)]; ++ptr) {
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
            for (ActorKeese_284 *ptr = this->mUnk_284; ptr != &this->mUnk_284[ARRAY_LEN(this->mUnk_284)]; ++ptr) {
                data->func_ov000_020a0140(ptr, &this->mUnk_2C4.vec);
            }
            break;
        }

        case 0x2:
            data_027e0cec->func_ov000_020a0140(&this->mUnk_278, &this->mUnk_2C4.vec);
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

            this->mUnk_22C.mUnk_04 = this->mUnk_22C.mUnk_00->func_ov000_02059da4(&this->mPos);

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

    CALL_PTMF(data_ov032_0212258c[this->mState]);
}

void ActorKeese::func_ov032_0211e468() {
    this->func_ov000_020989e0();

    bool var_r5 = true;
    bool var_r6 = true;

    if (this->mUnk_248.mUnk_08 & 0x3FFFF) {
        var_r5 = false;

        switch (this->mUnk_248.mUnk_1C) {
            case 12:
                if (this->mUnk_22A != 0) {
                    ActorItemBoomerang *temp_r0_2 =
                        (ActorItemBoomerang *) gpActorManager->func_01fff3b4(this->mUnk_248.mUnk_0C);

                    if (temp_r0_2 != NULL) {
                        switch (this->mUnk_22A) {
                            case 1:
                                temp_r0_2->func_ov031_020e5034(2);
                                break;
                            case 2:
                                temp_r0_2->func_ov031_020e5034(1);
                                break;
                            default:
                                break;
                        }
                    }

                    var_r6 = true;
                }

                if (var_r6) {
                    this->func_ov017_020bf178(&this->mUnk_248, 1);
                    this->mUnk_48 -= this->mUnk_248.mUnk_1E;
                    this->func_ov000_020990c0(&this->mUnk_248, 0, 0);
                    this->SetState(ActorKeeseState_4);
                } else {
                    this->func_ov000_020990c0(&this->mUnk_248, 0, 0);
                    this->mUnk_268.func_ov000_02099a0c();
                    this->SetState(ActorKeeseState_6);
                }
                break;
            case 4:
                if (data_027e0d38->func_ov031_020d9c04(1, 0, 0)) {
                    this->func_ov032_0211e0d4(0, 1);
                    this->SetState(ActorKeeseState_7);
                }
                break;
            case 14:
                if (this->mUnk_248.mUnk_0C.acRef.type_index == 0x102) {
                    if (!this->mUnk_248.mUnk_0C.acRef.UnkCheck2Alt() && !this->mUnk_248.mUnk_0C.acRef.UnkCheck3(0x102)) {
                        var_r6 = false;
                    }

                    if (!var_r6 && this->func_ov000_020986fc(0)) {
                        if (this->func_ov032_0211fa4c(0)) {
                            var_r5 = false;
                        } else {
                            this->func_ov000_020990c0(&this->mUnk_248, 0, 0);
                            this->SetState(ActorKeeseState_4);
                        }
                    }
                } else {
                    var_r5 = true;
                }
                break;
            case 8:
                if (this->mUnk_248.mUnk_0C.acRef.type_index == 0x102) {
                    if (!this->func_ov032_0211fa4c(this->mUnk_248.mUnk_0C.acRef.UnkCheck3(0x102))) {
                    } else {
                        var_r5 = false;
                        break;
                    }
                }

                // fallthrough
            default:
                this->mUnk_48 -= this->mUnk_248.mUnk_1E;
                this->func_ov000_020990c0(&this->mUnk_248, 0, 0);
                this->SetState(ActorKeeseState_4);
                break;
        }
    }

    if (var_r5) {
        s32 var_r1_6 = 0;

        switch (this->mUnk_22A) {
            case 2:
                var_r1_6 = 6;
                break;
            case 1:
                var_r1_6 = 8;
                break;
            default:
                break;
        }

        this->func_ov000_02098ab4(1, (s16) var_r1_6, 1, 0);
    }
}

void ActorKeese::Update() {
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
    CALL_PTMF(data_ov032_021225dc[this->mState]);

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
        this->mVel.y = FX_F32_TO_FX32(0.0f);
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

void ActorKeese::vfunc_2C(unk32 param1) {
    if (!this->func_01fff5d0(param1, 0x0)) {
        this->mUnk_278.func_ov000_020a0334();

        for (ActorKeese_284 *ptr = this->mUnk_284; ptr != &this->mUnk_284[ARRAY_LEN(this->mUnk_284)]; ++ptr) {
            ptr->func_ov000_020a0334();
        }
    } else {
        this->mUnk_0B0.func_01ffc6d4(this->mAngle, &this->mPos);

        VecFx32 temp;
        temp.x = this->mPos.x;
        temp.z = this->mPos.z;
        temp.y = this->mPos.y;

        VecFx32 vec;
        vec.x = temp.x;
        vec.y = temp.y;
        vec.z = temp.z;

        data_027e09b4->func_ov017_020c08c4(&vec, 0x4CD, 0x4CD, 0x1F, 0x0, 0x1);
    }
}

void ActorKeese::func_ov032_0211e9ec() {
    this->mTimer.Set(0, gRandom.Next32(31) + 30);

    u32 sp0;
    u32 *psp0   = (u32 *) &sp0;
    fx32 var_r5 = this->mUnk_5C.mInitialPos.y;

    func_01fff05c(psp0, data_027e0cd8->mUnk_0C, &this->mPos);

    bool var_r6 = false;
    if ((*psp0 & 0x1F) == 0x0F && ((*psp0 >> 5) & 0x03) == 2) {
        var_r6 = true;
    }

    if (var_r6) {
        var_r5 = data_027e0cd8->mUnk_0C->vfunc_28(&this->mPos, 0x1, 0x0);
    }

    this->mUnk_29C = (var_r5 + 0x800) + (gRandom.Next32(0x99B) - 0x4CD);
    gRandom.UpdateRandomValue();
    this->mUnk_2A4 = 0x19A;

    if (this->mUnk_2A8 > 0) {
        this->mUnk_2A8 = -0x71C;
    } else {
        this->mUnk_2A8 = 0x71C;
    }
}

void ActorKeese::func_ov032_0211eb60() {
    if (this->mUnk_46 & 0x1C) {
        this->mAngle = func_01ffbbe0(this->mUnk_2AC.mUnk_0C.vec.x, this->mUnk_2AC.mUnk_0C.vec.z);
    }

    this->mAngle += this->mUnk_2A8;

    if (this->mTimer.HasExpired()) {
        this->func_ov032_0211e380();
    }

    func_01ff916c(&this->mUnk_2A0, this->mUnk_2A4, 0xA4);
    func_01ff916c(&this->mPos.y, this->mUnk_29C, 0xA4);

    this->Actor::func_ov000_0209a008(this->mUnk_2A0, this->mAngle.angle_s);

    if (this->mTimer.HasExpired()) {
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

    if (!func_02016b8c(&this->mPos, vec, 0x3000, this->mAngle, 0x1000, 0x1)) {
        return;
    }

    this->SetState(ActorKeeseState_2);
}

void ActorKeese::func_ov032_0211ece8() {
    this->mUnk_2A4 = 0x19A;
    s32 var_r4     = this->mUnk_5C.mInitialPos.y;

    u32 sp0;
    u32 *psp0 = (u32 *) &sp0;
    func_01fff05c(psp0, data_027e0cd8->mUnk_0C, &this->mPos);

    bool var_r2 = false;
    if ((*psp0 & 0x1F) == 0x0F && ((*psp0 >> 5) & 0x03) == 2) {
        var_r2 = true;
    }

    if (var_r2) {
        var_r4 = data_027e0cd8->mUnk_0C->vfunc_28(&this->mPos, 1, 0);
    }

    this->mUnk_29C = (var_r4 + 0x800) + (gRandom.Next32(0x99B) - 0x4CD);
    this->mTimer.Set(0, gRandom.Next32(31) + 30);
    this->mUnk_246 = gRandom.Next32(0x31C7);
}

void ActorKeese::func_ov032_0211ee5c() {
    func_01ff916c(&this->mUnk_2A0, this->mUnk_2A4, 0xA4);
    func_01ff916c(&this->mPos.y, this->mUnk_29C, 0xA4);
    this->mUnk_22C.func_ov024_020d6b7c(&this->mPos, &this->mUnk_244, &this->mVel, this->mUnk_2A0, 0x71C, 0xCD);
    this->mVel.y = 0;

    if (this->mTimer.HasExpired()) {
        this->SetState(ActorKeeseState_1);
    }

    this->mUnk_2A8 += 0x71C;
    this->mAngle = this->mUnk_244 + (fx16) FX_Mul(this->mUnk_246, SIN(this->mUnk_2A8));

    fx32 x       = FX_Mul(SIN(this->mAngle.angle_s), this->mUnk_2A0);
    fx32 z       = FX_Mul(COS(this->mAngle.angle_s), this->mUnk_2A0);
    this->mVel.x = x;
    this->mVel.z = z;

    this->func_ov000_02098838();

    VecFx32_Copy(&this->mPos, &this->mPrevPos);
    VecFx32_Add(&this->mPos, &this->mVel, &this->mPos);

    if (this->func_ov032_0211f9c4()) {
        this->SetState(ActorKeeseState_8);
    } else if (func_02016b8c(&this->mPos, data_027e0ce0->func_01fff148(0), 0x3000, this->mAngle, 0x1000, 1)) {
        this->SetState(ActorKeeseState_2);
    }
}

void ActorKeese::func_ov032_0211f054() {
    this->mTimer.Set(0, gRandom.Next32(31) + 30);
}

void ActorKeese::func_ov032_0211f0a8() {
    this->func_ov032_0211f93c(&this->mUnk_5C.mInitialPos, 0x38E);

    if (this->mTimer.HasExpired()) {
        VecFx32 *vec = data_027e0ce0->func_01fff148(0x0);
        if (func_02016b8c(&this->mPos, vec, 0x3000, this->mAngle, 0x1000, 0x1)) {
            this->SetState(ActorKeeseState_2);
        }
    }

    if (this->func_ov032_0211f9c4()) {
        this->SetState(ActorKeeseState_8);
    } else {
        if (this->mTimer.HasExpired() && (this->mUnk_46 & 0x1C)) {
            this->mAngle = func_01ffbbe0(this->mUnk_2AC.mUnk_0C.vec.x, this->mUnk_2AC.mUnk_0C.vec.z);
            this->SetState(ActorKeeseState_0);
        } else if (func_01ff9258(this->mUnk_5C.mInitialPos.x - this->mPos.x, this->mUnk_5C.mInitialPos.z - this->mPos.z) <
                   0x800) {
            this->SetState(ActorKeeseState_0);
        }
    }
    this->func_ov000_0209a008(this->mUnk_2A0, this->mAngle.angle_s);
}

// non-matching
void ActorKeese::func_ov032_0211f1f0() {}

void ActorKeese::func_ov032_0211f1f4() {
    bool temp_r4 = this->func_ov032_0211f93c(data_027e0ce0->func_01fff148(0x0), 0xB6);

    if (this->mUnk_5C.mParams[1] == 0x1) {
        VecFx32 sp00;
        this->mUnk_22C.mUnk_00->mTable.GetPtr(this->mUnk_22C.mUnk_04)->vfunc_0C(&sp00);

        if (func_01ff9258(this->mPos.x - sp00.x, this->mPos.z - sp00.z) > 0x2000) {
            this->func_ov032_0211e380();
            goto end;
        }
    }

    if (func_01ff9258(this->mPos.x - this->mUnk_5C.mInitialPos.x, this->mPos.z - this->mUnk_5C.mInitialPos.z) > 0x2000) {
        this->SetState(ActorKeeseState_3);
    } else if (this->func_ov032_0211f9c4()) {
        this->SetState(ActorKeeseState_8);
    } else if (temp_r4 || this->mUnk_46 & 0x1C) {
        this->func_ov032_0211e380();
    }

end:
    this->Actor::func_ov000_0209a008(this->mUnk_2A0, this->mAngle.angle_s);
}

void ActorKeese::func_ov032_0211f300() {
    this->mUnk_248.func_ov000_02097bec();
}

void ActorKeese::func_ov032_0211f310() {
    this->Actor_Derived2::func_ov000_020992dc();

    if (GET_FLAG(this->mFlags, ActorFlag_5)) {
        if (this->mUnk_48 <= 0x0) {
            this->vfunc_54(0x0);
        } else {
            Timer *pTimer = &this->mUnk_268.mUnk_08;

            if (pTimer->HasReachedMaxU()) {
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

void ActorKeese::func_ov032_0211f3ac() {
    this->Actor::func_ov017_020bf634(&this->mUnk_248.mUnk_10, data_ov000_020aecf4[0], data_ov000_020aecfc[0]);

    this->mUnk_248.func_ov000_02097bec();

    this->mUnk_120.vfunc_28()->mUnk_04 = FX_F32_TO_FX32(1.2f);
    this->mUnk_2C                      = 0x7B;
}

void ActorKeese::func_ov032_0211f404() {
    this->func_ov017_020bf688();

    if (GET_FLAG(this->mFlags, ActorFlag_5)) {
        if (this->mUnk_48 <= 0x0) {
            this->Actor::func_ov000_020984d0();
            this->Actor::func_ov017_020bf3e0(0x1, FX_F32_TO_FX32(0.0f));

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

    this->mUnk_120.vfunc_28()->mUnk_04 = FX_F32_TO_FX32(0.8f);
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
        VecFx32_Init(FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f), &this->mUnk_248.mUnk_10);

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

void ActorKeese::func_ov032_0211f614() {
    MapObjRef sp4             = this->mUnk_2D0.moRef;
    Vec2bCpp sp0              = sp4.GetUnk02();
    MapObjectUnkSKDI *temp_r0 = (MapObjectUnkSKDI *) gpMapObjManager->func_01fff498(sp0);

    if (temp_r0->vfunc_40() == MapObjUnkSKDIState_2 || this->mUnk_22A != 0) {
        this->func_ov032_0211e380();
    } else {
        this->func_ov032_0211f93c(&temp_r0->mPos, 0x38E);
        this->func_ov000_0209a008(this->mUnk_2A0, this->mAngle.angle_s);
    }
}

void ActorKeese::func_ov032_0211f6bc() {
    ActorParams params;
    VecFx32 spC;
    u32 sp8;
    RefStruct sp4;

    this->mUnk_278.func_ov000_020a0334();

    for (ActorKeese_284 *ptr = this->mUnk_284; ptr != &this->mUnk_284[ARRAY_LEN(this->mUnk_284)]; ptr++) {
        ptr->func_ov000_020a0334();
    }

    UNSET_FLAG(this->mFlags, ActorFlag_Visible);
    this->func_ov000_0209862c(0);

    params.mUnk_28.Reset();
    params.func_ov000_020975f8();
    params.mUnk_28 = this->mRef;

    spC = this->mPos;
    spC.y += FX_F32_TO_FX32(2.0f);
    fx32 var_r4 = this->mUnk_5C.mInitialPos.y;

    u32 *psp8 = (u32 *) &sp8;
    func_01fff05c(psp8, data_027e0cd8->mUnk_0C, &this->mPos);

    bool var_r5_2 = false;
    if ((*psp8 & 0x1F) == 0x0F && ((*psp8 >> 5) & 0x03) == 2) {
        var_r5_2 = true;
    }

    if (var_r5_2) {
        var_r4 = data_027e0cd8->mUnk_0C->vfunc_28(&spC, 1, 0);
    }

    spC.y = var_r4;
    VecFx32_Copy(&spC, &params.mInitialPos);
    params.mParams[0] = this->mUnk_5C.mParams[0];

    Actor::func_ov000_020973f4(&sp4, &data_ov000_020b539c_eur, ActorId_Keese, &params, 0);
    this->mUnk_2D4 = sp4;
}

void ActorKeese::func_ov032_0211f804() {
    Actor *actor = gpActorManager->func_01fff3b4(this->mUnk_2D4);

    switch (this->mUnk_228) {
        case 0x0:
            if (actor != NULL) {
                break;
            }

            this->mTimer.Set(0, 30);
            this->mUnk_228++;
            break;

        case 0x1: {
            if (this->mTimer.HasExpired()) {
                VecFx32 vec = this->mPos;
                vec.y -= FX_F32_TO_FX32(1.0f);

                Actor::func_ov017_020c26f8(0x2, &vec, 0x1, true);

                this->mTimer.Set(0, 10);
                this->mUnk_228++;
            }

            break;
        }

        case 0x2:
            if (this->mTimer.HasExpired()) {
                this->SetState(ActorKeeseState_9);
            }

            break;

        default:
            break;
    }
}

bool ActorKeese::func_ov032_0211f93c(VecFx32 *param1, unk32 param2) {
    VecFx32 sp0;

    func_01ffb714(param1, &this->mPos, &sp0);
    func_01ff916c(&this->mUnk_2A0, this->mUnk_2A4, 0xA4);
    func_01ff916c(&this->mPos.y, this->mUnk_29C, 0xA4);
    func_01ff930c(&this->mAngle.angle_s, func_01ffbbe0(sp0.x, sp0.z), param2);

    if (VecFx32_Dot(&sp0, &this->mVel) < 0) {
        return true;
    }

    return false;
}

bool ActorKeese::func_ov032_0211f9c4() {
    if (this->mUnk_22A != 0x0) {
        return false;
    }

    UnkStruct_ov032_0212251c sp04;
    STACK_PAD(4);

    MapObject *pMapObj = sp04.func_020170ac(&this->mPos);
    if (pMapObj == NULL || func_01ff9258(pMapObj->mPos.x - this->mPos.x, pMapObj->mPos.z - this->mPos.z) > 0x3000) {
        return false;
    }

    this->mUnk_2D0 = pMapObj->mRef;
    return true;
}

bool ActorKeese::func_ov032_0211fa4c(unk32 param1) {
    STACK_PAD(0x08);

    if (param1 == 0x01) {
        return false;
    }

    if (this->mUnk_22A != 0x01) {
        if (this->mUnk_22A != 0x02) {
            return false;
        }

        data_027e0ce0->func_ov000_0208bc1c(param1, 0x01, 0x06, 0x00, 0x00, 0x00);
        return true;
    }

    data_027e0ce0->func_ov000_0208bc1c(param1, 0x01, 0x08, 0x00, 0x00, 0x00);
    return true;
}

void ActorKeese::func_ov032_0211faf0(Actor *param1, G3d_RenderState *param2) {
    ActorKeese *thisx               = (ActorKeese *) param1;
    G3d_RenderObject *pRenderObject = param2->renderObj;
    s32 var_r1                      = param2->flag & 0x10 ? param2->currentBoneMtxId : -1;

    if (var_r1 != thisx->mUnk_0B0.mUnk_6C) {
        return;
    }

    if (pRenderObject->mUnk_25 == 0x02) {
        param2->callbackSegment[6] = 3;
        pRenderObject->mUnk_25     = 0x03;
    } else if (pRenderObject->mUnk_25 == 0x03) {
        MtxFx43 sp30;
        MtxFx43 sp0;

        G3d_GetCurrentMtx(&sp30, 0);
        func_01ffad5c(&sp30, &data_027e0964, &sp0);

        VecFx32 vec;
        vec.x = sp0._30;
        vec.z = sp0._32;
        vec.y = sp0._31;
        VecFx32_Copy(&vec, &thisx->mUnk_2C4.vec);

        param2->callbackSegment[6] = 2;
        pRenderObject->mUnk_25     = 0x02;
    }
}

UnkStruct_ov032_0212251c::UnkStruct_ov032_0212251c() :
    UnkStruct_ov000_020b34c4(MapObjectId_Torch) {}

bool UnkStruct_ov032_0212251c::vfunc_00(MapObject *param1) {
    return this->UnkStruct_ov000_020b34c4::vfunc_00(param1) &&
           ((MapObjectUnkSKDI *) param1)->vfunc_40() == MapObjUnkSKDIState_1;
}

ActorKeese_284::ActorKeese_284() :
    UnkSystem7(NULL),
    mUnk_04(-0x1),
    mUnk_08(0x0) {}
