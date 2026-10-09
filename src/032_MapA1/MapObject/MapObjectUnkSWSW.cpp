#include "MapObject/MapObjectUnkSWSW.hpp"
#include "CommonFuncs.hpp"
#include "profile.hpp"

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorUnkNSSW.hpp"
#include "System/Random.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"

extern char data_ov032_02121ef4;
extern char data_ov032_02121f04;
extern unk32 data_ov032_02121f14; // ig these variables should be 0x10-byte long
extern unk32 data_ov032_02121f24; // same as above
extern MapObjectProfile_Derived2_20_Base data_ov032_02122ad8;
extern MapObject_10 data_ov032_02122b8c;

DECL_PROFILE(MapObjectProfileUnkSWSW);

MapObject *MapObjectProfileUnkSWSW::Create() {
    return new(HeapIndex_ITCM) MapObjectUnkSWSW();
}

MapObjectProfileUnkSWSW::MapObjectProfileUnkSWSW() :
    MapObjectProfileUnkSWSW_Base(MapObjectId_SWSW) {
    this->mUnk_D4.mUnk_08 = 0x7007;

    VecFx32_Init(FX_F32_TO_FX32(-0.5002f), FX_F32_TO_FX32(-1.0002), FX_F32_TO_FX32(-1.0002), &this->mUnk_D4.mUnk_0C);
    VecFx32_Init(FX_F32_TO_FX32(0.5f), FX_F32_TO_FX32(1.0f), FX_F32_TO_FX32(0.0f), &this->mUnk_D4.mUnk_18);

    this->mUnk_D4.mUnk_04 |= 0x2;
    this->mUnk_06 = -0x1;
    this->mUnk_1E &= 0xFFFE;
    this->mUnk_20.mUnk_15 = 0x1;
}

MapObjectUnkSWSW_40::MapObjectUnkSWSW_40(G3d_Model *pModel) :
    ModelRender(pModel),
    mUnk_60(0x0),
    mUnk_64(0x0),
    mUnk_68(0x0),
    mUnk_6A(0x0) {

    this->mUnk_60 = this->ModelRenderBase::func_ov000_02057f18(&data_ov032_02121f14);
    this->mUnk_64 = this->ModelRenderBase::func_ov000_02057f18(&data_ov032_02121f24);

    this->ModelRender::func_ov000_02057c38(0x6, 0x2);
}

void MapObjectUnkSWSW_40::vfunc_1C(G3d_RenderState *param1) {
    if (param1->currentCmd[1] == this->mUnk_60) {
        param1->mUnk_B4->mUnk_00 &= ~0x2;
        MtxFx33_InitXRotation(&param1->mUnk_B4->mUnk_28, SIN((u16) this->mUnk_68), COS((u16) this->mUnk_68));
    }

    if (param1->currentCmd[1] != this->mUnk_64) {
        return;
    }

    param1->mUnk_B4->mUnk_00 &= ~0x2;
    MtxFx33_InitXRotation(&param1->mUnk_B4->mUnk_28, SIN((u16) this->mUnk_6A), COS((u16) this->mUnk_6A));
}

struct UnkStruct_ov032_021210a0 {
    /* 00 */ s16 mUnk_00;
    /* 02 */ s16 mUnk_02;
    /* 04 */ u16 mUnk_04;
    /* 06 */ u16 mUnk_06;
    /* 08 */
};

// non-matching (stack not used)
void MapObjectUnkSWSW_40::func_ov032_021210a0(fx32 param1) {
    UnkStruct_ov032_021210a0 stack;
    if (param1 < 0) {
        param1 = 0;
    }
    if (param1 > 0x1000) {
        param1 = 0x1000;
    }
    fx32 temp_r2  = -0xB6 - (((param1 * 0xE39) << 0x4) >> 0x10);
    fx32 temp_r1  = (param1 << 0xD) >> 0xC;
    stack.mUnk_06 = temp_r2;
    stack.mUnk_04 = temp_r1;
    stack.mUnk_02 = stack.mUnk_06;
    stack.mUnk_00 = stack.mUnk_04;
    this->mUnk_68 = stack.mUnk_02;
    this->mUnk_6A = stack.mUnk_00;
}

MapObjectUnkSWSW::MapObjectUnkSWSW() :
    mUnk_040(G3d_GetUnkPtr(GET_PROFILE_20_50(MapObjectProfileUnkSWSW), &data_ov032_02121ef4)),
    mUnk_0AC(&this->mUnk_0CC, NULL),
    mUnk_0EC(FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.5f), FX_F32_TO_FX32(-0.4202f)),
    mUnk_0F8(NULL),
    mUnk_0FC(0x4),
    mUnk_100(0, 0),
    mUnk_104(0x0),
    mUnk_105(0x0),
    mUnk_10C(0x0),
    mUnk_10E(0, 0),
    mUnk_114(NULL) {
    this->mUnk_10 = &data_ov032_02122b8c;
}

bool MapObjectUnkSWSW::Init() {
    Vec2bCpp sp00;

    UnkStruct_027e0cd8_0C_Base *data_027e0cd8_0C = data_027e0cd8->mUnk_0C;

    func_01ffedac(&sp00, &this->mPos);
    if (data_027e0cd8_0C->func_ov000_02080180(&sp00) == 0x14) {
        this->mPos.y = FX_F32_TO_FX32(0.0f);
    }

    if (this->mUnk_20.mParams[2] != 0x0) {
        this->mPos.y += FX_MUL(this->mUnk_20.mParams[2] << 0xC, 0x1333);
    }

    this->mUnk_0AC.mpModel           = this->mUnk_040.mpModel;
    unk32 param2                     = data_ov032_02122ad8.func_ov000_02058a24();
    UnkStruct_ov000_02058a84 *param1 = data_ov032_02122ad8.func_ov000_02058a84(0x3, &data_ov032_02121f04);

    this->mUnk_0AC.func_ov000_020577a4(param1, param2, 0x1);

    this->mUnk_040.func_ov000_02057cb0();
    this->mUnk_040.func_ov000_02057c98(&this->mUnk_0AC);

    this->mUnk_0AC.func_ov000_020577f8(0x0);

    this->mUnk_104 = 0x0;
    this->mUnk_105 = 0x0;

    if (this->mUnk_20.mParams[3] == 0x1 || this->mUnk_20.mParams[3] == 0x3) {
        this->mUnk_104 = 0x1;
    }

    if ((u16) (this->mUnk_20.mParams[3] + 0xFFFE) <= 0x1) {
        this->mUnk_105 = 0x1;
    }

    if (this->mUnk_105 != 0x0 && this->MapObject::func_ov000_0209d29c(0x1)) {
        this->vfunc_3C(0x3);
        return true;
    }

    if (this->mUnk_20.mParams[0] == 0x0) {
        VecFx32 sp04;
        VecFx32_Init(this->mPos.x + this->mUnk_0EC.vec.x, this->mPos.y + this->mUnk_0EC.vec.y,
                     this->mPos.z + this->mUnk_0EC.vec.z, &sp04);

        ActorUnkNSSW *actorNSSW = this->func_ov032_02121dc8(&sp04);
        this->mUnk_0F8          = actorNSSW;
        this->mUnk_114          = actorNSSW;

        this->vfunc_3C(0x0);

        this->mUnk_108 = FX_F32_TO_FX32(0.0f);

        this->MapObject::func_ov000_0209d2c4(0x1, true);

        if (this->mUnk_104 != 0x0) {
            this->MapObject::func_ov000_0209d2c4(0x0, false);
        }
    } else {
        this->vfunc_3C(0x2);

        this->mUnk_108 = FX_F32_TO_FX32(1.0f);

        this->MapObject::func_ov000_0209d2c4(0x0, true);

        if (this->mUnk_104 != 0x0) {
            this->MapObject::func_ov000_0209d2c4(0x1, false);
        }
    }

    return true;
}

// non-matching
void MapObjectUnkSWSW::vfunc_08() {
    switch (this->mUnk_0FC) {
        case 0x0:
            func_01ff9218(&this->mUnk_108, 0x0, 0x99A);
            func_01ff91b8(&this->mUnk_10C, 0x0, 0x4CD);
            break;

        case 0x2: {
            if (this->mUnk_100.max != 0 && this->mUnk_100.HasReachedMax()) {
                this->MapObject::func_ov000_0209d2c4(0x0, true);

                if (this->mUnk_104 != 0x0) {
                    this->MapObject::func_ov000_0209d2c4(0x1, false);
                }
            }

            if (this->mUnk_0F8 == NULL && this->mUnk_20.mParams[1] != 0x0) {
                this->vfunc_3C(0x1);
                return;
            }

            VecFx32 *vec = data_027e0ce0->func_01fff148(0x0);
            VecFx32 sp48;
            VecFx32_Init(vec->x - this->mPos.x, vec->y - this->mPos.y, vec->z - this->mPos.z, &sp48);
            VecFx32_Normalize(&sp48, &sp48);

            VecFx32 sp3C;
            VecFx32_Init(FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(1.0f), &sp3C);

            bool var_r5 = false;
            if (VecFx32_Dot(&sp48, &sp3C) > FX_F32_TO_FX32(0.4f)) {
                s16 param = (s16) func_01ffbbe0(sp48.x, sp48.z);
                func_01ff91b8(&this->mUnk_10C, param, 0x333);

                var_r5 = true;
            } else {
                func_01ff91b8(&this->mUnk_10C, 0x0, 0x333);
            }

            if (var_r5 && this->mUnk_10E.max != 0) {
                fx16 var_r3 = COS((u16) (this->mUnk_10E.value * 0xFFFF / this->mUnk_10E.max));

                if (var_r3 < 0) {
                    var_r3 = -var_r3;
                }

                this->mUnk_108 = var_r3;

                this->mUnk_10E.Update();

                if (this->mUnk_10E.HasReachedMax()) {
                    this->mUnk_10E.Init();
                }
            } else {
                if (gRandom.Next32(0x33) != 0x0) {
                    this->mUnk_10E.max = 0;
                } else {
                    this->mUnk_10E.max = gRandom.Next32(41) + 10;
                }

                this->mUnk_10E.value = 0;

                if (!var_r5) {
                    this->mUnk_10E.Init();
                    func_01ff9218(&this->mUnk_108, 0x0, 0x800);
                } else {
                    func_01ff9218(&this->mUnk_108, 0x1000, 0x800);
                }
            }
            break;
        }

        case 0x1: {
            VecFx32 sp30;
            VecFx32 sp24;
            VecFx32 sp18;
            VecFx32 sp0C;
            if (this->mUnk_100.HasReachedMax()) {
                VecFx32_Init(this->mPos.x + this->mUnk_0EC.vec.x, this->mPos.y + this->mUnk_0EC.vec.y,
                             this->mPos.z + this->mUnk_0EC.vec.z, &sp30);
                sp18 = sp30;

                ActorUnkNSSW *actorNSSW = this->mUnk_0F8;
                VecFx32_Copy(&sp18, &actorNSSW->mPos);
                VecFx32_Copy(&sp18, &actorNSSW->mPrevPos);

                this->MapObject::func_ov000_0209d2c4(0x1, true);
                if (this->mUnk_104 != 0x0) {
                    this->MapObject::func_ov000_0209d2c4(0x0, false);
                }

                this->vfunc_3C(0x0);
            } else {
                fx32 z = this->mPos.z + this->mUnk_0EC.vec.z +
                         func_02015a18(this->mUnk_100.max << 0xC, 0, -0x1000, 0, this->mUnk_100.value << 0xC, 0, 0);
                VecFx32_Init(this->mPos.x + this->mUnk_0EC.vec.x, this->mPos.y + this->mUnk_0EC.vec.y, z, &sp24);

                sp0C = sp24;

                ActorUnkNSSW *actorNSSW = this->mUnk_0F8;
                VecFx32_Copy(&sp0C, &actorNSSW->mPos);
                VecFx32_Copy(&sp0C, &actorNSSW->mPrevPos);
            }
            break;
        }

        case 0x3:
            func_01ff9218(&this->mUnk_108, 0x0, 0x99A);
            func_01ff91b8(&this->mUnk_10C, 0x0, 0x4CD);
            break;

        default:
            break;
    }

    this->mUnk_100.Update();
    this->mUnk_040.func_ov032_021210a0(this->mUnk_108);

    if (this->mUnk_10C > 0x2AAB) {
        this->mUnk_10C = 0x2AAB;
    }

    if (this->mUnk_10C < -0x2AAB) {
        this->mUnk_10C = -0x2AAB;
    }

    if (this->mUnk_114 != NULL) {
        (*(u16 *) &this->mUnk_20.mUnk_08) = this->mUnk_10C;
    }
    this->mAngle = this->mUnk_10C;
}

bool MapObjectUnkSWSW::vfunc_1C(RefStruct param1, unk32 param2, VecFx32 *param3) {
    if (this->mUnk_0FC != 0x2) {
        if (param1.common.type != 0x0) {
            Actor *actor = gpActorManager->func_01fff3b4(param1);

            if (actor != NULL) {
                if (actor->GetActorId() == ActorId_NSSW) {
                    return false;
                }
            }
        }

        return true;
    }

    if (param1.common.type != 0x0) {
        ActorUnkNSSW *actorNSSW = (ActorUnkNSSW *) gpActorManager->func_01fff3b4(param1);

        if (actorNSSW != NULL) {
            if (actorNSSW->GetActorId() == ActorId_NSSW) {
                if (actorNSSW->mUnk_0BC != 0x4) {
                    return true;
                }

                UnkAngleStruct angle;
                angle.angle_s = actorNSSW->mAngle.angle_s;
                VecFx32 *vec  = data_027e0ce0->func_01fff148(0x0);

                if (!func_02016ae0(&actorNSSW->mPos, vec, angle, 0x2AAB, 0x1)) {
                    return false;
                }

                this->mUnk_114 = actorNSSW;
                actorNSSW->func_ov032_02120c64(this);

                VecFx32 sp14;
                VecFx32 sp08;

                VecFx32_Init(this->mPos.x + this->mUnk_0EC.vec.x, this->mPos.y + this->mUnk_0EC.vec.y,
                             this->mPos.z + this->mUnk_0EC.vec.z, &sp14);
                sp08 = sp14;

                ActorUnkNSSW *nssw114 = this->mUnk_114;
                VecFx32_Init(sp08.x, sp08.y, sp08.z, &nssw114->mPos);
                VecFx32_Init(sp08.x, sp08.y, sp08.z, &nssw114->mPrevPos);

                this->vfunc_3C(0x0);

                this->MapObject::func_ov000_0209d2c4(0x1, true);

                if (this->mUnk_104 != 0x0) {
                    this->MapObject::func_ov000_0209d2c4(0x0, false);
                }

                data_027e09a8->func_ov000_02071b30(0x12A, &this->mPos, 0x0);

                if (this->mUnk_105 != 0x0) {
                    data_027e09a8->func_ov000_02071b30(0x12B, &this->mPos, 0x0);

                    this->vfunc_3C(0x3);
                }

                return false;
            }
        }
    }

    return true;
}

void MapObjectUnkSWSW::vfunc_38() {
    if (this->mUnk_0FC == 0x3) {
        this->mUnk_114 = NULL;
        return;
    }

    this->vfunc_3C(0x2);

    this->mUnk_100.Set(0, 15);
    this->mUnk_114 = NULL;
}

void MapObjectUnkSWSW::func_ov032_02121b90() {
    this->mUnk_0F8 = NULL;

    if (this->mUnk_114 != NULL) {
        if (this->mUnk_114->mUnk_184_eur != NULL && this != this->mUnk_114->mUnk_184_eur) {
            this->mUnk_114->mUnk_184_eur->func_ov032_02121b90();
        }

        this->mUnk_0F8               = this->mUnk_114;
        this->mUnk_114->mUnk_184_eur = this;
        this->mUnk_0F8->mUnk_188_eur = this;

        this->vfunc_3C(0x0);
        return;
    }

    if (this->mUnk_0FC != 0x2) {
        return;
    }

    if (this->mUnk_20.mParams[1] == 0x0) {
        return;
    }

    this->vfunc_3C(0x1);
}

// non-matching (last copies)
void MapObjectUnkSWSW::vfunc_3C(unk32 param1) {
    this->mUnk_0FC = param1;
    this->mUnk_100.Reset();

    switch (param1) {
        case 0x2:
            this->mUnk_100.Init();
            this->mUnk_0AC.func_ov000_020577f8(0x1000);
            break;

        case 0x1: {
            VecFx32 sp18;
            VecFx32 sp0C;
            VecFx32 sp00;

            VecFx32_Init(this->mPos.x + this->mUnk_0EC.vec.x, this->mPos.y + this->mUnk_0EC.vec.y,
                         this->mPos.z + this->mUnk_0EC.vec.z, &sp0C);

            ActorUnkNSSW *actorNSSW = this->func_ov032_02121dc8(&sp0C);
            this->mUnk_0F8          = actorNSSW;
            this->mUnk_114          = actorNSSW;

            this->mUnk_100.Set(0, 40);
            this->mUnk_0AC.func_ov000_020577f8(0x1000);

            VecFx32_Init(this->mPos.x + this->mUnk_0EC.vec.x, this->mPos.y + this->mUnk_0EC.vec.y,
                         this->mPos.z + this->mUnk_0EC.vec.z - FX_F32_TO_FX32(1.0f), &sp18);
            sp00 = sp18;

            ActorUnkNSSW *nssw0F8 = this->mUnk_0F8;
            VecFx32_Copy(&sp00, &nssw0F8->mPos);
            VecFx32_Copy(&sp00, &nssw0F8->mPrevPos);
            break;
        }

        case 0x0:
            this->mUnk_0AC.func_ov000_020577f8(0x1000);
            break;

        case 0x3:
            this->mUnk_0AC.func_ov000_020577f8(0x0);
            break;

        default:
            break;
    }
}

void MapObjectUnkSWSW::vfunc_14(unk32 param1) {
    VecFx32 vec;
    VecFx32_Init(this->mPos.x + this->mUnk_0EC.vec.x, this->mPos.y + this->mUnk_0EC.vec.y, this->mPos.z + this->mUnk_0EC.vec.z,
                 &vec);

    this->mUnk_040.func_01ffc6d4(this->mAngle, &vec);
}

struct UnkStack_ov032_02121dc8 {
    /* 00 */ RefStruct ref;
    /* 04 */ PAD(0x04, 0x08);
    /* 08 */
};

// non-matching (vec copy)
ActorUnkNSSW *MapObjectUnkSWSW::func_ov032_02121dc8(VecFx32 *param1) {
    ActorParams params;
    UnkStack_ov032_02121dc8 unk;

    params.mUnk_28 = 0;
    params.func_ov000_020975f8();

    params.mInitialAngle = this->mAngle.angle_s;
    params.mUnk_28       = this->mRef.Get32(); //! TODO: ref conflicts

    VecFx32_Init(param1->x, param1->y, param1->z, &params.mInitialPos);

    Actor::func_ov000_020973f4(&unk.ref, &data_ov000_020b539c_eur, ActorId_NSSW, &params, 0x0);

    ActorUnkNSSW *actor = (ActorUnkNSSW *) gpActorManager->func_01fff3b4(unk.ref);

    actor->mUnk_184_eur = this;
    actor->mUnk_188_eur = this;

    return actor;
}
