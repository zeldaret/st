#include "Actor/ActorUnkRCFO.hpp"

#include "CommonFuncs.hpp"
#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectManager.hpp"
#include "MapObject/MapObjectUnkRCFL.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_ov000_020b5214.hpp"

DECL_PROFILE(ActorProfileUnkRCFO);

char *data_ov033_02121190[] = {"-", "☆", "tri", "sitaboko", "umbrella"};

Actor *ActorProfileUnkRCFO::Create() {
    return new(HeapIndex_2) ActorUnkRCFO();
}

ActorProfileUnkRCFO::ActorProfileUnkRCFO() :
    ActorProfile(ActorId_RCFO) {}

// non-matching
ActorUnkRCFO::ActorUnkRCFO() :
    mUnk_910(this->mUnk_91C, 0xC8),
    mUnk_DCC(this->mUnk_C3C),
    mUnk_DD0(NULL),
    mUnk_DD4(0x5),
    mUnk_DD8(0, 0),
    mUnk_DDC(0x2710000, FX_F32_TO_FX32(0.0f), 0x2710000),
    mUnk_DE8(-0x2710000, FX_F32_TO_FX32(0.0f), -0x2710000),
    mUnk_DF8(-0x1),
    mUnk_DFC(&this->mUnk_910) {
    _MI_CpuFill(0x0, this->mUnk_C3C, ARRAY_LEN(this->mUnk_C3C));

    Vec2s base_value(0, 0);
    for (s32 i = 0; i < ARRAY_LEN(this->mUnk_91C); ++i) {
        this->mUnk_91C[i] = base_value;
    }
}

ActorUnkRCFO::~ActorUnkRCFO() {
    this->mUnk_094.func_ov033_021190dc();
}

extern unk32 data_ov033_0211dbe0;

bool ActorUnkRCFO::Init(unk32 param1) {
#pragma unused(param1)

    this->mUnk_DF4 = this->mUnk_5C.mParams[0];
    this->mUnk_094.func_ov033_02119048(&data_ov033_0211dbe0);

    this->func_ov033_02119840(0x0, 0x1);
    return true;
}

void ActorUnkRCFO::Setup() {
    this->mUnk_DCC = this->mUnk_C3C;

    for (MapObject **mapObjectPtr = gpMapObjManager->mMapObjTable; mapObjectPtr != gpMapObjManager->mUnk_08; ++mapObjectPtr) {
        MapObjectUnkRCFL *mapObject = (MapObjectUnkRCFL *) *mapObjectPtr;

        if (mapObject == NULL || mapObject->GetMapObjectId() != MapObjectId_RCFL) {
            continue;
        }

        fx32 delta = mapObject->func_ov033_0211bcf4();

        fx32 limit = mapObject->mPos.x - delta;
        if (limit < this->mUnk_DDC.vec.x) {
            this->mUnk_DDC.vec.x = limit;
        }

        limit = mapObject->mPos.x + delta;
        if (limit > this->mUnk_DE8.vec.x) {
            this->mUnk_DE8.vec.x = limit;
        }

        limit = mapObject->mPos.z - delta;
        if (limit < this->mUnk_DDC.vec.z) {
            this->mUnk_DDC.vec.z = limit;
        }

        limit = mapObject->mPos.z + delta;
        if (limit > this->mUnk_DE8.vec.z) {
            this->mUnk_DE8.vec.z = limit;
        }

        if (this->mUnk_DCC != NULL) {
            *mUnk_DCC = mapObject;
        }

        ++this->mUnk_DCC;
    }
}

void ActorUnkRCFO::Update() {
    bool foundOneRCFL               = false;
    MapObjectUnkRCFL *lastValidRCFL = NULL;

    for (MapObjectUnkRCFL **mapObjectPtr = this->mUnk_C3C; mapObjectPtr != this->mUnk_DCC; ++mapObjectPtr) {
        MapObjectUnkRCFL *mapObject = *mapObjectPtr;
        if (mapObject->mUnk_40 == 0x1) {
            foundOneRCFL  = true;
            lastValidRCFL = mapObject;
        }
    }

    switch (this->mUnk_DD4) {
        case 0x0:
            if (!foundOneRCFL) {
                break;
            }

            if (lastValidRCFL->mUnk_60 == 0x1) {
                this->func_ov033_02119840(0x1, 0x0);
                break;
            }

            this->func_ov033_021199f4();
            break;

        case 0x1: {
            if (!foundOneRCFL) {
                this->func_ov033_02119840(0x0, 0x0);
                break;
            }

            if (lastValidRCFL->mUnk_60 == 0x2) {
                if (!this->func_ov033_02119bc4()) {
                    this->func_ov033_02119840(0x2, 0x0);
                } else {
                    this->func_ov033_02119840(0x3, 0x0);
                }

                break;
            }

            this->func_ov033_02119a58();

            unk32 delta = this->mUnk_910.mUnk_04 - this->mUnk_910.mUnk_00;
            if ((u32) ((s32) (delta + ((u32) (delta >> 1) >> 0x1E)) >> 2) >= 200) {
                this->func_ov033_02119840(0x0, 0x0);
                break;
            }

            break;
        }

        case 0x2: {
            if (data_027e09b8->func_ov000_020732ec(this->mUnk_DF8) == 0x0) {

                for (MapObjectUnkRCFL **mapObjectPtr = this->mUnk_C3C; mapObjectPtr != this->mUnk_DCC; ++mapObjectPtr) {
                    MapObjectUnkRCFL *mapObject = *mapObjectPtr;
                    mapObject->func_ov033_0211bcdc();
                }

                this->Actor::func_ov000_02098a88(0x0, 0x1);
                this->func_ov033_02119840(0x4, 0x0);
                break;
            }

            if (this->mUnk_DD8.GetValue() == 0x1E) {
                for (MapObjectUnkRCFL **mapObjectPtr = this->mUnk_C3C; mapObjectPtr != this->mUnk_DCC; ++mapObjectPtr) {
                    MapObjectUnkRCFL *mapObject = *mapObjectPtr;
                    if (!(mapObject->mUnk_40 != 0x2 && mapObject->mUnk_40 != 0x1)) {
                        mapObject->func_ov033_0211bcc4();
                    }
                }

                data_ov000_020b5214_eur.func_ov000_0206db44(0x96);
            }
            break;
        }

        case 0x3:
            this->func_ov033_02119840(0x0, 0x0);
            return;

        default:
            break;
    }

    this->mUnk_DD0 = lastValidRCFL;
    this->mUnk_DD8.Update();
}

void ActorUnkRCFO::vfunc_24() {
    this->Update();
}

void ActorUnkRCFO::vfunc_2C(unk32 param1) {
#pragma unused(param1)
}

// non-matching
void ActorUnkRCFO::func_ov033_02119840(unk32 param1, unk32 param2) {
    this->mUnk_DD4 = param1;
    this->mUnk_DD8.Set(0x0, 0xFFFF);

    switch (param1) {
        case 0x0:
            this->func_ov033_021199f4();

            this->mUnk_910.mUnk_04 = this->mUnk_910.mUnk_00;
            this->mUnk_DF8         = -0x1;
            this->mUnk_DD0         = NULL;

            if (param2 != 0x0) {
                break;
            }

            data_ov000_020b5214_eur.func_ov000_0206db44(0x177);
            break;

        case 0x2: {
            UnkStackStruct1 sp0C;
            func_ov000_02072fd0(&sp0C);
            sp0C.mUnk_08 = 0x3C;
            sp0C.mUnk_00 = 0x80;
            sp0C.mUnk_3A = 0x7;

            UnkStackStruct2 *src   = func_ov000_02077590(0x1);
            sp0C.mUnk_18.s.mUnk_00 = src->s.mUnk_00;
            sp0C.mUnk_18.s.mUnk_02 = src->s.mUnk_02;
            sp0C.mUnk_18.s.mUnk_04 = src->s.mUnk_04;
            sp0C.mUnk_18.s.mUnk_06 = src->s.mUnk_06;
            sp0C.mUnk_18.s.mUnk_08 = src->s.mUnk_08;

            sp0C.mUnk_18.s.mUnk_0C = src->s.mUnk_0C;

            u16 sp44 = sp0C.mUnk_38 | 0x80;

            sp0C.mUnk_18.s.mUnk_18 = src->s.mUnk_18;
            sp0C.mUnk_18.s.mUnk_1A = src->s.mUnk_1A;
            sp0C.mUnk_18.s.mUnk_1C = src->s.mUnk_1C;
            sp0C.mUnk_18.s.mUnk_1E = src->s.mUnk_1E;

            sp0C.mUnk_18.s.mUnk_08 += 0x10000;
            sp0C.mUnk_38 = sp44;

            VecFx32Cpp vec(this->mUnk_DE8.vec.x + this->mUnk_DDC.vec.x, this->mUnk_DE8.vec.y + this->mUnk_DDC.vec.y,
                           this->mUnk_DE8.vec.z + this->mUnk_DDC.vec.z);
            func_01ff93c0(&vec.vec, FX_F32_TO_FX32(0.5f));

            VecFx32_Copy(&vec.vec, &sp0C.mUnk_0C);

            this->mUnk_DF8 = data_027e09b8->func_ov000_02073388(&sp0C, 0);
            break;
        }

        case 0x3:
            data_ov000_020b5214_eur.func_ov000_0206db44(0x97);
            break;

        case 0x1:
        default:
            break;
    }
}

void ActorUnkRCFO::func_ov033_021199f4() {
    for (MapObject **mapObjectPtr = gpMapObjManager->mMapObjTable; mapObjectPtr != gpMapObjManager->mUnk_08; ++mapObjectPtr) {
        MapObjectUnkRCFL *mapObject = (MapObjectUnkRCFL *) *mapObjectPtr;

        if (mapObject == NULL || mapObject->GetMapObjectId() != MapObjectId_RCFL) {
            continue;
        }

        mapObject->func_ov033_0211bcac();
    }
}

// non-matching
void ActorUnkRCFO::func_ov033_02119a58() {
    VecFx32 *vec = data_027e0ce0->func_01fff148(0x1);

    Vec2s sp;
    sp.x = (func_01ffb428(vec->x - this->mUnk_DDC.vec.x, this->mUnk_DE8.vec.x - this->mUnk_DDC.vec.x) << 8) >> 0xC;
    sp.y = (func_01ffb428(vec->z - this->mUnk_DDC.vec.z, this->mUnk_DE8.vec.z - this->mUnk_DDC.vec.z) * 0xC0) >> 0xC;

    if (sp.x < 0) {
        sp.x = 0;
    }
    if (sp.x > 0xFF) {
        sp.x = 0xFF;
    }
    if (sp.y < 0) {
        sp.y = 0;
    }
    if (sp.y > 0xBF) {
        sp.y = 0xBF;
    }

    unk32 val   = this->mUnk_910.mUnk_00;
    unk32 delta = this->mUnk_910.mUnk_04 - val;
    if ((u32) ((s32) (delta + ((u32) (delta >> 1) >> 0x1E)) >> 2) == 0x0) {
        this->mUnk_910.func_ov000_0205b1d8(&sp);
        return;
    }

    Vec2s *newVal = (Vec2s *) (this->mUnk_910.mUnk_00 + delta * 4);
    bool cond     = false;

    // strange vec2s access
    if (newVal->x == sp.x && newVal->y == sp.y) {
        cond = true;
    }

    if (cond) {
        return;
    }

    fx16 deltaX = ABS(sp.x - newVal->x);
    fx16 deltaY = ABS(sp.y - newVal->y);

    if (deltaX > 2 && deltaY > 2) {
        this->mUnk_910.func_ov000_0205b1d8(&sp);
    }
}

// non-matching
bool ActorUnkRCFO::func_ov033_02119bc4() {
    this->mUnk_094.func_ov033_021190f4();
}

ActorUnkRCFO_DFC::ActorUnkRCFO_DFC(ActorUnkRCFO_910 *param1) :
    mUnk_10(param1),
    mUnk_14(true),
    mUnk_15(false) {}

void ActorUnkRCFO_DFC::vfunc_00() {
    if (!this->mUnk_14 || this->mUnk_10 == NULL) {
        return;
    }
    this->mUnk_10->func_ov000_0205b224(0x2000, 0x7FBC);
}

ActorProfileUnkRCFO::~ActorProfileUnkRCFO() {}
