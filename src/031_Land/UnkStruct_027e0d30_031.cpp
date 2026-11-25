#include "Unknown/UnkStruct_027e0d30.hpp"
#include "types.h"

THUMB_BEGIN

void UnkStruct_027e0d30::Create(UnkStruct_ItemManager_20_08 *param1) {
    new(HeapIndex_1) UnkStruct_027e0d30(param1);
}

THUMB_END

u16 UnkStruct_027e0d30::func_ov031_020d9674() {
    return this->mUnk_00->func_ov031_020db5e8();
}

void UnkStruct_027e0d30::func_ov031_020d9684(u16 param1, VecFx32 *param2) {
    this->mUnk_00->func_ov031_020db614(param1, param2);
}

DECL_INSTANCE_CTOR(UnkStruct_027e0d30, data_027e0d30);
