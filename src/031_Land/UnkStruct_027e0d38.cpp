#include "Unknown/UnkStruct_027e0d38.hpp"
#include "Item/ItemManager.hpp"
#include "System/SysNew.hpp"
#include "global.h"
#include "types.h"

THUMB_BEGIN

void UnkStruct_027e0d38::Create(UnkStruct_ItemManager_20_00 *param1) {
    new(HeapIndex_1) UnkStruct_027e0d38(param1);
}

THUMB_END

bool UnkStruct_027e0d38::func_ov031_020d9bec() {
    return this->mUnk_00->mUnk_08.mUnk_0A != 0x00;
}

bool UnkStruct_027e0d38::func_ov031_020d9c04(unk32 param1, unk32 param2, unk32 param3) {
    this->mUnk_00->func_ov031_020dbd24(param1, param2, param3);
}

void UnkStruct_027e0d38::func_ov031_020d9c14(RefStruct ref, VecFx32 *param2, VecFx32 *param3) {
    this->mUnk_00->func_ov031_020dbd98(ref, param2, param3);
}

bool UnkStruct_027e0d38::func_ov031_020d9c34(bool param1, VecFx32 *param2) {
    return this->mUnk_00->func_ov031_020dbb38(param1, param2);
}

void UnkStruct_027e0d38::func_ov031_020d9c44(unk32 param1) {
    this->mUnk_00->func_ov031_020dbc18(param1);
}

DECL_INSTANCE_CTOR(UnkStruct_027e0d38, data_027e0d38);
