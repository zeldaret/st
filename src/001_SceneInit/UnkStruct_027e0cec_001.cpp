#include "Cutscene/Cutscene.hpp"
#include "System/OverlayManager.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_0204a110.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"
#include "Unknown/UnkStruct_027e0cec.hpp"

#include <string.h>

extern "C" BOOL func_02012fa8(const char *);

DATA_ALIGN_FIX2();

enum EffectPathIndex_ {
    EffectPathIndex_Dungeon1   = 0,
    EffectPathIndex_Field      = 1,
    EffectPathIndex_Dungeon2   = 2,
    EffectPathIndex_Battle     = 3,
    EffectPathIndex_BossForest = 4,
    EffectPathIndex_BossSnow   = 5,
    EffectPathIndex_BossWater  = 6,
    EffectPathIndex_BossFlame  = 7,
    EffectPathIndex_BossDesert = 8,
    EffectPathIndex_BossDeago  = 9,
    EffectPathIndex_BossLast1  = 10,
    EffectPathIndex_BossLast2  = 11,
};

static const char *data_ov001_020c2f28[] = {
    "Effect/dungeon.spa",     // EffectPathIndex_Dungeon1
    "Effect/field.spa",       // EffectPathIndex_Field
    "Effect/dungeon.spa",     // EffectPathIndex_Dungeon2
    "Effect/battle.spa",      // EffectPathIndex_Battle
    "Effect/boss_forest.spa", // EffectPathIndex_BossForest
    "Effect/boss_snow.spa",   // EffectPathIndex_BossSnow
    "Effect/boss_water.spa",  // EffectPathIndex_BossWater
    "Effect/boss_flame.spa",  // EffectPathIndex_BossFlame
    "Effect/boss_desert.spa", // EffectPathIndex_BossDesert
    "Effect/boss_deago.spa",  // EffectPathIndex_BossDeago
    "Effect/boss_last1.spa",  // EffectPathIndex_BossLast1
    "Effect/boss_last2.spa",  // EffectPathIndex_BossLast2
};

UnkStruct_027e0cec *UnkStruct_027e0cec::Create() {
    data_0204999c.func_ov001_020ba620();
    return new(HeapIndex_5) UnkStruct_027e0cec();
}

void UnkStruct_027e0cec::func_ov001_020bed34() {
    data_027e0cec->~UnkStruct_027e0cec();
    data_0204999c.func_ov001_020ba658();
}

UnkStruct_027e0cec::UnkStruct_027e0cec() :
    mUnk_00(this),
    mUnk_20(0) {
    for (int i = 0; i < ARRAY_LEN(this->mUnk_18); i++) {
        this->mUnk_18[i] = NULL;
    }

    this->mUnk_20 = 0x00;

    UnkFileSystem2 *pUnkFs2;
    if (data_027e09a4->IsSceneModeBattle()) {
        UnkFileSystem2 local_2c(NULL, 0x00);
        pUnkFs2          = &local_2c;
        const char *path = "Effect/multiboot.spa";
        pUnkFs2->vfunc_0C();
        pUnkFs2->mUnk_04 = path;
        this->mUnk_18[0] = new(HeapIndex_5) UnkStruct_027e0cec_18(pUnkFs2, true, 0);
        this->mUnk_20    = 0x02;
    } else if (data_027e09a4->IsTrain()) {
        {
            UnkFileSystem2 local_44(NULL, 0x00);
            pUnkFs2          = &local_44;
            const char *path = "Effect/train.spa";
            pUnkFs2->vfunc_0C();
            pUnkFs2->mUnk_04 = path;
            this->mUnk_18[0] = new(HeapIndex_5) UnkStruct_027e0cec_18(pUnkFs2, true, 0);
        }

        if (gOverlayManager.IsTrainDark()) {
            UnkFileSystem2 local_5c(NULL, 0x00);
            pUnkFs2          = &local_5c;
            const char *path = "Effect/train_dark.spa";
            pUnkFs2->vfunc_0C();
            pUnkFs2->mUnk_04 = path;
            this->mUnk_18[1] = new(HeapIndex_5) UnkStruct_027e0cec_18(pUnkFs2, true, 1);
        }
    } else if (data_027e09a4->IsCutscene()) {
        this->mUnk_20      = 0x01;
        const char *unk_00 = Cutscene_GetParamEntry(data_027e09a4->CurrentCSIndex())->mUnk_00;

        wchar_t aStack_9c[32];
        aStack_9c[ARRAY_LEN(aStack_9c) - 1] = L'\0';
        strncpy((char *) aStack_9c, "Effect/demo_", sizeof(aStack_9c) - 1);

        size_t len1 = strlen((char *) aStack_9c);
        strncpy((char *) aStack_9c + len1, unk_00, sizeof(aStack_9c) - 1 - len1);

        const char *ext = ".spa";
        size_t len2     = strlen((char *) aStack_9c);
        strncpy((char *) aStack_9c + len2, ext, sizeof(aStack_9c) - 1 - len2);

        UnkFileSystem2 local_b4(NULL, 0x00);
        pUnkFs2 = &local_b4;
        pUnkFs2->vfunc_0C();
        pUnkFs2->mUnk_04 = (char *) aStack_9c;

        const char *local_b0 = (char *) aStack_9c;

        if (func_02012fa8(local_b0)) {
            this->mUnk_18[0] = new(HeapIndex_5) UnkStruct_027e0cec_18(pUnkFs2, true, 0);
        }
    } else {
        const char *iVar4;

        for (int i = 0; i < ARRAY_LEN(this->mUnk_18); i++) {
            switch (i) {
                case 0: {
                    UnkFileSystem2 local_cc(NULL, 0x00);
                    pUnkFs2          = &local_cc;
                    const char *path = "Effect/land.spa";
                    pUnkFs2->vfunc_0C();
                    pUnkFs2->mUnk_04 = path;
                    this->mUnk_18[i] = new(HeapIndex_5) UnkStruct_027e0cec_18(pUnkFs2, true, i);
                    break;
                }
                case 1:
                    iVar4 = this->func_ov001_020bef98();

                    if (iVar4 != NULL) {
                        UnkFileSystem2 local_e4(NULL, 0x00);
                        pUnkFs2 = &local_e4;
                        pUnkFs2->vfunc_0C();
                        pUnkFs2->mUnk_04 = iVar4;
                        this->mUnk_18[i] = new(HeapIndex_5) UnkStruct_027e0cec_18(pUnkFs2, true, i);
                    }
                    break;
                default:
                    break;
            }
        }
    }

    data_0204999c.func_ov001_020ba640();
}

const char *UnkStruct_027e0cec::func_ov001_020bef98() {
    SceneIndex sceneIndex = data_027e09a4->CurrentSceneIndex();
    if (sceneIndex == SceneIndex_b_last22) {
        return data_ov001_020c2f28[EffectPathIndex_BossLast2];
    }

    if (gOverlayManager.IsField()) {
        return data_ov001_020c2f28[EffectPathIndex_Field];
    }

    switch (gOverlayManager.mLoadedOverlays[OverlaySlot_8]) {
        case OverlayIndex_BossForest:
            return data_ov001_020c2f28[EffectPathIndex_BossForest];
        case OverlayIndex_BossSnow:
            return data_ov001_020c2f28[EffectPathIndex_BossSnow];
        case OverlayIndex_BossWater:
            return data_ov001_020c2f28[EffectPathIndex_BossWater];
        case OverlayIndex_BossFlame:
            if (sceneIndex == SceneIndex_d_flame || sceneIndex == SceneIndex_tekiya03) {
                return data_ov001_020c2f28[EffectPathIndex_Dungeon2];
            }

            return data_ov001_020c2f28[EffectPathIndex_BossFlame];
        case OverlayIndex_BossDesert:
            return data_ov001_020c2f28[EffectPathIndex_BossDesert];
        case OverlayIndex_BossDeago:
            return data_ov001_020c2f28[EffectPathIndex_BossDeago];
        case OverlayIndex_BossLast1:
            return data_ov001_020c2f28[EffectPathIndex_BossLast1];
        case OverlayIndex_BossLast2:
            return data_ov001_020c2f28[EffectPathIndex_BossLast2];
        default:
            break;
    }

    return data_ov001_020c2f28[2];
}

UnkStruct_027e0cec::~UnkStruct_027e0cec() {}

void UnkStruct_027e0cec::func_ov001_020bf028() {
    for (int i = 0; i < ARRAY_LEN(this->mUnk_18); i++) {
        if (this->mUnk_18[i] != NULL) {
            this->mUnk_18[i]->func_ov000_020a0460();
        }
    }
}

ARM_BEGIN

UnkStruct_027e0cec_00::UnkStruct_027e0cec_00(void *param1) :
    mUnk_10(param1),
    mUnk_14(0) {}

DECL_INSTANCE(UnkStruct_027e0cec, data_027e0cec);

ARM_END
