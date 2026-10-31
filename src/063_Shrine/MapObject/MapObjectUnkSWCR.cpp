#include "MapObject/MapObjectUnkSWCR.hpp"
#include "Actor/Actor.hpp"
#include "Actor/ActorId.hpp"
#include "CommonFuncs.hpp"
#include "MainGame/MiscAdvManager.hpp"
#include "MapObject/MapObjectUnkWDST.hpp"
#include "RefStruct.hpp"
#include "Unknown/Common.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_027e0cec.hpp"
#include "flags.h"
#include "nitro/fx.h"
#include "nitro/math.h"
#include "profile.hpp"

extern const char data_ov063_02162700;
extern const char data_ov063_02162710;
extern const char data_ov063_02162720; // "SWCR_apr"

extern MapObjectProfile_Derived2_20 data_ov063_02164934;
extern MapObject_10 data_ov063_021649e8;

DECL_PROFILE(MapObjectProfileUnkSWCR);

MapObject *MapObjectProfileUnkSWCR::Create() {
    return new(HeapIndex_ITCM) MapObjectUnkSWCR();
}

MapObjectProfileUnkSWCR::MapObjectProfileUnkSWCR() :
    MapObjectProfileUnkSTAT_Base(MapObjectId_SWCR, MapObjectId_SWCR) {
    mUnk_06 = 0;
    mUnk_06 -= 1;
    UNSET_FLAG2(mUnk_1E, 0);
    mUnk_D4.mUnk_08 = 0x7007;
    VecFx32_Init(0, 0, 0, &mUnk_D4.mUnk_0C);
    mUnk_D4.mUnk_18.x = FX_F32_TO_FX32(0.5f);
    mUnk_D4.mUnk_18.y = FX_F32_TO_FX32(1.2f);
}

// non-matching (regalloc)
MapObjectUnkSWCR_160::MapObjectUnkSWCR_160(MapObject *param1) :
    mUnk_04(param1) {}

void MapObjectUnkSWCR_160::vfunc_00(void) {
    ((MapObjectUnkSWCR *) mUnk_04)->func_ov063_0216153c();
}

void MapObjectUnkSWCR_160::vfunc_04(void) {
    ((MapObjectUnkSWCR *) mUnk_04)->func_ov063_021615c4();
}

void MapObjectUnkSWCR_160::vfunc_08(void) {
    ((MapObjectUnkSWCR *) mUnk_04)->func_ov063_02161638();
}

void MapObjectUnkSWCR::func_ov063_0216153c(void) {
    if ((unk32) GET_FLAG2(gpMiscAdvManager->mSongs, 3) == 0) {
        return;
    }

    if (mUnk_168 == MapObjectUnkSWCR_168_0) {
        if (this->func_ov000_0209d274(0) < FX_F32_TO_FX32(2.5f)) {
            this->func_ov063_02161b08(MapObjectUnkSWCR_168_1);
        }
    } else if (mUnk_168 == MapObjectUnkSWCR_168_5) {
        if (this->func_ov000_0209d274(0) < FX_F32_TO_FX32(2.5f)) {
            this->func_ov063_02161b08(MapObjectUnkSWCR_168_6);
        }
    }
}

bool MapObjectUnkSWCR::func_ov063_021615c4(void) {
    unk32 has_flag = GET_FLAG2(gpMiscAdvManager->mSongs, 3);
    if (has_flag == 0) {
        return false;
    }

    if (mUnk_168 == MapObjectUnkSWCR_168_0) {
        if (this->func_ov000_0209d274(0) < FX_F32_TO_FX32(2.5f)) {
            return true;
        }
    } else if (mUnk_168 == MapObjectUnkSWCR_168_5) {
        if (this->func_ov000_0209d274(0) < FX_F32_TO_FX32(2.5f)) {
            return true;
        }
    }
    return false;
}

// matching (empty)
void MapObjectUnkSWCR::func_ov063_02161638(void) {}

MapObjectUnkSWCR::MapObjectUnkSWCR() :
    mUnk_40(G3d_GetModelPtr(GET_PROFILE_20_50(MapObjectProfileUnkSWCR))),
    mUnk_A0(&mUnk_C0, NULL),
    mUnk_E0(&mUnk_100, NULL),
    mUnk_120(&mUnk_140, NULL),
    mUnk_160(this),
    mUnk_168(MapObjectUnkSWCR_168_8),
    mUnk_16C(2),
    mUnk_170(0, 0),
    mUnk_174(-1),
    mUnk_178(0),
    mUnk_179(0) {}

bool MapObjectUnkSWCR::Init(void) {
    ActorProfile *profile = data_ov000_020b539c_eur.GetProfileFromId(ActorId_EFSB);
    if (profile != NULL) {
        profile->vfunc_08();
    }

    mUnk_178 = (unk32) GET_FLAG2(gpMiscAdvManager->mSongs, 3) != 0;

    mUnk_40.func_ov000_02057cb0();
    mUnk_A0.mpModel = mUnk_40.mpModel;
    mUnk_A0.func_ov000_020577a4(data_ov063_02164934.func_ov000_02058a84(0x0, &data_ov063_02162700), 0, false);
    mUnk_E0.mpModel = mUnk_40.mpModel;
    mUnk_E0.func_ov000_020577a4(data_ov063_02164934.func_ov000_02058a84(0x1, &data_ov063_02162710), 0, true);
    mUnk_120.mpModel = mUnk_40.mpModel;
    mUnk_120.func_ov000_020577a4(data_ov063_02164934.func_ov000_02058a84(0x1, &data_ov063_02162720), 0, true);

    mUnk_10  = &data_ov063_021649e8;
    mUnk_16C = mUnk_20.mParams[0];
    if (mUnk_20.mParams[2] != 0) {
        mPos.x += FX_F32_TO_FX32(0.5f);
    }

    if (mUnk_16C == 0) {
        if (mUnk_20.mUnk_0A[1] != 0 && this->func_ov000_0209d29c(1) != 0) {
            this->func_ov063_02161b08(MapObjectUnkSWCR_168_4);
        } else {
            this->func_ov063_02161b08(MapObjectUnkSWCR_168_0);
        }
    } else if (mUnk_20.mUnk_0A[1] != 0 && this->func_ov000_0209d29c(1) != 0) {
        this->func_ov063_02161b08(MapObjectUnkSWCR_168_7);
    } else {
        this->func_ov063_02161b08(MapObjectUnkSWCR_168_5);
    }

    return true;
}

void MapObjectUnkSWCR::Setup(void) {
    unk32 ret = func_ov000_02082164(data_027e0cd8);
    if (ret) {
        func_ov031_020d9314(ret, 3, &mUnk_160);
    }
}

void MapObjectUnkSWCR::vfunc_08(void) {
    switch (mUnk_168) {
        case MapObjectUnkSWCR_168_0:
        case MapObjectUnkSWCR_168_5:
        default:
            break;
        case MapObjectUnkSWCR_168_1:
            if (MapObjectUnkWDST::func_ov094_02173584(3) == 0) {
                this->func_ov063_02161b08(MapObjectUnkSWCR_168_2);
            }
            break;
        case MapObjectUnkSWCR_168_2:
            if (data_027e09b8->func_ov000_020732ec(mUnk_174) != 0 && data_027e09b8->func_ov000_0207330c() == 10) {
                data_027e09a8->func_ov000_02071b30(0x114, &mPos, 0);
                this->func_ov063_02161b08(MapObjectUnkSWCR_168_3);
                return;
            }
            break;
        case MapObjectUnkSWCR_168_3:
            if (mUnk_E0.mUnk_04.func_01ff8fa8() != 0) {
                this->func_ov063_02161b08(MapObjectUnkSWCR_168_4);
                data_027e09a8->func_ov000_020716dc(0x3C);
                return;
            }
            mUnk_E0.func_01ffc3b4();
            break;
        case MapObjectUnkSWCR_168_4:
        case MapObjectUnkSWCR_168_7: {
            RefStruct stack = this->mRef;
            data_027e09a8->func_ov000_02071d34(&stack, 0x117, &mPos, 0);
            mUnk_A0.func_01ffc3b4();
            break;
        }
        case MapObjectUnkSWCR_168_6:
            if (data_027e09b8->func_ov000_020732ec(mUnk_174) != 0) {
                if (mUnk_120.mUnk_04.func_01ff8fa8() != 0) {
                    data_027e09a8->func_ov000_020716dc(0x3C);
                    this->func_ov063_02161b08(MapObjectUnkSWCR_168_7);
                    return;
                }

                if ((u32) data_027e09b8->func_ov000_0207330c() >= 10) {
                    mUnk_120.func_01ffc3b4();
                }
                if (data_027e09b8->func_ov000_0207330c() == 10) {
                    data_027e09a8->func_ov000_02071b30(0x114, &mPos, 0);
                }
            }
            break;
    }

    mUnk_170.Update();
    mUnk_178 = (unk32) GET_FLAG2(gpMiscAdvManager->mSongs, 3) != 0;
}

void MapObjectUnkSWCR::vfunc_0C(void) {
    this->vfunc_08();
}

// non-matching (SIN/COS)
void MapObjectUnkSWCR::func_ov063_02161b08(MapObjectUnkSWCR_168_Enum param1) {
    mUnk_168 = param1;
    mUnk_170.Reset();

    switch (param1) {
        case MapObjectUnkSWCR_168_1:
        default:
            break;
        case MapObjectUnkSWCR_168_0:
            mUnk_40.func_ov000_02057cb0();
            func_ov000_02057cc8(&mUnk_40);
            mUnk_40.func_ov000_02057c98(&mUnk_A0);
            mUnk_40.func_ov000_02057c98(&mUnk_E0);
            mUnk_A0.func_ov000_020577f8(0);
            mUnk_E0.func_ov000_020577f8(0);
            break;
        case MapObjectUnkSWCR_168_2:
            UnkStackStruct1 stack;
            func_ov000_02072fd0(&stack);
            stack.mUnk_08 = 0x3C;
            stack.mUnk_00 = 0x80;
            stack.mUnk_3A = 3;
            stack.mUnk_18.Copy(1);
            SET_FLAG2(stack.mUnk_38, 7);
            VecFx32_Copy(&mPos, &stack.mUnk_0C);
            mUnk_174 = data_027e09b8->func_ov000_02073388(&stack, 0);
            data_027e0cec->func_ov000_0209feac(0x8E6, &mPos, 4, 0, 0);
            data_027e0cec->func_ov000_0209feac(0x8E7, &mPos, 4, 0, 0);
            break;
        case MapObjectUnkSWCR_168_3:
            mUnk_40.func_ov000_02057cb0();
            func_ov000_02057cc8(&mUnk_40);
            mUnk_40.func_ov000_02057c98(&mUnk_A0);
            mUnk_40.func_ov000_02057c98(&mUnk_E0);
            mUnk_A0.func_ov000_020577f8(0);
            mUnk_E0.func_ov000_020577f8(0);
            break;
        case MapObjectUnkSWCR_168_4: {
            if (mUnk_20.mUnk_0A[1] != 0) {
                this->func_ov000_0209d2c4(1, true);
            }

            mUnk_40.func_ov000_02057cb0();
            func_ov000_02057cc8(&mUnk_40);
            mUnk_40.func_ov000_02057c98(&mUnk_A0);
            mUnk_40.func_ov000_02057c98(&mUnk_E0);
            mUnk_A0.func_ov000_020577f8(0);
            mUnk_E0.func_ov000_020577f8(mUnk_E0.mUnk_04.mUnk_10);

            ActorParams params;
            params.mUnk_28.Reset();
            params.func_ov000_020975f8();

            params.mInitialPos.z = mPos.z + FX_Mul(COS(mAngle.angle_u), FX_F32_TO_FX32(.5f));
            params.mInitialPos.y = mPos.y;
            params.mInitialPos.x = mPos.x + FX_Mul(SIN(mAngle.angle_u), FX_F32_TO_FX32(.5f));
            params.mInitialAngle = mAngle.angle_s;
            params.mParams[0]    = mUnk_20.mParams[1];
            RefStruct pOutRef;
            Actor::func_ov000_020973f4(&pOutRef, &data_ov000_020b539c_eur, ActorId_EFSB, &params, 0);
            break;
        }
        case MapObjectUnkSWCR_168_7: {
            if (mUnk_20.mUnk_0A[1] != 0) {
                this->func_ov000_0209d2c4(1, true);
            }

            mUnk_40.func_ov000_02057cb0();
            func_ov000_02057cc8(&mUnk_40);
            mUnk_40.func_ov000_02057c98(&mUnk_A0);
            mUnk_40.func_ov000_02057c98(&mUnk_120);
            mUnk_A0.func_ov000_020577f8(0);
            mUnk_120.func_ov000_020577f8(mUnk_120.mUnk_04.mUnk_10);

            ActorParams params;
            params.mUnk_28.Reset();
            params.func_ov000_020975f8();

            params.mInitialPos.z = mPos.z + FX_Mul(COS((u16) mAngle.angle_s), FX_F32_TO_FX32(.5f));
            params.mInitialPos.y = mPos.y;
            params.mInitialPos.x = mPos.x + FX_Mul(SIN((u16) mAngle.angle_s), FX_F32_TO_FX32(.5f));
            params.mInitialAngle = mAngle.angle_s;
            params.mParams[0]    = mUnk_20.mParams[1];
            RefStruct pOutRef;
            Actor::func_ov000_020973f4(&pOutRef, &data_ov000_020b539c_eur, ActorId_EFSB, &params, 0);
            data_027e09a8->func_ov000_02071b30(0x116, &mPos, 0);
            break;
        }
        case MapObjectUnkSWCR_168_5:
            mUnk_10 = NULL;
            break;
        case MapObjectUnkSWCR_168_6: {
            UnkStackStruct1 stack;
            func_ov000_02072fd0(&stack);
            stack.mUnk_08 = 0x5A;
            stack.mUnk_00 = 0x80;
            stack.mUnk_3A = 3;
            stack.mUnk_18.Copy(1);
            SET_FLAG2(stack.mUnk_38, 7);
            VecFx32_Copy(&mPos, &stack.mUnk_0C);

            mUnk_174 = data_027e09b8->func_ov000_02073388(&stack, 0);
            mUnk_10  = &data_ov063_021649e8;

            mUnk_40.func_ov000_02057cb0();
            func_ov000_02057cc8(&mUnk_40);
            mUnk_40.func_ov000_02057c98(&mUnk_120);
            mUnk_120.func_ov000_020577f8(0);

            data_027e0cec->func_ov000_0209feac(0x8E4, &mPos, 4, 0, 0);
            data_027e0cec->func_ov000_0209feac(0x8E5, &mPos, 4, 0, 0);
            break;
        }
    }
}

void MapObjectUnkSWCR::vfunc_14(unk32 param1) {
#pragma unused(param1)
    if (mUnk_168 != MapObjectUnkSWCR_168_5) {
        mUnk_40.vfunc_18(&mPos);
    }
}
