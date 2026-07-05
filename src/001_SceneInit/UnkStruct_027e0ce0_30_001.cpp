#include "System/OverlayManager.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"

#include <nitro/mi.h>

extern "C" void func_ov000_0208dd60(void *, UnkStruct_027e0ce0_30_00 *);
extern "C" void func_ov026_020de908(VecFx32 *, UnkStruct_027e0ce0_30_00 *);

extern fx32 data_ov000_020afd14;

UnkStruct_027e0ce0_30_00::UnkStruct_027e0ce0_30_00(VecFx32 *param1, VecFx32 *param2, unk32 param3, unk32 *param4,
                                                   unk32 param5) {
    this->mUnk_00.x = 0;
    this->mUnk_00.y = 0;
    this->mUnk_00.z = 0;

    this->mUnk_0C.x = 0;
    this->mUnk_0C.y = 0;
    this->mUnk_0C.z = 0;

    this->mUnk_18 = 0;
    this->mUnk_1C = 0;
    this->mUnk_20 = 0;
    this->mUnk_24 = 0;
    this->mUnk_28 = false;
    this->mUnk_2C = param1;
    this->mUnk_30 = param2;
    this->mUnk_34 = param3;
    this->mUnk_38 = param4;
    this->mUnk_3C = param5;

    if (param1 != NULL) {
        func_ov026_020de908(param1, this);
        this->mUnk_18 = 0x10;
    } else {
        if (param2 != NULL) {
            VecFx32_Copy(param2, &this->mUnk_00);
        } else {
            //! TODO: fake match
            func_ov000_0208dd60(*(unk32 *volatile *) &param4, this);
        }

        this->mUnk_00.y += data_ov000_020afd14;
        this->mUnk_18 = 0x01;
    }

    VecFx32_Copy(&this->mUnk_00, &this->mUnk_0C);
    this->mUnk_1C = this->mUnk_18;
}

UnkStruct_027e0ce0_30_00::~UnkStruct_027e0ce0_30_00() {}

UnkStruct_027e0ce0_30::UnkStruct_027e0ce0_30() {
    this->mUnk_00 = NULL;
    this->mUnk_04 = 0;
    MI_CpuFill32(0, this->mUnk_08, sizeof(this->mUnk_08));
}

UnkStruct_027e0ce0_30::~UnkStruct_027e0ce0_30() {}

void UnkStruct_027e0ce0_30::func_ov001_020bbf00(int index, unk32 param2) {
    this->mUnk_08[index] = new(HeapIndex_1) UnkStruct_027e0ce0_30_08(param2);
}

void UnkStruct_027e0ce0_30::func_ov001_020bbf24(VecFx32 *param1) {
    this->mUnk_00 = new(HeapIndex_1) UnkStruct_027e0ce0_30_00(param1, NULL, 0x00, NULL, 0x00);
}

void UnkStruct_027e0ce0_30::func_ov001_020bbf50(VecFx32 *param1) {
    this->mUnk_00 = new(HeapIndex_1) UnkStruct_027e0ce0_30_00(NULL, param1, 0x00, NULL, 0x00);
}

void UnkStruct_027e0ce0_30::func_ov001_020bbf7c(unk32 param1, unk32 *param2, unk32 param3) {
    this->mUnk_00 = new(HeapIndex_1) UnkStruct_027e0ce0_30_00(NULL, NULL, param1, param2, param3);

    if (gOverlayManager.IsPlayerSub()) {
        this->mUnk_04 = new(HeapIndex_1) UnkStruct_027e0ce0_30_04();
    }
}

void UnkStruct_027e0ce0_30::func_ov001_020bbfcc() {
    if (this->mUnk_00 != NULL) {
        DELETE(this->mUnk_00);

        if (this->mUnk_04 != NULL) {
            DELETE(this->mUnk_04);
        }
    } else {
        for (u32 i = 0; i < ARRAY_LEN(this->mUnk_08); i++) {
            DELETE(this->mUnk_08[i]);
        }
    }
}
