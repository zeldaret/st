#pragma once

#include "MapObject/MapObjectDoorBase.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectProfileUnkDRCK : public MapObjectProfile_Derived1 {
public:
    /* 00 (base) */

    MapObjectProfileUnkDRCK();
    ~MapObjectProfileUnkDRCK() {}

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkDRCK *GetProfile();
};

class MapObjectUnkDRCK : public MapObjectDoorBase {
public:
    /* 00 (base) */
    /* 94 */ UnkSystem6_Derived2 mUnk_94;
    /* 9C */ unk8 mUnk_9C; // bool?
    /* 9D */ unk8 mUnk_9D; // pad?
    /* 9E */ unk8 mUnk_9E; // pad?
    /* 9F */ unk8 mUnk_9F; // pad?
    /* A0 */ UnkStruct_PlayerGet_ec mUnk_A0;
    /* A0 */ unk32 mUnk_A4;
    /* A8 */ MapObject_10 mUnk_A8;
    /* CC */

    MapObjectUnkDRCK();

    /* 00 */ virtual bool vfunc_00() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 14 */ virtual void vfunc_14() override;
    /* 18 */ virtual void vfunc_18(s8 *param1, s8 param2) override;
    /* 28 */ virtual unk32 vfunc_28() override;
    /* 30 */ virtual ~MapObjectUnkDRCK() override {}
    /* 40 */ virtual void vfunc_40() override;
    /* 44 */ virtual void vfunc_44() override;
    /* 48 */ virtual void vfunc_48() override;
    /* 4C */ virtual void vfunc_4C() override;
    /* 5C */ virtual void vfunc_5C(unk32 param1, unk32 param2) override;
    /* 64 */ virtual bool vfunc_64() override;
    /* 68 */ virtual bool vfunc_68() override;
    /* 6C */ virtual bool vfunc_6C() override;
    /* 74 */ virtual void vfunc_74() override;
    /* 78 */ virtual void vfunc_78() override;
    /* 7C */ virtual void vfunc_7C() override;

    /* 10 */ virtual void vfunc2_10();
    /* 14 */ virtual MapObject_10 *vfunc2_14();
    /* 18 */ virtual void vfunc2_18();
    /* 1C */ virtual u16 vfunc2_1C(unk32 param2);

    bool func_ov031_020ffde4();
};
