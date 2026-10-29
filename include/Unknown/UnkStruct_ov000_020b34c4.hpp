#pragma once

#include "Map/MapObjectId.hpp"
#include "nitro/fx.h"

struct MapObject;

class UnkStruct_ov000_020b34c4 {
public:
    /* 00 (vtable) */
    /* 04 */ MapObjectId mUnk_04;
    /* 08 */

    UnkStruct_ov000_020b34c4();
    UnkStruct_ov000_020b34c4(MapObjectId mapObjId) :
        mUnk_04(mapObjId) {}

    // data_ov000_020b34c4
    /* 00 */ virtual bool vfunc_00(MapObject *param1);
};

extern UnkStruct_ov000_020b34c4 data_ov000_020b34c4;
