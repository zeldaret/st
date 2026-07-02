#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectPot_Base : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectPot_Base();

    // data_ov000_020b35d0

    /* 00 */ virtual bool vfunc_00();           // func_ov000_0209d780
    /* 24 */ virtual void vfunc_24() override;  // func_ov000_0209d8e8
    /* 28 */ virtual unk32 vfunc_28() override; // func_ov000_0209d9f8
    /* 30 */ virtual ~MapObjectPot_Base() override;
    /* 38 */ virtual void vfunc_38() override; // func_ov000_0209d9ac
    /* 3C */ virtual void vfunc_3C() override; // func_ov000_0209db74
    /* 40 */ virtual void vfunc_40() override; // func_ov000_0209db7c
    /* 44 */ virtual void vfunc_44() override; // func_ov000_0209d7a4
    /* 48 */ virtual void vfunc_48() override; // func_ov000_0209da60
    /* 4C */ virtual void vfunc_4C() override; // func_ov000_0209da70
    /* 50 */ virtual void vfunc_50() override; // func_ov000_0209dac0
    /* 54 */ virtual void vfunc_54() override; // func_ov000_0209da64
};

class MapObjectPot : public MapObjectPot_Base {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectPot();

    /* 04 */ virtual void vfunc_04() override;                                      // func_ov031_02105088
    /* 14 */ virtual void vfunc_14() override;                                      // func_ov031_021052cc
    /* 1C */ virtual bool vfunc_1C(ActorRef param1, unk32 param2, VecFx32 *param3); // func_ov031_021050b4
    /* 24 */ virtual void vfunc_24() override;                                      // func_ov031_02105348
    /* 30 */ virtual ~MapObjectPot() override;
    /* 3C */ virtual void vfunc_3C() override; // func_ov031_021053b4
    /* 40 */ virtual void vfunc_40() override; // func_ov031_021053fc
    /* 48 */ virtual void vfunc_48() override; // func_ov031_021051d4
    /* 54 */ virtual void vfunc_54() override; // func_ov031_02105310
};

class MapObjectProfilePot : public MapObjectProfile_Derived2 {
public:
    /* 00 (base) */

    MapObjectProfilePot();
    ~MapObjectProfilePot();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfilePot *GetProfile();
};
