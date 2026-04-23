#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectDoorBase.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"
#include "versions.h"

class MapObjectDoorSwitch : public MapObjectDoorBase {
public:
    /* 000 (base) */
    /* 094 */ UnkSystem4 mUnk_094;
    /* 0F4 */ MapObject_10 mUnk_0F4;
#if IS_JP
    /* 118 */ MapObject_10 mUnk_118;
    /* 13C */ q20 mUnkPos;
    /* 140 */ bool mUnk_140;
    /* 141 */ bool mUnk_141;
    /* 142 */ unk8 mUnk_142; // pad
    /* 143 */ unk8 mUnk_143; // pad
    /* 144 */
#else
    /* 118 */ q20 mUnkPos;
    /* 11C */
#endif

    MapObjectDoorSwitch();

    // data_ov031_0211527c (MapObject)
    /* 00 */ virtual bool vfunc_00() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 14 */ virtual void vfunc_14() override;
    /* 18 */ virtual void vfunc_18(s8 *param1, s8 param2) override;
    /* 30 */ virtual ~MapObjectDoorSwitch() override;
    /* 40 */ virtual void vfunc_40() override;
    /* 44 */ virtual void vfunc_44() override;
    /* 48 */ virtual void vfunc_48() override;
    /* 4C */ virtual void vfunc_4C() override;
    /* 50 */ virtual void vfunc_50() override;
    /* 54 */ virtual void vfunc_54() override;
    /* 58 */ virtual void vfunc_58() override;
    /* 64 */ virtual bool vfunc_64() override;
    /* 6C */ virtual bool vfunc_6C() override;
    /* 74 */ virtual void vfunc_74() override;

    // (MapObject_UnkStruct1_Derived1)
    /* 10 */ virtual void *vfunc2_10();
};

class MapObjectProfileDoorSwitch : public MapObjectProfile_Derived2 {
public:
    /* 00 (base) */

    MapObjectProfileDoorSwitch();
    ~MapObjectProfileDoorSwitch();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileDoorSwitch *GetProfile();
};
