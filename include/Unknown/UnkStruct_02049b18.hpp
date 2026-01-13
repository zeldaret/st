#pragma once

#include "global.h"
#include "types.h"

class UnkStruct_02049b18_06 {
public:
    /* 00 */ unk16 mUnk_00;
    /* 00 */ unk16 mUnk_02;

    UnkStruct_02049b18_06();
};

class UnkStruct_02049b18_00 {
public:
    /* 00 */ unk32 mUnk_00;

    UnkStruct_02049b18_00();
};

class UnkStruct_02049b18 {
public:
    /* 00 */ UnkStruct_02049b18_00 mUnk_00;
    /* 04 */ unk16 mUnk_04;
    /* 06 */ UnkStruct_02049b18_06 mUnk_06;
    /* 0A */ STRUCT_PAD(0x0A, 0x58);
    /* 58 */ unk16 mUnk_58;
    /* 5A */ unk16 mUnk_5A;

    UnkStruct_02049b18();
    ~UnkStruct_02049b18();
};

extern UnkStruct_02049b18 data_02049b18;
