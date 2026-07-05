#pragma once

#include "Item/Item.hpp"
#include "global.h"
#include "types.h"

class UnkStruct_027e0d34_04 {
public:
    bool func_ov000_02093bc8(unk32 param1);
};

class UnkStruct_027e0d34 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ UnkStruct_027e0d34_04 *mUnk_04;

    UnkStruct_027e0d34();
    ~UnkStruct_027e0d34();

    // overlay 31
    bool func_ov031_020d97e4();
    bool func_ov031_020d97f4();
    void func_ov031_020d9844();
    void func_ov031_020d994c();
    void func_ov031_020d996c();
    bool TryItemGive(ItemId itemId);
};

extern UnkStruct_027e0d34 *data_027e0d34;
