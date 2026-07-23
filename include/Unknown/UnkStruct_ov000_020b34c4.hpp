#pragma once

#include "types.h"

class UnkStruct_ov000_020b34c4 {
public:
    /* 00 (vtable) */
    /* 04 */ MapObjectId mUnk_04;
    /* 08 */ VecFx32 mUnk_08;
    /* 14 */ fx32 mUnk_14;
    /* 18 */

    UnkStruct_ov000_020b34c4();
    UnkStruct_ov000_020b34c4(MapObjectId mapObjId) :
        mUnk_04(mapObjId) {}

    virtual bool vfunc_00(MapObject *param1);
};

extern UnkStruct_ov000_020b34c4 data_ov000_020b34c4;
