#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "CommonFuncs.hpp"
#include "MapObject/MapObjectManager.hpp"
#include "Physics/Capsule.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "flags.h"
#include "global.h"
#include "math.hpp"

THUMB_BEGIN

UnkStruct_027e0ce0_1C_D4::UnkStruct_027e0ce0_1C_D4() :
    mUnk_6AB0(0x2600, 0x600, 0x560, 0) {}

THUMB_END

bool UnkStruct_ov031_02112b24::vfunc_0C(RefStruct ref, UnkStruct_ov031_020e54d4 *param2, const VecFx32 *param3,
                                        const VecFx32 *param4) {
#pragma unused(param2, param3, param4)
    if (ref.common.unk_00 == 0x1000) {
        RefStruct sp8;
        MapObjRef sp4 = ref.moRef;
        Vec2bCpp sp0  = sp4.GetUnk02();

        MapObject *pMapObj = gpMapObjManager->func_01fff498(sp0);

        //! @bug: it doesn't check if `pMapObj` is NULL
        if (GET_FLAG(pMapObj->mFlags, MapObjFlag_7)) {
            sp8 = pMapObj->mRef;
            this->mUnk_04->func_ov031_020d9d10(sp8, this->mUnk_08);
        }
    }

    return false;
}

void UnkStruct_ov031_02112b24::func_ov031_020da274(const VecFx32 *param1, const VecFx32 *param2, u16 param3) {
    Sphere sp94;
    UnkStruct_ov031_020e5d18_00 sp7C;
    Sphere sp6C;
    Capsule sp50;
    Sphere sp40;
    VecFx32 sp34;
    VecFx32 sp28;
    struct {
        u32 pad[3];
        RefStruct ref;
    } sp24;
    Actor **var_r8;
    bool var_r9;

    this->mUnk_08 = param3;
    sp94.func_ov031_020e45fc();
    var_r9 = false;

    sp24.ref.common.unk_00 = 0x102;
    sp24.ref.common.unk_02 = 0x04;
    sp7C.mUnk_00.Reset();
    sp7C.func_01ffe6c4(sp24.ref, param2, param1, 0x1C, NULL, this);
    Actor::func_ov000_0207df88(&sp7C, &sp94, 0x11);

    if (this->mUnk_04->GetCount() >= 8) {
        return;
    }

    VEC_Add(param1, &sp94.center, &sp28);
    VEC_Add(param2, &sp94.center, &sp34);

    if (param1->x == param2->x && param1->y == param2->y && param1->z == param2->z) {
        var_r9 = true;
    }

    sp40.center.x = sp34.x;
    sp40.center.y = sp34.y;
    sp40.center.z = sp34.z;
    sp40.radius   = sp94.radius;

    sp50.start.x = sp28.x;
    sp50.start.y = sp28.y;
    sp50.start.z = sp28.z;
    sp50.end.z   = sp34.z;
    sp50.end.x   = sp34.x;
    sp50.end.y   = sp34.y;
    sp50.radius  = sp94.radius;

    RefStruct unk_A4 = this->mUnk_04->mUnk_A4;
    if (!unk_A4.IsEmpty()) {
        Actor *temp_r0_3 = gpActorManager->func_01fff3b4(unk_A4);

        if (temp_r0_3 == NULL) {
            this->mUnk_04->mUnk_A4.Reset();
        } else {
            temp_r0_3->vfunc_10(&sp6C);

            if ((!var_r9 || !func_01ffccc0(&sp40, &sp6C)) && (var_r9 || !func_01ffd218(&sp50, &sp6C))) {
                this->mUnk_04->mUnk_A4.Reset();
            }
        }
    }

    UnkStruct_ov031_02112b18 sp10;
    var_r8 = gpActorManager->func_01fff350(&sp10, gpActorManager->mActorTable);

    while (var_r8 != gpActorManager->mUnk_08) {
        (*var_r8)->vfunc_10(&sp6C);

        if ((var_r9 && (func_01ffccc0(&sp40, &sp6C) != 0)) || (!var_r9 && func_01ffd218(&sp50, &sp6C))) {
            this->mUnk_04->func_ov031_020d9d10((*var_r8)->mRef, this->mUnk_08);

            if (this->mUnk_04->GetCount() >= 8) {
                return;
            }
        }

        var_r8 = gpActorManager->func_01fff350(&sp10, var_r8 + 1);
    }
}

bool UnkStruct_ov031_02112b18::vfunc_00(Actor *pActor) {
    bool var_r0 = false;
    bool var_r3 = pActor->IsVisible() && pActor->IsFlag12();

    if (var_r3 && pActor->mUnk_34 != NULL) {
        var_r0 = true;
    }

    return var_r0;
}
