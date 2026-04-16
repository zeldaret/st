#pragma once

#include "global.h"
#include "types.h"

class MapObject_20;

class UnkStruct_ov000_020b5d34_00 {
public:
    unk32 *mUnk_00;
    MapObject_20 *mUnk_04;
    Vec3p *mUnk_08;
    unk16 mUnk_0C;
};

class UnkStruct_ov000_020b5d34_0C {
public:
    unk16 mUnk_00;
};

class UnkStruct_ov000_020b5d34 {
public:
    /* 00 */ UnkStruct_ov000_020b5d34_00 *mUnk_00;
    /* 04 */ MapObjectProfile *mpProfile;
    /* 08 */ unk32 mUnk_08;
    UnkStruct_ov000_020b5d34_0C *mUnk_0C;

    UnkStruct_ov000_020b5d34();
    ~UnkStruct_ov000_020b5d34();
};

extern UnkStruct_ov000_020b5d34 data_ov000_020b5d34;
