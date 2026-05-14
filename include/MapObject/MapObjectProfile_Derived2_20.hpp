#pragma once

#include "Map/MapObjectId.hpp"
#include "Unknown/Common.hpp"
#include "types.h"

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
    /* 08 */ const char *mUnk_08;
    /* 0C */ UnkResourceStruct_Base mUnk_0C;
    /* 18 */ MapObjectProfile_Derived2_20_Base_18 mUnk_18;
    /* 20 */ MapObjectProfile_Derived2_20_Base_20 mUnk_20;
    /* 2C */ UnkFileSystem3 mUnk_2C;
    /* 3C */ UnkFileSystem5 mUnk_3C;
    /* 50 */ UnkResourceStruct *mUnk_50;
    /* 54 */ MapObjectProfile_Derived2_20_Base_54 mUnk_54[4];
    /* 94 */

    MapObjectProfile_Derived2_20_Base(const char *directory, void *param2, void *param3, void *param4, unk32 param5,
                                      unk32 param6); // func_ov000_02058540

    // data_ov000_020b1b14
    /* 00 */ virtual ~MapObjectProfile_Derived2_20_Base();
    /* 08 */

    void func_ov000_020586b4(unk32 param1, unk32 param2, unk32 param3, unk32 param4);
    void func_ov000_020588f0(void);
    void func_ov000_02058900(void);
    void func_ov000_02058914(unk32 param1);
    void func_ov000_020589e4(void);
    unk32 func_ov000_02058a24();
    void unc_ov000_02058a58(void);
    unk32 func_ov000_02058a84(unk32 param1, const char *param2);
    void func_ov000_02058ab0(void);
};

class MapObjectProfile_Derived2_20 : public MapObjectProfile_Derived2_20_Base {
public:
    /* 00 (base) */
    /* 94 */ unk16 mUnk_94;
    /* 96 */ unk16 mUnk_96;
    /* 98 */ unk16 mUnk_98;
    /* 9A */ unk16 mUnk_9A;
    /* 9C */ UnkFileSystem5 mUnk_9C;
    /* B0 */ bool mUnk_B0;
    /* B1 */ unk8 mUnk_B1; // bool?
    /* B2 */ unk8 mUnk_B2; // pad?
    /* B3 */ unk8 mUnk_B3; // pad?
    /* B4 */

    MapObjectProfile_Derived2_20();
    MapObjectProfile_Derived2_20(MapObjectId mapObjId2); // func_ov000_0209ce08

    // data_ov000_020b3568
    /* 00 */ virtual ~MapObjectProfile_Derived2_20() override;

    void func_ov000_0209cef0();
    void func_ov000_0209cfac();
    void func_ov000_0209cfdc(unk32 param1, unk32 param2);
};
