#include "Actor/ActorManager.hpp"
#include "System/OverlayManager.hpp"
#include "Unknown/UnkMemFuncs.h"
#include "Unknown/UnkStruct_027e09a0.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_027e0cf4.hpp"
#include "Unknown/UnkStruct_027e0d70.hpp"
#include "flags.h"
#include "global.h"

extern "C" {
void func_ov000_020977e4();
void func_ov001_020ba59c(void *);
void func_ov021_020f8818();
void func_ov031_020ea100();
void func_ov071_0215e8d4();
unk32 func_01ffd3b0();
unk32 func_01ffd3d8();
}

struct UnkStruct_ov000_020ab1ac {
    /* 00 */ u32 mUnk_00;
    /* 04 */ u32 mUnk_04;
    /* 08 */ u8 mUnk_08;
    /* 09 */ u8 pad[3];
    /* 0C */
};
extern UnkStruct_ov000_020ab1ac data_ov000_020ab1ac[30];

const u32 data_ov001_020c2638[] = {ActorId_FOMC, ActorId_FOMA, ActorId_FOMB, ActorId_FOPD, ActorId_FOMR};
const u16 data_ov001_020c2624[] = {0x01AE, 0x01AF, 0x01B0, 0x01B1, 0x01B2};
const u16 data_ov001_020c262e[] = {0x01CB, 0x01CC, 0x01CD, 0x01CE, 0x01CF};

THUMB ActorManager *ActorManager::Create() {
    return new(1, 4) ActorManager();
}

THUMB ActorManager::ActorManager() {
    this->SetInstance(this);
    this->mUnk_20         = 0;
    this->mUnk_21         = 0;
    this->mUnk_22         = 0;
    this->mUnk_23         = 0;
    this->mUnk_32         = 0;
    this->mActorTable     = NULL;
    this->mActorTableEnd  = NULL;
    this->mUnk_08         = NULL;
    this->mActorCount     = 0;
    this->mNextActorId    = 0;
    this->mUnk_10         = 0;
    this->mUnk_14.mUnk_00 = NULL;
    this->mUnk_14.mUnk_04 = 0;
    this->mUnk_24         = 0;
    this->mUnk_28         = 0;
    this->mUnk_2c         = 0;
    this->mUnk_30         = 0;
    this->mUnk_34         = 0;
}

THUMB ActorManager::~ActorManager() {
    if (this->mActorTable != NULL) {
        delete this->mActorTable;
    }

    this->ClearInstance();
}

THUMB void ActorManager::func_ov001_020bafdc() {
    Actor **ppActorTable = this->mActorTable;

    while (ppActorTable != this->mUnk_08) {
        Actor *pActor = *ppActorTable;

        if (pActor != NULL) {
            // alive and uninitialized?
            if (GET_FLAG(pActor->mFlags, ActorFlag_Alive) && !GET_FLAG(pActor->mFlags, ActorFlag_4)) {
                pActor->vfunc_1c();
                SET_FLAG(pActor->mFlags, ActorFlag_4);
            }
        }

        ppActorTable++;
    }
}

// https://decomp.me/scratch/UywfM
THUMB void ActorManager::func_ov001_020bb018(UnkStruct_func_ov001_020bb018_param2 *param1) {
    u16 unk_0A = param1->mUnk_0A;
    u16 unk_08 = param1->mUnk_08;

    this->mActorCount  = 0;
    this->mNextActorId = 0;
    this->mUnk_10      = 0;
    this->mUnk_34      = 0;

    int aligned0A = ALIGN_NEXT(unk_0A, 8);
    int aligned08 = ALIGN_NEXT(unk_08, 8);

    int iVar5 = data_027e09a0->func_ov000_020702a8(data_027e09a4->mSceneIndex)->mUnk_20;

    s32 allocCount;
    if (data_027e09a4->mUnk_60 == 0) {
        allocCount = aligned0A + 0x40;
    } else {
        allocCount = aligned0A + 0x80;
    }

    if (this->mActorTable != NULL) {
        delete this->mActorTable;
    }

    this->mActorTable    = (Actor **) ::operator new(allocCount * 4, HeapIndex_1);
    this->mActorTableEnd = this->mActorTable + allocCount * 4;

    size_t iVar9 = ((this->mActorTable + allocCount * 4) - this->mActorTable);
    Fill32(0, this->mActorTable, (iVar9 * 4));
    this->mUnk_08 = this->mActorTable;
    data_0204999c.func_ov001_020ba588(aligned08 + iVar5, 0x100);

    // it's 2 when we are on the title screen and 0 during normal gameplay, is it the game mode ?
    if (data_027e09a4->mUnk_60 != 2) {
        unk32 iVar5;

        if (func_01ffd3b0() != 0) {
            iVar5 = data_027e09a4->mSceneIndex;

            if (iVar5 == 0x3E) {
                this->mUnk_34 = 0xFFFFECCD; // ~0x1332
            }

            this->mUnk_14.func_ov000_0205fc20(0x5D, 0x22, NULL, 0);

            {
                UnkStruct_StackTitleScreen auStack_28("Npc/Tex.bin", 1);
                auStack_28.func_ov000_02059270(0x07, "zdf_sw_trace", 0x39200000);
                auStack_28.func_ov000_02059270(0x08, "zdf_sword02", 0x19150000);
                auStack_28.func_ov000_02059270(0x0A, "whip", 0x28000000);

                auStack_28.func_ov000_02059270(0x0C, "rupy0", 0x2D200000);
                auStack_28.func_ov000_02059288(0x0D, "rupy1", 0x0C);
                auStack_28.func_ov000_02059288(0x0E, "rupy2", 0x0C);
                auStack_28.func_ov000_02059288(0x0F, "rupy3", 0x0C);

                auStack_28.func_ov000_02059270(0x10, "life0", 0x2D200000);
                auStack_28.func_ov000_02059270(0x1D, "arrow", 0x2D200000);
                auStack_28.func_ov000_02059270(0x1E, "bomb", 0x2D200000);
                auStack_28.func_ov000_02059270(0x1F, "drug", 0x2D200000);
                auStack_28.func_ov000_02059270(0x20, "drop0", 0x2D200000);
                auStack_28.func_ov000_02059270(0x21, "drop1", 0x2D200000);
                auStack_28.func_ov000_02059270(0x22, "drop2", 0x2D200000);
                auStack_28.func_ov000_02059270(0x23, "drop3", 0x2D200000);
                auStack_28.func_ov000_02059270(0x24, "drop4", 0x2D200000);
                auStack_28.func_ov000_02059270(0x25, "drop5", 0x2D200000);

                UnkStruct_func_ov000_0207029c *ptr = data_027e09a0->func_ov000_0207029c(iVar5);
                if ((ptr->mUnk_1D - 1) == 1) {
                    auStack_28.func_ov000_02059270(0x38, "mic_0", 0x35B00000);
                    auStack_28.func_ov000_02059270(0x39, "mic_1", 0x35B00000);
                    auStack_28.func_ov000_02059270(0x3A, "mic_on", 0x35B00000);
                    auStack_28.func_ov000_02059270(0x3B, "mic_ok", 0x35B00000);
                    auStack_28.func_ov000_02059270(0x3C, "mic_ng", 0x35B00000);
                }

                if (gOverlayManager.mLoadedOverlays[OverlaySlot_8] == OverlayIndex_BossDeago) {
                    auStack_28.func_ov000_02059270(0x09, "bdga_chain", 0x28000000);
                }

                if (gOverlayManager.mLoadedOverlays[OverlaySlot_8] == OverlayIndex_BossLast1) {
                    auStack_28.func_ov000_02059270(0x0B, "kimrat", 0x28000000);
                }
            }

            if (gOverlayManager.mLoadedOverlays[OverlaySlot_8] == OverlayIndex_Tower) {
                UnkStruct_StackTitleScreen auStack_3c("Screen/tex2d.bin", 1);
                auStack_3c.func_ov000_02059270(0x34, "baloon", 0x28a00000);
                auStack_3c.func_ov000_02059270(0x35, "dot", 0x28000000);
            }

            if (gOverlayManager.mLoadedOverlays[OverlaySlot_8] == OverlayIndex_BossDeago) {
                UnkStruct_StackTitleScreen auStack_50("Screen/tex2d.bin", 1);
                auStack_50.func_ov000_02059270(0x30, "deagohit", 0x29200000);
                auStack_50.func_ov000_02059270(0x31, "deagotarget", 0x29200000);
            }

            if (gOverlayManager.mLoadedOverlays[OverlaySlot_8] == OverlayIndex_BossLast2) {
                UnkStruct_StackTitleScreen auStack_64("Screen/tex2d.bin", 1);
                auStack_64.func_ov000_02059270(0x32, "zeldahit", 0x29200000);
                auStack_64.func_ov000_02059270(0x33, "zeldatarget", 0x2D200000);
            }
        } else if (func_01ffd3d8() != 0) {
            UnkStruct_StackTitleScreen auStack_78("Npc/Tex.bin", 1);
            auStack_78.func_ov000_02059270(0x12, "rupy0", 0x2D200000);
            auStack_78.func_ov000_02059288(0x13, "rupy1", 0x12);
            auStack_78.func_ov000_02059288(0x14, "rupy2", 0x12);

            auStack_78.func_ov000_02059270(0x11, "life1", 0x2D200000);
        }
    }

    if (data_027e09a4->UnkCheck(data_027e09a4->mSceneIndex)) {
        func_ov071_0215e8d4();
    }

    // 1 for battle mode
    if (data_027e09a4->mUnk_60 == 1) {
        func_ov021_020f8818();
    }
}

THUMB void ActorManager::func_ov001_020bb414(ActorManager *instance) {
    func_ov001_020ba59c(&data_0204999c);

    if (data_027e09a4->UnkCheck(data_027e09a4->mSceneIndex)) {
        instance->func_ov001_020bb844();
    }

    if (instance->mActorTable != 0) {
        delete instance->mActorTable;
    }

    instance->mActorTable    = NULL;
    instance->mActorTableEnd = NULL;
}

THUMB void ActorManager::func_ov001_020bb488() {
    if (data_027e09a4->mUnk_0C != 1) {
        switch (data_027e09a4->func_01ffd400()->mUnk_10) {
            case 0x00:
            case 0x01:
            case 0x03:
            case 0x06:
                if (data_027e0cd8->mUnk_0c->mUnk_128 & 0x800) {
                    func_ov031_020ea100();
                }
                break;
            default:
                break;
        }
    }

    if (data_027e09a4->mUnk_60 == 1) {
        data_027e0cf4->func_ov021_020f8cdc();
    }

    if (data_027e09a4->UnkCheck(data_027e09a4->mSceneIndex)) {
        data_027e0d70->func_ov068_0215e8f8();
    }
}

THUMB void ActorManager::func_ov001_020bb548() {
    Actor **ppActorTable = this->mActorTable;
    int i                = 0;

    while (ppActorTable < this->mUnk_08) {
        Actor *pActor = *ppActorTable;

        if (pActor != NULL && pActor->vfunc_34() != 0) {
            this->func_ov000_02096e44(i);
        }

        ppActorTable++;
        i++;
    }

    unk32 value = data_027e09a4->mSceneIndex;
    if (data_027e09a4->UnkCheck(value)) {
        data_027e0d70->func_ov071_0215e9ac();

        if (data_027e09a4->UnkCheck(value)) {
            data_027e0d70->func_ov071_0215eac8();
        }
    }

    if (data_027e09a4->mUnk_60 == 1) {
        ActorManager::func_ov001_020bb824();
    }
}

THUMB void ActorManager::func_ov001_020bb630() {
    ActorType **piVar2 = data_ov000_020b539c.func_ov000_02073dc();
    ActorType **piVar3 = data_ov000_020b539c.func_ov000_02073e8();

    while (piVar2 != piVar3) {
        ActorType *iVar4 = *piVar2;

        if (iVar4 != NULL) {
            bool run_vfunc_08 = false;

            if (iVar4->mUnk_38 != 0) {
                run_vfunc_08 = true;
            } else {
                if (iVar4->mActorId == ActorId_BSFC && data_027e09a4->func_01ffd400()->mUnk_1B & 0x10) {
                    run_vfunc_08 = true;
                }
            }

            if (run_vfunc_08) {
                (*piVar2)->vfunc_08();
            }
        }

        piVar2++;
        piVar3 = data_ov000_020b539c.func_ov000_02073e8();
    }

    if (data_027e09a4->mUnk_60 == 1) {
        data_027e0cf4->func_ov021_020f8d20();
    }
}

THUMB void ActorManager::func_ov001_020bb6b0(s32 *param1) {
    ActorType **piVar1 = data_ov000_020b539c.func_ov000_02073dc();
    ActorType **piVar2 = data_ov000_020b539c.func_ov000_02073e8();

    while (piVar1 != piVar2) {
        ActorType *iVar5 = *piVar1;

        if (iVar5 != NULL && iVar5->mUnk_38 == 0) {
            for (int i = 0; i < ARRAY_LEN(data_ov000_020ab1ac); i++) {
                UnkStruct_ov000_020ab1ac *pEntry = &data_ov000_020ab1ac[i];

                if (pEntry->mUnk_00 == iVar5->mActorId && pEntry->mUnk_04 == ((UnkStruct_027e09a4_58_78 *) param1)->mUnk_00 &&
                    pEntry->mUnk_08 == ((UnkStruct_027e09a4_58_78 *) param1)->mUnk_0A) {
                    (*piVar1)->mUnk_39 = 1;
                    (*piVar1)->vfunc_08();
                }
            }
        }

        piVar1++;
        piVar2 = data_ov000_020b539c.func_ov000_02073e8();
    }
}

THUMB bool ActorManager::func_ov001_020bb728(s32 param1) {
    UnkStruct_027e09a4_58_78 *piVar1 = data_027e09a4->func_ov000_02070560();

    if (piVar1->mUnk_00 != 0x2C || piVar1->mUnk_0A != 0) {
        return false;
    }

    for (u32 i = 0; i < 5; i++) {
        int value;
        int value2;

        if (param1 == data_ov001_020c2638[i]) {
            value  = data_ov001_020c2624[i] & 0x1F;
            value2 = data_027e09b8->mUnk_14[(u32) data_ov001_020c2624[i] >> 5];

            if ((1 << value) & value2) {
                value  = data_ov001_020c262e[i] & 0x1F;
                value2 = data_027e09b8->mUnk_14[(u32) data_ov001_020c262e[i] >> 5];

                if (!((1 << value) & value2)) {
                    continue;
                }
            }

            return true;
        }
    }

    return false;
}

THUMB void ActorManager::func_ov001_020bb7b0(ZeldaObjectList *pObjList) {
    for (s32 i = 0; i < pObjList->nEntries; i++) {
        u32 id                = pObjList->aIdList[i];
        ActorType *pActorType = data_ov000_020b539c.func_ov000_020974dc(id);

        if (!this->func_ov001_020bb728(id) && pActorType != NULL) {
            pActorType->vfunc_08();
        }
    }
}

THUMB void ActorManager::func_ov001_020bb7f0() {
    ActorType **ptr1 = data_ov000_020b539c.func_ov000_02073dc();
    ActorType **ptr2 = data_ov000_020b539c.func_ov000_02073e8();

    while (ptr1 != ptr2) {
        if (*ptr1 != NULL) {
            func_ov000_020977e4();
        }

        ptr1++;
        ptr2 = data_ov000_020b539c.func_ov000_02073e8();
    }
}

THUMB void ActorManager::func_ov001_020bb824() {
    if (data_027e0cf4 != NULL) {
        delete data_027e0cf4;
    }
}

THUMB void ActorManager::func_ov001_020bb844() {
    if (data_027e0d70 != NULL) {
        delete data_027e0d70;
    }
}

THUMB void ActorManager::SetInstance(ActorManager *instance) {
    gActorManager = instance;
}

THUMB int ActorManager::ClearInstance() {
    gActorManager = NULL;
    //! @bug: the function expects a return value (though it seems unused)
}
