#pragma once

#include "Map/MapObjectId.hpp"
#include "Physics/Cylinder.hpp"
#include "System/SysNew.hpp"
#include "Unknown/Common.hpp"
#include "Unknown/UnkStruct_ov000_020b4f84.hpp"
#include "profile.hpp"
#include "types.h"

class MapObject;
class MapObject_20;

class MapObjectProfile : public SysObject {
public:
    /* 00 (vtable) */
    /* 04 */ unk8 mUnk_04[2];
    /* 06 */ s8 mUnk_06;
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
    /* 1E */ u16 mUnk_1E;
    /* 20 */

    MapObjectProfile(MapObjectId mapObjId); // func_ov000_0209c828
    ~MapObjectProfile();

    // data_ov000_020b3524
    /* 00 */ virtual MapObject *Create() = 0;
    /* 04 */ virtual void vfunc_04();
    /* 08 */ virtual void vfunc_08();
    /* 0C */ virtual void vfunc_0C();
    /* 10 */ virtual void vfunc_10();
    /* 14 */

    unk32 func_ov000_0209c8e4(MapObject_20 *param1);
};

class MapObjectProfile_Derived2_20;

class MapObjectProfile_Derived1_20 {
public:
    /* 00 */ MapObjectProfile_Derived2_20 *mUnk_00;

    MapObjectProfile_Derived1_20() {
        this->mUnk_00 = NULL;
    }
};

class MapObjectProfile_Derived1 : public MapObjectProfile {
public:
    /* 00 (base) */
    /* 20 */ MapObjectProfile_Derived1_20 mUnk_20[16];
    /* 60 */ unk32 mUnk_60;
    /* 64 */ unk16 mUnk_64;
    /* 66 */ unk16 mUnk_66;
    /* 68 */

    MapObjectProfile_Derived1(MapObjectId mapObjId, unk32 param2, unk32 param3); // func_ov000_0209cb4c

    // data_ov000_020b3540
    /* 04 */ virtual void vfunc_04();
    /* 08 */ virtual void vfunc_08();
    /* 0C */ virtual void vfunc_0C();
    /* 10 */ virtual void vfunc_10();
    /* 14 */ virtual ~MapObjectProfile_Derived1();
    /* 1C */ virtual MapObjectProfile_Derived2_20 *vfunc_1C(unk32 param1);

    void func_ov000_0209ccd8(unk32 param1, u32 param2);
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
    /* 00 */ void *mUnk_00;
    /* 04 */ void *mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */

    MapObjectProfile_Derived2_20_Base_20(unk32 param1, unk32 param2, unk32 param3, unk32 param4,
                                         unk32 param5); // func_020153fc
};

class MapObjectProfile_Derived2_20_Base_50 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ u8 mUnk_08;
    /* 08 */ u8 mUnk_09;
    /* 08 */ u8 mUnk_0A;
    /* 08 */ u8 mUnk_0B;
    /* 0C */ unk8 mUnk_0C;
    /* 0C */ unk8 mUnk_0D;
    /* 0C */ u16 mUnk_0E;
    /* 10 */

    MapObjectProfile_Derived2_20_Base_50();
    ~MapObjectProfile_Derived2_20_Base_50();
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
    /* 04 */ const char *mUnk_04;
    /* 08 */ void *mUnk_08;
    /* 0C */ void *mUnk_0C;
    /* 10 */ void *mUnk_10;
    /* 14 */ unk8 mUnk_14; // bool?
    /* 15 */ unk8 mUnk_15; // bool?
    /* 16 */ unk8 mUnk_16; // bool?
    /* 17 */ unk8 mUnk_17; // pad?
    /* 18 */ MapObjectProfile_Derived2_20_Base_18 mUnk_18;
    /* 20 */ MapObjectProfile_Derived2_20_Base_20 mUnk_20;
    /* 2C */ UnkFileSystem3 mUnk_2C;
    /* 3C */ UnkFileSystem5 mUnk_3C;
    /* 50 */ MapObjectProfile_Derived2_20_Base_50 *mUnk_50;
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

    unk32 func_ov000_02058a24();
    unk32 func_ov000_02058a84(unk32 param1, const char *param2);
};

class MapObjectProfile_Derived2 : public MapObjectProfile {
public:
    /* 00 (base) */
    /* 20 */ MapObjectProfile_Derived2_20 mUnk_20;
    /* D4 */

    MapObjectProfile_Derived2(MapObjectId mapObjId1, MapObjectId mapObjId2); // func_ov000_0209c9a8
    ~MapObjectProfile_Derived2();

    // data_ov000_020b3508
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C() override;
    /* 10 */ virtual void vfunc_10() override;
};

typedef MapObjectProfile *(*GetMapObjectProfile)();
