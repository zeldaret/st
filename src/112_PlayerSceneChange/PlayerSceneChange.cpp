#include "Player/PlayerSceneChange.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorUnk_ov000_020a8bb0.hpp"
#include "MapObject/MapObjectManager.hpp"
#include "MapObject/MapObjectUnkDRTY.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_027e0cdc.hpp"

#include <nitro/math.h>

extern "C" void func_ov000_0205ca74(unk32);
extern "C" void func_ov000_0205d65c(void *, Vec3p *, Vec3p *, u32);

ARM PlayerSceneChange::PlayerSceneChange() {
    this->mUnk_68 = this->mUnk_2c->mUnk_14C;
    this->mUnk_6C = -1;

    this->mUnk_70.coords = this->mUnk_34->coords;
    this->mUnk_7C        = 0;

    this->mUnk_80.coords = this->mUnk_34->coords;
    this->mUnk_8C        = 0;

    this->mUnk_90            = 0;
    *((u32 *) this->mUnk_94) = 0;
    this->mUnk_98            = -1;
    this->mUnk_9C.x          = 0;
    this->mUnk_9C.y          = 0;
    this->mUnk_9C.z          = 0;
    this->mUnk_A8            = 0x8000;
    this->mUnk_AA            = 0x8000;
    this->mUnk_AC            = false;
    this->mUnk_AD            = false;
    this->mUnk_AE            = 0x8000;
}

ARM PlayerSceneChange::~PlayerSceneChange() {
    UnkStruct_ov000_0208f820_28 *pUnk_28 = this->mUnk_28;
    pUnk_28->mUnk_40 &= 0xFFFD;

    if (pUnk_28->mUnk_40 == 0) {
        pUnk_28->mUnk_38.~UnkStruct_PlayerGet_64();
    }

    func_ov000_0205ca74(this->mUnk_98);
}

ARM s16 PlayerSceneChange::func_ov112_02184bbc(s16 param1) {
    // fake match?
    if ((u32) (*(u16 *) &this->mUnk_90 << 0x10) >> 0x1E == 1) {
        Actor *iVar1 = gpActorManager->func_01fff3b4(this->mUnk_90);

        if (iVar1 != NULL) {
            return iVar1->mAngle;
        }
    } else if (this->mUnk_94[0] == 0x1000) {
        return this->mUnk_AE;
    }

    return param1;
}

extern "C" bool func_ov096_02179c14();
extern "C" void func_ov034_02121de4(void *);
extern q4 data_02040964[];
extern q4 data_0203e964[];
extern q4 data_02041964[];
extern q4 data_0203f964[];
extern q4 data_0203feb0[];
extern "C" void func_01ffb714(Vec3p *, Vec3p *, void *);
extern "C" void func_01ff9638(void *, s16);
extern "C" void func_01ff9770(void *);
extern "C" void func_ov000_02072fd0(void *);
extern unk32 data_ov000_020b3000;
extern "C" bool func_ov000_02080998(Vec3p *);
extern "C" void func_01ff930c(UnkStruct_ov000_0208f820_40 *, unk16, unk32);

// https://decomp.me/scratch/c7PhN
ARM void PlayerSceneChange::vfunc_0c(UnkStruct_PlayerGet_vfunc_0c_param1 *param1) {
    q4 *pSinCosTable = gSinCosTable;

    switch (param1->mUnk_04) {
        case 0x3C: {
            int iVar19 = data_027e0cd8->mUnk_0c->func_ov000_02080658((this->mUnk_2c->mUnk_148 >> 16) & 0x3F, &this->mUnk_54);
            if (iVar19 != 0 && this->mUnk_28->mUnk_94 != 0 && func_ov096_02179c14()) {
                this->mUnk_54.mUnk_10 = 1;
            }

            switch (this->mUnk_68) {
                case 0x08:
                case 0x09:
                case 0x22:
                case 0x23:
                    this->mUnk_6C = 0x0F;
                    break;
                case 0x0F:
                case 0x10:
                case 0x11:
                case 0x12:
                case 0x13:
                case 0x14:
                case 0x21:
                case 0x24:
                case 0x25:
                    this->mUnk_6C = 0x0A;
                    break;
                case 0x1C:
                    this->mUnk_6C = 0x05;
                    break;
                case 0x19:
                    this->mUnk_6C = 0x00;
                    break;
                default:
                    this->mUnk_6C = 0x0D;
                    break;
            }

            Vec3p *temp_r8  = this->mUnk_34;
            this->mUnk_70.x = temp_r8->x;
            this->mUnk_70.y = temp_r8->y;
            this->mUnk_70.z = temp_r8->z;

            this->mUnk_A8 = -0x8000;
            this->mUnk_AA = -0x8000;
            this->mUnk_AC = false;

            switch (this->mUnk_68) {
                case 0x08:
                    this->mUnk_70.x = temp_r8->x + MUL_Q20(data_02040964[0], FLOAT_TO_Q20(2.0f));
                    this->mUnk_70.z = temp_r8->z + MUL_Q20(data_02040964[1], FLOAT_TO_Q20(2.0f));
                    break;
                case 0x09:
                    this->mUnk_70.x = temp_r8->x + MUL_Q20(data_0203e964[0], FLOAT_TO_Q20(2.0f));
                    this->mUnk_70.z = temp_r8->z + MUL_Q20(data_0203e964[1], FLOAT_TO_Q20(2.0f));
                    break;
                case 0x22:
                    this->mUnk_70.x = temp_r8->x + MUL_Q20(data_02041964[0], FLOAT_TO_Q20(2.0f));
                    this->mUnk_70.z = temp_r8->z + MUL_Q20(data_02041964[1], FLOAT_TO_Q20(2.0f));
                    break;
                case 0x23:
                    this->mUnk_70.x = temp_r8->x + MUL_Q20(data_0203f964[0], FLOAT_TO_Q20(2.0f));
                    this->mUnk_70.z = temp_r8->z + MUL_Q20(data_0203f964[1], FLOAT_TO_Q20(2.0f));
                    break;
                default:
                    if (this->mUnk_2c->mUnk_150 == 0x1000) {
                        MapObjectUnkDRTY *pDRTY =
                            (MapObjectUnkDRTY *) gpMapObjManager->func_01fff498(this->mUnk_2c->mUnk_150 >> 0x10, 0);

                        if (pDRTY != NULL) {
                            pDRTY->func_ov000_0209d6ac((Vec3p *) &this->mUnk_70);

                            if (this->mUnk_68 == 0x19) {
                                pDRTY->func_ov034_02121d84();
                                this->mUnk_8C = pDRTY->mUnk_38;
                            } else if (pDRTY->GetMapObjectId() == MapObjectId_DRTY) {
                                *(u32 *) this->mUnk_94 = pDRTY->mUnk_38;

                                switch (pDRTY->mUnk_CC) {
                                    case 1:
                                        this->mUnk_AE = FLOAT_TO_Q20(-5.778f);
                                        break;
                                    case 2:
                                        this->mUnk_AE = FLOAT_TO_Q20(5.7778f);
                                        break;
                                    default:
                                        this->mUnk_AE = FLOAT_TO_Q20(-8.0002f);
                                        break;
                                }
                            }
                        }
                    } else {
                        if (((u32) ((u16) this->mUnk_2c->mUnk_150 << 0x10) >> 0x1E) == 1) {
                            ActorUnk_ov000_020a8bb0 *temp_r0_6 =
                                (ActorUnk_ov000_020a8bb0 *) gpActorManager->func_01fff3b4(this->mUnk_2c->mUnk_150);

                            if (temp_r0_6 != NULL) {
                                this->mUnk_70.x = temp_r0_6->mPos.x;
                                this->mUnk_70.y = temp_r0_6->mPos.y;
                                this->mUnk_70.z = temp_r0_6->mPos.z;

                                if (temp_r0_6->GetActorId() == ActorId_GTTG) {
                                    this->mUnk_90 = temp_r0_6->mRef.index;
                                    this->mUnk_AA = temp_r0_6->mAngle;
                                    this->mUnk_A8 = temp_r0_6->mAngle;
                                }
                            }
                        }
                    }
                    break;
            }

            s16 stack;
            func_ov000_0205d65c(&stack, this->mUnk_34, (Vec3p *) &this->mUnk_70, this->mUnk_40->mUnk_00);
            this->mUnk_40->mUnk_00 = stack;

            switch (this->mUnk_68) {
                case 0x11:
                case 0x12:
                case 0x13:
                case 0x14: {
                    s32 var_r1_2 = this->mUnk_A8 - this->mUnk_40->mUnk_00;

                    if (var_r1_2 < 0) {
                        var_r1_2 = -var_r1_2;
                    }

                    if (var_r1_2 >= 0x1555) {
                        this->mUnk_AC = true;
                    }

                    unk32 sp78;
                    unk16 temp_r8_2 = this->mUnk_A8 - 0x8000;
                    func_01ffb714(this->mUnk_34, (Vec3p *) &this->mUnk_70, &sp78);
                    func_01ff9638(&sp78, -temp_r8_2);
                    this->mUnk_9C.x = -sp78;
                    this->mUnk_9C.y = 0;
                    this->mUnk_9C.z = 0;
                    func_01ff9638(&this->mUnk_9C, temp_r8_2);

                    q20 temp_r0_11 = Vec3p_Length(&this->mUnk_9C);
                    if (temp_r0_11 > 0x800) {
                        if ((((temp_r0_11 - 0x800) / 10) + ((temp_r0_11 - 0x800) >> 0x1F)) <= 0) {
                            this->mUnk_9C.x = 0;
                            this->mUnk_9C.y = 0;
                            this->mUnk_9C.z = 0;
                        } else {
                            func_01ff9770(&this->mUnk_9C);
                            Vec3p_Add(this->mUnk_3C, &this->mUnk_9C, this->mUnk_3C);
                        }
                    } else {
                        this->mUnk_9C.x = 0;
                        this->mUnk_9C.y = 0;
                        this->mUnk_9C.z = 0;
                    }
                } break;
                default:
                    break;
            }

            switch (this->mUnk_68) {
                case 0x10:
                case 0x11:
                case 0x12:
                case 0x13:
                case 0x14:
                case 0x15:
                case 0x1C:
                case 0x21:
                case 0x25:
                case 0x33:
                    this->mUnk_7C = FLOAT_TO_Q20(1 / 2);
                    break;
                case 0x19:
                    this->mUnk_7C = FLOAT_TO_Q20(0.3f);
                    break;
                default:
                    this->mUnk_7C = FLOAT_TO_Q20(0.8f);
                    break;
            }

            if (this->mUnk_28->mUnk_98 != NULL) {
                this->mUnk_28->mUnk_98->func_ov093_0216f76c((Vec3p *) &this->mUnk_70, this->mUnk_68);
            }

            break;
        }
        case 0x3D: {
            Vec3p *pVec = this->mUnk_38;
            pVec->x     = 0;
            pVec->y     = 0;
            pVec->z     = 0;
            break;
        }
        case 0x3E: {
            if (this->mUnk_44 != NULL) {
                this->mUnk_28->func_ov000_0208d12c();
            }

            this->mUnk_6C = 0x5F;

            if (this->mUnk_8C != 0x1000) {
                return;
            }

            MapObject *target = gpMapObjManager->func_01fff498(this->mUnk_8C >> 16, 0);
            if (target != NULL && target->GetMapObjectId() == MapObjectId_WPHL) {
                func_ov034_02121de4(target);
            }

            break;
        }
        case 0x3F:
            if (param1->mUnk_00 != 0x3c) {
                this->mUnk_68 = data_027e09a4->func_ov000_02070554();
            }

            SceneIndex eScene = data_027e09a4->mSceneIndex;
            if (eScene == SceneIndex_tekiya07) {
                this->mUnk_68 = 0x18;
            } else {
                switch (*data_027e09a4->func_ov000_02070538()) {
                    case SceneIndex_d_water27:
                        if (eScene == SceneIndex_b_water) {
                            this->mUnk_68 = 0x18;
                        }
                        break;
                    case SceneIndex_b_water:
                        if (eScene == SceneIndex_d_water27) {
                            this->mUnk_68 = 0x10;
                        }
                        break;
                    default:
                        break;
                }
            }

            if ((this->mUnk_24->mUnk_104 & 0x10) || this->mUnk_28->pItemManager->mTearsAmount == 3) {
                struct {
                    unk32 actorId;
                    void *ptr;
                } local_9c;
                local_9c.ptr     = &data_ov000_020b3000;
                local_9c.actorId = ActorId_RPMT;
                Actor **ppAVar12 = gpActorManager->func_01fff350(&local_9c, gpActorManager->mActorTable);

                if (ppAVar12 == gpActorManager->mUnk_08) {
                    struct {
                        unk8 mUnk_04;
                        unk8 pad[4];
                        unk32 mUnk_00;
                        unk8 pad2[38];
                        unk8 mUnk_05;
                        unk8 mUnk_06;
                    } stack;
                    func_ov000_02072fd0(&stack);
                    stack.mUnk_00 = -1;
                    stack.mUnk_04 = 0x6C;
                    stack.mUnk_05 = 0;
                    stack.mUnk_06 = 0;
                    this->mUnk_98 = data_027e09b8->func_ov000_02073388(&stack);
                }
            }

            this->mUnk_6C = -1;

            Vec3p *pVec     = this->mUnk_34;
            this->mUnk_70.x = pVec->x;
            this->mUnk_70.y = pVec->y;
            this->mUnk_70.z = pVec->z;
            this->mUnk_80.x = pVec->x;
            this->mUnk_80.y = pVec->y;
            this->mUnk_80.z = pVec->z;

            switch (this->mUnk_68) {
                case 0x15:
                case 0x16:
                case 0x1C:
                    pVec = this->mUnk_34;
                    pVec->x += MUL_Q20(FLOAT_TO_Q20(-1.1003f), SIN2(pSinCosTable, this->mUnk_40->mUnk_00));
                    pVec->z += MUL_Q20(FLOAT_TO_Q20(-1.1003f), COS2(pSinCosTable, this->mUnk_40->mUnk_00));
                    break;
                case 0x08:
                case 0x09:
                case 0x0A:
                case 0x0B:
                case 0x0C:
                case 0x0D:
                case 0x0E:
                case 0x17:
                case 0x18:
                case 0x19:
                case 0x1A:
                case 0x1B:
                case 0x1D:
                case 0x1E:
                case 0x1F:
                case 0x20:
                case 0x22:
                case 0x23:
                    pVec = this->mUnk_34;
                    pVec->x += MUL_Q20(FLOAT_TO_Q20(-1.9001f), SIN2(pSinCosTable, this->mUnk_40->mUnk_00));
                    pVec->z += MUL_Q20(FLOAT_TO_Q20(-1.9001f), COS2(pSinCosTable, this->mUnk_40->mUnk_00));
                    break;
                case 0x0F:
                case 0x10:
                case 0x11:
                case 0x12:
                case 0x13:
                case 0x14:
                case 0x21:
                case 0x24:
                case 0x25:
                    pVec = this->mUnk_34;
                    pVec->x += MUL_Q20(FLOAT_TO_Q20(-1.0002f), SIN2(pSinCosTable, this->mUnk_40->mUnk_00));
                    pVec->z += MUL_Q20(FLOAT_TO_Q20(-1.0002f), COS2(pSinCosTable, this->mUnk_40->mUnk_00));
                    break;
                default:
                    // pVec = this->mUnk_34;
                    // pVec->x += MUL_Q20(FLOAT_TO_Q20(-1.7001f), SIN2(pSinCosTable, this->mUnk_40->mUnk_00));
                    // pVec->z += MUL_Q20(FLOAT_TO_Q20(-1.7001f), COS2(pSinCosTable, this->mUnk_40->mUnk_00));
                    break;
            }

            switch (this->mUnk_68) {
                case 0x15:
                case 0x16:
                case 0x1C:
                case 0x33:
                case 0x3B:
                    if (func_ov000_02080998(this->mUnk_34)) {
                        break;
                    }

                case 0x1A:
                case 0x1B:
                case 0x1D:
                case 0x1E:
                case 0x1F:
                default:
                    UnkStruct_027e0cd8_0c *ptr = data_027e0cd8->mUnk_0c;

                    switch (this->mUnk_68) {
                        case 0x0F:
                        case 0x11:
                        case 0x13:
                        case 0x24: {
                            q20 posY = ptr->vfunc_28(this->mUnk_34, 0, 0);
                            if (this->mUnk_34->y >= posY) {
                                this->mUnk_34->y = posY;
                            }
                            break;
                        }
                        default: {
                            q20 posY = ptr->vfunc_28(this->mUnk_34, 0, 0);
                            if (this->mUnk_34->y <= posY) {
                                this->mUnk_34->y = posY;
                            }
                            break;
                        }
                    }
                    break;
            }

            switch (this->mUnk_68) {
                case 0x15:
                case 0x16:
                case 0x1C:
                case 0x33:
                case 0x3B:
                    this->mUnk_7C = FLOAT_TO_Q20(0.5f);
                    break;
                default:
                    this->mUnk_7C = FLOAT_TO_Q20(0.8f);
                    break;
            }

            break;
    }
}

// https://decomp.me/scratch/gX5Rb
ARM void PlayerSceneChange::vfunc_10(unk32 param1, unk32 param2) {
    switch (param1) {
        case 0x3C:
            if (this->mUnk_68 == 0x19) {
                if (this->func_ov000_020914b0(0x3C, (Vec3p *) &this->mUnk_70, this->mUnk_7C)) {
                    this->mUnk_30->func_ov000_020921e4(0x3D);
                }

                Vec3p *temp_r1  = this->mUnk_34;
                this->mUnk_80.x = temp_r1->x;
                this->mUnk_80.y = temp_r1->y;
                this->mUnk_80.z = temp_r1->z;
            } else {
                if (this->mUnk_6C > 0) {
                    this->mUnk_6C--;
                } else if (this->mUnk_6C == 0 && data_027e09a4->func_ov000_02070a9c(&this->mUnk_54)) {
                    this->mUnk_6C = -1;
                }

                switch (this->mUnk_68) {
                    case 0x11:
                    case 0x13:
                        this->mUnk_AA += 0x200;
                        break;
                    case 0x12:
                    case 0x14:
                        this->mUnk_AA -= 0x200;
                    default:
                        break;
                }

                if (this->func_ov000_020914b0(0x3C, (Vec3p *) &this->mUnk_70, this->mUnk_7C)) {
                    s16 var_r1_2 = this->mUnk_40->mUnk_00;
                    bool var_r3  = true;

                    switch (this->mUnk_68) {
                        case 0x08:
                        case 0x0F:
                        case 0x15:
                        case 0x17:
                        case 0x1B:
                        case 0x1F:
                        case 0x24:
                        case 0x33:
                            var_r1_2 = -0x8000;
                            break;
                        case 0x11:
                        case 0x12:
                        case 0x13:
                        case 0x14:
                            var_r3 = false;

                            if (this->mUnk_AC) {
                                // var_r1_2               = this->mUnk_A8;
                                this->mUnk_AC          = false;
                                this->mUnk_40->mUnk_00 = this->mUnk_A8;
                            }

                            break;
                        case 0x09:
                        case 0x10:
                        case 0x16:
                        case 0x18:
                        case 0x1C:
                        case 0x20:
                        case 0x21:
                        case 0x25:
                        case 0x3B:
                            var_r1_2 = 0;
                            break;
                        case 0x22:
                            var_r1_2 = -0x4000;
                            break;
                        case 0x23:
                            var_r1_2 = 0x4000;
                            break;
                        default:
                            break;
                    }

                    if (var_r3) {
                        var_r1_2 = this->func_ov112_02184bbc(0);
                    }

                    // s16 iVar3 = var_r1_2 >> 4;
                    // q20 uVar6 = gSinCosTable[iVar3 * 2] * 0x2000;
                    // q20 uVar5 = gSinCosTable[iVar3 * 2 + 1] * 0x2000;
                    // q20 iVar2 = (gSinCosTable[iVar3 * 2 + 1] >> 0x13) + (0xfffff7ff < uVar5);

                    // this->mUnk_70.x +=
                    //     (((uVar6 + 0x800) >> 0xc) | (gSinCosTable[iVar3 * 2] >> 0x13) + (0xfffff7ff < uVar6)) * 0x100000;
                    // this->mUnk_70.z += (((uVar5 + 0x800) >> 0xc) | iVar2 << 0x14);

                    s32 idx   = (((s32) var_r1_2) >> 4) << 1;
                    s32 sin16 = (s16) data_0203feb0[idx];
                    s32 cos16 = (s16) data_0203feb0[idx + 1];

                    this->mUnk_70.x += (((sin16 << 13) + 0x800) >> 12);
                    this->mUnk_70.z += (((cos16 << 13) + 0x800) >> 12);
                }

                switch (this->mUnk_68) {
                    case 0x21:
                    case 0x25: {
                        s16 value = this->func_ov112_02184bbc(0);
                        q4 sin    = SIN2(data_0203feb0, value);
                        q4 cos    = COS2(data_0203feb0, value);

                        this->mUnk_70.x += MUL_Q20(sin, 0x19A);
                        this->mUnk_70.z += MUL_Q20(cos, 0x19A);
                        break;
                    }

                    case 0x10:
                    case 0x11:
                    case 0x12:
                    case 0x13:
                    case 0x14:
                        if (this->mUnk_AC && this->mUnk_30->mUnk_70 >= 8) {
                            this->mUnk_AC = false;
                        }

                        if (!this->mUnk_AC) {
                            func_01ff930c(this->mUnk_40, this->mUnk_AA, 0x200);

                            Vec3p *temp_r2_4 = this->mUnk_34;
                            this->mUnk_70.x  = temp_r2_4->x;
                            this->mUnk_70.y  = temp_r2_4->y;
                            this->mUnk_70.z  = temp_r2_4->z;

                            q4 sin = SIN2(data_0203feb0, this->mUnk_40->mUnk_00);
                            q4 cos = COS2(data_0203feb0, this->mUnk_40->mUnk_00);
                            this->mUnk_70.x += MUL_Q20(sin, 0x19A);
                            this->mUnk_70.z += MUL_Q20(cos, 0x19A);
                        }
                        break;
                    default:
                        break;
                }

                switch (this->mUnk_68) {
                    case 0x11:
                    case 0x12:
                    case 0x13:
                    case 0x14:
                        if (this->mUnk_30->mUnk_70 < 0x0A) {
                            Vec3p_Add(this->mUnk_3C, &this->mUnk_9C, this->mUnk_3C);
                        }
                        break;
                    default:
                        break;
                }
            }

            switch (this->mUnk_68) {
                case 0x08:
                case 0x09:
                case 0x10:
                case 0x12:
                case 0x14:
                case 0x21:
                case 0x25:
                    this->mUnk_2c->mUnk_9C = this->mUnk_34->y + 0xFFFFFCCD;
                    break;
                default:
                    this->mUnk_2c->mUnk_9C = this->mUnk_34->y;
                    break;
            }
            break;
        case 0x3D: {
            func_01ff930c(this->mUnk_40, 0, 0xE39);
            Vec3p *temp_r2_8 = this->mUnk_34;

            this->mUnk_80.x = temp_r2_8->x;
            this->mUnk_80.y = temp_r2_8->y;
            this->mUnk_80.z = temp_r2_8->z;

            if (this->mUnk_30->mUnk_70 < 0x14) {
                return;
            }

            this->mUnk_30->func_ov000_020921e4(0x3E);
            break;
        }
        case 0x3E:
            if (this->mUnk_6C > 0) {
                this->mUnk_6C--;

                if (this->mUnk_6C < 0x37) {
                    this->mUnk_28->mUnk_40 |= 0x02;
                    break;
                }

                func_01ff930c(this->mUnk_40, 0, 0xE39);
                this->mUnk_38->y = 0x66;
            } else if (this->mUnk_6C == 0 && data_027e09a4->func_ov000_02072154(&this->mUnk_54, this->mUnk_68)) {
                this->mUnk_6C = -1;
            }

            break;
        case 0x3F: {
            switch (this->mUnk_68) {
                case 0x08:
                case 0x09:
                case 0x10:
                case 0x12:
                case 0x14:
                case 0x21:
                case 0x22:
                case 0x23:
                case 0x25:
                    break;
                default:
                    this->mUnk_2c->mUnk_9C = this->mUnk_34->y;
                    break;
            }

            bool temp_r5_2 = this->func_ov000_020914b0(0x3F, (Vec3p *) &this->mUnk_70, this->mUnk_7C);

            switch (this->mUnk_68) {
                case 0x0F:
                case 0x11:
                case 0x13:
                case 0x24: {
                    UnkStruct_027e0cd8_0c *temp_r0_13 = data_027e0cd8->mUnk_0c;
                    q20 temp_r0_14                    = temp_r0_13->vfunc_28(this->mUnk_34, 0, 0);
                    Vec3p *temp_r2_9                  = this->mUnk_34;

                    if (temp_r2_9->y < temp_r0_14) {
                        temp_r2_9->y = temp_r0_14;
                    }

                    break;
                }
                default:
                    break;
            }

            if (this->mUnk_AD) {
                UnkStruct_ov000_0208f820_24 *temp_r1_6 = this->mUnk_24;
                temp_r1_6->mUnk_104 &= 0xFFFB;
                temp_r1_6->mUnk_FE = 3;
                this->mUnk_30->func_ov000_020921e4(1);
            } else if (temp_r5_2) {
                if (!this->func_ov000_02091e68(param2) && data_02049b18.mUnk_06.mTouchControl.mState.touch) {
                    func_ov000_0205ca74(this->mUnk_98);
                    this->mUnk_98 = -1;
                    q4 sin        = SIN2(data_0203feb0, this->mUnk_40->mUnk_00);
                    q4 cos        = COS2(data_0203feb0, this->mUnk_40->mUnk_00);
                    this->mUnk_70.x += MUL_Q20(sin, FLOAT_TO_Q20(2.0f));
                    this->mUnk_70.z += MUL_Q20(cos, FLOAT_TO_Q20(2.0f));
                    this->mUnk_AD = true;
                    return;
                } else {
                    this->mUnk_30->func_ov000_020921e4(0);
                }
            }

            break;
        }
        default:
            break;
    }
}

ARM bool PlayerSceneChange::vfunc_1c(Vec3p *param1) {
    if (data_027e0cdc->func_ov000_02082a28(1) == 0) {
        switch (this->mUnk_30->mUnk_68) {
            case 0x3C:
            case 0x3D:
            case 0x3E:
            case 0x3F: {
                Vec3p unk_80;

                unk_80.x = this->mUnk_80.x;
                unk_80.y = this->mUnk_80.y;
                unk_80.z = this->mUnk_80.z;

                param1->x = unk_80.x;
                param1->y = unk_80.y;
                param1->z = unk_80.z;
                return true;
            }
            default:
                break;
        }
    }

    return this->UnkStruct_ov000_0208f820::vfunc_1c(param1);
}
