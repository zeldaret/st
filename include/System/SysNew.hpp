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
enum HeapIndex_ {
    HeapIndex_0   = 0,
    HeapIndex_1   = 1,
    HeapIndex_2   = 2,
    HeapIndex_3   = 3,
    HeapIndex_Max = 4
};

class UnkStruct_02011e10_Sub1 {
public:
    /* 00 */ UnkId mId;
    /* 04 */ unk8 mUnk_04[0x28];
    /* 2C */ unk8 mUnk_2C[0x60 - 0x2C];
};

class UnkStruct_02011e10 {
public:
    /* 00 */ UnkStruct_02011e10_Sub1 *mUnk_00[HeapIndex_Max];
    /* 10 */ STRUCT_PAD(0x10, 0x60);
    /* 60 */ unk32 mUnk_60;

    void func_02013014();
    void func_02013070();
};

extern UnkStruct_02011e10 data_0204999c;

void *SysNew(UnkStruct_02011e10_Sub1 *param1, s32 length, s32 param3);
void SysDelete(void *ptr);
void *func_02011f10(s32 length);
void *func_02011f30(s32 length);

class SysObject {
public:
    static void *operator new(unsigned long length, u32 id, u32 idLength = 4);
    static void *operator new[](unsigned long length, u32 *id, u32 idLength = 4);
    static void operator delete(void *ptr);
    static void operator delete[](void *ptr);
};
