#pragma once

#include "Item/Item.hpp"
#include "global.h"
#include "types.h"

class UnkStruct_027e0d34 {
public:
    /* 00 */ unk32 mUnk_00;

    UnkStruct_027e0d34();
    ~UnkStruct_027e0d34();

    void func_ov031_020d9844();
    bool TryItemGive(ItemId itemId);
};

extern UnkStruct_027e0d34 *data_027e0d34;
