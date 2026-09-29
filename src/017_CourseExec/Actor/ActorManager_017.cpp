#include "Actor/ActorManager.hpp"
#include "Unknown/UnkStruct_0204a110.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"
#include "Unknown/UnkStruct_027e0d70.hpp"

void ActorManager::func_ov017_020becd8(unk32 param1) {
    bool var_r0;

    switch ((s32) data_027e09a4->CurrentSceneIndex()) {
        case SceneIndex_test_iwa:
        case SceneIndex_d_main:
        case SceneIndex_f_kakushi4:
        case SceneIndex_test_mri:
        case SceneIndex_test_morita:
        case SceneIndex_test_sako:
        case SceneIndex_test_hosaka:
            var_r0 = true;
            break;
        default:
            var_r0 = false;
            break;
    }

    if (var_r0 != 0) {
        data_027e0d70->func_ov071_0215eb18();
    }

    Vec2us sp0;
    sp0.x = data_0204a110.func_02019300(param1);
    sp0.y = data_0204a110.func_02019340(param1);

    this->func_01fff2fc(ActorManager::func_ov017_020bee20, &sp0);

    if (sp0.y != 0) {
        int i           = 0;
        Actor **ppActor = this->mActorTable;

        while (ppActor < this->mUnk_08) {
            if (*ppActor != NULL && !(*ppActor)->IsAlive()) {
                this->func_ov000_02096e44(i);
            }

            i++;
            ppActor++;
        }
    }
}

void ActorManager::func_ov017_020bee20(Actor *pActor, Actor_vfunc_30 *param2) {
    if (param2->mUnk_00.data == 0 || !pActor->IsFlag2()) {
        if (param2->mUnk_02.data == 0) {
            return;
        }

        if (!pActor->IsActive()) {
            return;
        }
    }

    pActor->vfunc_24();
}

void ActorManager::func_ov017_020bee64(Actor *pActor, Actor_vfunc_30 *param2) {
    if (pActor->IsVisible()) {
        pActor->vfunc_28(param2);
    }
}

void ActorManager::func_ov017_020bee84(Actor *pActor, Actor_vfunc_30 *param2) {
    if (pActor->IsVisible()) {
        pActor->vfunc_2C(param2);
    }
}

void ActorManager::func_ov017_020beea4(Actor *pActor, Actor_vfunc_30 *param2) {
    if (!pActor->IsVisible()) {
        return;
    }

    if (!pActor->IsFlag11()) {
        return;
    }

    pActor->vfunc_2C(param2);
}

void ActorManager::func_ov017_020beecc(Actor *pActor, Actor_vfunc_30 *param2) {
    if (pActor->IsVisible()) {
        pActor->vfunc_30(param2);
    }
}
