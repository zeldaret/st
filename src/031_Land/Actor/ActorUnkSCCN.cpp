#include "Actor/ActorUnkSCCN.hpp"
#include "CommonFuncs.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09c0.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "nitro/fx.h"

DECL_PROFILE(ActorProfileUnkSCCN);

Actor *ActorProfileUnkSCCN::Create() {
    return new(HeapIndex_2) ActorUnkSCCN();
}

ActorProfileUnkSCCN::ActorProfileUnkSCCN() :
    ActorProfile(ActorId_SCCN) {}

ActorUnkSCCN::ActorUnkSCCN() {}

bool ActorUnkSCCN::Init(unk32 param1) {
#pragma unused(param1)

    if (this->mUnk_5C.mParams[1] == 0x0) {
        return false;
    }

    UnkStruct_027e0cd8_0C_Base *data_0C    = data_027e0cd8->mUnk_0C;
    UnkStruct_027e0cd8_0C_Base_148_00 *ptr = data_0C->func_ov000_02080620(this->mUnk_5C.mParams[1]);

    if (ptr == NULL) {
        return false;
    }

    if (!ptr->vfunc_04()) {
        VecFx32x2 spC;

        VecFx32x2 *pVec = &ptr->mUnk_14;
        spC.unk_00      = pVec->unk_00;
        spC.unk_0C      = pVec->unk_0C;

        func_01ffd054(&spC.unk_00, &this->mPos);
        this->mPos.y = data_0C->vfunc_28(&this->mPos, 0x01, 0x00);

        VecFx32 sp0;
        VecFx32 *psp0 = (VecFx32 *) &sp0;
        VecFx32_Reset(psp0);
        sp0.x = -this->mPos.x;
        sp0.z = -this->mPos.z;

        VecFx32_Add(&spC.unk_00, psp0, &spC.unk_00);
        VecFx32_Add(&spC.unk_0C, psp0, &spC.unk_0C);

        this->mUnk_94.mUnk_0C = spC.unk_00;
        this->mUnk_94.mUnk_18 = spC.unk_0C;
    }

    this->mUnk_94.mUnk_08 = (((0x04407007 | ((u8) this->mUnk_5C.mParams[0] << 0x10)) & ~0x7000) | 0x3000);
    this->mUnk_94.mUnk_04 |= 0x2;

    if (this->mUnk_5C.mParams[2] != 0) {
        this->mUnk_94.mUnk_07 = 0x13;
    } else {
        switch (this->GetDirection()) {
            case 0:
                this->mUnk_94.mUnk_07 = 0x09;
                break;
            case 2:
                this->mUnk_94.mUnk_07 = 0x08;
                break;
            case 3:
                this->mUnk_94.mUnk_07 = 0x22;
                break;
            case 1:
                this->mUnk_94.mUnk_07 = 0x23;
                break;
            default:
                this->mUnk_94.mUnk_07 = 0x07;
                break;
        }
    }

    this->mUnk_B8.mUnk_04 = this->mRef;
    this->mUnk_B8.mUnk_08 = &this->mPos;
    this->mUnk_B8.mUnk_0C = &this->mUnk_94;

    data_027e09c0->func_ov000_0207e240(&this->mUnk_B8);
    return true;
}
