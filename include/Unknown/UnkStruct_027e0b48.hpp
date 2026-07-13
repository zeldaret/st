#pragma once

#include "global.h"
#include "iterator.hpp"
#include "types.h"

class UnkStruct_027e0b48_IteratorEntry {
public:
    /* 00 */ STRUCT_PAD(0x00, 0x70);
    /* 70 */ void *mUnk_70;
    /* 74 */

    UnkStruct_027e0b48_IteratorEntry() {
        this->mUnk_70 = this;
    }

    ~UnkStruct_027e0b48_IteratorEntry() {}
};

class UnkStruct_027e0b48 {
public:
    /* 000 */ Iterator<UnkStruct_027e0b48_IteratorEntry> mUnk_000;
    /* 008 */ unk8 mUnk_008[0x140];
    /* 148 */

    UnkStruct_027e0b48();
    ~UnkStruct_027e0b48();

    // overlay 1
    void func_ov001_020be474();
    void func_ov001_020be4e4();
};

extern UnkStruct_027e0b48 data_027e0b48;
