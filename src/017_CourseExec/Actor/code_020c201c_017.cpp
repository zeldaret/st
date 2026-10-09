#include "Actor/Actor.hpp"
#include "Actor/ActorId.hpp"
#include "Actor/ActorManager.hpp"
#include "RefStruct.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_027e0cec.hpp"
#include "math.hpp"
#include "nitro/fx.h"
#include "nitro/math.h"

struct ActorEffectBase {
    /* 000 */ u8 pad[0x1AC];
    /* 1AC */ unk32 mUnk_1AC;
    /* 1B0 */ unk32 mUnk_1B0;
    /* 1B4 */ unk32 mUnk_1B4;
    /* 1B8 */ unk32 mUnk_1B8;
    /* 1B0 */ u8 pad2[0x1D4 - 0x1BC];
    /* 1D4 */ unk32 mUnk_1D4;
};

void Actor::func_ov017_020c2038(RefStruct *pRef, unk32 param2, unk32 param3, const VecFx32 *param4, unk32 param5) {
#pragma unused(param2, param3)

    ActorParams params;
    params.mUnk_28 = 0;
    params.func_ov000_020975f8();
    VecFx32_Copy(param4, &params.mInitialPos);

    ActorId actorId = ActorId_EFWV;

    switch ((s32) data_027e09a4->CurrentSceneIndex()) {
        case SceneIndex_d_snow26:
        case SceneIndex_f_snow:
        case SceneIndex_f_tetsuo:
        case SceneIndex_f_kakushi1:
            actorId = ActorId_EFW2;
            break;
        case SceneIndex_b_water:
        case SceneIndex_tekiya07:
            actorId = ActorId_EFW3;
            break;
        case SceneIndex_d_tutorial:
        case SceneIndex_d_water27:
        case SceneIndex_f_hyral:
        case SceneIndex_f_kakushi3:
            actorId = ActorId_EFWI;
            break;
        case SceneIndex_f_bridge2:
            if (data_027e0cd8->func_ov000_02081d5c() == 0x01) {
                actorId = ActorId_EFWI;
            }
            break;
        default:
            break;
    }

    Actor::func_ov000_020973f4(pRef, &data_ov000_020b539c_eur, actorId, &params, 0x00);

    Actor *pActor = gpActorManager->func_01fff3b4(*pRef);

    if (pActor == NULL) {
        return;
    }

    if (param5 != 0x1000) {
        ((ActorEffectBase *) pActor)->mUnk_1D4 = param5;
    }
}

bool Actor::func_ov017_020c219c(unk32 param1, const VecFx32 *param2, unk32 param3, bool param4) {
#pragma unused(param1, param4)

    ActorParams params;
    params.mUnk_28 = 0;
    params.func_ov000_020975f8();
    VecFx32_Copy(param2, &params.mInitialPos);

    ActorId actorId = ActorId_EFRP;

    switch ((s32) data_027e09a4->CurrentSceneIndex()) {
        case SceneIndex_d_snow26:
        case SceneIndex_f_snow:
        case SceneIndex_f_tetsuo:
        case SceneIndex_f_kakushi1:
            actorId = ActorId_EFR2;
            break;
        case SceneIndex_b_water:
        case SceneIndex_tekiya07:
            actorId = ActorId_EFR3;
            break;
        case SceneIndex_d_tutorial:
        case SceneIndex_d_water27:
        case SceneIndex_f_hyral:
        case SceneIndex_f_kakushi3:
            actorId = ActorId_EFRI;
            break;
        case SceneIndex_f_bridge2:
            if (data_027e0cd8->func_ov000_02081d5c() == 0x01) {
                actorId = ActorId_EFRI;
            }
            break;
        default:
            break;
    }

    RefStruct ref;
    Actor::func_ov000_020973f4(&ref, &data_ov000_020b539c_eur, actorId, &params, 0x00);

    Actor *pActor = gpActorManager->func_01fff3b4(ref);

    if (pActor == NULL) {
        return false;
    }

    if (param3 != 0x1000) {
        ((ActorEffectBase *) pActor)->mUnk_1AC = param3;
    }

    return true;
}

bool Actor::func_ov017_020c2310(const VecFx32 *param1, unk32 param2) {
    ActorParams params;
    params.mUnk_28 = 0;
    params.func_ov000_020975f8();
    VecFx32_Copy(param1, &params.mInitialPos);

    RefStruct sp4;
    Actor::func_ov000_020973f4(&sp4, &data_ov000_020b539c_eur, ActorId_EFWL, &params, 0x00);

    Actor *pActor = gpActorManager->func_01fff3b4(sp4);

    if (pActor == NULL) {
        return false;
    }

    if (param2 != 0x1000) {
        ((ActorEffectBase *) pActor)->mUnk_1B8 = param2;
    }

    return true;
}

bool Actor::func_ov017_020c23a4(unk32 param1, const VecFx32 *param2, unk32 param3, bool param4) {
#pragma unused(param1, param4)

    ActorParams params;
    params.mUnk_28 = 0;
    params.func_ov000_020975f8();
    VecFx32_Copy(param2, &params.mInitialPos);

    RefStruct sp4;
    Actor::func_ov000_020973f4(&sp4, &data_ov000_020b539c_eur, ActorId_EFRL, &params, 0x00);

    Actor *pActor = gpActorManager->func_01fff3b4(sp4);

    if (pActor == NULL) {
        return false;
    }

    if (param3 != 0x1000) {
        ((ActorEffectBase *) pActor)->mUnk_1AC = param3;
    }

    return true;
}

void Actor::func_ov017_020c2438(RefStruct *pRef, unk32 param2, const VecFx32 *param3, unk32 param4, bool param5) {
#pragma unused(param4)

    pRef->Reset();
    UnkStruct_027e0cd8_0C_Base *temp_r5 = data_027e0cd8->mUnk_0C;
    VecFx32 sp18                        = *param3;

    if (param5) {
        if (sp18.y < -0x1000) {
            sp18.y = -0x1000;
        }

        sp18.y = temp_r5->vfunc_28(&sp18, 0x00, 0x00);
    }

    switch (param2) {
        case 0: {
            RefStruct sp14;
            Actor::func_ov017_020c2038(&sp14, NULL, 0, &sp18, 0xE66);
            *pRef = sp14;
            Actor::func_ov017_020c219c(NULL, &sp18, 0xE66, param5);
            data_027e0cec->func_ov000_0209feac(0x927, &sp18, 2, 0, 0);
            data_027e0cec->func_ov000_0209feac(0x928, &sp18, 2, 0, 0);
            break;
        }
        case 1: {
            RefStruct sp10;
            Actor::func_ov017_020c2038(&sp10, NULL, 0, &sp18, 0xB33);
            *pRef = sp10;
            Actor::func_ov017_020c219c(NULL, &sp18, 0xB33, param5);
            data_027e0cec->func_ov000_0209feac(0x929, &sp18, 2, 0, 0);
            data_027e0cec->func_ov000_0209feac(0x92A, &sp18, 2, 0, 0);
            break;
        }
        case 2: {
            RefStruct spC;
            Actor::func_ov017_020c2038(&spC, NULL, 0, &sp18, 0x800);
            *pRef = spC;
            Actor::func_ov017_020c219c(NULL, &sp18, 0x800, param5);
            data_027e0cec->func_ov000_0209feac(0x92D, &sp18, 2, 0, 0);
            data_027e0cec->func_ov000_0209feac(0x92E, &sp18, 2, 0, 0);
            break;
        }
        case 3: {
            RefStruct sp8;
            Actor::func_ov017_020c2038(&sp8, NULL, 0, &sp18, 0x4CD);
            *pRef = sp8;
            Actor::func_ov017_020c219c(NULL, &sp18, 0x4CD, param5);
            data_027e0cec->func_ov000_0209feac(0x92B, &sp18, 2, 0, 0);
            data_027e0cec->func_ov000_0209feac(0x92C, &sp18, 2, 0, 0);
            break;
        }
        default:
            break;
    }
}

void Actor::func_ov017_020c26f8(unk32 param1, const VecFx32 *param2, unk32 param3, bool param4) {
#pragma unused(param3)

    UnkStruct_027e0cd8_0C_Base *temp_r5 = data_027e0cd8->mUnk_0C;
    VecFx32 sp8                         = *param2;

    if (param4) {
        sp8.y = temp_r5->vfunc_28(&sp8, 0x00, 0x00);
    }

    sp8.y = -FX_F32_TO_FX32(0.5f);

    switch (param1) {
        case 0:
            Actor::func_ov017_020c2310(&sp8, 0xE66);
            Actor::func_ov017_020c23a4(NULL, &sp8, 0xE66, param4);
            data_027e0cec->func_ov000_0209feac(0x884, &sp8, 4, 0, 0);
            break;
        case 1:
            Actor::func_ov017_020c2310(&sp8, 0xB33);
            Actor::func_ov017_020c23a4(NULL, &sp8, 0xB33, param4);
            data_027e0cec->func_ov000_0209feac(0x885, &sp8, 4, 0, 0);
            break;
        case 2:
            Actor::func_ov017_020c2310(&sp8, 0x800);
            Actor::func_ov017_020c23a4(NULL, &sp8, 0x800, param4);
            data_027e0cec->func_ov000_0209feac(0x886, &sp8, 4, 0, 0);
            break;
        case 3:
            Actor::func_ov017_020c2310(&sp8, 0x4CD);
            Actor::func_ov017_020c23a4(NULL, &sp8, 0x4CD, param4);
            data_027e0cec->func_ov000_0209feac(0x887, &sp8, 4, 0, 0);
            break;
        default:
            break;
    }
}

void Actor::func_ov017_020c28b4(VecFx32 *param1, UnkAngleStruct param2, unk32 param3) {
    VecFx16 sp4;

    sp4.x = SIN((u16) (s16) -param2.angle_s);
    sp4.y = FX_F32_TO_FX32(0.0f);
    sp4.z = COS((u16) (s16) -param2.angle_s);

    data_027e0cec->func_ov000_0209ff24(0x8F7, param1, &sp4, param3);
    data_027e0cec->func_ov000_0209ff24(0x8F8, param1, &sp4, param3);
    data_027e09a8->func_ov000_02071eac(param1);
}
