#pragma once

#include "Map/MapObjectId.hpp"
#include "Unknown/Common.hpp"
#include "types.h"

class MapObjectProfile_Derived2_20 : public MapObjectProfile_Derived2_20_Base {
public:
    /* 00 (base) */
    /* 94 */ union {
        wchar_t mUnk_94[4];
        struct {
            u16 unk_94;
            u16 unk_96;
            u16 unk_98;
            u16 unk_9A;
        };
    };
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
