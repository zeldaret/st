#pragma once

#include "Actor/ActorUnkTLKT.hpp"
#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "Render/ModelRender.hpp"
#include "global.h"

class UnkStruct_ov063_021639e4 : public ActorUnkTLKT_9C_Base {
public:
    /* 00 (vtable) */
    /* 08 */

    UnkStruct_ov063_021639e4() {
        mUnk_04h = 0;
        mUnk_06  = 0;
    };

    /* 04 */ virtual void vfunc2_04() override;
};

class MapObjectUnkLTRW : public MapObject {
public:
    /* 00 (base) */
    /* 40 */ ModelRender mUnk_40;
    /* A0 */ unk32 mUnk_A0;
    /* A4 */ volatile u16 mUnk_A4;
    /* A6 */ u16 mUnk_A6;
    /* A8 */ UnkStruct_ov063_021639e4 mUnk_A8;

    MapObjectUnkLTRW();

    /* 00 */ virtual bool vfunc_00() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 14 */ virtual void vfunc_14() override;
    /* 1C */ virtual bool vfunc_1C(ActorRef param1, unk32 param2, VecFx32 *param3) override;
    /* 28 */ virtual unk32 vfunc_28(unk32 param1, unk32 param2, unk32 param3) override;

    void func_ov063_02160d18(unk32 param1);
};

class MapObjectProfileUnkLTRW_Base_D4 : public MapObject_10 {
public:
};

class MapObjectProfileUnkLTRW_Base : public MapObjectProfile_Derived2 {
public:
    /* 00 (base) */
    /* D4 */ MapObjectProfileUnkLTRW_Base_D4 mUnk_D4;
    /* F8 */

    MapObjectProfileUnkLTRW_Base(MapObjectId mapObjId1, MapObjectId mapObjId2) :
        MapObjectProfile_Derived2(mapObjId1, mapObjId2),
        mUnk_D4() {};
};

class MapObjectProfileUnkLTRW : public MapObjectProfileUnkLTRW_Base {
public:
    /* 00 (base) */

    MapObjectProfileUnkLTRW();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkLTRW *GetProfile();
};
