#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Unknown/UnkStruct_0204a110.hpp"
#include "Unknown/UnkStruct_020d8698.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_ov000_020b51b8.hpp"
#include "Unknown/UnkStruct_ov024_020d8660.hpp"
#include "regs.h"
#include "versions.h"

extern "C" {
void GX_func_0008(void *, unk32, unk32);
}

extern unk32 data_ov000_020b3000;

UnkStruct_ov024_020d8660 *data_ov024_020d8660 = NULL;

void UnkStruct_ov024_020d8660::func_ov024_020c4a8c(UnkActorSystem1 *param1) {
    this->mUnk_00 = param1;
    this->mUnk_1C = this->mUnk_00->vfunc_24();
    data_ov000_020b51b8.func_ov000_0206d0bc(0x14);
}

void UnkStruct_ov024_020d8660::func_ov024_020c4ac0() {
    // this will automatically assign the instance pointer to `data_ov024_020d8660`
    static UnkStruct_ov024_020d8660 instance;
}

UnkStruct_ov024_020d8660::~UnkStruct_ov024_020d8660() {}

UnkStruct_ov024_020d8660::UnkStruct_ov024_020d8660() {
    this->mUnk_00  = NULL;
    this->mActorId = ActorId_None;
    this->mUnk_08  = 0;
    this->mUnk_1C  = 0;
}

void UnkStruct_ov024_020d8660::func_ov024_020c4b4c(unk32 param1) {
    if (this->mUnk_00 != NULL) {
        if (data_027e09b8->func_01ffd420() == 0) {
            this->mUnk_00->vfunc_10(param1);
        } else {
            this->mUnk_00->vfunc_14(param1);
        }
    }
}

void UnkStruct_ov024_020d8660::func_ov024_020c4ba0() {
    if (this->mUnk_00 != NULL) {
        this->mUnk_00->vfunc_20(1);
        data_ov024_020d8698->func_ov024_020cd150();
    }

    if (this->mUnk_00 != NULL && !this->mUnk_00->mUnk_04) {
        this->mUnk_00->vfunc_08();
    }

    if (this->mActorId != 0) {
        struct {
            void *ptr;
            unk32 actorId;
        } uStack_68;
        uStack_68.actorId = this->mActorId;
        uStack_68.ptr     = &data_ov000_020b3000;

        Actor **ppActor = gpActorManager->func_01fff350(&uStack_68, gpActorManager->mActorTable);
        Actor *pActor   = NULL;

        if (ppActor != gpActorManager->mUnk_08) {
            pActor = *ppActor;
        }

        if (pActor != NULL) {
            ActorUnk_vfunc_b0 auStack_60;
            auStack_60.mUnk_0C = this->mUnk_08;
            auStack_60.mUnk_14 = this->mUnk_0C.mUnk_00;
            auStack_60.mUnk_18 = this->mUnk_0C.mUnk_04;
            auStack_60.mUnk_1C = this->mUnk_0C.mUnk_08;
            auStack_60.mUnk_20 = this->mUnk_0C.mUnk_0C;
            auStack_60.mUnk_21 = this->mUnk_0C.mUnk_0D;
            auStack_60.mUnk_32 = 2;
            auStack_60.mpActor = pActor;
            auStack_60.mUnk_30 = 0;
            data_027e09b8->func_ov000_02073470(&auStack_60, 0);
        }

        this->mActorId = ActorId_None;
        this->mUnk_08  = 0;
    }
}

void UnkStruct_ov024_020d8660::func_ov024_020c4cc8() {
    if (this->mUnk_00 == NULL) {
        return;
    }

    if (!this->mUnk_00->vfunc_2C()) {
        return;
    }

    this->mUnk_00->vfunc_0C();
    this->mUnk_00 = NULL;
    this->mUnk_1C = 0;

    if (data_027e09a4->func_01ffd3d8()) {
        data_0204a110.func_02019538(4, 1);
    } else {
        data_0204a110.func_02019538(0, 1);
    }

#if IS_JP
    GX_func_0008(&REG_BLDCNT, 0x2F, 0);
    GX_func_0008(&REG_BLDCNT_SUB, 0x3F, 0);

    if (data_027e09a4->func_01ffd3d8()) {
        data_0204a110.mUnk_D9C.func_0201c494(1);
    } else {
        data_0204a110.mUnk_D9C.func_0201c494(0);
    }
#else
    GX_func_0008(&REG_BLDCNT, 0x0F, 0);
    GX_func_0008(&REG_BLDCNT_SUB, 0x1F, 0);
#endif
}

bool UnkStruct_ov024_020d8660::func_ov024_020c4d74() {
    if (this->mUnk_00 != NULL) {
        return true;
    }

    return false;
}

void UnkStruct_ov024_020d8660::func_ov024_020c4d88(ActorId actorId, unk32 param2) {
    this->mActorId        = actorId;
    this->mUnk_08         = param2;
    this->mUnk_0C.mUnk_00 = 0;
    this->mUnk_0C.mUnk_04 = -1;
    this->mUnk_0C.mUnk_08 = -1;
    this->mUnk_0C.mUnk_0C = false;
    this->mUnk_0C.mUnk_0D = false;
}

void UnkStruct_ov024_020d8660::func_ov024_020c4dac(ActorId actorId, unk32 param2, UnkActorSystem_Infos1 *param3) {
    this->mActorId        = actorId;
    this->mUnk_08         = param2;
    this->mUnk_0C.mUnk_00 = param3->mUnk_00;
    this->mUnk_0C.mUnk_04 = param3->mUnk_04;
    this->mUnk_0C.mUnk_08 = param3->mUnk_08;
    this->mUnk_0C.mUnk_0C = param3->mUnk_0C;
    this->mUnk_0C.mUnk_0D = param3->mUnk_0D;
}

DECL_INSTANCE(UnkStruct_ov024_020d8660, data_ov024_020d8660);
