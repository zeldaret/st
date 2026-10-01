#include "Actor/ActorManager.hpp"
#include "MapObject/MapObjectManager.hpp"
#include "System/OverlayManager.hpp"
#include "Unknown/UnkStruct_0204a088.hpp"
#include "Unknown/UnkStruct_0204a110.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"
#include "Unknown/UnkStruct_027e09ac.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_027e09bc.hpp"
#include "Unknown/UnkStruct_027e09c0.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "Unknown/UnkStruct_ov016_020b8310.hpp"

void UnkStruct_027e09a4::func_ov017_020bb660(unk32 param1) {
    if (data_0204a110.func_02019300(param1) != 0) {
        if (this->mUnk_5C != 0) {
            this->mUnk_5C--;
        }

        this->mUnk_64++;

        if (this->mUnk_5C == 0) {
            data_027e0cd8->func_ov000_02081b9c(param1);
        }
    }

    if (this->mUnk_5C == 0) {
        if (!data_027e09b8->func_01ffd420()) {
            data_027e0ce0->func_ov017_020bd4a0(param1, 0);
            gpMapObjManager->func_ov005_020b6570(param1);
            gpActorManager->func_ov005_020b66a4(param1);
        } else {
            data_027e0ce0->func_ov017_020bd4a0(param1, 1);
            gpMapObjManager->func_ov017_020c00dc(param1);
            gpActorManager->func_ov017_020becd8(param1);

            if (gOverlayManager.IsRabbitCapture()) {
                UnkStruct_ov016_020b8310 *ptr = &data_ov016_020b8310;
                ptr->vfunc_08();
            }
        }
    }

    if (data_0204a110.func_02019340(param1)) {
        if (this->mUnk_5C == 0) {
            data_027e09b8->func_ov000_0207332c();
        }
        data_027e09c0->func_ov000_0207da40();
    }

    if (this->mUnk_5C == 0) {
        data_027e09bc->vfunc_00(param1);
    }

    data_027e09ac->func_ov000_020723f4();
}

void UnkStruct_027e09a4::func_ov017_020bb7f8(void *param1) {
    if (data_0204a088->mUnk_120 & 0x02) {
        data_027e0cd8->func_ov000_02081bf4();
    }

    if ((data_0204a088->mUnk_120 & 0x04) && data_027e09b8->mUnk_96) {
        data_027e0ce0->func_ov017_020bd5dc(param1);
    }

    if (data_0204a088->mUnk_120 & 0x08) {
        gpMapObjManager->func_ov017_020c01cc((unk32) param1); //! TODO: change parameters
    }

    if (data_0204a088->mUnk_120 & 0x10) {
        if (data_027e09b8->mUnk_97) {
            gpActorManager->func_01fff2fc(ActorManager::func_ov017_020bee84, param1);
        } else {
            gpActorManager->func_01fff2fc(ActorManager::func_ov017_020beea4, param1);
        }
    }

    if (gOverlayManager.IsRabbitCapture()) {
        UnkStruct_ov016_020b8310 *ptr = &data_ov016_020b8310;
        ptr->vfunc_10(param1);
    }

    data_027e09ac->func_ov000_02072684(param1);
}

void UnkStruct_027e09a4::func_ov017_020bb934(void *param1) {
    data_027e0cd8->func_ov000_02081b84();
    data_027e0ce0->func_ov017_020bd5c4(param1);
    gpMapObjManager->func_ov017_020c01c8(param1);
    gpActorManager->func_01fff2fc(ActorManager::func_ov017_020bee64, param1);
}

void UnkStruct_027e09a4::func_ov017_020bb994(s8 *param1) {
    data_027e0cd8->func_ov000_02081d58();
    data_027e0ce0->func_ov017_020bd644(param1);
    gpMapObjManager->func_ov017_020c023c(param1);
    gpActorManager->func_01fff2fc(ActorManager::func_ov017_020beecc, param1);

    if (gOverlayManager.IsRabbitCapture()) {
        UnkStruct_ov016_020b8310 *ptr = &data_ov016_020b8310;
        ptr->vfunc_0C(param1);
    }
}
