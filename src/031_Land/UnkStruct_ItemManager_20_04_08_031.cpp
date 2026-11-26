#include "CommonFuncs.hpp"
#include "Item/ItemManager.hpp"
#include "Unknown/UnkStruct_027e0954.hpp"
#include "Unknown/UnkStruct_ov031_Items.hpp"
#include "global.h"
#include "nitro/fx/consts.h"
#include "nitro/math.h"

THUMB_BEGIN

UnkStruct_ItemManager_20_04_08::UnkStruct_ItemManager_20_04_08() :
    mUnk_00C(0x00),
    mUnk_310(&this->mUnk_010, 0x40, true),
    mUnk_320(NULL),
    mUnk_324(0x00),
    mUnk_326(false),
    mUnk_327(false),
    mUnk_328(0x00) {}

UnkStruct_ItemManager_20_04_08::~UnkStruct_ItemManager_20_04_08() {}

THUMB_END

void UnkStruct_ItemManager_20_04_08::func_ov031_020dc480() {
    this->mUnk_310.mUnk_04 = this->mUnk_310.mUnk_00;
    this->mUnk_324         = 0;
    this->mUnk_326         = 0;
    this->mUnk_32C.Reset();
}

void UnkStruct_ItemManager_20_04_08::func_ov031_020dc4b8(const VecFx32 *param1) {
    if (this->mUnk_310.GetCount() >= 64) {
        return;
    }

    UnkStruct_ov031_02112b24 sp24;
    sp24.mUnk_04 = &this->mUnk_32C;
    sp24.mUnk_08 = 0x00;

    if (this->mUnk_310.GetCount() == 0) {
        this->mUnk_310.func_ov000_0205b39c(param1);
        sp24.func_ov031_020da274(this->mUnk_310.GetLast(), this->mUnk_310.GetLast(), this->mUnk_310.GetSecondToLastIndex());
    } else {
        VecFx32 sp18;
        fx32 max = this->mUnk_310.GetMax(param1, &sp18);

        if (max != 0) {
            VecFx32 spC = *this->mUnk_310.GetLast();
            VecFx32 sp0 = spC;

            for (u32 i = 0; i < max; i++) {
                if (this->mUnk_310.GetCount() >= 64) {
                    break;
                }

                VEC_Add(&sp0, &sp18, &sp0);
                this->mUnk_310.func_ov000_0205b39c(&sp0);

                if (this->mUnk_32C.GetCount() < 8) {
                    sp24.func_ov031_020da274(&spC, &sp0, this->mUnk_310.GetSecondToLastIndex());
                }

                spC.x = sp0.x;
                spC.y = sp0.y;
                spC.z = sp0.z;
            }
        }
    }
}

bool UnkStruct_ItemManager_20_04_08::func_ov031_020dc700(const VecFx32 *param1, fx32 param2, VecFx32 *param3,
                                                         RefStruct *param4) {
    STACK_PAD(4);

    VecFx32_Copy(param1, param3);
    param4->Reset();

    int count = this->mUnk_310.GetCount();
    if (count == 0) {
        this->func_ov031_020dc480();
        return false;
    }

    VecFx32 sp8;
    VEC_Subtract(&this->GetUnk310()->mUnk_00[this->mUnk_324], param1, &sp8);

    if (VEC_Mag(&sp8) <= param2) {
        if (!this->mUnk_32C.func_ov031_020d9fd0(this->mUnk_324, param1)) {
            RefStruct sp0;
            UnkStruct_ItemManager_20_04_32C::func_ov031_020da104(&sp0, &this->mUnk_32C, this->mUnk_324);
            *param4 = sp0;
        }

        if (this->mUnk_310.GetCount() == 0) {
            this->func_ov031_020dc480();
            return false;
        }

        if (this->mUnk_324 == this->mUnk_310.GetSecondToLastIndex()) {
            this->mUnk_326 = true;
            VecFx32_Copy(&this->mUnk_310.mUnk_00[this->mUnk_324], param3);
            return false;
        }

        this->mUnk_324++;
    }

    VecFx32_Copy(&this->mUnk_310.mUnk_00[this->mUnk_324], param3);
    return true;
}

void UnkStruct_ItemManager_20_04_08::func_ov031_020dc8a0(void *param1, bool param2, u32 param3) {
    void *var_r1;

    this->mUnk_320 = param1;
    this->mUnk_327 = param2;
    this->mUnk_328 = param3;

    if (this->mUnk_310.GetCount() != 0) {
        data_027e0954->mUnk_00[2].mUnk_04.Prepend(this);
        this->mUnk_32C.func_ov031_020da144(param1);
    }
}

void UnkStruct_ItemManager_20_04_08::func_ov031_020dc90c() {
    if (this->mUnk_327 == 0) {
        this->mUnk_310.func_ov000_0205b3f4(this->mUnk_320, 0x1CCD, 0x1F, 0x33FF, 0x33FF, 0);
        return;
    }

    if (this->mUnk_324 == 0) {
        this->mUnk_310.func_ov000_0205b3f4(this->mUnk_320, 0x1800, 0x14, 0x7FFF, 0x7FFF, 0);
        return;
    }

    unk32 var_r2 = 0x33FF;

    switch (this->mUnk_328) {
        case 0x01:
            var_r2 = 0x319F;
            break;
        case 0x02:
            var_r2 = 0x7D8C;
            break;
        default:
            break;
    }

    if (this->mUnk_326 != 0) {
        this->mUnk_310.func_ov000_0205b3f4(this->mUnk_320, 0x1800, 0x14, var_r2, var_r2, 0);
    } else {
        this->mUnk_310.func_ov000_0205b3f4(this->mUnk_320, 0x1800, 0x14, var_r2, 0x7FFF, this->mUnk_324);
    }
}
