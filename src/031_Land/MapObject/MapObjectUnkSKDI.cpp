#include "MapObject/MapObjectUnkSKDI.hpp"

#include "Actor/ActorManager.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_027e0cec.hpp"

struct UnkStackStruct;
DECL_PROFILE(MapObjectProfileUnkSKDI);

MapObject *MapObjectProfileUnkSKDI::Create() {
    return new(HeapIndex_ITCM) MapObjectUnkSKDI();
}

MapObjectProfileUnkSKDI::MapObjectProfileUnkSKDI() :
    MapObjectProfile_Derived2(MapObjectId_SKDI, MapObjectId_SKDI) {
    this->mUnk_06 = -0x1;
    this->mUnk_1E &= 0xFFFE;
}

MapObjectUnkSKDI::MapObjectUnkSKDI() :
    mUnk_040(GetModelFromProfile<MapObjectProfileUnkSKDI>()),
    mUnk_048(0x1),
    mUnk_07C(0x0),
    mUnk_080(-0x1),
    mUnk_084(0x0),
    mUnk_086(0x0),
    mUnk_087(0x1),
    mUnk_088(0x0),
    mUnk_089(0x0),
    mUnk_08C(0x3000, 0x1),
    mUnk_0F8(0x0),
    mUnk_0FA(0x0),
    mUnk_0FC(0x0) {
    SET_FLAG(this->mFlags, MapObjFlag_10);
    this->mUnk_18[1] = 0x12;
}

void MapObjectUnkSKDI::func_ov031_02106190() {
    this->mUnk_04C[0].mUnk_04 = 0x8C0;
    this->mUnk_04C[0].mUnk_08 = 0x4;

    this->mUnk_04C[1].mUnk_04 = 0x8C1;
    this->mUnk_04C[1].mUnk_08 = 0x4;

    this->mUnk_04C[2].mUnk_04 = 0x8C2;
    this->mUnk_04C[2].mUnk_08 = 0x4;

    this->mUnk_04C[3].mUnk_04 = 0x8C2;
    this->mUnk_04C[3].mUnk_08 = 0x4;
    this->mUnk_04C[3].func_ov000_020a0334();

    this->mUnk_0FC = 0x0;
}

void MapObjectUnkSKDI::func_ov031_021061dc() {
    this->mUnk_04C[0].mUnk_04 = 0x8B8;
    this->mUnk_04C[0].mUnk_08 = 0x4;

    this->mUnk_04C[1].mUnk_04 = 0x8B9;
    this->mUnk_04C[1].mUnk_08 = 0x4;

    this->mUnk_04C[2].mUnk_04 = 0x8BA;
    this->mUnk_04C[2].mUnk_08 = 0x4;

    this->mUnk_04C[3].mUnk_04 = 0x8BB;
    this->mUnk_04C[3].mUnk_08 = 0x4;

    this->mUnk_0FC = 0x1;
}

// non-matching
bool MapObjectUnkSKDI::vfunc_00() {
    unk32 var1;
    if (this->mUnk_20.mParams[2] == 0x1) {
        var1 = 0x1;
    } else {
        var1 = 0x0;
    }
    this->mUnk_07C = var1;
    VecFx32_Copy(&this->mPos, &this->mUnk_08C.mUnk_00);
    if (var1 == 1) {
        var1 = 0x7806;
    } else {
        var1 = 0x7406;
    }

    this->mUnk_0D4.mUnk_08 = (var1 & ~0x7000) | 0x7000;
    VecFx32_Init(FLOAT_TO_FX32(-0.5002f), FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(-0.5002f), &this->mUnk_0D4.mUnk_0C);
    VecFx32_Init(FLOAT_TO_FX32(0.5f), FLOAT_TO_FX32(1.2f), FLOAT_TO_FX32(0.5f), &this->mUnk_0D4.mUnk_18);

    if (this->mUnk_07C == 0x0) {
        this->func_ov031_02106190();
    } else {
        this->func_ov031_021061dc();
    }

    this->mUnk_10 = &this->mUnk_0D4;
    if (this->mUnk_20.mParams[1] == 0x1) {
        var1 = 0x1;
    } else {
        var1 = 0x0;
    }
    this->mUnk_086 = var1;
    return true;
}

void MapObjectUnkSKDI::vfunc_04() {
    data_027e0cd8->mUnk_0C->func_ov000_02080a5c(&this->mUnk_08C.mUnk_00);

    if (this->mUnk_20.mParams[0] == 0x0) {
        if ((!this->func_ov000_0209d29c(0x0) && this->mUnk_20.mUnk_0A[0] != 0x0) ||
            (!this->func_ov000_0209d29c(0x1) && this->mUnk_20.mUnk_0A[1] != 0x0)) {
            this->func_ov031_02106678(0x2, 0x1);
            return;
        }
        this->func_ov031_02106678(0x1, 0x1);
        return;
    }

    if (this->func_ov000_0209d29c(0x0) || this->func_ov000_0209d29c(0x1)) {
        this->func_ov031_02106678(0x1, 0x1);
        return;
    }
    this->func_ov031_02106678(0x2, 0x1);
}

void MapObjectUnkSKDI::vfunc_08() {
    this->func_ov031_0210643c(0x0);
}

void MapObjectUnkSKDI::vfunc_0C() {
    if (this->mUnk_080 >= 0x0 && data_027e09b8->func_ov000_020732ec(this->mUnk_080) != 0x0) {
        this->func_ov031_0210643c(0x1);
        return;
    }
    if (this->mState != MapObjUnkSKDIState_0 && this->mState != MapObjUnkSKDIState_1 && this->mState != MapObjUnkSKDIState_2) {
        return;
    }
    this->func_ov031_0210643c(0x0);
}

void MapObjectUnkSKDI::func_ov031_0210643c(unk32 param1) {
    switch (this->mState) {
        case MapObjUnkSKDIState_0:
            ++this->mUnk_084;
            if (this->mUnk_084 < 0x6) {
                return;
            }
            this->func_ov031_02106678(MapObjUnkSKDIState_1, 0x0);
            break;
        case MapObjUnkSKDIState_3:
            if (param1 == 0x0) {
                return;
            }
            if ((u32) data_027e09b8->func_ov000_0207330c() < 0x1E) {
                return;
            }
            this->func_ov031_02106678(MapObjUnkSKDIState_0, 0x0);
            break;
        case MapObjUnkSKDIState_1:
            if (this->func_ov000_0209d3b4(0x0, FLOAT_TO_FX32(2.0f)) != 0x0) {
                VecFx32 vec;
                VecFx32_Init(this->mPos.x, this->mPos.y + FLOAT_TO_FX32(1.25f), this->mPos.z, &vec);
                UnkStruct_027e0cec *data = data_027e0cec;
                for (ActorUnkBOMB_unk *ptr = this->mUnk_04C; ptr != this->mUnk_04C + ARRAY_LEN(this->mUnk_04C); ++ptr) {
                    data->func_ov000_020a0140(ptr, &vec);
                }
            } else {
                UnkStruct_027e0cec *data = data_027e0cec;
                for (ActorUnkBOMB_unk *ptr = this->mUnk_04C; ptr != this->mUnk_04C + ARRAY_LEN(this->mUnk_04C); ++ptr) {
                    data->func_ov000_020a0110(ptr);
                }
            }
            if (this->func_ov000_0209d29c(0x0) != 0 || this->mUnk_20.mUnk_0A[0] == 0x0) {
                if (this->func_ov000_0209d29c(0x1) != 0) {
                    return;
                }
                if (this->mUnk_20.mUnk_0A[1] == 0x0) {
                    return;
                }
            }
            this->func_ov031_02106678(MapObjUnkSKDIState_2, 0x0);
            break;
        case MapObjUnkSKDIState_2:
            if (this->func_ov000_0209d29c(0x1) != 0x0) {
                if (this->mUnk_086 != 0) {
                    this->func_ov031_02106678(MapObjUnkSKDIState_3, 0x0);
                } else {
                    this->func_ov031_02106678(MapObjUnkSKDIState_0, 0x0);
                }
            }
            unk32 temp_r1 = this->mUnk_0FA;
            if (temp_r1 != 0 && ((u32) this->mUnk_0F8 >= (u32) temp_r1)) {
                this->func_ov031_02106678(MapObjUnkSKDIState_0, 0x0);
                this->mUnk_0FA = 0x0;
                this->mUnk_0F8 = 0x0;
            }
            if (data_027e09b8->func_01ffd420() != 0) {
                return;
            }
            if (this->mUnk_0F8 < this->mUnk_0FA) {
                ++this->mUnk_0F8;
            }
            break;
        default:
            break;
    }
}

void MapObjectUnkSKDI::func_ov031_02106678(MapObjState state, unk32 param2) {
    VecFx32 sp48;
    if (this->mState == state) {
        return;
    }
    this->mState = state;
    VecFx32_Init(this->mPos.x, this->mPos.y + FLOAT_TO_FX32(1.25f), this->mPos.z, &sp48);

    switch (this->mState) {
        case MapObjUnkSKDIState_0:
            if (param2 == 0x0) {
                if (this->mUnk_0FC == 0x0) {
                    data_027e0cec->func_ov000_0209feac(0x8C5, &sp48, 0x4, 0x0, 0x0);
                    data_027e0cec->func_ov000_0209feac(0x8C6, &sp48, 0x4, 0x0, 0x0);
                    data_027e09a8->func_ov000_02071b30(0x108, &this->mPos, 0x0);
                } else {
                    data_027e0cec->func_ov000_0209feac(0x8BE, &sp48, 0x4, 0x0, 0x0);
                    data_027e0cec->func_ov000_0209feac(0x8BF, &sp48, 0x4, 0x0, 0x0);
                    data_027e09a8->func_ov000_02071b30(0x10A, &this->mPos, 0x0);
                }
            }
            this->mUnk_084 = 0x0;
            break;
        case MapObjUnkSKDIState_3:
            if (param2 == 0x0 && this->mUnk_087 != 0x0) {
                UnkStackStruct1 stack;

                func_ov000_02072fd0(&stack);
                stack.mUnk_08 = 0x3C;
                stack.mUnk_00 = 0x80;
                stack.mUnk_3A = 0x07;
                stack.mUnk_38 |= 0x80;

                VecFx32_Copy(&this->mPos, &stack.mUnk_0C);

                if (this->mUnk_20.mUnk_16) {
                    stack.mUnk_38 |= 0x4;
                }

                this->mUnk_080 = data_027e09b8->func_ov000_02073388(&stack, 0x0);
                this->mUnk_087 = 0x0;
                break;
            }
            this->func_ov031_02106678(MapObjUnkSKDIState_0, 0x0);
            break;
        case MapObjUnkSKDIState_1:
            SET_FLAG(this->mFlags, MapObjFlag_7);
            SET_FLAG(this->mFlags, MapObjFlag_8);
            if (param2 == 0x0) {
                if (this->mUnk_07C != this->mUnk_0FC && this->mUnk_088 == 0x0) {
                    break;
                }
                this->func_ov000_0209d2c4(0x0, true);
            }
            UnkStruct_027e0cec *data = data_027e0cec;
            for (ActorUnkBOMB_unk *ptr = this->mUnk_04C; ptr != this->mUnk_04C + ARRAY_LEN(this->mUnk_04C); ++ptr) {
                data->func_ov000_020a0140(ptr, &sp48);
            }
            unk32 dc = this->mUnk_0D4.mUnk_08;
            if (this->mUnk_0FC == 0x1) {
                dc = (dc & ~0xE00) | 0x800;
            } else {
                dc = (dc & ~0xE00) | 0x400;
            }
            this->mUnk_0D4.mUnk_08 = dc;
            this->mUnk_080         = -1;
            this->mUnk_0BC         = 0x3000;
            UNSET_FLAG(this->mFlags, MapObjFlag_10);
            break;
        case MapObjUnkSKDIState_2:
            SET_FLAG(this->mFlags, MapObjFlag_7);
            this->mFlags[0] &= 0xFEFF;
            this->mUnk_0FA = 0x0;
            this->mUnk_0F8 = 0x0;
            if (param2 == 0) {
                this->func_ov000_0209d2c4(0x0, false);
                UnkStruct_027e0cec *data = data_027e0cec;
                for (ActorUnkBOMB_unk *ptr = this->mUnk_04C; ptr != this->mUnk_04C + ARRAY_LEN(this->mUnk_04C); ++ptr) {
                    data->func_ov000_020a0110(ptr);
                }
                if (this->mUnk_0FC == 0) {
                    data_027e0cec->func_ov000_0209feac(0x8C3, &sp48, 0x4, 0x0, 0x0);
                    data_027e0cec->func_ov000_0209feac(0x8C4, &sp48, 0x4, 0x0, 0x0);
                    data_027e09a8->func_ov000_02071b30(0x109, &this->mPos, 0x0);
                } else {
                    data_027e0cec->func_ov000_0209feac(0x8BC, &sp48, 0x4, 0x0, 0x0);
                    data_027e0cec->func_ov000_0209feac(0x8BD, &sp48, 0x4, 0x0, 0x0);
                    data_027e09a8->func_ov000_02071b30(0x10B, &this->mPos, 0x0);
                }
            }
            this->mUnk_0D4.mUnk_08 &= ~0xE00;
            this->mUnk_080 = -1;
            this->mUnk_0BC = 0x800;
            SET_FLAG(this->mFlags, MapObjFlag_10);
            break;
        default:
            break;
    }
}

void MapObjectUnkSKDI::func_ov031_02106a70() {
    this->func_ov031_02106678(MapObjUnkSKDIState_2, 0x0);
}

// ActorItemBoomerang?
class ActorUnk_MapObjectUnkSKDI_vfunc_1C : public Actor {
public:
    /* 000 (base) */
    /* 094 */ STRUCT_PAD(0x094, 0x128);
    /* 128 */ unk32 mUnk_128;
    /* 12C */
};

// non-matching
bool MapObjectUnkSKDI::vfunc_1C(ActorRef param1, unk32 param2, VecFx32 *param3) {
    bool var_r1 = false;
    if (param1.type_index == 0x102) {
        if (param1.unk_id == 1 || param1.unk_id == 3) {
            var_r1 = true;
        }
    }
    if (var_r1 != 0 && param1.unk_id == 1) {
        if (data_027e0ce0->mEquippedItem != ActorId_PMTB) {
            return false;
        }
        this->func_ov031_02106678(MapObjUnkSKDIState_0, 0x0);
        return true;
    }

    switch (param2) {
        case 0x4:
            if (this->mState != MapObjUnkSKDIState_2) {
                this->func_ov031_02106678(MapObjUnkSKDIState_2, 0x0);
                this->mUnk_0F8 = 0;
                unk32 var      = 0x28;
                if (this->mUnk_20.mParams[3] != 0) {
                    var = this->mUnk_20.mParams[3];
                }
                this->mUnk_0FA = var;
            }
            return false;
        case 0x3:
            return false;
        case 0xC:
            var_r1 = true;
            if (data_027e09a4->mUnk_00.sceneIndex == SceneIndex_d_snow26 && this->mUnk_0FA != 0x0) {
                var_r1 = false;
            }
            if (this->mState == MapObjUnkSKDIState_2 && var_r1) {
                ActorUnk_MapObjectUnkSKDI_vfunc_1C *actor =
                    (ActorUnk_MapObjectUnkSKDI_vfunc_1C *) gpActorManager->func_01fff3b4(param1);
                if (actor != NULL) {
                    switch (actor->mUnk_128) {
                        case 0x1:
                            switch (this->mUnk_07C) {
                                case 0x0:
                                    this->func_ov031_02106190();
                                    this->func_ov031_02106678(MapObjUnkSKDIState_0, 0);
                                    break;
                                case 0x1:
                                    this->func_ov031_02106190();
                                    this->func_ov031_02106678(MapObjUnkSKDIState_0, 0);
                                    break;
                                default:
                                    break;
                            }
                            break;
                        case 0x2:
                            switch (this->mUnk_07C) {
                                case 0x0:
                                    this->func_ov031_021061dc();
                                    this->func_ov031_02106678(MapObjUnkSKDIState_0, 0);
                                    break;
                                case 0x1:
                                    this->func_ov031_021061dc();
                                    this->func_ov031_02106678(MapObjUnkSKDIState_0, 0);
                                    break;
                                default:
                                    break;
                            }
                            break;
                        default:
                            break;
                    }
                }
            }
            return false;
        default:
            return true;
    }
}

void MapObjectUnkSKDI::vfunc_14() {
    this->mUnk_040.vfunc_18(&this->mPos);
}

unk32 MapObjectUnkSKDI::vfunc_38() {
    return this->mUnk_07C;
}

unk32 MapObjectUnkSKDI::vfunc_3C() {
    return this->mUnk_0FC;
}

s16 MapObjectUnkSKDI::vfunc_40() {
    return this->mState;
}

void MapObjectUnkSKDI::func_ov031_02106cb0(unk32 param1) {
    this->func_ov031_02106678(MapObjUnkSKDIState_0, param1);
}
