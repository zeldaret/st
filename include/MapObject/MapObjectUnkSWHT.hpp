#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectGrass.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

enum MapObjUnkSWHTState_ {
    MapObjUnkSWHTState_0 = 0,
    MapObjUnkSWHTState_1 = 1,
    MapObjUnkSWHTState_Max
};

class MapObjectUnkSWHT : public MapObject {
public:
    /* 000 (base) */
    /* 040 */ u32 mUnk_040;
    /* 044 */ unk32 mUnk_044;
    /* 048 */ unk32 mUnk_048;
    /* 04C */ unk32 mUnk_04C;
    /* 050 */ unk32 mUnk_050;
    /* 054 */ ModelRender mUnk_054;
    /* 0B4 */ UnkSystem5 mUnk_0B4;
    /* 0D4 */ unk32 mUnk_0D4;
    /* 0D8 */ STRUCT_PAD(0x0D8, 0x0F4);
    /* 0F4 */ UnkSystem7 mUnk_0F4;
    /* 0F8 */ unk32 mUnk_0F8;
    /* 0FC */ unk32 mUnk_0FC;
    /* 100 */

    MapObjectUnkSWHT();

    /* 00 */ virtual bool vfunc_00() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C() override;
    /* 14 */ virtual void vfunc_14() override;
    /* 1C */ virtual bool vfunc_1C(ActorRef param1, unk32 param2, VecFx32 *param3) override;
    /* 30 */ virtual ~MapObjectUnkSWHT() override;

    void func_ov031_02101dd8();
    bool func_ov031_021020ec();
    void func_ov031_021021c0(unk16 state, unk32 param2);
    void func_ov031_021023b0();
};

class MapObjectProfileUnkSWHT : public MapObjectProfilePot_Base {
public:
    /* 00 (base) */

    MapObjectProfileUnkSWHT();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkSWHT *GetProfile();
};
