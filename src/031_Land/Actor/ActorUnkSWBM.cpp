#include "Actor/ActorUnkSWBM.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e0958.hpp"
#include "Unknown/UnkStruct_027e095c.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e09c0.hpp"
#include "Unknown/UnkStruct_027e0cec.hpp"
#include "Unknown/UnkStruct_027e0d34.hpp"
#include "Unknown/UnkStruct_ov000_020b4ec4.hpp"

struct UnkStruct_ov031_020e5d18_00 {
    Actor *mUnk_00;
    u8 mUnk_04[0x14];
};

extern "C" void func_01ffe6c4(Actor **, ActorRef, VecFx32 *, VecFx32 *, s32, VecFx32 *, UnkStruct_ov031_Items_00_Base *);
extern "C" bool func_ov000_02080998(VecFx32 *);

extern "C" void /*GX_*/ func_02024a84(Mat3p *param1);
extern "C" void FlushGfxQueue();

static const Cylinder data_ov031_02113114(FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.35f));

// non-matching
bool ActorUnkSWBM_94::vfunc_08(const UnkStruct_ov031_020f3310 *param1) {
    return (((u32) param1->mUnk_04->mUnk_24[param1->mUnk_00->mUnk_06] >> 0x16) & 0x1) != 0x1;
}

bool ActorUnkSWBM_94::vfunc_0C(const UnkStruct_ov031_020e54d4 *param1, unk32 *param2, unk32 param3) {
    return (((u32) param2[0x2] >> 0x16) & 0x1) != 0x1;
}

bool ActorUnkSWBM_98::vfunc_0C(Actor *param1, VecFx32 *vector) {
    bool retValue = this->UnkStruct_ov031_Items_01::vfunc_0C(param1, vector);
    if (!retValue) {
        return retValue;
    }

    u16 angle = this->mUnk_2C->mAngle;

    vector->x = SIN(angle);
    vector->y = FLOAT_TO_FX32(0.0f);
    vector->z = COS(angle);
    return retValue;
}

void ActorUnkSWBM_98::vfunc_10(Actor *actor) {
    switch (GET_FLAG(actor->mFlags, ActorFlag_17)) {
        case false:
            ActorUnkSWBM *actorSWBM = this->mUnk_2C;
            if (actorSWBM->mState != ActorUnkSWBMState_0) {
                break;
            }
            actorSWBM->func_ov031_020e6e84(ActorUnkSWBMState_1);
            break;
        case true:
            this->mUnk_2C->func_ov031_020e6d80(0x8C98);
            break;
    }
}

// non-matching
void ActorUnkSWBM_C8::vfunc_00(unk32 param1, unk32 param2, unk32 param3) {
    ActorUnkSWBM *actor = this->mUnk_14;

    FlushGfxQueue();
    REG_GFX_FIFO_DIFFUSE_AMBIENT_REFLECT = 0x1084FFFF;
    VecFx32 *textureParam                = data_027e095c->mUnk_000;
    REG_GFX_FIFO_TEXTURE_PARAM           = textureParam[0x8].z;

    unk32 var_r2 = 1;
    if (((textureParam[0x8].z >> 0x1A) & 7) != 2) {
        var_r2 = 0;
    }
    REG_GFX_FIFO_TEXTURE_PALETTE = ((u32) (textureParam[0x8].y << 0x10) >> 0xD) >> (4 - var_r2);

    Mat3p mat;

    u16 angle = actor->mAngle;
    Mat3p_InitYRotation(&mat, SIN(angle), COS(angle));

    s16 var_r8 = 0xB33;
    s32 var_r9 = 0x1F - ((0xE - actor->mUnk_0E0) * 2);
    u16 var_r7 = 0xB33;
    ActorUnkSWBM::func_ov031_020e718c(&actor->mPos, &mat, var_r9, 0xB33, 0xB33, actor->mUnk_108);

    unk16 var_r10 = actor->mUnk_10A;
    if ((s32) var_r10 >= 3) {
        var_r10 = 3;
    }
    for (unk32 var_r6 = 0; var_r6 < (s32) var_r10; ++var_r6) {
        var_r8 += 0x11F;
        var_r7 += 0x23D;
        var_r9 -= 5;
        ActorUnkSWBM::func_ov031_020e718c(&actor->mUnk_0E4[var_r6], &mat, var_r9, var_r8, var_r7, actor->mUnk_108);
    }
}

DECL_PROFILE(ActorProfileUnkSWBM);

Actor *ActorProfileUnkSWBM::Create() {
    return new(HeapIndex_2) ActorUnkSWBM();
}

ActorProfileUnkSWBM::ActorProfileUnkSWBM() :
    ActorProfile(ActorId_SWBM) {
    VecFx32_Init(FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), &this->mUnk_04.pos);
    this->mUnk_04.size = FLOAT_TO_FX32(0.35f);
}

ActorUnkSWBM::ActorUnkSWBM() :
    mUnk_098(this),
    mUnk_0C8(this),
    mUnk_0E0(0xE),
    mUnk_108(0x0),
    mUnk_10A(0x0) {
    MI_CpuFill32(0x0, this->mUnk_0E4, ARRAY_LEN(this->mUnk_0E4) * sizeof *this->mUnk_0E4);
    this->mState  = ActorUnkSWBMState_0;
    this->mUnk_52 = 0xFFFF;
    this->mUnk_50 = 0x0000;
}

bool ActorUnkSWBM::vfunc_18(unk32 param1) {
    this->mUnk_44          = 0x1F;
    this->mUnk_098.mUnk_04 = this->mRef;

    this->mUnk_34 = (Cylinder *) &data_ov031_02113114;
    VecFx32_Copy(&this->mPos, &this->mUnk_098.mUnk_0C.pos);
    this->mUnk_098.mUnk_0C.size = FLOAT_TO_FX32(0.35f);

    this->mVel.x = MUL_FX32(SIN((u16) this->mAngle), 0xB33);
    this->mVel.z = MUL_FX32(COS((u16) this->mAngle), 0xB33);
    this->mVel.y = FLOAT_TO_FX32(0.0f);
    return true;
}

void ActorUnkSWBM::func_ov031_020e6d48() {
    switch (this->mState) {
        case ActorUnkSWBMState_1:
            if (this->mUnk_0E0 != 6) {
                return;
            }
        case ActorUnkSWBMState_0:
            this->mState = ActorUnkSWBMState_0;
            this->func_ov031_020e6d80(0x8C98);
            break;
        default:
            break;
    }
}

void ActorUnkSWBM::func_ov031_020e6d80(unk32 param1) {
    if (this->mState != ActorUnkSWBMState_0) {
        return;
    }

    if (param1 >= 0x0) {
        data_027e09a8->func_ov000_02071b30((u16) param1, &this->mPos, 0x0);
    }

    if (!data_027e0d34->func_ov031_020d9714()) {
        VecFx16 vecSp08;

        data_027e0cec->func_ov000_0209feac(0x8E0, &this->mPos, 0x1, 0x0, 0x0);

        s16 angle = this->mAngle - DEG_TO_ANG(180);

        vecSp08.x = SIN((u16) angle);
        vecSp08.y = FLOAT_TO_FX32(0.0f);
        vecSp08.z = COS((u16) angle);

        data_027e0cec->func_ov000_0209ff24(0x8E1, &this->mPos, &vecSp08, 0x1);
    }

    this->func_ov031_020e6e84(ActorUnkSWBMState_1);
    this->mUnk_0E0 = 0x3;
}

void ActorUnkSWBM::func_ov031_020e6e84(ActorState state) {
    switch (state) {
        case ActorUnkSWBMState_2:
            UNSET_FLAG(this->mFlags, ActorFlag_Alive);
            break;
        case ActorUnkSWBMState_1:
            if (this->mUnk_0E0 > 0x6) {
                this->mUnk_0E0 = 0x6;
            }

            this->mVel.x /= 3;
            this->mVel.z /= 3;
            break;
    }
    this->mState  = state;
    this->mUnk_52 = 0xFFFF;
    this->mUnk_50 = 0x0000;
}

// non-matching
void ActorUnkSWBM::vfunc_20() {
    VecFx32_Copy(&this->mPos, &this->mPrevPos);
    VecFx32_Add(&this->mPos, &this->mVel, &this->mPos);

    for (VecFx32 *vec = &this->mUnk_0E4[ARRAY_LEN(this->mUnk_0E4) - 1]; vec > &this->mUnk_0E4[0]; --vec) {
        VecFx32_Copy(vec - 1, vec);
    }

    VecFx32_Copy(&this->mPrevPos, &this->mUnk_0E4[0]);
    ++this->mUnk_10A;

    if (this->mState != ActorUnkSWBMState_2) {
        --this->mUnk_0E0;
        if (this->mUnk_0E0 <= 0) {
            this->func_ov031_020e6e84(ActorUnkSWBMState_2);
        } else {
            s16 newVal = this->mUnk_108 + 0x666;
            if (newVal >= 0xB33) {
                newVal = 0xB33;
            }
            this->mUnk_108 = newVal;
        }
    }

    this->IsTimerOut();

    if (this->mState != ActorUnkSWBMState_2) {
        if (!Actor::func_ov017_020beeec(0x0)) {
            this->func_ov031_020e6e84(ActorUnkSWBMState_2);
            return;
        }
        if (func_ov000_02080998(&this->mPos)) {
            this->func_ov031_020e6e84(ActorUnkSWBMState_2);
            return;
        }
    }

    switch (this->mState) {
        case ActorUnkSWBMState_0:

            if (this->func_ov000_02098ab4(0x4, 0x19, 0x2, &this->mVel)) {
                this->func_ov031_020e6d80(-0x1);
            } else {
                VecFx32_Copy(&this->mPos, &this->mUnk_098.mUnk_0C.pos);
                data_027e09c0->func_ov000_0207e58c(this->mRef, 0x7, 0x4, &this->mUnk_098);
            }
            //! TODO : find this
            UnkStruct_ov031_020e5d18_00 actorSpC;
            actorSpC.mUnk_00 = NULL;

            func_01ffe6c4((Actor **) &actorSpC, this->mRef, &this->mPos, &this->mPrevPos, (s16) this->mUnk_44, &this->mPos,
                          &this->mUnk_094);

            unk32 val = ((Actor *) &actorSpC)->func_ov000_0207df88(this->mUnk_30, 0x7) |
                        ((Actor *) &actorSpC)->func_ov000_0207e294(this->mUnk_30);
            this->mUnk_46 = val;
            if (val == 0x0) {
                return;
            }

            this->func_ov031_020e6d80(-0x1);
            break;
        case ActorUnkSWBMState_1:
            break;
    }
}

void ActorUnkSWBM::vfunc_24() {
    if (this->mState == ActorUnkSWBMState_0) {
        this->func_ov031_020e6e84(ActorUnkSWBMState_1);
        return;
    }
    this->vfunc_20();
}

// non-matching
void ActorUnkSWBM::func_ov031_020e718c(VecFx32 *param0, Mat3p *param1, s32 param2, s16 param3, u16 param4, s16 param5) {
    if (param2 <= 0) {
        return;
    }
    REG_GFX_FIFO_POLYGON_ATTR     = data_ov000_020b4ec4.func_01ffc768(0x4) << 0x18 | 0x80 | (param2 << 0x10);
    REG_GFX_FIFO_MATRIX_PUSH      = false;
    REG_GFX_FIFO_MATRIX_TRANSLATE = param0->x;
    REG_GFX_FIFO_MATRIX_TRANSLATE = param0->y;
    REG_GFX_FIFO_MATRIX_TRANSLATE = param0->z;

    func_02024a84(param1);

    REG_GFX_FIFO_POLYGONS_BEGIN  = true;
    REG_GFX_FIFO_VERTEX_TEXCOORD = 0x02000200;

    u16 var1 = (u16) (s16) -param3;
    u16 var2 = (u16) param3;
    u16 var3 = (u16) (s16) -param5;

    REG_GFX_FIFO_VERTEX_16 = var1;
    REG_GFX_FIFO_VERTEX_16 = var3;

    REG_GFX_FIFO_VERTEX_TEXCOORD = 0x200;
    REG_GFX_FIFO_VERTEX_XZ       = var1 | (param4 << 0x10);

    REG_GFX_FIFO_VERTEX_TEXCOORD = 0x0;
    REG_GFX_FIFO_VERTEX_XZ       = var2 | (param4 << 0x10);

    REG_GFX_FIFO_VERTEX_TEXCOORD = 0x02000000;
    REG_GFX_FIFO_VERTEX_XZ       = var2 | (var3 << 0x10);

    REG_GFX_FIFO_POLYGONS_END = false;
    REG_GFX_FIFO_MATRIX_POP   = true;
}

void ActorUnkSWBM::vfunc_2C(unk32 param1) {
    if (this->mState == ActorUnkSWBMState_2) {
        return;
    }
    if (!this->func_01fff5d0(param1, 0x0)) {
        return;
    }
    data_027e0958->func_ov000_02058fc4(&this->mUnk_0C8, &this->mPos);
}
