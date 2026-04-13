#pragma once

#include "Map/MapObjectId.hpp"
#include "Physics/Cylinder.hpp"
#include "System/SysNew.hpp"
#include "Unknown/Common.hpp"
#include "Unknown/UnkStruct_ov000_020b4f84.hpp"
#include "profile.hpp"
#include "types.h"

class MapObject;

class MapObjectProfile_D4_Base {
public:
    /* 00 (vtable) */
    /* 04 */ unk8 mUnk_04;
    /* 05 */ unk8 mUnk_05;
    /* 06 */ unk8 mUnk_06;
    /* 07 */ unk8 mUnk_07;
    /* 08 */ unk32 mUnk_08;
    /* 0C */

    MapObjectProfile_D4_Base(); // func_ov000_0207c018

    // data_ov000_020b2854
    /* 00 */ virtual void vfunc_00(void) = 0;
    /* 04 */ virtual void vfunc_04(void) = 0;
    /* 08 */ virtual void vfunc_08(void) = 0;
    /* 0C */ virtual void vfunc_0C(void) = 0;
    /* 10 */ virtual void vfunc_10(void) = 0;
    /* 14 */ virtual void vfunc_14(void) = 0;
    /* 18 */ virtual void vfunc_18(void) = 0;
    /* 1C */ virtual void vfunc_1C(void) = 0;
    /* 20 */
};

class MapObjectProfile_D4 : public MapObjectProfile_D4_Base {
public:
    /* 00 (base) */
    /* 0C */

    MapObjectProfile_D4() {}

    /* 00 */ virtual void vfunc_00(void);
    /* 04 */ virtual void vfunc_04(void);
    /* 08 */ virtual void vfunc_08(void);
    /* 0C */ virtual void vfunc_0C(void);
    /* 10 */ virtual void vfunc_10(void);
    /* 14 */ virtual void vfunc_14(void);
    /* 18 */ virtual void vfunc_18(void);
    /* 1C */ virtual void vfunc_1C(void);
};

class MapObjectProfile : public SysObject {
public:
    /* 00 (vtable) */
    /* 04 */ unk8 mUnk_04[2];
    /* 06 */ u8 mUnk_06;
    /* 07 */ unk8 mUnk_07;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ unk16 mUnk_0C;
    /* 0E */ unk8 mUnk_0E;
    /* 0F */ unk8 mUnk_0F;
    /* 10 */ MapObjectId mMapObjId;
    /* 14 */ unk32 mUnk_14;
    /* 18 */ unk32 mUnk_18;
    /* 1C */ unk8 mUnk_1C;
    /* 1D */ unk8 mUnk_1D;
    /* 1E */ unk16 mUnk_1E;
    /* 20 */

    MapObjectProfile(MapObjectId mapObjId); // func_ov000_0209c828

    // data_ov000_020b3524
    /* 00 */ virtual MapObject *Create() = 0;
    /* 04 */ virtual void vfunc_04();
    /* 08 */ virtual void vfunc_08();
    /* 0C */ virtual void vfunc_0C();
    /* 10 */ virtual void vfunc_10();
    /* 14 */
};

class MapObjectProfile_Derived1_20 {
public:
    /* 00 */ unk32 mUnk_00;

    MapObjectProfile_Derived1_20() {
        this->mUnk_00 = 0;
    }
};

class MapObjectProfile_Derived1 : public MapObjectProfile {
public:
    /* 00 (base) */
    /* 20 */ MapObjectProfile_Derived1_20 mUnk_20[16];
    /* 60 */ unk32 mUnk_60;
    /* 64 */ unk16 mUnk_64;
    /* 66 */ unk16 mUnk_66;
    /* 68 */ MapObjectProfile_D4 mUnk_68;
    /* 74 */ unk32 mUnk_74;
    /* 78 */ unk32 mUnk_78;
    /* 7C */ unk32 mUnk_7C;
    /* 80 */ unk32 mUnk_80;
    /* 84 */ unk32 mUnk_84;
    /* 88 */

    MapObjectProfile_Derived1(MapObjectId mapObjId); // func_ov000_0209cb4c
};

class MapObjectProfile_Derived2_20_Base_18 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */

    MapObjectProfile_Derived2_20_Base_18(); // func_02016620
};

class MapObjectProfile_Derived2_20_Base_20 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */

    MapObjectProfile_Derived2_20_Base_20(unk32 param1, unk32 param2, unk32 param3, unk32 param4,
                                         unk32 param5); // func_020153fc
};

class MapObjectProfile_Derived2_20_Base_54 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ unk32 mUnk_0C;
    /* 10 */

    MapObjectProfile_Derived2_20_Base_54();
    ~MapObjectProfile_Derived2_20_Base_54();
};

class MapObjectProfile_Derived2_20_Base {
public:
    /* 00 (vtable) */
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ unk32 mUnk_0C;
    /* 10 */ unk32 mUnk_10;
    /* 14 */ unk8 mUnk_14; // bool?
    /* 15 */ unk8 mUnk_15; // bool?
    /* 16 */ unk8 mUnk_16; // bool?
    /* 17 */ unk8 mUnk_17; // pad?
    /* 18 */ MapObjectProfile_Derived2_20_Base_18 mUnk_18;
    /* 20 */ MapObjectProfile_Derived2_20_Base_20 mUnk_20;
    /* 2C */ UnkFileSystem3 mUnk_2C;
    /* 3C */ UnkFileSystem5 mUnk_3C;
    /* 50 */ unk32 mUnk_50;
    /* 54 */ MapObjectProfile_Derived2_20_Base_54 mUnk_54[4];
    /* 94 */

    MapObjectProfile_Derived2_20_Base(const char *directory, void *param2, void *param3, void *param4, unk32 param5,
                                      unk32 param6); // func_ov000_02058540

    // data_ov000_020b1b14
    /* 00 */ virtual ~MapObjectProfile_Derived2_20_Base();
    /* 08 */
};

class MapObjectProfile_Derived2_20 : public MapObjectProfile_Derived2_20_Base {
public:
    /* 00 (base) */
    /* 94 */ unk16 mUnk_94;
    /* 96 */ unk16 mUnk_96;
    /* 98 */ unk16 mUnk_98;
    /* 9A */ unk16 mUnk_9A;
    /* 9C */ UnkFileSystem5 mUnk_9C;
    /* B0 */ unk8 mUnk_B0; // bool?
    /* B1 */ unk8 mUnk_B1; // bool?
    /* B2 */ unk8 mUnk_B2; // pad?
    /* B3 */ unk8 mUnk_B3; // pad?
    /* B4 */

    MapObjectProfile_Derived2_20(MapObjectId mapObjId2); // func_ov000_0209ce08

    // data_ov000_020b3568
    /* 00 */ virtual ~MapObjectProfile_Derived2_20() override;
};

class MapObjectProfile_Derived2 : public MapObjectProfile {
public:
    /* 00 (base) */
    /* 20 */ MapObjectProfile_Derived2_20 mUnk_20;
    /* D4 */ MapObjectProfile_D4 mUnk_D4;
    /* E0 */ Vec3p mUnk_E0;
    /* EC */ Vec3p mUnk_EC;
    /* F8 */

    MapObjectProfile_Derived2(MapObjectId mapObjId1, MapObjectId mapObjId2); // func_ov000_0209c9a8

    // data_ov000_020b3508
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C() override;
};

typedef MapObjectProfile *(*GetMapObjectProfile)();
