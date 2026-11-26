#include "Actor/ActorManager.hpp"
#include "Item/ItemManager.hpp"
#include "nitro/types.h"

void UnkStruct_ItemManager_20_10::func_ov031_020db2b0() {
    for (u32 i = 0; i < ARRAY_LEN(this->mUnk_00); i++) {
        this->mUnk_00[*(u32 *) &i].ref.Reset(); //! TODO: fake match
    }
}

s32 UnkStruct_ItemManager_20_10::func_ov031_020db2dc() {
    for (s32 i = 0; i < ARRAY_LEN(this->mUnk_00); i++) {
        if (this->mUnk_00[i].ref.common.type != 1 || gpActorManager->func_01fff3b4(this->mUnk_00[i].ref) == NULL) {
            return i;
        }
    }

    return -1;
}
