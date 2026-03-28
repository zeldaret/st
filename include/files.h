#pragma once

#include "Map/MapObjectId.hpp"
#include "types.h"

enum FileType {
    FileType_ZOB = 'BLOZ',
};

// .zob
typedef struct ZeldaObjectList {
    /* 00 */ FileType type; // always "ZOLB"
    /* 04 */ unk32 nSize; // file size?
    /* 08 */ unk16 unk_08;
    /* 0a */ unk16 unk_0a;
    /* 0c */ u16 nEntries; // number of entries
    /* 0e */ unk16 unk_0e;
    /* 10 */ u32 aIdList[]; // actor id or map object id
} ZeldaObjectList;
