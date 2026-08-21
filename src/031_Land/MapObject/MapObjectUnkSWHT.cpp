#include "MapObject/MapObjectUnkSWHT.hpp"

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_027e0cec.hpp"
#include "Unknown/UnkStruct_ov000_020b5214.hpp"

extern const char data_ov031_02110ce0;

extern "C" void func_ov031_020e0f30(ActorRef);

DECL_PROFILE(MapObjectProfileUnkSWHT);

// awful sinit: should not have constructors
static MapObject_10 data_ov031_02117a9c                 = MapObject_10();
static MapObjectProfile_Derived2_20 data_ov031_021179e8 = MapObjectProfile_Derived2_20();

MapObject *MapObjectProfileUnkSWHT::Create() {
    return new(HeapIndex_ITCM) MapObjectUnkSWHT();
}

// non-matching (regalloc)
MapObjectProfileUnkSWHT::MapObjectProfileUnkSWHT() :
    MapObjectProfilePot_Base(MapObjectId_SWHT, MapObjectId_SWHT) {
    this->mUnk_D4.mUnk_08 = 0x84007009;
    VecFx32_Init(FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), &this->mUnk_D4.mUnk_0C);
    this->mUnk_D4.mUnk_18 = FLOAT_TO_FX32(0.35f);
    this->mUnk_D4.mUnk_1C = FLOAT_TO_FX32(1.2f);
    this->mUnk_06         = 0x0;
    this->mUnk_0C         = 0x1333;
    this->mUnk_20.mUnk_15 = 0x1;
}

MapObjectUnkSWHT::MapObjectUnkSWHT() :
    mUnk_054(NULL),
    mUnk_0B4(&this->mUnk_0D4, NULL),
    mUnk_0F4(NULL),
    mUnk_0F8(-0x1),
    mUnk_0FC(0x0) {
    this->mUnk_054.vfunc_08(G3d_GetModelPtr(GET_PROFILE(MapObjectProfileUnkSWHT)->mUnk_20.mUnk_50));
    this->mUnk_0B4.mpModel = this->mUnk_054.mpModel;

    unk32 param2                     = data_ov031_021179e8.func_ov000_02058a24();
    UnkStruct_ov000_02058a84 *param1 = data_ov031_021179e8.func_ov000_02058a84(0x3, &data_ov031_02110ce0);

    this->mUnk_0B4.func_ov000_020577a4(param1, param2, 0x1);

    this->mUnk_054.func_ov000_02057c98(&this->mUnk_0B4);

    this->mUnk_10 = &data_ov031_02117a9c;

    SET_FLAG(this->mFlags, MapObjFlag_6);
}

MapObjectUnkSWHT::~MapObjectUnkSWHT() {
    if (this->mState == MapObjUnkSWHTState_1) {
        if (!(this->mUnk_040 != 0x2 && this->mUnk_040 != 0x3)) {
            if (!this->func_ov000_0209d29c(0x1)) {
                this->func_ov031_021021c0(MapObjUnkSWHTState_0, 0x1);
            }
        }
    }
}

bool MapObjectUnkSWHT::vfunc_00() {
    SET_FLAGS(this->mFlags, MapObjFlag_9, MapObjFlag_10);

    this->mUnk_18[0] = 0x11;
    this->mUnk_18[1] = 0x11;
    bool var         = false;
    this->mUnk_044   = 0x0;
    this->mUnk_04C   = 0x0;

    switch (this->mUnk_20.mParams[0]) {
        case 0x4:
            this->mUnk_040 = 0x2;
            var            = true;
            break;
        case 0x5:
            this->mUnk_040 = 0x3;
            var            = true;
            break;
        case 0x6:
            this->mUnk_040 = 0x0;
            this->mUnk_044 = 0x1;
            break;
        case 0x7:
            this->mUnk_040 = 0x1;
            this->mUnk_044 = 0x1;
            break;
        default:
            this->mUnk_040 = this->mUnk_20.mParams[0];
            break;
    }

    if (var != 0) {
        this->mUnk_048 = this->mUnk_20.mParams[1] * 0x1E;
    } else {
        this->mUnk_048 = this->mUnk_20.mParams[1];
    }

    if (this->func_ov000_0209d29c(0x0)) {
        this->func_ov031_021021c0(MapObjUnkSWHTState_1, 0x1);
    } else {
        this->func_ov031_021021c0(MapObjUnkSWHTState_0, 0x1);
    }
    this->func_ov031_02101dd8();
    return true;
}

void MapObjectUnkSWHT::func_ov031_02101dd8() {
    switch (this->mState) {
        case MapObjUnkSWHTState_0:
            this->mUnk_0B4.func_ov000_020577f8(0x3000);
            break;
        case MapObjUnkSWHTState_1:
            this->mUnk_0B4.func_ov000_020577f8(0x1000);
            break;
        default:
            break;
    }
    this->mUnk_0B4.func_01ffc3b4();
}

void MapObjectUnkSWHT::vfunc_08() {
    this->func_ov031_02101dd8();
    ++this->mUnk_04C;

    switch (this->mState) {
        case MapObjUnkSWHTState_0:
            ++this->mUnk_050;

            if (this->mUnk_044 != 0x1) {
                break;
            }

            if (!this->func_ov000_0209d29c(0x0)) {
                break;
            }

            this->func_ov031_021021c0(MapObjUnkSWHTState_1, 0x0);
            break;
        case MapObjUnkSWHTState_1:
            this->func_ov031_021023b0();

            data_027e0cec->func_ov000_020a0140(&this->mUnk_0F4, &this->mPos);

            switch (this->mUnk_040) {
                case 0x2:
                case 0x3:
                    if (this->mUnk_20.mParams[2] == 0x1) {
                        if (this->func_ov000_0209d29c(0x1)) {
                            break;
                        }
                    }

                    if (++this->mUnk_050 < this->mUnk_048) {
                        break;
                    }

                    this->func_ov031_021021c0(MapObjUnkSWHTState_0, 0x0);
                    break;
                case 0x1:
                    ++this->mUnk_050;

                    if (this->mUnk_044 != 0x1) {
                        break;
                    }

                    if (this->func_ov000_0209d29c(0x0)) {
                        break;
                    }

                    this->func_ov031_021021c0(MapObjUnkSWHTState_0, 0x0);
                    break;
                default:
                    if (this->func_ov000_0209d29c(0x0)) {
                        break;
                    }

                    this->func_ov031_021021c0(MapObjUnkSWHTState_0, 0x0);
                    break;
            }

            break;
        default:
            break;
    }
}

void MapObjectUnkSWHT::vfunc_0C() {
    this->func_ov031_02101dd8();
}

void MapObjectUnkSWHT::vfunc_14() {
    this->mUnk_054.vfunc_18(&this->mPos);
}

bool MapObjectUnkSWHT::vfunc_1C(ActorRef param1, unk32 param2, VecFx32 *param3) {
    if (param1.type != 0x0) {
        Actor *actor = gpActorManager->func_01fff3b4(param1);
        if (actor != NULL) {
            if (actor->GetActorId() == ActorId_SRST) {
                return false;
            }
        }
    }

    switch (param2) {
        case 0xE:
        case 0x10:
        case 0x11:
            return true;
        case 0xD:
            if (this->func_ov031_021020ec()) {
                func_ov031_020e0f30(param1);
            }
            return false;
        case 0xC:
            this->func_ov031_021020ec();
            return false;
        case 0xA:
            if (param1.type != 0x0) {
                Actor *actor = gpActorManager->func_01fff3b4(param1);
                if (actor != NULL) {
                    if (actor->GetActorId() == ActorId_KEYB) {
                        return true;
                    }
                }
            }
            this->func_ov031_021020ec();
            break;
        default:
            this->func_ov031_021020ec();
            break;
    }
    return false;
}

bool MapObjectUnkSWHT::func_ov031_021020ec() {
    bool retValue = false;
    if (this->mState != MapObjUnkSWHTState_0) {
        if (this->mState == MapObjUnkSWHTState_1) {
            switch (this->mUnk_040) {
                case 0:
                case 2:
                case 3:
                    break;
                case 1:
                    if (this->mUnk_04C > 0x1 && this->mUnk_050 >= 0x14) {
                        this->func_ov031_021021c0(MapObjUnkSWHTState_0, 0);
                        retValue = true;
                    }
                    break;
                default:
                    break;
            }
        }
    } else {
        switch (this->mUnk_040) {
            default:
                break;
            case 0:
                if (this->mUnk_050 < 0x14) {
                    break;
                }
                this->func_ov031_021021c0(MapObjUnkSWHTState_1, 0);
                retValue = true;
                break;
            case 2:
            case 3:
                this->func_ov031_021021c0(MapObjUnkSWHTState_1, 0);
                retValue = true;
                break;
            case 1:
                if (this->mUnk_04C > 1 && this->mUnk_050 >= 0x14) {
                    this->func_ov031_021021c0(MapObjUnkSWHTState_1, 0);
                    retValue = true;
                }
                break;
        }
    }
    this->mUnk_04C = 0;
    return retValue;
}

void MapObjectUnkSWHT::func_ov031_021021c0(unk16 state, unk32 param2) {
    this->mState = state;
    switch (this->mState) {
        case MapObjUnkSWHTState_0:
            SET_FLAGS(this->mFlags, MapObjFlag_7);
            SET_FLAGS(this->mFlags, MapObjFlag_9, MapObjFlag_10);

            this->func_ov000_0209d2c4(0x0, false);

            if (this->mUnk_040 - 2 > 0x1 || this->mUnk_20.mParams[2] != 0x1) {
                this->func_ov000_0209d2c4(0x1, true);
            }

            this->mUnk_050 = 0x0;
            if (param2 == 0x0) {
                data_027e09a8->func_ov000_02071b30(0x120, &this->mPos, 0x0);
            }
            data_027e0cec->func_ov000_020a0110(&this->mUnk_0F4);

            break;
        case MapObjUnkSWHTState_1:
            if (param2 == 0x0 && this->mUnk_20.mParams[3] != 0x0) {
                UnkStackStruct1 stack;
                func_ov000_02072fd0(&stack);
                stack.mUnk_08 = 0x3C;
                stack.mUnk_00 = 0x6C;
                stack.mUnk_3A = 0x3;
                stack.mUnk_38 |= 0x80;
                VecFx32_Copy(&this->mPos, &stack.mUnk_0C);
                data_027e09b8->func_ov000_02073388(&stack, 0x0);
            }

            this->func_ov000_0209d2c4(0x0, true);

            if (this->mUnk_040 - 2 > 0x1 || this->mUnk_20.mParams[2] != 0x1) {
                this->func_ov000_0209d2c4(0x1, false);
            }

            if (this->mUnk_040 == 1) {
                SET_FLAG(this->mFlags, MapObjFlag_7);
            } else {
                UNSET_FLAGS(this->mFlags, MapObjFlag_9, MapObjFlag_10);
                UNSET_FLAG(this->mFlags, MapObjFlag_7);
            }
            this->mUnk_050 = 0x0;
            if (param2 == 0x0) {
                data_027e09a8->func_ov000_02071b30(0x11F, &this->mPos, 0x0);
            }
            this->mUnk_0F8 = 0x8E9;
            this->mUnk_0FC = 0x4;
            break;
        default:
            break;
    }
}

void MapObjectUnkSWHT::func_ov031_021023b0() {
    if (this->mUnk_040 != 0x3) {
        return;
    }
    bool var = true;
    if (this->mUnk_20.mParams[2] == 0x1) {
        if (this->func_ov000_0209d29c(0x1)) {
            var = false;
        }
    }
    if (!var) {
        return;
    }
    if (this->mUnk_048 - this->mUnk_050 < 0x3C) {
        data_ov000_020b5214_eur.func_ov000_0206e7e8(0x92);
        return;
    }
    data_ov000_020b5214_eur.func_ov000_0206e7e8(0x91);
}
