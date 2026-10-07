#include "Actor/ActorItemTornado.hpp"
#include "CommonFuncs.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e0958.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e09c0.hpp"
#include "Unknown/UnkStruct_027e0cec.hpp"
#include "Unknown/UnkStruct_027e0d38.hpp"
#include "Unknown/UnkStruct_ov000_020b4ec4.hpp"

struct UnkStruct_ov031_020e5d18_00 {
    Actor *mUnk_00;
    u8 mUnk_04[0x14];
};

extern char *data_ov031_02110a88;
extern Cylinder data_ov031_02112fdc;

DECL_PROFILE(ActorProfileItemTornado);

Actor *ActorProfileItemTornado::Create() {
    return new(HeapIndex_2) ActorItemTornado();
}

ActorProfileItemTornado::ActorProfileItemTornado() :
    ActorProfile(ActorId_ItemTornado) {
    this->mUnk_04.Init(FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.25f), FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.20f));
}

// non-matching
ActorItemTornado::ActorItemTornado() :
    mUnk_94(data_027e0ce0->mUnk_1C->func_ov000_0208ed30(0x0, 0x1, data_ov031_02110a88)),
    mUnk_F4(&this->mUnk_114, this->mUnk_94.mpModel),
    mUnk_134(&this->mUnk_154, this->mUnk_94.mpModel),
    mUnk_17C(NULL),
    mUnk_1CC(0x0),
    mUnk_1D1(this->mUnk_94.func_ov000_02057ee0()->numMat),
    mUnk_1D2(0x4),
    mUnk_1D4(0x2),
    mUnk_1D6(0x4),
    mUnk_1D8(0x0),
    mUnk_1DC(0x0) {
    this->mUnk_94.func_ov000_02057c98(&this->mUnk_F4);
    this->mUnk_94.func_ov000_02057c98(&this->mUnk_134);

    this->mState = ActorItemTornadoState_0;
    this->mTimer.Reset();
}

bool ActorItemTornado::Init(unk32 param1) {
    u16 tmp = (u16) this->mAngle.angle_s;

    this->mUnk_44 = 0x1F;

    this->mUnk_34          = &data_ov031_02112fdc;
    this->mUnk_194.mUnk_04 = this->mRef;

    this->mUnk_194.mUnk_0C.Init(this->mPos.x, this->mPos.y + FX_F32_TO_FX32(0.85f), this->mPos.z, FX_F32_TO_FX32(0.8f));

    this->mVel.x = FX_MUL(SIN(tmp), 0x385);
    this->mVel.z = FX_MUL(COS(tmp), 0x385);
    this->mVel.y = FX_F32_TO_FX32(0.0f);

    return true;
}

void ActorItemTornado::SetState(ActorState state) {
    switch (state) {
        case ActorItemTornadoState_1:
            this->mUnk_1DC = 0x1000;
            data_027e0cec->func_ov000_020a00d4(this->mUnk_1E0, 0x8FD, 0x8FB, 0x8FC, &this->mPos, 0x2);
            break;
        case ActorItemTornadoState_2:
            data_027e09a8->func_ov000_02071b30(0x8D6D, &this->mPos, 0x0);

            for (UnkStruct_PlayerGet_ec *ptr = this->mUnk_1E0; ptr != this->mUnk_1E0 + 0x3; ++ptr) {
                ptr->func_ov000_020a0334();
            }

            data_027e0cec->func_ov000_0209feac(0x8F9, &this->mPos, 0x2, 0x0, 0x0);
            data_027e0cec->func_ov000_0209feac(0x8FA, &this->mPos, 0x2, 0x0, 0x0);
            break;
        default:
            break;
    }

    this->mState = state;
    this->mTimer.Reset();
}

// non-matching
void ActorItemTornado::func_ov031_020e5d18(unk32 param1) {
    VecFx32_Copy(&this->mPos, &this->mPrevPos);
    VecFx32_Add(&this->mPos, &this->mVel, &this->mPos);

    if (this->mUnk_1D2 != 0x0) {
        --this->mUnk_1D2;
    }
    if (this->mUnk_1D4 != 0x0) {
        --this->mUnk_1D4;
    }

    if (param1 == 0x0) {
        ++this->mUnk_1D8;
    }
    this->mTimer.Update();

    switch (this->mState) {
        case ActorItemTornadoState_0:
            data_027e09a8->func_ov000_02071d34(&this->mRef, 0x8D6C, &this->mPos, 0x0);
            if (this->mTimer.GetValue() < 10) {
                this->mUnk_1DC += 0x199;
                break;
            }
            this->SetState(ActorItemTornadoState_1);
            break;
        case ActorItemTornadoState_1:
            data_027e09a8->func_ov000_02071d34(&this->mRef, 0x8D6C, &this->mPos, 0x0);

            for (UnkStruct_PlayerGet_ec *ptr = this->mUnk_1E0; ptr != this->mUnk_1E0 + 0x3; ++ptr) {
                UnkSystem7_UnkStruct_00 *data = ptr->mUnk_00;

                if (data != NULL) {
                    data->mUnk_28.x = this->mPos.x + data->mUnk_20->mUnk_00->mUnk_04.x;
                    data->mUnk_28.y = this->mPos.y + data->mUnk_20->mUnk_00->mUnk_04.y;
                    data->mUnk_28.z = this->mPos.z + data->mUnk_20->mUnk_00->mUnk_04.z;
                }
            }

            if (!data_027e0d38->func_ov031_020d9bec() &&
                (((u16) this->mUnk_1CC == 0x0 && (u32) this->mUnk_1D8 >= 0x28U) || !this->func_ov017_020beeec(0))) {
                this->func_ov031_020e6314(0x4);
                break;
            }
            if (func_ov000_02080998(&this->mPos)) {
                this->func_ov031_020e6314(0x4);
                break;
            }
            if (this->mUnk_1CC != 0) {
                if (this->mUnk_1CE != 0) {
                    func_01ff993c(&this->mPos, &this->mUnk_1C0, 0x266);
                    func_01ff916c(&this->mUnk_1DC, 0x1000, 0x19A);
                }
                --this->mUnk_1CC;
                if (this->mUnk_1CC == 0) {
                    this->func_ov031_020e6314(this->mUnk_1D6);
                }
            }
            break;
        case ActorItemTornadoState_2:
            if (this->mTimer.value >= this->mUnk_1D6) {
                this->Kill();
            } else if (this->mUnk_1D6 != 0) {
                if (this->mUnk_1CE != 0) {
                    func_01ff993c(&this->mPos, &this->mUnk_1C0, 0x266);
                }
                this->mUnk_1DC -= func_01ffb66c(0x1000, this->mUnk_1D6);
                if (this->mUnk_1DC <= 0) {
                    this->Kill();
                }
            }
            break;
        default:
            break;
    }
    this->mUnk_F4.func_01ffc3b4();
    this->mUnk_134.func_01ffc3b4();

    if (this->mState != ActorItemTornadoState_0 && this->mState != ActorItemTornadoState_1) {
        return;
    }
    if (this->mUnk_1CC != 0x0) {
        return;
    }

    if ((this->mUnk_1CF == 0) && (this->mUnk_1D2 == 0)) {
        unk32 var_r3 = 2;
        if (this->mUnk_1D0 & 1) {
            var_r3 |= 1;
        }
        if (this->func_ov000_02098ab4(0x0, 0xA, var_r3, &this->mVel) == 0x0) {
            VecFx32_Init(this->mPos.x, this->mPos.y + 0xD9A, this->mPos.z, &this->mUnk_194.mUnk_0C.pos);
            data_027e09c0->func_ov000_0207e58c(this->mRef, 0x4, 0x0, &this->mUnk_194);
        }
    }
    unk32 var_r0;
    if (this->mUnk_1D4 != 0) {
        var_r0 = 0x0;
    } else {
        UnkStruct_ov031_020e5d18_00 var_sp0C;
        var_sp0C.mUnk_00 = NULL;
        func_01ffe6c4(&var_sp0C.mUnk_00, this->mRef, &this->mPos, &this->mPrevPos, (s32) (s16) this->mUnk_44, &this->mPos,
                      &this->mUnk_174);
        Actor *actor  = var_sp0C.mUnk_00;
        unk32 temp_r5 = actor->func_ov000_0207df88(this->mUnk_30, 4);
        var_r0        = temp_r5 | actor->func_ov000_0207e294(this->mUnk_30);
        this->mUnk_46 = var_r0;
    }
    if (var_r0 == 0x0) {
        return;
    }
    if (this->mUnk_1CC == 0x0) {
        this->mVel.x   = FX_F32_TO_FX32(0.0f);
        this->mVel.y   = FX_F32_TO_FX32(0.0f);
        this->mVel.z   = FX_F32_TO_FX32(0.0f);
        this->mUnk_1CC = 0x1;
    }
}
void ActorItemTornado::Update() {
    this->func_ov031_020e5d18(0x0);
}

void ActorItemTornado::vfunc_24() {
    if (!this->mUnk_1CE && this->mState != ActorItemTornadoState_2 &&
        (this->mVel.x != FX_F32_TO_FX32(0.0f) || this->mVel.y != FX_F32_TO_FX32(0.0f) ||
         this->mVel.z != FX_F32_TO_FX32(0.0f))) {
        return;
    }
    this->func_ov031_020e5d18(0x1);
}

// non-matching
void ActorItemTornado::vfunc_2C(Actor_vfunc_30 *param1) {
    if (this->mUnk_1DC <= 0x0) {
        return;
    }
    if (this->mState != ActorItemTornadoState_0 && !this->func_01fff5d0(param1, 0x0)) {
        return;
    }
    unk32 var_r0 = this->mUnk_1DC;
    unk32 var_r1;
    if (var_r0 == FX_F32_TO_FX32(1.0f)) {
        var_r1 = 0x1F;
    } else {
        var_r0 = var_r0 * 0x1F + FX_F32_TO_FX32(0.5f);
        var_r1 = var_r0 >> 0xC;
        if (var_r1 > 0x1F) {
            var_r1 = 0x1F;
        } else if (var_r1 < 0) {
            var_r1 = 0;
        }
    }
    if (var_r1 <= 0) {
        return;
    }

    G3d_Model *model = this->mUnk_94.mpModel;
    func_0200ef9c(model);

    if (this->mUnk_1D1 >= 0x0) {
        for (unk32 index = 0x0; index < (u32) this->mUnk_1D1; ++index) {
            func_0200ea38(model, index, data_ov000_020b4ec4.func_01ffc768(0x4));
        }
    }

    VecFx32 vec = this->mPos;

    if (this->mState == ActorItemTornadoState_0) {
        vec.y += ROUND_FX32(((FX_F32_TO_FX32(1.0f) - this->mUnk_1DC) << 0xC));
    }
    data_027e0958->func_ov000_02058fc4(&this->mUnk_17C, &vec);
}

bool ActorItemTornado::func_ov031_020e62c0() {
    if (this->mState != ActorItemTornadoState_2 && !this->mUnk_1CF) {
        this->mUnk_1CF = true;
        if (VecFx32_TryNormalize(&this->mVel)) {
            func_01ff93c0(&this->mVel, 0x400);
        }
        return true;
    }
    return false;
}

bool ActorItemTornado::func_ov031_020e6314(u16 param1) {
    if (this->mState == ActorItemTornadoState_2) {
        return false;
    }
    this->mUnk_1D6 = param1;
    this->SetState(ActorItemTornadoState_2);
    return true;
}

// non-matching
bool ActorItemTornado::func_ov031_020e6340(VecFx32 *param1, unk16 param2, unk16 param3) {
    if (this->mState == ActorItemTornadoState_2) {
        return false;
    }

    VecFx32_Init(param1->x, param1->y, param1->z, &this->mUnk_1C0);
    this->mUnk_1CC = param2;
    this->mUnk_1D6 = param3;
    this->mUnk_1CE = true;
    VecFx32_Init(FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f), &this->mVel);

    return true;
}

bool ActorItemTornado::func_ov031_020e6398() {
    if (this->mState == ActorItemTornadoState_1) {
        if (VecFx32_TryNormalize(&this->mVel)) {
            func_01ff93c0(&this->mVel, -0x266);
        }
        if (this->mUnk_1D0 < 0xFF) {
            ++this->mUnk_1D0;
        }
        this->mUnk_1D8 = 0x0;

        data_027e09a8->func_ov000_02071b30(0x8D6F, &this->mPos, 0x0);
        return true;
    }
    return false;
}
