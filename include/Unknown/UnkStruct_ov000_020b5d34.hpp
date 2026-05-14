#pragma once

#include "global.h"
#include "types.h"

class MapObject_20;
class MapObjectProfile;

class UnkStruct_ov000_020b5d34_00 {
public:
    /* 00 */ unk32 *mUnk_00;
    /* 04 */ MapObject_20 *mUnk_04;
    /* 08 */ Vec3p *mUnk_08;
    /* 0C */ s16 *mUnk_0C;
    /* 10 */
};

class UnkStruct_ov000_020b5d34 {
public:
    /* 00 */ UnkStruct_ov000_020b5d34_00 *mUnk_00;
    /* 04 */ MapObjectProfile *mpProfile;
    /* 08 */

    UnkStruct_ov000_020b5d34() {
        this->mUnk_00   = NULL;
        this->mpProfile = NULL;
    }

    ~UnkStruct_ov000_020b5d34() {}

    MapObjectProfile *GetProfileFromId(MapObjectId mapObjId);
    MapObject *CreateMapObject(MapObjectId mapObjId);

    static unk32 func_ov000_0209c718(u32 param1);
};

template <typename T> struct UnkStruct_ov000_020b5d34_Instance {
    static T data_ov000_020b5d34;
};

#define data_ov000_020b5d34 UnkStruct_ov000_020b5d34_Instance<UnkStruct_ov000_020b5d34>::data_ov000_020b5d34
extern UnkStruct_ov000_020b5d34 data_ov000_020b5d34;
