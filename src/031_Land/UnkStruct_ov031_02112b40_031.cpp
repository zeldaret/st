#include "Actor/ActorManager.hpp"
#include "CommonFuncs.hpp"
#include "MapObject/MapObjectManager.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "Unknown/UnkStruct_ov031_Items.hpp"
#include "global.h"
#include "nitro/fx.h"
#include "nitro/math.h"
#include "types.h"

unk32 UnkStruct_ov031_02112b40::func_ov031_020da584(vu32 param1) {
    switch (param1 & 0x1F) {
        case 7:
            return 0x8C96;
        case 6:
            return 0x8C97;
        case 9:
            return 0x8C98;
        default:
            break;
    }

    return 0x8C99;
}

void UnkStruct_ov031_02112b40::func_ov031_020da5ec() {
    this->mUnk_08   = -1;
    this->mUnk_0C.x = 0;
    this->mUnk_0C.y = 0;
    this->mUnk_0C.z = 0;
    this->mUnk_18   = 0x00;
    this->mUnk_1A   = false;
}

bool UnkStruct_ov031_02112b40::vfunc_08(const UnkStruct_ov031_020f3310 *param1, unk32 param2) {
#pragma unused(param2)

    if (((param1->mUnk_04->mUnk_24[param1->mUnk_00->mUnk_06] >> 0x16) & 0x01) == 0x01) {
        return false;
    }

    if (param1->mUnk_08.y > 0) {
        if (this->mUnk_1A) {
            return false;
        }
    } else {
        if (!this->mUnk_1A) {
            this->mUnk_08   = func_ov031_020da584(param1->mUnk_04->mUnk_24[param1->mUnk_00->mUnk_06]);
            this->mUnk_0C.x = param1->mUnk_08.x;
            this->mUnk_0C.y = param1->mUnk_08.y;
            this->mUnk_0C.z = param1->mUnk_08.z;
            this->mUnk_18 |= 0x01;
        }
    }

    return true;
}

bool UnkStruct_ov031_02112b40::vfunc_0C(RefStruct ref, UnkStruct_ov031_020e54d4 *param2, const VecFx32 *param3,
                                        const VecFx32 *param4) {
    RefStruct sp18[2];
    MapObjRef sp14[2];
    MapObjRef sp8;
    Vec2bCpp sp2;
    Vec2bCpp sp0;

    if (((param2->mUnk_08 >> 0x16) & 0x01) == 0x01) {
        return false;
    }

    if (this->mUnk_1A) {
        sp18[0] = ref;

        if (this->mUnk_04 == sp18[0].data) {
            return false;
        }

        if (sp18[0].common.unk_00 == 0x1000) {
            sp14[1]            = sp18[0].moRef;
            sp2                = sp14[1].GetUnk02();
            MapObject *pMapObj = gpMapObjManager->func_01fff498(sp2);

            if (pMapObj != NULL) {
                switch (pMapObj->GetMapObjectId()) {
                    case MapObjectId_DRTW:
                    case MapObjectId_DoorKey:
                    case MapObjectId_DoorClick:
                    case MapObjectId_DOPA:
                    case MapObjectId_DRHS:
                    case MapObjectId_DRST:
                    case MapObjectId_DRMC:
                    case MapObjectId_DoorSwitch:
                    case MapObjectId_DRVC:
                    case MapObjectId_DRTY:
                    case MapObjectId_DRTK:
                    case MapObjectId_DoorTouch:
                    case MapObjectId_DRSN:
                    case MapObjectId_DoorDangerSpawn:
                    case MapObjectId_DRBK:
                    case MapObjectId_GBDR:
                    case MapObjectId_TreasureSpawned:
                    case MapObjectId_TRLN:
                    case MapObjectId_TRWS:
                    case MapObjectId_TRLW:
                    case MapObjectId_TRLS:
                    case MapObjectId_TRLD:
                    case MapObjectId_TREW:
                    case MapObjectId_TREN:
                    case MapObjectId_TRED:
                        return true;
                    default:
                        break;
                }
            }
        } else if (sp18[0].common.type == 1) {
            Actor *pActor = gpActorManager->func_01fff3b4(ref);

            if (pActor != NULL) {
                switch (pActor->GetActorId()) {
                    case ActorId_PSBL:
                    case ActorId_PBK2:
                    case ActorId_PSWB:
                    case ActorId_PSBK:
                        return true;
                    default:
                        break;
                }
            }
        }

        return false;
    } else {
        this->mUnk_08 = func_ov031_020da584(param2->mUnk_08);
        VEC_Subtract(param3, param4, &this->mUnk_0C);

        u32 flags = this->mUnk_18;
        u32 unk04 = this->mUnk_04.data;

        if (ref.common.unk_00 == 0x1000) {
            this->mUnk_18 = flags | 0x02;

            if (ref.data == this->mUnk_04.Copy().Get32()) {

                this->mUnk_18 |= 0x10;
            } else {
                //! TODO: fake match, stack is annoying
                sp14[-2]           = ref.Copy().moRef;
                sp0                = sp14[-2].GetUnk02();
                MapObject *temp_r5 = gpMapObjManager->func_01fff498(sp0);

                switch (temp_r5->GetMapObjectId()) {
                    case MapObjectId_BLCC:
                    case MapObjectId_CRWL:
                        this->mUnk_18 |= 0x08;
                        this->mUnk_08 = 0x8C95;
                        break;
                    default:
                        if (temp_r5->IsFlag6()) {
                            this->mUnk_18 |= 0x10;
                        }
                        break;
                }
            }
        } else {
            this->mUnk_18 = flags | 0x04;

            if (ref.data == this->mUnk_04.Copy().Get32()) {

                this->mUnk_18 |= 0x20;
            }
        }

        return true;
    }

    return false;
}

bool UnkStruct_ov031_02112b40::func_ov031_020daaec(const UnkStruct_ov031_020e5d18_00 *param1, Cylinder *pCylinder) {
    VecFx32 sp24;
    UnkStruct_ov031_020e5d18_00 spC;
    bool var_r0;
    const VecFx32 *temp_r5;
    bool var_r6;

    var_r6        = true;
    this->mUnk_1A = true;

    if (Actor::func_ov000_0207e294(&param1->mUnk_00, pCylinder) == 0) {
        var_r6 = false;
    }

    if (!var_r6) {
        temp_r5 = param1->mUnk_08;
        VEC_Subtract(param1->mUnk_04, temp_r5, &sp24);

        if (!(VecFx32_IsCleared(&sp24) ? 1 : 0)) {
            func_01ff9770(&sp24, VEC_Mag(&sp24) + FX_F32_TO_FX32(0.6f));
        }

        VEC_Add(&sp24, temp_r5, &sp24);

        var_r6 = false;
        spC.mUnk_00.Reset();
        spC.func_01ffe6c4(param1->mUnk_00, &sp24, temp_r5, param1->mUnk_0C, param1->mUnk_10, param1->mUnk_14);

        if (Actor::func_ov000_0207df88(&spC, pCylinder, 0x11) != 0) {
            var_r6 = true;
        }
    }

    this->mUnk_1A = false;
    return var_r6;
}
