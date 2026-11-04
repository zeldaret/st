#include "Actor/ActorUnkKOTA.hpp"
#include "Actor/Actor.hpp"
#include "Actor/ActorId.hpp"
#include "Actor/ActorManager.hpp"
#include "CommonFuncs.hpp"
#include "RefStruct.hpp"
#include "Save/SaveFile.hpp"
#include "Save/SaveManager.hpp"
#include "System/Random.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "math.hpp"
#include "nitro/fx.h"
#include "nitro/math.h"
#include "nitro/types.h"
#include <cstddef>

DECL_PROFILE(ActorProfileUnkKOTA);

Actor *ActorProfileUnkKOTA::Create() {
    return new(HeapIndex_2) ActorUnkKOTA();
}

ActorProfileUnkKOTA::ActorProfileUnkKOTA() :
    ActorProfile(ActorId_KOTA) {
    mUnk_24 = ActorId_KOAT;
}

ActorUnkKOTA::ActorUnkKOTA() :
    mUnk_D4(mUnk_94),
    mUnk_D8(0),
    mUnk_DA(0) {}

bool ActorUnkKOTA::Init(unk32 param1) {
#pragma unused(param1)
    return true;
}

void ActorUnkKOTA::Setup(void) {
    this->UnknownAction1(0);
}

void ActorUnkKOTA::vfunc_24(void) {
    this->Update();
}

void ActorUnkKOTA::Update(void) {
    this->UnknownAction1(mUnk_D8);
}

void ActorUnkKOTA::func_ov094_0216e4f0(void) {
    ActorParams params;
    params.mUnk_28.Reset();
    params.func_ov000_020975f8();
    this->func_ov094_0216e5a4(&params);

    RefStruct pOutRef;
    this->func_ov000_020973f4(&pOutRef, &data_ov000_020b539c_eur, ActorId_Cucco, &params, 0);

    Actor *actor = gpActorManager->func_01fff3b4(pOutRef);
    if (actor != NULL && GetUnkD4() - mUnk_94 < ARRAY_LEN_U(mUnk_94)) {
        if (mUnk_D4 != NULL) {
            *mUnk_D4 = actor;
        }

        mUnk_D4++;
    }
}

// non-matching
void ActorUnkKOTA::func_ov094_0216e5a4(const ActorParams *param1) {
    VecFx32 sp68;
    VecFx32 sp5C;
    VecFx32 sp50;
    VecFx32 sp44;
    VecFx32 sp38;
    VecFx32 sp2C;
    VecFx32 sp20;
    Vec2bCpp sp14;
    Vec2bCpp sp12;
    Vec2bCpp sp10;
    Vec2bCpp spE;
    Vec2bCpp spC;
    Vec2bCpp spA;
    Vec2bCpp sp8;
    Vec2bCpp sp6;
    Vec2bCpp sp4;
    Vec2bCpp sp2;
    Vec2bCpp sp0;
    UnkStruct_027e0cd8_0C_Base_148_00 *ret = NULL;

    if (mUnk_5C.mParams[1] != 0) {
        ret = data_027e0cd8->mUnk_0C->func_ov000_02080620(mUnk_5C.mParams[1]);
    }

    if (ret == NULL) {
        this->func_ov094_0216e9fc((VecFx32 *) &param1->mInitialPos, &mPos, FX_F32_TO_FX32(5.f));
        return;
    }

    if (ret->vfunc_04() == false) {
        sp68 = ret->mUnk_14.unk_00;
        VecFx32_Add(&sp68, &ret->mUnk_14.unk_0C, &sp68);
        func_01ff93c0(&sp68, FX_F32_TO_FX32(0.5f));
        sp68.y = data_027e0cd8->mUnk_0C->vfunc_28(&sp68, 1, 0);

        u16 sp16[4] = {0};
        for (Actor **ptr = mUnk_94; ptr != mUnk_D4; ptr++) {
            if (*ptr != NULL) {
                func_01ffb714(&(*ptr)->mPos, &sp68, &sp5C);

                if (sp5C.x <= 0) {
                    if (sp5C.z <= 0) {
                        sp16[0]++;
                    } else {
                        sp16[1]++;
                    }
                } else {
                    if (sp5C.z <= 0) {
                        sp16[2]++;
                    } else {
                        sp16[3]++;
                    }
                }
            }
        }

        u32 var1 = 0, var2 = 0;
        while (var2 < 3) {
            if (sp16[var1] > sp16[var2] || (sp16[var1] == sp16[var2] && (gRandom.Next32(0) & 0x80000000) != 0)) {
                var1 = var2;
            }
            var2++;
        }

        sp14.x = 0;
        sp14.y = 0;
        sp12.x = 0;
        sp12.y = 0;

        switch (var1) {
            case 0:
                func_01ffedac(&spE, &ret->mUnk_14.unk_00);
                sp14.data[0] = spE.data[0];

                func_01ffedac(&spC, &sp68);
                sp12.data[0] = spC.data[0];
                break;
            case 1:
                VecFx32_Init(ret->mUnk_14.unk_00.x, 0, sp68.z, &sp50);
                func_01ffedac(&spA, &sp50);
                sp14.data[0] = spA.data[0];

                VecFx32_Init(sp68.x, 0, ret->mUnk_14.unk_0C.z, &sp44);
                func_01ffedac(&sp8, &sp44);
                sp12.data[0] = sp8.data[0];
                break;
            case 2:
                VecFx32_Init(sp68.x, 0, ret->mUnk_14.unk_00.z, &sp38);
                func_01ffedac(&sp6, &sp38);
                sp14.data[0] = sp6.data[0];

                VecFx32_Init(ret->mUnk_14.unk_0C.x, 0, sp68.z, &sp2C);
                func_01ffedac(&sp4, &sp2C);
                sp12.data[0] = sp4.data[0];
                break;
            case 3:
                VecFx32_Init(sp68.x, 0, sp68.z, &sp20);
                func_01ffedac(&sp2, &sp20);
                sp14.data[0] = sp2.data[0];

                func_01ffedac(&sp0, &ret->mUnk_14.unk_0C);
                sp12.data[0] = sp0.data[0];
                break;
            default:
                break;
        }

        sp10.x = 0;
        sp10.y = 0;
        sp10.x = sp14.x + gRandom.Next32(sp12.x - sp14.x + 1);
        sp10.y = sp14.y + gRandom.Next32(sp12.y - sp14.y + 1);
        func_ov000_0205ad90(sp10, (VecFx32 *) &param1->mInitialPos);
        func_01ffb714(&sp68, &param1->mInitialPos, &sp5C);
        func_01ff9770(&sp5C, 0xC00);
        VecFx32_Add((VecFx32 *) &param1->mInitialPos, &sp5C, (VecFx32 *) &param1->mInitialPos);
    } else if (ret->vfunc_04() == true) {
        this->func_ov094_0216e9fc((VecFx32 *) &param1->mInitialPos, &ret->mUnk_14.unk_00, ret->mUnk_14.unk_0C.x);
    } else {
        this->func_ov094_0216e9fc((VecFx32 *) &param1->mInitialPos, &mPos, FX_F32_TO_FX32(5.0f));
    }
}

void ActorUnkKOTA::func_ov094_0216e9fc(VecFx32 *param1, const VecFx32 *param2, fx32 param3) const {
    VecFx32_Copy(param2, param1);
    u16 below = 0, above = 0;
    param1->y = data_027e0cd8->mUnk_0C->vfunc_28(param1, 1, 0);

    for (Actor **ptr = (Actor **) mUnk_94; ptr != mUnk_D4; ptr++) {
        if (*ptr != NULL) {
            if (func_01ff9258(param2->x - (*ptr)->mPos.x, param2->z - (*ptr)->mPos.z) > param3 / 2) {
                above++;
            } else {
                below++;
            }
        }
    }

    if (above > below) {
        s32 random_val = gRandom.Next32(param3 / 2 - param3 / 4 + 1) + param3 / 4;
        s32 temp       = 0xFFFF / (this->func_ov094_0216ed94() - this->mUnk_DA);
        s32 diff       = this->mUnk_D8 - this->mUnk_DA;
        s16 angle      = diff * temp;
        param1->x += FX_MUL(SIN(angle), random_val);
        param1->z += FX_MUL(COS(angle), random_val);
    } else if (above == below) {
        s32 random_val = gRandom.Next32(param3 - param3 / 4 + 1) + param3 / 4;
        s32 temp       = 0xFFFF / (this->func_ov094_0216ed94() - this->mUnk_DA);
        s32 diff       = this->mUnk_D8 - this->mUnk_DA;
        s16 angle      = diff * temp;
        param1->x += FX_MUL(SIN(angle), random_val);
        param1->z += FX_MUL(COS(angle), random_val);
    } else {
        s32 random_val = gRandom.Next32(param3 - param3 / 2 + 1) + param3 / 2;
        s32 temp       = 0xFFFF / (this->func_ov094_0216ed94() - this->mUnk_DA);
        s32 diff       = this->mUnk_D8 - this->mUnk_DA;
        s16 angle      = diff * temp;
        param1->x += FX_MUL(SIN(angle), random_val);
        param1->z += FX_MUL(COS(angle), random_val);
    }
}

unk32 ActorUnkKOTA::func_ov094_0216ed94(void) const {
    u16 uVar2;
    SaveManager_00 *saveManager = gSaveManager.GetUnk000();

    if (mUnk_5C.mParams[0] == 0) {
        uVar2 = saveManager->unk_B78.unk_0A;
    } else {
        uVar2 = saveManager->unk_B78.unk_10;
    }

    if (mUnk_5C.mParams[2] != 0 && uVar2 > mUnk_5C.mParams[2]) {
        uVar2 = mUnk_5C.mParams[2];
    }
    return uVar2;
}
