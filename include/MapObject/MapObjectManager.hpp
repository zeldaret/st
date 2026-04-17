#pragma once

#include "MapObject/MapObject.hpp"
#include "Unknown/UnkStruct_ov000_020b34c4.hpp"
#include "types.h"

typedef void (*UnkCallback_func_01fff4cc)(void *, void *);

struct UnkStruct_func_01fff498 {
    u8 ptrIndex;
    u8 valueIndex;
};

class MapObjectManager {
public:
    /* 00 */ MapObject **mMapObjTable;
    /* 04 */ MapObject **mMapObjTableEnd;
    /* 08 */ MapObject **mUnk_08; // pointer to first available slot?
    /* 0C */ s16 **mUnk_0C; // unknown table
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

    MapObject *func_01fff498(UnkStruct_func_01fff498 param1);
    void func_01fff4cc(UnkCallback_func_01fff4cc param1, void *param2);
    MapObject **func_01fff520(UnkStruct_ov000_020b34c4 *param1, MapObject **param2);

    void func_ov000_0209c3a8();
    void func_ov000_0209c3e8();
    void func_ov000_0209c444();

    void SetInstance(); // func_ov001_020baf4c
    void ClearInstance(); // func_ov001_020baf58

    static void func_ov000_0209c490();
    static MapObjectManager *Create(); // func_ov001_020bac40
};

extern MapObjectManager *gpMapObjManager;
