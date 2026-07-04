#include "MainGame/AdventureMode.hpp"
#include "MainGame/PassengerManager.hpp"
#include "MainGame/UnkTrainSystems.hpp"
#include "Unknown/Common.hpp"
#include "Unknown/UnkStruct_027e09bc.hpp"
#include "Unknown/UnkStruct_027e0d00.hpp"
#include "Unknown/UnkStruct_ov024_020d86a0.hpp"
#include "types.h"
#include "versions.h"

extern "C" void func_ov000_0205c1f0(unk32 *, u16);
extern "C" void func_ov000_0205c204(void *, VecFx32 *, int, int, u8);

struct UnkStruct_ov024_020d86a8_Mgr {
    const UnkStruct_ov024_020d86a8 *pInstance;

    UnkStruct_ov024_020d86a8_Mgr(const UnkStruct_ov024_020d86a8 *pInstance) {
        this->pInstance = pInstance;
    }
};

UnkStruct_ov024_020d86a8_Mgr data_ov024_020d86a8(&data_ov024_020d78b8);

static const u8 data_ov024_020d78ac[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00};

u8 UnkTrainSystem1::func_ov024_020d54a0(s32 param1) {
    return data_ov024_020d78ac[param1];
}

UnkTrainSystem1::UnkTrainSystem1() {
    this->mUnk_00 = 0;
    this->mUnk_04 = 0;
    this->mUnk_08 = 0;
    this->mUnk_0C = 0;
    this->mUnk_10 = 0x1F;
    this->mUnk_14 = 0;

    if (this->func_ov024_020d586c()) {
        this->mUnk_04 = 0x214;
    }
}

UnkTrainSystem1::~UnkTrainSystem1() {}

void UnkTrainSystem1::func_ov024_020d54f4() {
    if (this->func_ov024_020d586c()) {
        if (this->mUnk_04 == 0 && this->mUnk_0C == 0) {
            this->mUnk_0C = 0xCD;
        }

        if (this->mUnk_04 != 0x214 || this->mUnk_0C > 0) {
            this->mUnk_04 += this->mUnk_0C;
            this->mUnk_0C -= 0x21;

            if (this->mUnk_04 <= 0x214 && this->mUnk_0C < 0) {
                this->mUnk_04 = 0x214;
                this->mUnk_0C = 0;
            }
        } else {
            if (this->mUnk_00 <= 0) {
                this->mUnk_08 = 0x10;
            }

            this->mUnk_00 += this->mUnk_08;
            this->mUnk_08 -= 2;
        }

        PassengerManager *pPassengerMgr = gpPassengerManager;
        if (pPassengerMgr->CanCompleteTrip()) {
            UnkStruct_027e0d00 *ptr = data_027e0d00;
            this->mUnk_14           = ptr->func_ov024_020d4b9c(pPassengerMgr->GetHappinessCond());
        }
    } else {
        this->mUnk_04 += this->mUnk_0C;
        this->mUnk_0C -= 0x21;
        if (this->mUnk_04 <= 0) {
            this->mUnk_04 = 0;
            this->mUnk_0C = 0;
        }

        this->mUnk_00 += this->mUnk_08;
        this->mUnk_08 -= 2;
        if (this->mUnk_00 <= 0) {
            this->mUnk_00 = 0;
            this->mUnk_08 = 0;
        }
    }
}

void UnkTrainSystem1::func_ov024_020d562c(const VecFx32 *param1, fx32 param2) {
    VecFx32 sp44;
    VecFx32 sp38;
    VecFx32 sp2C;
    VecFx32 sp20;
    VecFx32 sp14;
    VecFx32 sp8;
    unk32 sp4[1];
    fx32 new_var3;
    fx32 new_var5;
    fx32 new_var6;
    VecFx32 temp_r1_3;

    if (this->mUnk_04 <= 0) {
        return;
    }

    func_ov000_0205c1f0(sp4, this->mUnk_14);

    if (data_ov024_020d86a8.pInstance->mUnk_00_1 == 0) {
        UnkStruct_027e09bc *ptr = data_027e09bc;
        fx32 temp               = this->mUnk_00 + this->mUnk_04;
        fx32 temp_r1            = MUL_FX32(temp, param2);
        new_var3                = MUL_FX32(param2, 0x266);

        new_var5 = param1->z;
        new_var6 = param1->y + new_var3;

        sp44.x = param1->x;
        sp44.y = new_var6;
        sp44.z = new_var5;

#if IS_JP
        UnkStruct_027e09bc_0C *temp_r8_2 = data_027e09bc->mUnk_04;
#else
        UnkStruct_027e09bc_0C *temp_r8_2 = data_027e09bc->mUnk_0C;
#endif

        temp_r1_3.x = temp_r8_2->mUnk_034.x;
        temp_r1_3.z = temp_r8_2->mUnk_034.z;
        temp_r1_3.y = temp_r8_2->mUnk_034.y;

        fx32 x      = temp_r1_3.x - param1->x;
        temp_r1_3.x = x;
        temp_r1_3.z -= param1->z;
        temp_r1_3.y -= param1->y;

        sp14.x = MUL_FX32(temp_r1_3.x, 0x2E1);
        sp14.y = MUL_FX32(temp_r1_3.y, 0x2E1);
        sp14.z = MUL_FX32(temp_r1_3.z, 0x2E1);

        sp20 = sp14;

        sp8.x = sp44.x + sp20.x;
        sp8.y = sp44.y + sp20.y;
        sp8.z = sp44.z + sp20.z;

        sp2C = sp8;

        sp44.x = sp2C.x;
        sp44.y = sp2C.y;
        sp44.z = sp2C.z;

        func_ov000_0205c204(sp4, &sp44, temp_r1, temp_r1, 0x1F);
    } else {
        fx32 calcul_x   = this->mUnk_04 + (this->mUnk_00 + 0x266);
        fx32 thumb_y    = (fx32) (((((s64) this->mUnk_04) * ((s64) param2)) + 0x800) >> 12);
        unk32 new_var10 = this->mUnk_10;

        fx32 x = param1->x;
        fx32 z = param1->z;
        fx32 y = param1->y + (fx32) (((((s64) calcul_x) * ((s64) param2)) + 0x800) >> 12);

        sp38.x = x;
        sp38.y = y;
        sp38.z = z;

        func_ov000_0205c204(sp4, &sp38, thumb_y, thumb_y, (u8) new_var10);
    }
}

bool UnkTrainSystem1::func_ov024_020d586c() {
    if (gpPassengerManager->CanCompleteTrip() || data_ov024_020d86a8.pInstance->mUnk_00_0 != 0) {
        return true;
    }

    return false;
}
