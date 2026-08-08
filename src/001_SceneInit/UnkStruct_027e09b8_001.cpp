#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_0204a088.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_ov000_020b504c.hpp"

#include <nitro/mi.h>

struct UnkStruct_ov000_02073080 {
    /* 00 */ STRUCT_PAD(0x00, 0x08);
    /* 08 */ CutsceneIndex csIndex;
    /* 0C */ STRUCT_PAD(0x0C, 0x1C);
    /* 1C */
};
extern "C" void func_ov000_02073080(void *);

UnkStruct_027e09b8 *UnkStruct_027e09b8::Create() {
    return new(HeapIndex_1) UnkStruct_027e09b8();
}

UnkStruct_027e09b8::UnkStruct_027e09b8() {
    MI_CpuFill32(0, this->mAdventureFlags, sizeof(this->mAdventureFlags));
    this->mUnk_94 = 0;
    this->mUnk_96 = false;
    this->mUnk_97 = false;
    MI_CpuFill32(0, this->mUnk_04, sizeof(this->mUnk_04));

    this->mUnk_00    = new(HeapIndex_1) UnkStruct_027e09b8_00();
    this->mUnk_04[0] = new(HeapIndex_1) UnkStruct_027e09b8_04();
    this->mUnk_04[2] = new(HeapIndex_1) UnkStruct_027e09b8_0C();

    if (data_0204a088 != NULL) {
        this->mUnk_04[3] = new(HeapIndex_1) UnkStruct_027e09b8_10();
    }

    this->mUnk_98 = new(HeapIndex_1) UnkStruct_027e09b8_98();
}

UnkStruct_027e09b8::~UnkStruct_027e09b8() {
    for (int i = 0; i < ARRAY_LEN(this->mUnk_04); i++) {
        delete this->mUnk_04[i];
    }

    delete this->mUnk_00;

    if (this->mUnk_98 != NULL) {
        DELETE(this->mUnk_98);
    }
}

void UnkStruct_027e09b8::ImportAdventureFlags(AdventureFlag *pAdventureFlags) {
    MI_CpuCopy32(pAdventureFlags, this->mAdventureFlags, sizeof(this->mAdventureFlags));
}

void UnkStruct_027e09b8::func_ov001_020b76c0(CutsceneIndex csIndex) {
    UnkStruct_ov000_02073080 auStack_30;

    func_ov000_02073080(&auStack_30);
    auStack_30.csIndex = csIndex;

    this->mUnk_04[1] = new(HeapIndex_1) UnkStruct_027e09b8_08(&auStack_30);

    this->func_ov000_02073610(&auStack_30, 0);
    data_ov000_020b504c.func_ov001_020be998();
}

void UnkStruct_027e09b8::func_ov001_020b7700() {
    if (this->mUnk_04[1] != NULL) {
        data_ov000_020b504c.func_ov001_020be504();
        DELETE(this->mUnk_04[1]);
    }
}

void UnkStruct_027e09b8::func_ov001_020b7728() {
    this->mUnk_00->func_ov000_02073b5c();

    for (int i = 0; i < ARRAY_LEN(this->mUnk_04); i++) {
        if (this->mUnk_04[i] != NULL) {
            this->mUnk_04[i]->vfunc_0C();
        }
    }

    this->mUnk_98->func_ov000_020a7b34();
}

DECL_INSTANCE(UnkStruct_027e09b8, data_027e09b8);
