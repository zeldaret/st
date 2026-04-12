#pragma once

#include "MapObject/MapObject.hpp"
#include "Unknown/UnkStruct_ov000_020b34c4.hpp"
#include "types.h"

class MapObjectManager {
public:
    /* 00 */ MapObject **mMapObjTable;
    /* 04 */ MapObject **mMapObjTableEnd;
    /* 08 */ MapObject **mUnk_08; // pointer to first available slot?
    /* 0C */ void **mUnk_0C; // unknown table
    /* 10 */ void **mUnk_10; // unknown table end
    /* 14 */ void *mUnk_14;
    /* 18 */ unk16 mUnk_18;
    /* 1A */ unk16 mUnk_1A;
    /* 1C */ unk16 mUnk_1C;
    /* 1E */ unk16 mUnk_1E;
    /* 20 */ unk16 mUnk_20;
    /* 22 */ unk16 mUnk_22;
    /* 24 */ STRUCT_PAD(0x24, 0x6C);
    /* 6C */ void *mUnk_6C;
    /* 70 */

    MapObject **func_01fff520(UnkStruct_ov000_020b34c4 *param1, void *);
    MapObject *func_01fff498(unk32 param1, unk32 param2);
};

extern MapObjectManager *gpMapObjManager;
