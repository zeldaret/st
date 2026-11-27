#include "Actor/ActorManager.hpp"
#include "Actor/ActorUnkICBS.hpp"
#include "Actor/ActorUnkPSBL.hpp"
#include "CommonFuncs.hpp"
#include "Item/ItemManager.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "global.h"
#include "nitro/fx.h"
#include "nitro/math.h"
#include "nitro/types.h"

Actor *UnkStruct_ItemManager_20_04_32C::func_ov031_020d9c64(RefStruct ref) {
    if (ref.common.type == 1) {
        Actor *pActor = gpActorManager->func_01fff3b4(ref);

        if (pActor != NULL && pActor->GetActorId() == ActorId_BMHN) {
            return pActor;
        }
    }

    return NULL;
}

s32 UnkStruct_ItemManager_20_04_32C::func_ov031_020d9ccc(RefStruct ref) {
    s32 count = 0;

    for (UnkStruct_ItemManager_20_04_32C_00 *ptr = this->mUnk_00; ptr != this->GetUnkA0(); ptr++) {
        if (ref == ptr->mRef) {
            count++;
        }
    }

    return count;
}

bool UnkStruct_ItemManager_20_04_32C::func_ov031_020d9d10(RefStruct ref, u16 param2) {
    STACK_PAD(8); //! TODO: likely pad from RefStruct?

    if (this->GetCount() < ARRAY_LEN(this->mUnk_00)) {
        VecFx32 sp38;
        VecFx32 sp2C;

        if (this->mUnk_A4 != 0 && this->mUnk_A4.Get32() == ref.Copy().Get32() ? true : false) {
            return false;
        }

        Actor *pActor = func_ov031_020d9c64(ref.Copy());

        u32 var_r6 = pActor != NULL ? pActor->mUnk_5C.mParams[0] : 1;
        u32 var_r7 = this->GetCount() != 0 ? this->func_ov031_020d9ccc(ref) : 0;

        if (var_r7 < var_r6) {
            VecFx32_Init(0, FX_F32_TO_FX32(0.25f), 0, &sp38);

            if (pActor != NULL) {
                if (var_r6 > 1) {
                    Sphere *temp_r0_4 = pActor->mUnk_34;

                    if (temp_r0_4 != NULL && temp_r0_4->radius > 0) {
                        u16 angle = (0xFFFF / var_r6) * var_r7;
                        sp38.x    = ROUND_FX32(temp_r0_4->radius * SIN(angle));
                        sp38.z    = ROUND_FX32(temp_r0_4->radius * COS(angle));
                    }
                }

                if (this->mUnk_A4 == 0) {
                    this->mUnk_A4 = ref.Copy();
                }
            }

            UnkStruct_ItemManager_20_04_32C_00 sp18;
            UnkStruct_ItemManager_20_04_32C_00 *psp18 = (UnkStruct_ItemManager_20_04_32C_00 *) &sp18;
            sp18.mRef                                 = ref.Copy();
            sp18.mUnk_04                              = param2;
            sp18.mUnk_08                              = sp38;

            new(this->mUnk_A0) UnkStruct_ItemManager_20_04_32C_00(psp18);
            this->mUnk_A0++;

            if (func_ov000_0205cbc4(ref, &sp2C)) {
                sp2C.y += FX_F32_TO_FX32(0.25f);
                data_027e09a8->func_ov000_02071b30(0x8D75, &sp2C, 0);
            }

            return true;
        }
    }

    return false;
}

bool UnkStruct_ItemManager_20_04_32C::func_ov031_020d9f34(RefStruct ref) {
    for (UnkStruct_ItemManager_20_04_32C_00 *var_r3 = this->mUnk_00; var_r3 != this->mUnk_A0; var_r3++) {
        if (ref == var_r3->mRef) {
            this->UnkAction1(var_r3);
            return true;
        }
    }

    return false;
}

bool UnkStruct_ItemManager_20_04_32C::func_ov031_020d9fd0(u16 param1, const VecFx32 *param2) {
    for (UnkStruct_ItemManager_20_04_32C_00 *var_r4 = this->mUnk_00; var_r4 != this->mUnk_A0; var_r4++) {
        if (var_r4->mUnk_04 != param1) {
            continue;
        }

        RefStruct temp_r8 = var_r4->mRef;
        Actor *temp_r0    = UnkStruct_ItemManager_20_04_32C::func_ov031_020d9c64(temp_r8);

        if (temp_r0 == NULL) {
            continue;
        }

        RefStruct sp0 = temp_r0->mUnk_5C.mUnk_28;

        if (sp0.common.type == 1) {
            Actor *temp_r0_2 = gpActorManager->func_01fff3b4(sp0);

            if (temp_r0_2 != NULL) {
                switch (temp_r0_2->GetActorId()) {
                    case ActorId_PSBL:
                        ((ActorUnkPSBL *) temp_r0_2)->func_ov079_02152658((VecFx32 *) param2);
                        break;
                    case ActorId_ICBS:
                        ((ActorUnkICBS *) temp_r0_2)->func_ov080_02151970((VecFx32 *) param2);
                        break;
                    default:
                        break;
                }
            }
        }

        if (this->func_ov031_020d9ccc(temp_r8) != 0) {
            this->UnkAction1(var_r4);
        }

        return true;
    }

    return false;
}

void UnkStruct_ItemManager_20_04_32C::func_ov031_020da104(RefStruct *pRef, UnkStruct_ItemManager_20_04_32C *thisx,
                                                          u16 param3) {
    for (UnkStruct_ItemManager_20_04_32C_00 *var_ip = thisx->GetUnk00(); var_ip != thisx->GetUnkA0(); var_ip++) {
        if (var_ip->mUnk_04 == param3) {
            *pRef = var_ip->mRef;
            return;
        }
    }

    pRef->Reset();
}

void UnkStruct_ItemManager_20_04_32C::func_ov031_020da144(void *param1) {
    for (UnkStruct_ItemManager_20_04_32C_00 *var_r4 = this->mUnk_00; var_r4 != this->mUnk_A0; var_r4++) {
        VecFx32 sp0;

        if (func_ov000_0205cbc4(var_r4->mRef, &sp0)) {
            VEC_Add(&sp0, &var_r4->mUnk_08, &sp0);
            data_027e0ce0->func_ov000_0208bfd0(param1, &sp0, 0x00);
        }
    }
}
