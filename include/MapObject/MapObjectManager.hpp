#pragma once

#include "MapObject/MapObject.hpp"
#include "Unknown/UnkStruct_ov000_020b34c4.hpp"
#include "files.h"
#include "types.h"

#include "math.hpp"

typedef void (*UnkCallback_func_01fff4cc)(void *, void *);

struct UnkStruct_MapObjCreateData {
    /* 00 */ u16 unk_00;
    /* 02 */ union {
        Vec2b pos;
        u16 raw_pos;
    };
    /* 04 */
};

class MapObjectManager : public AutoInstance<MapObjectManager> {
public:
    /* 00 */ MapObject **mMapObjTable;
    /* 04 */ MapObject **mMapObjTableEnd;
    /* 08 */ MapObject **mUnk_08; // pointer to first available slot?
    /* 0C */ s16 **mUnk_0C;       // unknown table
    /* 10 */ s16 **mUnk_10;       // unknown table end
    /* 14 */ s16 *mUnk_14;
    /* 18 */ unk16 mUnk_18;
    /* 1A */ unk16 mUnk_1A;
    /* 1C */ unk16 mUnk_1C;
    /* 1E */ unk16 mUnk_1E;
    /* 20 */ unk16 mUnk_20;
    /* 22 */ unk16 mUnk_22;
    /* 24 */ PAD(0x24, 0x6C);
    /* 6C */ void *mUnk_6C;
    /* 70 */

    MapObjectManager();
    ~MapObjectManager();

    // itcm
    MapObject *func_01fff498(Vec2bCpp param1);
    void func_01fff4cc(UnkCallback_func_01fff4cc param1, void *param2);
    MapObject **func_01fff520(UnkStruct_ov000_020b34c4 *param1, MapObject **param2);

    // overlay 0
    MapObjectId func_ov000_0209c3a8(Vec2bCpp *param1);
    void func_ov000_0209c3e8();
    void func_ov000_0209c444(unk32 param1);
    MapObject *AllocateMapObject(MapObjectId mapObjId, Vec2b param2, u16 param3, unk32 param4, u8 param5);

    static void func_ov000_0209c490();

    // overlay 1
    void func_ov001_020bac9c();
    void func_ov001_020bacd8(ZOBHeader *pHeader);
    void func_ov001_020bad80();
    void func_ov001_020bada0();
    void func_ov001_020badb4();
    void func_ov001_020bade0();
    void func_ov001_020bae40(ZeldaObjectList *pObjList);
    void func_ov001_020bae6c();
    void func_ov001_020baea0(u16 *param1);
    void func_ov001_020baf28();

    static MapObjectManager *Create();
    static void Destroy();

    // overlay 5
    void func_ov005_020b6570(unk32 param1);

    // overlay 17
    bool func_ov017_020c007c(unk32 param1);
    void func_ov017_020c00dc(unk32 param1);
    void func_ov017_020c01c8(void *param1);
    void func_ov017_020c01cc(unk32 param1);
    void func_ov017_020c023c(s8 *param1);
    void func_ov017_020c02ac(volatile unk32 param1, Vec2bCpp param2);
    void func_ov017_020c02f4(volatile unk32 param1, VecFx32 *param2);
    unk32 func_ov017_020c050c(unk32 param1, unk32 param2, unk32 param3, unk32 param4);

    static void func_ov017_020c033c(unk32 *param1, MapObjectManager *thisx, const Vec2s *param2, unk32 param3, unk32 param4);
};

extern MapObjectManager *gpMapObjManager;
