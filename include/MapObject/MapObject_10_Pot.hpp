#pragma once
#include "MapObject.hpp"

class MapObject_10_Pot_Base : public MapObject_10_Base {
public:
    /* 00 (base) */
    /* 0C */

    MapObject_10_Pot_Base() {}

    // should definitely be in ov000
    /* 00 */ virtual void vfunc_00();
    /* 04 */ virtual void vfunc_04();
    /* 08 */ virtual void vfunc_08();
    /* 0C */ virtual void vfunc_0C();
    /* 10 */ virtual void vfunc_10(Cylinder *param1);
    /* 14 */ virtual void vfunc_14();
    /* 18 */ virtual void vfunc_18(VecFx32 *param1);
    /* 1C */ virtual void vfunc_1C(VecFx32 *param1);
};

class MapObject_10_Pot : public MapObject_10_Pot_Base {
public:
    /* 00 (base) */
    /* 18 */ fx32 mUnk_18;
    /* 1C */ fx32 mUnk_1C;
    /* 20 */

    MapObject_10_Pot() {}
};
