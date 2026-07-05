#pragma once

#include "Actor/ActorId.hpp"
#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "MapObject_ov031.hpp"
#include "global.h"
#include "types.h"

class MapObjectPot : public MapObjectPot_Base {
public:
    /* 00 (base) */
    /* 40 */ ActorId mUnk_40;
    /* 44 */ STRUCT_PAD(0x44, 0x48);
    /* 48 */ ModelRender_ov000_020b198c mUnk_48;

    MapObjectPot();

    /* 04 */ virtual void vfunc_04() override;                                      // func_ov031_02105088
    /* 14 */ virtual void vfunc_14() override;                                      // func_ov031_021052cc
    /* 1C */ virtual bool vfunc_1C(ActorRef param1, unk32 param2, VecFx32 *param3); // func_ov031_021050b4
    /* 24 */ virtual void vfunc_24(MapObject *param1, VecFx32 param2) override;     // func_ov031_02105348
    /* 30 */ virtual ~MapObjectPot() override;
    /* 3C */ virtual bool vfunc_3C() override;  // func_ov031_021053b4
    /* 40 */ virtual bool vfunc_40() override;  // func_ov031_021053fc
    /* 48 */ virtual void vfunc_48() override;  // func_ov031_021051d4
    /* 54 */ virtual unk32 vfunc_54() override; // func_ov031_02105310
};

class MapObjectProfilePot : public MapObjectProfilePot_Base {
public:
    /* 00 (base) */

    MapObjectProfilePot();
    ~MapObjectProfilePot();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfilePot *GetProfile();
};
