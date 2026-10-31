#include "MapObject/MapObjectUnkWLMS.hpp"
#include "Animation/CellAnimObject.hpp"
#include "CommonFuncs.hpp"
#include "FileSelect/FileSelectUnkDraw.hpp"
#include "LinkList.hpp"
#include "Map/MapObjectId.hpp"
#include "MapObject/MapObject.hpp"
#include "Player/TouchControl.hpp"
#include "Unknown/Common.hpp"
#include "Unknown/UnkStruct_0204a088.hpp"
#include "Unknown/UnkStruct_0204a110.hpp"
#include "Unknown/UnkStruct_0204af1c.hpp"
#include "Unknown/UnkStruct_027e0954.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_027e09bc.hpp"
#include "Unknown/UnkStruct_ov000_020b5214.hpp"
#include "Unknown/UnkStruct_ov000_020b52b4.hpp"
#include "Unknown/UnkStruct_ov031_02118fa4.hpp"
#include "flags.h"
#include "math.hpp"
#include "nitro/fx.h"
#include "nitro/math.h"
#include "nitro/mi.h"
#include "nns/g3d/g3d.h"
#include "profile.hpp"
#include "types.h"

struct UnkStruct_data_ov063_021638c0 {
    /* 00 */ u16 mUnk_00;
    /* 02 */ u16 mUnk_02;
    /* 04 */ u16 mUnk_04;
    /* 06 */ u16 mUnk_06;
    /* 08 */ UnkStackStruct2 mUnk_08;
    /* 28 */ u16 mUnk_28;
    /* 2A */ u16 mUnk_2A;
};

extern UnkStruct_data_ov063_021638c0 data_ov063_021638c0;
extern unk16 data_ov063_021638c2;
extern UnkStackStruct2 data_ov063_021638c8;
extern unk16 data_ov063_021638e8; //= data_ov063_021638c8.mUnk_10;

CellAnimObject data_ov063_02164514;
CellAnimObject data_ov063_0216458c;

DECL_PROFILE(MapObjectProfileUnkWLMS);

MapObject *MapObjectProfileUnkWLMS::Create() {
    return new(HeapIndex_ITCM) MapObjectUnkWLMS();
}

// non-matching (also dtor is non-matching)
MapObjectProfileUnkWLMS::MapObjectProfileUnkWLMS() :
    MapObjectProfileUnkSTAT_Base(MapObjectId_WLMS, MapObjectId_WLMS) {
    mUnk_D4.mUnk_08 = 0x2bc07006;
    VecFx32_Init(0, 0, 0, &mUnk_D4.mUnk_0C);
    mUnk_D4.mUnk_18.x = FX_F32_TO_FX32(0.5f);
    mUnk_D4.mUnk_18.y = FX_F32_TO_FX32(1.0f);
    UNSET_FLAG2(mUnk_D4.mUnk_04, 1);
    mUnk_14 = MapObjectId_WLMP;
    mUnk_0C = 0x1B33;
    mUnk_06 = -1;
    SET_FLAG2(mUnk_1E, 0);
}

UnkStruct_ov063_02163910::UnkStruct_ov063_02163910(Actor *param1) {
    mUnk_04 = (unk32) param1;
}

struct UnkStruct_ov063_02163910_04 {
    /* 00 */ PAD(0x0, 0x40);
    /* 40 */ unk32 mUnk_40;
    /* 44 */ LinkList<unk32> mUnk_44;
};
void UnkStruct_ov063_02163910::vfunc2_00() {

    void *ptr = mUnk_04p;
    if (ptr != NULL) {
        ptr = &((UnkStruct_ov063_02163910_04 *) mUnk_04p)->mUnk_40;
    }

    data_0204a088->func_ov000_020611dc((FileSelectManager_UnkDrawBase *) ptr, 7);
}

void UnkStruct_ov063_02163910::vfunc2_04() {
    ((UnkStruct_ov063_02163910_04 *) mUnk_04p)->mUnk_44.Detach();
}

MapObjectUnkWLMS::MapObjectUnkWLMS() :
    mUnk_70(G3d_GetModelPtr(GET_PROFILE(MapObjectProfileUnkWLMS)->mUnk_20.mUnk_50)),
    mUnk_D0(&mUnk_F4, 0x80),
    mUnk_2F4(),
    mUnk_31C(0),
    mUnk_31E(0),
#if IS_JP || IS_EUR1
    mUnk_31F(false),
#endif
    mUnk_320((Actor *) this) {
    mUnk_10         = GET_PROFILE_D4(MapObjectProfileUnkWLMS);
    mUnk_D0.mUnk_1C = 0x2000;
    mUnk_316        = -1;
    mUnk_318        = -1;
    mUnk_31A        = -1;

    MI_CpuFillFast(&mUnk_F4, 0, 0x200);

    data_ov063_02164514.func_ov000_0206082c(0x2e, 1);
    data_ov063_02164514.func_ov000_02060bac();
    data_ov063_0216458c.func_ov000_0206082c(0x2e, 1);
    data_ov063_0216458c.func_ov000_02060bac();
}

bool MapObjectUnkWLMS::Init() {
    mUnk_18[0] = 0x14;
    if (mUnk_20.mParams[1] == 1) {
        mPos.x += FX_F32_TO_FX32(0.5f);
    }
    this->func_ov063_02160580(MapObjectUnkWLMSState_Closed, 1);
    return true;
}

#if IS_JP || IS_EUR1
void MapObjectUnkWLMS::vfunc_08() {
    if (mState == MapObjectUnkWLMSState_Loading && !mUnk_31F) {
        this->func_ov063_02160580(MapObjectUnkWLMSState_Closed, 0);
    }
    mUnk_31F = false;
}
#endif

void MapObjectUnkWLMS::vfunc_38(void) {
    switch (mState) {
        case MapObjectUnkWLMSState_Closed:
            break;
        case MapObjectUnkWLMSState_Loading: {
            if (mUnk_20.mUnk_10 == 0) {
                break;
            }
            bool cond = true;
            if (data_0204a088->mUnk_04 == -1 && data_0204a088->mUnk_08 == -1) {
                cond = false;
            }
            if (!cond || ((u16) data_0204a088->mUnk_128 != 1)) {
                break;
            }
            func_ov009_020b675c(data_ov031_02118fa4, 1);
            break;
        }
        case MapObjectUnkWLMSState_2:
            if (mUnk_20.mUnk_10 == 0) {
                this->func_ov063_02160580(MapObjectUnkWLMSState_PuzzleReady, 0);
            } else {
                this->func_ov063_02160580(MapObjectUnkWLMSState_Description, 0);
            }
            break;
        case MapObjectUnkWLMSState_Description:
            if ((u16) mUnk_58.mUnk_08 != 0xFFFF) {
                mUnk_58.vfunc_04();
                break;
            }
            this->func_ov063_02160580(MapObjectUnkWLMSState_PuzzleReady, 0);
            func_ov009_020b675c(data_ov031_02118fa4, 0);
            break;
        case MapObjectUnkWLMSState_PuzzleReady:
            if (data_ov031_02118fa4) {
                this->func_ov063_02160254();
            }
            if (data_0204a110.func_01ff9b50() == 6) {
                data_0204a088->func_ov000_020611fc(2);
                break;
            }
            if (data_0204a110.func_01ff9b50() != 5 || data_0204a088->mUnk_00 != 7) {
                break;
            }
            this->func_ov063_02160580(MapObjectUnkWLMSState_PuzzleSolved, 0);
            break;
        case MapObjectUnkWLMSState_PuzzleFilled:
            if (mUnk_31C) {
                mUnk_31C--;
                break;
            }
            if ((mUnk_316 == 1 && mUnk_318 == 4) || (mUnk_316 == 4 && mUnk_318 == 1)) {
                data_027e09a8->func_ov000_020716dc(0);
                mUnk_31E = 1;
            } else {
                data_ov000_020b5214_eur.func_ov000_0206db44(0xA3);
                mUnk_31E = 0;
            }
            this->func_ov063_02160580(MapObjectUnkWLMSState_PuzzleSolved, 0);
            break;
        case MapObjectUnkWLMSState_PuzzleSolved:
            if (!func_ov094_02170fa0()) {
                break;
            }
            this->func_ov063_02160580(MapObjectUnkWLMSState_Quitting, 0);
            break;
        case MapObjectUnkWLMSState_Quitting:
            break;
        default:
            break;
    }

    data_ov063_02164514.func_ov000_020609c4();
    data_ov063_0216458c.func_ov000_020609c4();
#if IS_JP || IS_EUR1
    mUnk_31F = false;
#endif
}

// non-matching
void MapObjectUnkWLMS::func_ov063_02160254(void) {
    mUnk_2F4.func_02014478(&data_ov031_02118fa4->mUnk_00.mUnk_16C, 2);
    if (GET_FLAG2(mUnk_2F4.mFlags, TouchFlag_TouchedNow) && mUnk_318 < 0) {
        this->func_ov063_02160548();
    }
    if (!mUnk_2F4.mState.touch || mUnk_318 >= 0) {
        return;
    }
    unk16 index = 0;
    while (index < 8) {
        unk32 *data_ov063_021638e8p = (unk32 *) &data_ov063_021638e8;
        unk16 val1                  = (((s16 *) &data_ov063_021638e8p[index])[0]) + ((s16 *) &data_ov063_021638c0)[0];
        unk16 val2                  = (((s16 *) &data_ov063_021638e8p[index])[1]) + ((s16 *) &data_ov063_021638c0)[1];

        unk16 c = ((s16 *) &data_ov063_021638c0)[2], d = ((s16 *) &data_ov063_021638c0)[3];
        if (ABS(val1 - *(unk16 *) &((MapObjectUnkWLMS *) &data_ov063_021638c0)->mUnk_2F4.mState) <= c &&
            ABS(val2 - mUnk_2F4.mState.touchPos.y) <= d) {
            if (mUnk_316 < 0) {
                mUnk_316 = index;
                mUnk_31A = -1;
                data_ov000_020b5214_eur.func_ov000_0206db44(0x99);
                func_ov000_0205b1d8(&mUnk_D0.mUnk_10, &mUnk_2F4.mState.touchPos.x);
                mUnk_D0.mUnk_20 = 0x39A0;
                data_ov063_02164514.func_ov000_0206082c(0x2E, 0);
                return;
            }
            if (index != mUnk_316) {
                mUnk_318 = index;
                data_ov000_020b5214_eur.func_ov000_0206db44(0x9B);
                unk16 *cmp_target =
                    ((unk16 *) (mUnk_D0.mUnk_10.mUnk_00 + (mUnk_D0.mUnk_10.mUnk_04 - mUnk_D0.mUnk_10.mUnk_00))) - 2;
                if (mUnk_2F4.mState.touchPos.x != cmp_target[0] || mUnk_2F4.mState.touchPos.y != cmp_target[1]) {
                    func_ov000_0205b1d8(&mUnk_D0.mUnk_10, &mUnk_2F4.mState.touchPos.x);
                }
                this->func_ov063_02160580(MapObjectUnkWLMSState_PuzzleFilled, 0);
                mUnk_D0.mUnk_20         = 0x23F;
                mUnk_D0.mUnk_10.mUnk_04 = mUnk_D0.mUnk_10.mUnk_00;
                func_ov000_0205b1d8(&mUnk_D0.mUnk_10, &data_ov063_021638e8p[mUnk_316]);
                func_ov000_0205b1d8(&mUnk_D0.mUnk_10, &data_ov063_021638e8p[mUnk_318]);
                data_ov063_02164514.func_ov000_0206082c(0x2E, 2);
                data_ov063_0216458c.func_ov000_0206082c(0x2E, 2);
                return;
            }
            return;
        }
        index++;
    }
    if (mUnk_316 >= 0) {
        func_ov000_0205b1d8(&mUnk_D0.mUnk_10, &mUnk_2F4.mState.touchPos.x);
    }
    if (mUnk_316 >= 0) {
        data_ov000_020b52b4.func_ov000_0206f778(mUnk_2F4.mState.touchPos.x, mUnk_2F4.mState.touchPos.y, 0x9A);
    }
}

void MapObjectUnkWLMS::func_ov063_02160548(void) {
    mUnk_D0.mUnk_10.mUnk_04 = mUnk_D0.mUnk_10.mUnk_00;
    mUnk_31A                = mUnk_316;
    mUnk_316                = -1;
    data_ov063_02164514.func_ov000_0206082c(0x2e, 1);
}

unk32 MapObjectUnkWLMS::func_ov063_02160580(MapObjState param1, unk32 param2) {
#pragma unused(param2)
    mState = param1;
    switch (mState) {
        case MapObjectUnkWLMSState_Closed:
            if (!this->func_ov000_0209d29c(0)) {
                SET_FLAG(mFlags, MapObjFlag_9);
            } else {
                UNSET_FLAG(mFlags, MapObjFlag_9);
            }
#if IS_JP || IS_EUR1
            mUnk_31F = false;
#endif
            break;
        case MapObjectUnkWLMSState_Loading: {
            UNSET_FLAG(mFlags, MapObjFlag_9);
            stack_ov000_02073578 stack;
            stack.unk_08 = 0x7;
            stack.unk_04 = (unk32) (uintptr_t) &mUnk_320;
            func_ov094_02170f7c(this, &stack);
#if IS_JP || IS_EUR1
            mUnk_31F = true;
#endif
            break;
        }
        case MapObjectUnkWLMSState_2:
            break;
        case MapObjectUnkWLMSState_Description:
            func_ov094_02170fd4(this);
            break;
        case MapObjectUnkWLMSState_PuzzleReady:
            mUnk_D0.mUnk_10.mUnk_04 = mUnk_D0.mUnk_10.mUnk_00;
            break;
        case MapObjectUnkWLMSState_PuzzleFilled:
            func_ov009_020b669c(data_ov031_02118fa4, 0, 0);
            mUnk_31C = 0x2D;
            break;
        case MapObjectUnkWLMSState_PuzzleSolved:
            mUnk_316 = -1;
            mUnk_318 = -1;
            mUnk_31A = -1;
            break;
        case MapObjectUnkWLMSState_Quitting:
        default:
            break;
    }
    return 1;
}

unk32 MapObjectUnkWLMS::vfunc_28(unk32 param1, unk32 param2, unk32 param3) {
#pragma unused(param1, param2, param3)
    if (mState == MapObjectUnkWLMSState_Closed) {
        this->func_ov063_02160580(MapObjectUnkWLMSState_Loading, 0);
        return 0;
    }
    return -1;
}

void MapObjectUnkWLMS::vfunc_14(unk32 param1) {
#pragma unused(param1)
    VecFx32 vec;
    VecFx32_Init(mPos.x, mPos.y + FX_F32_TO_FX32(0.7f), mPos.z + FX_F32_TO_FX32(-0.45f - 0.0002f), &vec);
    mUnk_4C.vfunc_18(&vec);
    mUnk_70.vfunc_18(&vec);

    if (mState == 4 || mState == 5) {
        if (mUnk_D0.mUnk_10.mUnk_04 - mUnk_D0.mUnk_10.mUnk_00 != 0) {
            data_027e0954->mUnk_00[1].mUnk_04.Prepend((UnkStruct_ov000_020b1c10 *) &mUnk_D0);
        }
    }
}

// non-matching
void MapObjectUnkWLMS::vfunc_18(s8 *param1) {
    if (param1[0] != 0 && param1[1] != 0) {
        return;
    }

    for (unk16 *ptr = &mUnk_316; ptr < (unk16 *) &mUnk_31C; ++ptr) {
        unk16 val = *ptr;
        if (val >= 0) {
            u16 temp_x   = (&data_ov063_021638e8)[val] + ((s16 *) &data_ov063_021638c0)[0];
            u16 temp_y   = (&data_ov063_021638e8)[val] + ((s16 *) &data_ov063_021638c0)[1];
            u16 stack[2] = {temp_x, temp_y};

            if (ptr == &mUnk_316 || ptr == &mUnk_31A) {
                data_0204af1c.func_0201aad0(&data_ov063_02164514, &stack, 1, NULL);
            } else {
                data_0204af1c.func_0201aad0(&data_ov063_0216458c, &stack, 1, NULL);
            }
        }
    }
}

void MapObjectUnkWLMS::vfunc_60(void) {
    if (!data_ov031_02118fa4) {
        return;
    }
    func_ov009_020b669c(data_ov031_02118fa4, 1, 0);
}

void MapObjectUnkWLMS::vfunc_64(unk32 param1, unk32 param2) {
#pragma unused(param1)
    if (mState == MapObjectUnkWLMSState_Loading && param2 == 1) {
        UnkStackStruct2 stackVar = data_ov063_021638c8;
        stackVar.s.mUnk_06       = mAngle.angle_s;
        data_027e09bc->mUnk_04[2]->func_ov000_0207834c(&mPos, &stackVar, 0);
    }
}

void MapObjectUnkWLMS::vfunc_68(void) {
    if (mState == MapObjectUnkWLMSState_Loading) {
        this->func_ov063_02160580(MapObjectUnkWLMSState_2, 0);
    }
}

void MapObjectUnkWLMS::vfunc_6C(unk32 param1) {
    if (param1 == 2 && mUnk_318 < 0) {
        this->func_ov063_02160548();
    }
}

void MapObjectUnkWLMS::vfunc_70(unk32 param1, unk32 param2) {
    if (param1 == 1 && mState == MapObjectUnkWLMSState_Quitting && param2 == 1) {
        data_027e09bc->mUnk_04[2]->func_ov000_02078230(0);

        if (mUnk_31E != 0) {
            this->func_ov000_0209d2c4(0, true);
        }

        this->func_ov063_02160580(MapObjectUnkWLMSState_Closed, 0);
    }
}
