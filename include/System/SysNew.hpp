#pragma once

#include "global.h"
#include "types.h"

typedef u32 UnkId;
enum __UnkId {
    UnkId_EXPH = 'EXPH',
    UnkId_FRMH = 'FRMH',
    UnkId_UNTH = 'UNTH',
    UnkId_UNSH = 'UNSH',
};

typedef u32 HeapIndex;
typedef s16 HeapIndex16;
enum HeapIndex_ {
    HeapIndex_0   = 0,
    HeapIndex_1   = 1,
    HeapIndex_2   = 2,
    HeapIndex_3   = 3,
    HeapIndex_4   = 4,
    HeapIndex_5   = 5,
    HeapIndex_6   = 6,
    HeapIndex_7   = 7,
    HeapIndex_8   = 8,
    HeapIndex_Max = 9
};

class SysObject {
public:
    static void operator delete[](void *ptr);
};

static void *operator new(unsigned long length, u32 id, u32 idLength = 4);
static void *operator new[](unsigned long length, u32 id, u32 idLength = 4);

class UnkStruct_02011e10_Sub1 {
public:
    /* 00 */ UnkId mId;
    /* 04 */ unk32 mUnk_04;
    /* 04 */ unk32 mUnk_08;
    /* 04 */ unk32 mUnk_0C;
    /* 04 */ unk32 mUnk_10;
    /* 04 */ unk32 mUnk_14;
    /* 04 */ unk32 mUnk_18;
    /* 04 */ unk32 mUnk_1C;
    /* 04 */ unk32 mUnk_20;
    /* 04 */ unk32 mUnk_24;
    /* 04 */ unk32 mUnk_28;
    /* 2C */ unk8 mUnk_2C[0x60 - 0x2C];
};

class UnkStruct_02011e10 : public SysObject {
public:
    /* 00 */ UnkStruct_02011e10_Sub1 *mUnk_00[HeapIndex_Max];
    /* 24 */ unk32 mUnk_24[2];
    /* 28 */ STRUCT_PAD(0x2C, 0x5C);
    /* 5C */ unk32 mUnk_5C;
    /* 60 */ unk32 mUnk_60;
    /* 64 */ unk32 mUnk_64;
    /* 68 */ unk32 mUnk_68;
    /* 6C */ unk32 mUnk_6C;
    /* 70 */ unk32 mUnk_70;
    /* 74 */ unk32 mUnk_74;
    /* 78 */ unk32 mUnk_78;
    /* 7C */ unk8 mUnk_7C;
    /* 7C */ unk8 mUnk_7D;
    /* 7C */ unk8 mUnk_7E;
    /* 7C */ unk8 mUnk_7F;
    /* 80 */ unk8 mUnk_80;
    /* 81 */ unk8 mUnk_81;
    /* 82 */ unk8 mUnk_82;
    /* 83 */ unk8 mUnk_83;

    void func_02013014();
    void func_02013070();

    void func_ov001_020ba588(unk32 param1, unk32 param2);

    void func_ov018_020c4980();
    void func_ov018_020c4a5c();
};

extern UnkStruct_02011e10 data_0204999c;

void *SysNew(UnkStruct_02011e10_Sub1 *param1, s32 length, s32 param3);
void SysDelete(void *ptr);
void *func_02011f10(s32 length);
void *func_02011f30(s32 length);
