#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "MapObjectGrass.hpp"
#include "MapObjectPot_Base.hpp"
#include "MapObjectUnkLEVS.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkSTNE : public MapObjectPot_Base {
public:
    /* 00 (base) */
    /* 48 */ ModelRender_ov000_020b198c mUnk_48;
    /* 58 */ unk32 mUnk_58;
    /* 5C */ unk32 mUnk_5C;
    /* 60 */ bool mUnk_60;
    /* 61 */ unk8 mUnk_61;

    MapObjectUnkSTNE();

    /* 08 */ virtual void vfunc_08() override;
    /* 14 */ virtual void vfunc_14(unk32 param1) override;
    /* 1C */ virtual bool vfunc_1C(RefStruct param1, unk32 param2, VecFx32 *param3) override;
    /* 24 */ virtual void vfunc_24(MapObject *param1, VecFx32 param2) override;
    /* 30 */ virtual ~MapObjectUnkSTNE() override;
    /* 44 */ virtual bool SetState(MapObjState state, unk32 param2) override;
    /* 48 */ virtual void vfunc_48() override;
    /* 4C */ virtual bool vfunc_4C() override;

    bool func_ov058_0214efb8();
};

class MapObjectProfileUnkSTNE : public MapObjectProfileUnkSTNE_Base {
public:
    /* 00 (base) */
    /* F8 */

    MapObjectProfileUnkSTNE();
    ~MapObjectProfileUnkSTNE();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkSTNE *GetProfile();
};
