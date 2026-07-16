#pragma once

#include "System/SysFault.hpp"
#include "global.h"
#include "types.h"

#include <new>
#include <stddef.h>

#define GAME_ASSERT(cond, line, msg, ...)                                                      \
    (!(cond) ? data_02049984.func_020125a4(__FILE__, (line), (msg), __VA_ARGS__) : ((void) 0))
#define ASSERT(cond, msg, ...) GAME_ASSERT(cond, __LINE__, msg, __VA_ARGS__)

typedef u32 UnkId;
enum __UnkId {
    UnkId_EXPH = 'EXPH', // Expanded Heap?
    UnkId_FRMH = 'FRMH', // Frame Heap?
    UnkId_UNTH = 'UNTH', // Unit Heap?
    UnkId_UNSH = 'UNSH', // Unspecified Heap?
};

typedef u32 HeapIndex;
typedef s16 HeapIndex16;
enum HeapIndex_ {
    HeapIndex_Main = 0, // UnkId_FRMH
    HeapIndex_1    = 1, // UnkId_EXPH
    HeapIndex_2    = 2, // UnkId_UNSH
    HeapIndex_ITCM = 3, // UnkId_UNSH
    HeapIndex_DTCM = 4, // ?
    HeapIndex_5    = 5, // ?
    HeapIndex_6    = 6, // UnkId_FRMH
    HeapIndex_7    = 7, // ?
    HeapIndex_8    = 8, // ?
    HeapIndex_Max  = 9
};

void *operator new(size_t length, u32 id, u32 idLength = 4);
inline void *operator new[](size_t length, u32 id, u32 idLength = 4) {
    return ::operator new(length, id, idLength);
}

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

class UnkStruct_02011e10_2C {
public:
    /* 00 */ UnkStruct_02011e10_Sub1 *mUnk_00;
    /* 04 */ STRUCT_PAD(0x04, 0x18);
    /* 18 */

    UnkStruct_02011e10_2C();

    // main
    void func_020144cc(unk32 param1, unk32 param2, unk32 param3);
    void func_02014538();
};

class UnkStruct_02011e10 {
public:
    /* 00 */ UnkStruct_02011e10_Sub1 *mUnk_00[HeapIndex_Max]; // the pointer seems to match arena lo
    /* 24 */ unk32 mUnk_24[2];
    /* 2C */ UnkStruct_02011e10_2C mUnk_2C;
    /* 44 */ UnkStruct_02011e10_2C mUnk_44;
    /* 5C */ unk32 mUnk_5C;
    /* 60 */ unk32 mUnk_60;
    /* 64 */ void *mUnk_64;
    /* 68 */ void *mUnk_68;
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

    UnkStruct_02011e10() {}
    ~UnkStruct_02011e10();

    // main
    unk32 func_02013014();
    bool func_02013070();
    void func_020130d4(unk32 param1);

    // overlay 1
    void func_ov001_020ba588(unk32 param1, unk32 param2);
    void func_ov001_020ba59c();
    void func_ov001_020ba5ac(unk32 param1, unk32 param2);
    void func_ov001_020ba5c0();
    void func_ov001_020ba5d0();
    void func_ov001_020ba608();
    void func_ov001_020ba620();
    void func_ov001_020ba640();
    void func_ov001_020ba658();

    // overlay 18
    void func_ov018_020c4980();
    void func_ov018_020c4a5c();
};

extern UnkStruct_02011e10 data_0204999c;

void *SysNew(UnkStruct_02011e10_Sub1 *param1, u32 length, u32 idLength);
void SysDelete(void *ptr);
void *func_02011f10(s32 length);
void *func_02011f30(s32 length);
