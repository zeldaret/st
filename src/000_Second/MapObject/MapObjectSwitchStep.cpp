#include "MapObject/MapObjectSwitchStep.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkMemFuncs.h"
#include "Unknown/UnkStruct_0204af1c.hpp"
#include "Unknown/UnkStruct_027e0998.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_ov000_020b5214.hpp"

extern "C" unk32 func_0200f218(unk32, const char *);

static const char data_ov000_020af550[] = "switch";
static const char data_ov000_020af560[] = "switchB";

UnkStruct_ov019_020d24c8_28_258_00 MapObjectSwitchStep_data_020b6118(0, 0);

ARM DECL_PROFILE(MapObjectProfileSwitchStep);

ARM MapObject *MapObjectProfileSwitchStep::Create() {
    return new(HeapIndex_ITCM) MapObjectSwitchStep();
}

ARM MapObjectProfileSwitchStep::MapObjectProfileSwitchStep() :
    MapObjectProfileSwitchStep_Base(MapObjectId_SwitchStep) {
    this->mUnk_D4.mUnk_08 = 0x2DC04009;

    this->mUnk_E0.x = -FLOAT_TO_Q20(0.5f);
    this->mUnk_E0.y = FLOAT_TO_Q20(0.0f);
    this->mUnk_E0.z = -FLOAT_TO_Q20(0.5f);

    this->mUnk_EC.x = FLOAT_TO_Q20(0.5f);
    this->mUnk_EC.y = FLOAT_TO_Q20(0.5f);
    this->mUnk_EC.z = FLOAT_TO_Q20(0.5f);

    this->mUnk_06         = 1;
    this->mUnk_0C         = 0xC00;
    this->mUnk_20.mUnk_15 = 1;
}

ARM MapObjectSwitchStep_40::MapObjectSwitchStep_40(void) :
    UnkSystem4(0) {
    this->mUnk_60 = 0;
    this->mUnk_62 = true;
    this->func_ov000_0209dde0();
}

ARM void MapObjectSwitchStep_40::func_ov000_0209dde0(void) {
    if (!this->mUnk_62) {
        this->func_ov000_02057c38(2, 2);
        return;
    }

    this->func_ov000_02057c38(6, 2);
}

ARM void MapObjectSwitchStep_40::vfunc_1C(UnkSystem4_vfunc_1C *param1) {
    unk32 iVar1 = param1->mUnk_04[1];
    if (iVar1 != 0) {
        iVar1 += 0x40;
    } else {
        iVar1 = 0;
    }

    unk32 uVar2;
    if (iVar1 == 0) {
        uVar2 = -1;
    } else {
        uVar2 = func_0200f218(iVar1, data_ov000_020af560);
    }

    if (param1->mUnk_00[1] == uVar2) {
        if (this->mUnk_62) {
            param1->mUnk_B4->mUnk_00 &= ~0x04;
            param1->mUnk_B4->mUnk_50 = this->mUnk_60;
            param1->mUnk_B4->mUnk_4C = 0;
            param1->mUnk_B4->mUnk_54 = 0;
        } else {
            param1->mUnk_B8[0] = 0;
        }
    }
}

ARM MapObjectSwitchStep::MapObjectSwitchStep() :
    mUnk_A4(&mUnk_C4, 0) {
    this->mUnk_E4 = 0;
    this->mUnk_E6 = 0;
    this->mUnk_E8 = 0;
    this->mUnk_EA = 0;
    this->mUnk_EB = 0;

    UnkActorFileSystem_Base_50 *ptr = GET_PROFILE_20_50(MapObjectProfileSwitchStep);
    void *var_r1;
    if (ptr != NULL) {
        u8 *temp_r1 = (u8 *) ptr + 8;
        u32 *var_r0;
        u8 zero = 0;

        if (temp_r1 != NULL && ptr->mUnk_09 > zero) {
            var_r0 = (u32 *) (temp_r1 + ptr->mUnk_0E + 4);
        } else {
            var_r0 = NULL;
        }

        if (var_r0 != NULL) {
            var_r1 = (void *) ((u8 *) ptr + *var_r0);
            goto end;
        }
    }

    var_r1 = NULL;

end:
    this->mUnk_40.vfunc_08((unk32) var_r1);
    this->mUnk_A4.mUnk_00 = this->mUnk_40.mUnk_04;

    UnkActorFileSystem_Base *temp_r6 = GET_PROFILE_20(MapObjectProfileSwitchStep);
    unk32 temp_r5                    = temp_r6->func_ov000_02058a24();
    this->mUnk_A4.func_ov000_020577a4(temp_r6->func_ov000_02058a84(3, data_ov000_020af550), temp_r5, 1);

    this->mUnk_10 = GET_PROFILE_D4(MapObjectProfileSwitchStep);
}

ARM MapObjectSwitchStep::~MapObjectSwitchStep() {
    if (this->mUnk_20.mUnk_00[0] == 2) {
        this->func_ov000_0209e11c(0, 1);
        this->func_ov000_0209d2c4(0, 0);
    }
}

ARM bool MapObjectSwitchStep::vfunc_00(void) {
    SET_FLAG(this->mFlags, MapObjFlag_9);
    this->mUnk_18[0] = 1;

    SET_FLAG(this->mFlags, MapObjFlag_10);
    this->mUnk_18[1] = 1;

    if (this->func_ov000_0209d29c(0)) {
        this->func_ov000_0209e11c(2, 1);
    } else {
        this->func_ov000_0209e11c(0, 1);
    }

    if (data_027e09a4->mSceneIndex >= SceneIndex_battle01 && data_027e09a4->mSceneIndex < SceneIndex_Max) {
        MapObjectSwitchStep_data_020b6118.func_ov000_0205fc20(0x78, 0x0C, NULL, NULL);
        SET_FLAG(this->mFlags, MapObjFlag_5);
    }

    return true;
}

ARM void MapObjectSwitchStep::func_ov000_0209e11c(unk32 param1, unk32 param2) {
    this->mUnk_16 = param1;
    this->mUnk_E6 = -1;
    this->mUnk_E4 = 0;
    this->mUnk_A4.func_01ffc3b4();

    switch (this->mUnk_16) {
        case 0:
            if (param2 == 0) {
                this->func_ov000_0209d2c4(0, 0);
                data_027e09a8->func_ov000_02071b30(0x123, &this->mPos, 0);
            }

            this->mUnk_40.mUnk_62 = 1;
            this->mUnk_40.mUnk_60 = 0;
            this->mUnk_A4.func_ov000_020577f8(0);
            break;
        case 1:
            this->mUnk_E8 = 0;
            data_027e09a8->func_ov000_02071b30(0x121, &this->mPos, 0);
            this->mUnk_A4.func_ov000_020577f8(0);
            this->func_ov000_0209e11c(2, 0);
            break;
        case 2:
            this->mUnk_40.mUnk_60 = -0x19A;
            this->func_ov000_0209d2c4(0, 1);
            this->mUnk_40.mUnk_62 = 0;

            if (param2 == 0) {
                data_027e09a8->func_ov000_02071b30(0x122, &this->mPos, 0);
            } else {
                this->mUnk_EA = 1;
            }

            if (this->mUnk_20.mUnk_00[0] == 2) {
                this->mUnk_E6 = this->mUnk_20.mUnk_00[1];
                this->mUnk_E4 = 0;
            }

            this->mUnk_A4.func_ov000_020577f8(0x1000);
            break;
        case 3:
            this->func_ov000_0209d2c4(0, 0);
            break;
        default:
            break;
    }
}

ARM void MapObjectSwitchStep::vfunc_20(void) {
    switch (this->mUnk_16) {
        case 1:
        case 2:
        case 3:
            break;
        default:
            this->func_ov000_0209e11c(1, 0);
            break;
    }

    this->mUnk_EA = 1;
}

struct stack_struct {
    /* 00 */ unk16 mUnk_00;
    /* 02 */ unk16 mUnk_02;
    /* 04 */ unk8 mUnk_04;
    /* 05 */ unk8 mUnk_05;
    /* 06 */ u16 mUnk_06;
    /* 08 */
};

ARM void MapObjectSwitchStep::vfunc_18(void) {
    if (!GET_FLAG(this->mFlags, MapObjFlag_5)) {
        return;
    }

    if (data_027e09a4->mSceneIndex >= SceneIndex_battle01 && data_027e09a4->mSceneIndex < SceneIndex_Max) {
        unk32 sp10;
        stack_struct sp8;
        unk32 sp4;

        //! TODO: fake match?
        sp4 = *(u32 *) &this->mUnk_38;

        if (data_027e0998->vfunc_00(&this->mPos, &sp10, &sp4)) {
            sp8.mUnk_06 = 0x00;
            MI_CpuFill32(0, &sp8, sizeof(sp8));
            sp8.mUnk_05 = -1;
            sp8.mUnk_06 |= 0x01;
            data_0204af1c.func_0201aa44(&MapObjectSwitchStep_data_020b6118, &sp10, 2, &sp8);
        }
    }
}

ARM void MapObjectSwitchStep::func_ov000_0209e38c(void) {
    if (this->mUnk_E6 - this->mUnk_E4 < 0x3C) {
        data_ov000_020b5214.func_ov000_0206e7e8(0x92);
    } else {
        data_ov000_020b5214.func_ov000_0206e7e8(0x91);
    }
}
