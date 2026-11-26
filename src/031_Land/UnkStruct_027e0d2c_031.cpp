#include "Item/ItemManager.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e0d2c.hpp"
#include "global.h"
#include "types.h"

THUMB_BEGIN

void UnkStruct_027e0d2c::Create(UnkStruct_ItemManager_20_04 *param1) {
    new(HeapIndex_1) UnkStruct_027e0d2c(param1);
}

THUMB_END

void UnkStruct_027e0d2c::func_ov031_020d95b4() {
    this->mUnk_00->mUnk_008.func_ov031_020dc480();
}

void UnkStruct_027e0d2c::func_ov031_020d95c8(RefStruct ref) {
    this->mUnk_00->mUnk_008.mUnk_32C.func_ov031_020d9f34(ref);
}

bool UnkStruct_027e0d2c::func_ov031_020d95ec(RefStruct ref) {
    return this->mUnk_00->mUnk_008.mUnk_32C.func_ov031_020d9ccc(ref) != 0;
}

void UnkStruct_027e0d2c::func_ov031_020d961c(RefStruct *pRef, UnkStruct_027e0d2c *thisx) {
    *pRef = thisx->mUnk_00->mRef;
}

bool UnkStruct_027e0d2c::func_ov031_020d962c(VecFx32 *param1, unk32 param2, VecFx32 *param3, RefStruct *param4) {
    return this->mUnk_00->mUnk_008.func_ov031_020dc700(param1, param2, param3, param4);
}

DECL_INSTANCE_CTOR(UnkStruct_027e0d2c, data_027e0d2c);
