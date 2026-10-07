#include "CommonFuncs.hpp"
#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectManager.hpp"
#include "Physics/AABB.hpp"
#include "Unknown/UnkStruct_020499e0.hpp"
#include "Unknown/UnkStruct_0204a110.hpp"
#include "Unknown/UnkStruct_027e09bc.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "flags.h"
#include "math.hpp"
#include "nitro/fx.h"

extern AABB data_027e0c90;

bool MapObjectManager::func_ov017_020c007c(unk32 param1) {
    bool var_r4;
    MapObject **temp_r4 = this->mMapObjTableEnd;
    MapObject **var_ip  = this->mMapObjTable;

    while (var_ip != temp_r4 && *var_ip != NULL ? true : false) {
        var_ip++;
    }

    var_r4 = false;

    if (!(var_ip == temp_r4 || !data_020499e0.func_0201456c(param1))) {
        var_r4 = true;
    }

    return var_r4;
}

void MapObjectManager::func_ov017_020c00dc(unk32 param1) {
    s32 temp_r6 = data_0204a110.func_02019300(param1);
    s32 temp_r5 = data_0204a110.func_02019340(param1);

    MapObject **var_r7 = this->mMapObjTable;
    while (var_r7 != this->mUnk_08) {
        if (*var_r7 != NULL) {
            if ((*var_r7)->IsAlive() && ((temp_r6 != 0 && (*var_r7)->IsFlag2()) || (temp_r5 != 0 && (*var_r7)->IsFlag3()))) {
                (*var_r7)->vfunc_0C();
            }
        }

        var_r7++;
    }

    if (temp_r5 == 0) {
        return;
    }

    s32 var_r5         = 0;
    MapObject **var_r6 = this->mMapObjTable;

    //! TODO: fake match
    while (var_r6 < *(MapObject ***) &this->mUnk_08) {
        if (*var_r6 != NULL && !(*var_r6)->IsAlive()) {
            this->func_ov000_0209c444(var_r5);
        }

        var_r6++;
        var_r5++;
    }
}

void MapObjectManager::func_ov017_020c01c8(void *param1) {}

void MapObjectManager::func_ov017_020c01cc(unk32 param1) {
    MapObject **var_r6 = this->mMapObjTable;

    while (var_r6 != this->mUnk_08) {
        MapObject *pMapObj = *var_r6;

        if (pMapObj != NULL && pMapObj->IsAlive() && pMapObj->func_01fff590(param1) != 0) {
            pMapObj->vfunc_14(param1);
        }

        var_r6++;
    }
}

void MapObjectManager::func_ov017_020c023c(s8 *param1) {
    if (data_027e0cd8->func_ov000_02082124()) {
        return;
    }

    MapObject **var_r5 = this->mMapObjTable;

    while (var_r5 != this->mUnk_08) {
        MapObject *pMapObj = *var_r5;

        if (pMapObj != NULL && pMapObj->IsAlive()) {
            pMapObj->vfunc_18(param1);
        }

        var_r5++;
    }
}

void MapObjectManager::func_ov017_020c02ac(volatile unk32 param1, Vec2bCpp param2) {
    MapObject *pMapObj = this->func_01fff498(param2);

    if (pMapObj != NULL) {
        pMapObj->vfunc_20(param1);
    }
}

void MapObjectManager::func_ov017_020c02f4(volatile unk32 param1, VecFx32 *param2) {
    Vec2bCpp sp0;
    func_01ffedac(&sp0, param2);
    this->func_ov017_020c02ac(param1, sp0);
}

void MapObjectManager::func_ov017_020c033c(unk32 *param1, MapObjectManager *thisx, const Vec2s *param2, unk32 param3,
                                           unk32 param4) {
    struct {
        unk32 unk_00;
        unk32 unk_04;
        unk32 unk_08;
        unk32 unk_0C;
        unk32 unk_10;
        unk32 unk_14;
    } sp20;

    UnkStruct_027e09bc *temp_r4    = data_027e09bc;
    UnkStruct_027e09bc_0C *temp_r0 = temp_r4->func_ov000_02077468(param4, func_ov000_02077480());
    bool var_r4                    = false;
    Vec2bCpp sp14(0, 0);
    Vec2bCpp sp12(0, 0);

    Vec2s sp1A;
    sp1A.x = param2->x;
    sp1A.y = param2->y;

    if (temp_r0->func_ov000_02076fa8(&sp20, &sp1A, 0, data_027e0c90.max.y) != 0 &&
        func_ov000_02080098(&sp14, &sp12, sp20.unk_00 - 0x1000, sp20.unk_08 - 0x1000, sp20.unk_0C + 0x800,
                            sp20.unk_14 + 0x1000) != 0) {
        var_r4 = true;
    }

    if (var_r4) {
        Vec2bCpp sp10(0, 0);

        for (s16 spC = sp12.y; sp14.y <= spC; spC--) {
            sp10.y = spC;

            for (s16 var_r7 = sp14.x; var_r7 <= sp12.x; var_r7++) {
                sp10.x = var_r7;

                MapObject *pMapObj = thisx->func_01fff498(sp10);

                if (pMapObj != NULL) {
                    MapObjFlags flags = pMapObj->mFlags[0];

                    if (GET_FLAG2(flags, MapObjFlag_Alive) && GET_FLAG2(flags, param3 + 9) && pMapObj->mUnk_10 != NULL) {
                        Vec2s sp16;

                        sp16.x = param2->x;
                        sp16.y = param2->y;

                        if (pMapObj->func_ov000_0209d144(&sp16, param3, temp_r0)) {
                            *param1 = *(s32 *) &pMapObj->mUnk_38;
                            return;
                        }
                    }
                }
            }
        }
    }

    *param1 = 0;
}

// https://decomp.me/scratch/ceRYG
unk32 MapObjectManager::func_ov017_020c050c(unk32 param1, unk32 param2, unk32 param3, unk32 param4) {
    Vec2bCpp sp0 = *(Vec2bCpp *) ((u8 *) &param1 + 2);

    MapObject *pMapObj = this->func_01fff498(sp0);

    if (pMapObj != NULL) {
        return pMapObj->vfunc_28(param2, param3, param4);
    }

    return -1;
}
