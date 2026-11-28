#include "Item/ItemManager.hpp"
#include "Player/PlayerLink.hpp"
#include "Player/PlayerZelda.hpp"
#include "global.h"
#include "nitro/math.h"

THUMB_BEGIN
void PlayerLinkActor::func_ov031_020dccbc() {
    if (this->mUnk_54 != NULL && !this->mUnk_54->GetInventory()->HasRecruitUniform()) {
        this->mUnk_138.func_ov000_0206082c(0x5D, 0x04);
    } else {
        this->mUnk_138.func_ov000_0206082c(0x5D, 0x03);
    }
}

void PlayerLinkActor::func_ov031_020dccf0() {
    this->func_ov031_020dccbc();

    //! TODO: unrolled loop?
    PlayerLinkActor_1B0 *ptr = &this->mUnk_1B0[0];
    PlayerLinkActor_1B0 *ptr2;

    ptr2          = ptr + 0;
    ptr2->mUnk_04 = 0xD04F + 0;
    ptr2->mUnk_08 = 0x01;

    ptr2          = ptr + 1;
    ptr2->mUnk_04 = 0xD04F + 1;
    ptr2->mUnk_08 = 0x01;

    ptr2          = ptr + 2;
    ptr2->mUnk_04 = 0xD04F + 2;
    ptr2->mUnk_08 = 0x01;
}
THUMB_END

void PlayerLinkActor::func_ov031_020dcd20() {
    if (this->mUnk_134 != NULL) {
        VecFx32 sp0;
        this->func_ov000_0208cc20(&sp0);
        this->mUnk_134->func_ov031_020db120(&sp0);
    }
}

THUMB_BEGIN
PlayerZeldaActor_CC::PlayerZeldaActor_CC() {
    this->mUnk_00 = false;
    VecFx32_Reset(&this->mPosLink);
    VecFx32_Reset(&this->mPosZelda);
}

void PlayerZeldaActor_CC::func_ov031_020dcd70(const VecFx32 *pPosLink, const VecFx32 *pPosZelda) {
    this->mUnk_00 = true;
    VecFx32_Copy(pPosLink, &this->mPosLink);
    VecFx32_Copy(pPosZelda, &this->mPosZelda);
}
THUMB_END
