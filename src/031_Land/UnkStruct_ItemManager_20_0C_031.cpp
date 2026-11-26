#include "Item/ItemManager.hpp"
#include "MapObject/MapObjectUnkSAND.hpp"
#include "System/OverlayManager.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "global.h"
#include "math.hpp"
#include "nitro/types.h"

THUMB_BEGIN

UnkStruct_ItemManager_20_0C::UnkStruct_ItemManager_20_0C() :
    mUnk_00(0x00),
    mUnk_04(-1),
    mUnk_05(-1),
    mUnk_06(-1),
    mUnk_07(-1),
    mUnk_08(0) {}

UnkStruct_ItemManager_20_0C::~UnkStruct_ItemManager_20_0C() {}

THUMB_END

void UnkStruct_ItemManager_20_0C::func_ov031_020db954() {}

UnkStruct_ov031_02116380 data_ov031_02116380;

void UnkStruct_ItemManager_20_0C::func_ov031_020db958(bool param1, bool param2) {
#pragma unused(param2)
    Vec2bCpp *var_r10 = data_ov031_02116380.unk_00;

    while (var_r10 != data_ov031_02116380.unk_80) {
        if (!MapObjectUnkSAND::func_ov031_0210ae00(*var_r10, NULL)) {
            data_ov031_02116380.unk_80--;

            for (u16 *var_r1 = var_r10->data; var_r1 != data_ov031_02116380.unk_80->data; var_r1++) {
                var_r1[0] = var_r1[1];
            }
        } else {
            var_r10++;
        }
    }

    this->mUnk_0A += 0x71C;

    if (!param1 && data_027e0ce0->mUnk_2C->GetCurrentItem() == ItemFlag_SandRod && gOverlayManager.IsPlayerSandrock()) {
        this->func_ov107_02184fb8();
    }
}

void UnkStruct_ItemManager_20_0C::func_ov031_020dba3c(void *param1) {
#pragma unused(param1)
}
