#include "Actor/ActorManager.hpp"
#include "System/OverlayManager.hpp"
#include "Unknown/Common.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "Unknown/UnkStruct_ov024_020d8660.hpp"

#include <nitro/mi.h>
#include <string.h>

extern "C" bool func_ov000_0208e874(const u8 *, int, int, int);
extern "C" const char *func_ov000_0208e830(int);

extern unk32 data_ov000_020b3000;

UnkStruct_027e0ce0_1C::UnkStruct_027e0ce0_1C() {
    this->mUnk_D4 = NULL;
    this->mUnk_D8 = NULL;

    MI_CpuFill32(0, this->mUnk_08, sizeof(this->mUnk_08));
    MI_CpuFill32(0, this->mUnk_5C, sizeof(this->mUnk_5C));
    MI_CpuFill32(0, this->mUnk_C8, sizeof(this->mUnk_C8));
}

UnkStruct_027e0ce0_1C::~UnkStruct_027e0ce0_1C() {}

// https://decomp.me/scratch/3dDWf
void UnkStruct_027e0ce0_1C::func_ov001_020bccec() {
    if (data_027e09a4->IsTrain()) {
        return;
    }

    bool isSceneBattle = data_027e09a4->IsSceneModeBattle();
    bool isCutscene    = data_027e09a4->IsCutscene();

    wchar_t path[32];
    path[0]                    = L'\0';
    path[sizeof(path) / 2 - 1] = L'\0';

    for (unsigned long var_r5 = 0; var_r5 < PlayerCharacter_Max; var_r5++) {
        for (unsigned long var_r4 = 0; var_r4 < ARRAY_LEN(this->mUnk_08[var_r5]); var_r4++) {
            const UnkStruct_ov000_020ab4dc *ptr = &data_ov000_020ab4dc[var_r5];

            if (func_ov000_0208e874(&ptr->mUnk_86[var_r4], var_r5, var_r4, 1)) {
                this->mUnk_08[var_r5][var_r4] = new(HeapIndex_1) UnkStruct_027e0ce0_1C_08(var_r5, var_r4, 0);

                switch (var_r4) {
                    case 3:
                        this->mUnk_D4 = new(HeapIndex_1) UnkStruct_027e0ce0_1C_D4();
                        this->mUnk_08[var_r5][var_r4]->func_ov000_020588f0(this->mUnk_D4, 0x6AB0, 0,
                                                                           (void *) ((u32) this->mUnk_D4 + 0x6AB0));
                        break;
                    case 4:
                        this->mUnk_D8 = new(HeapIndex_1) UnkStruct_027e0ce0_1C_D8();
                        this->mUnk_08[var_r5][var_r4]->func_ov000_020588f0(this->mUnk_D8, 0x6AB0, 0,
                                                                           (void *) ((u32) this->mUnk_D8 + 0x6AB0));
                        break;
                    default:
                        this->mUnk_08[var_r5][var_r4]->func_ov000_020586b4(NULL, 0, 0, NULL);
                        break;
                }
            }
        }

        if (isSceneBattle || isCutscene) {
            continue;
        }

        for (unsigned long var_r7 = 0; var_r7 < ARRAY_LEN(this->mUnk_5C[var_r5]); var_r7++) {
            int value = var_r7 + 7;
            bool canLoadAnimation;

            if (var_r5 == 0) {
                switch (value) {
                    case 7:
                        if (data_027e09a4->GetCurrentCourseEntry()->unk_1B & 4) {
                            canLoadAnimation = true;
                        } else {
                            canLoadAnimation = false;
                        }
                        break;
                    case 9:
                        if (gOverlayManager.IsPlayerSub()) {
                            canLoadAnimation = true;
                        } else {
                            canLoadAnimation = false;
                        }
                        break;
                    case 10:
                        if (gOverlayManager.IsPlayerPhantom()) {
                            canLoadAnimation = true;
                        } else {
                            canLoadAnimation = false;
                        }
                        break;
                    case 15:
                        if (data_027e09a4->CurrentSceneIndex() == SceneIndex_b_last23) {
                            canLoadAnimation = true;
                        } else {
                            canLoadAnimation = false;
                        }
                        break;
                    default:
                        canLoadAnimation = false;
                        break;
                }
            } else if (var_r5 == 1) {
                if (value == 12 && gOverlayManager.IsBossDeago()) {
                    canLoadAnimation = true;
                } else if (value == 13 && data_027e09a4->CurrentSceneIndex() == 0x24) {
                    canLoadAnimation = true;
                }
            } else if (var_r5 == 2) {
                if (value == 11 && data_027e09a4->CurrentSceneIndex() == 0x28) {
                    canLoadAnimation = true;
                } else if (value == 14 && data_027e09a4->CurrentSceneIndex() == 0x25) {
                    canLoadAnimation = true;
                } else if (value == 15 && data_027e09a4->CurrentSceneIndex() == 0x27) {
                    canLoadAnimation = true;
                }
            } else {
                canLoadAnimation = false;
            }

            if (canLoadAnimation) {
                const UnkStruct_ov000_020ab4dc *ptr = &data_ov000_020ab4dc[var_r5];
                strncpy((char *) path, ptr->mpDirectory, sizeof(path) - 1);

                const char *anm = "/anm/";
                int len         = strlen((char *) path);
                strncpy((char *) path + len, anm, sizeof(path) - 1 - len);

                const char *string = func_ov000_0208e830(value);
                len                = strlen((char *) path);
                strncpy((char *) path + len, string, sizeof(path) - 1 - len);

                const char *ext = ".nsbca";
                len             = strlen((char *) path);
                strncpy((char *) path + len, ext, sizeof(path) - 1 - len);

                UnkFileSystem5 **target       = &this->mUnk_5C[var_r5][var_r7];
                this->mUnk_5C[var_r5][var_r7] = new(HeapIndex_1) UnkFileSystem5((char *) path, 0xA1, HeapIndex_1, 0);
                this->mUnk_5C[var_r5][var_r7]->vfunc_08(0x10);
            }
        }

        bool canCreateC8;

        switch (var_r5) {
            case 0:
                canCreateC8 = true;
                break;
            case 1:
                if (gOverlayManager.IsPlayerPhantom()) {
                    canCreateC8 = true;
                } else {
                    canCreateC8 = false;
                }

                break;
            case 2:
                canCreateC8 = false;
                break;
            default:
                canCreateC8 = false;
                break;
        }

        if (canCreateC8) {
            const UnkStruct_ov000_020ab4dc *ptr;
            ptr                   = &data_ov000_020ab4dc[var_r5];
            this->mUnk_C8[var_r5] = new(HeapIndex_1) UnkStruct_027e0ce0_1C_C8(var_r5, ptr->mUnk_98);
        }
    }
}

void UnkStruct_027e0ce0_1C::func_ov001_020bcfec() {
    if (data_027e09a4->IsTrain()) {
        return;
    }

    for (unsigned long i = 0; i < PlayerCharacter_Max; i++) {
        DELETE(this->mUnk_C8[i]);

        for (unsigned long j = 0; j < ARRAY_LEN(this->mUnk_5C[i]); j++) {
            DELETE(this->mUnk_5C[i][j]);
        }

        for (unsigned long j = 0; j < ARRAY_LEN(this->mUnk_08[i]); j++) {
            DELETE(this->mUnk_08[i][j]);
        }
    }

    DELETE(this->mUnk_D8);
    DELETE(this->mUnk_D4);
}

void UnkStruct_027e0ce0_1C::func_ov001_020bd0a4(bool param1) {
    if (data_027e09a4->IsTrain()) {
        return;
    }

    if (param1) {
        for (unsigned long i = 0; i < PlayerCharacter_Max; i++) {
            for (unsigned long j = 0; j < ARRAY_LEN(this->mUnk_08[i]); j++) {
                if (this->mUnk_08[i][j] != NULL) {
                    continue;
                }

                if (func_ov000_0208e874(&data_ov000_020ab4dc[i].mUnk_86[j], i, j, 0)) {
                    this->mUnk_08[i][j] = new(HeapIndex_1) UnkStruct_027e0ce0_1C_08(i, j, 0);
                    this->mUnk_08[i][j]->func_ov000_020586b4(0, 0, 0, 0);

                    this->mUnk_00[i].mUnk_00 |= (1 << j);
                }
            }
        }
    }

    if (gOverlayManager.IsMapLava() || gOverlayManager.IsDungeonDesert()) {
        wchar_t path[32];
        path[sizeof(path) / 2 - 1] = L'\0';

        strncpy((char *) path, data_ov000_020ab4dc[0].mpDirectory, sizeof(path) - 1);

        const char *anm = "/anm/";
        int len         = strlen((char *) path);
        strncpy((char *) path + len, anm, sizeof(path) - 1 - len);

        const char *string = func_ov000_0208e830(8);
        len                = strlen((char *) path);
        strncpy((char *) path + len, string, sizeof(path) - 1 - len);

        const char *ext = ".nsbca";
        len             = strlen((char *) path);
        strncpy((char *) path + len, ext, sizeof(path) - 1 - len);

        UnkFileSystem5 **target = &this->mUnk_5C[PlayerCharacter_Link][1];
        (*target)               = new(HeapIndex_1) UnkFileSystem5((char *) path, 0xA1, HeapIndex_1, 0);
        (*target)->vfunc_08(0x10);
    }
}

void UnkStruct_027e0ce0_1C::func_ov001_020bd1ec() {
    if (data_027e09a4->IsTrain()) {
        return;
    }

    UnkFileSystem5 **target = &this->mUnk_5C[PlayerCharacter_Link][1];
    if (*target != NULL) {
        DELETE(*target);
    }

    for (unsigned long i = 0; i < PlayerCharacter_Max; i++) {
        for (unsigned long j = 0; j < ARRAY_LEN(this->mUnk_08[i]); j++) {
            if (*(const u16 *) &this->mUnk_00[i].mUnk_00 & (1 << j)) {
                this->mUnk_00[i].mUnk_00 &= ~(1 << j);

                DELETE(this->mUnk_08[i][j]);
            }
        }
    }
}

PlayerLinkActor_A0::~PlayerLinkActor_A0() {
    this->func_ov000_02091ea0();
    delete this->mUnk_80;
    delete this->mUnk_24;
    delete this->mUnk_20;
    delete this->mUnk_1C;
    delete this->mUnk_18;
    delete this->mUnk_14;
    delete this->mUnk_10;

    data_02049ba0.Unload(OverlaySlot_17);
}

void PlayerLinkActor_A0::func_ov001_020bd2e0() {
    STACK_PAD(0x04);

    if (this->mUnk_10 != NULL) {
        this->mUnk_10->mUnk_00 = 0;
    }

    if (this->mUnk_18 != NULL) {
        this->mUnk_18->func_ov082_02157bb8();
    }

    if (this->mUnk_20 != NULL) {
        this->mUnk_20->func_ov024_020d19d8();
    }

    if (gOverlayManager.IsMapC1()) {
        this->mUnk_28 = new(HeapIndex_1) PlayerLinkActor_A0_28(this->mUnk_10, this->mUnk_14);
    }

    this->mUnk_2C.func_ov000_0208e704();
    this->mUnk_34.func_ov000_02082748();
    this->mUnk_5C.~UnkStruct_PlayerGet_64();

    this->mUnk_74 = -1;
    this->mUnk_78 = false;
    this->mUnk_7E = true;
}

void PlayerLinkActor_A0::func_ov001_020bd358() {
    if (this->func_ov000_02091f08(0x15)) {
        this->func_ov000_020921e4(0x00);
    }

    if (this->mUnk_28 != NULL) {
        DELETE(this->mUnk_28);
    }
}

//! TODO: fake match
void PlayerLinkActor_A0::func_ov001_020bd388(bool param1, bool param2) {
    if (param1) {
        this->mUnk_7D = false;
    }

    if (this->mUnk_1C != NULL) {
        this->mUnk_1C->func_ov101_02183290();
    }

    if (param2) {
        return;
    }

    if (data_027e09a4->func_ov000_0207059c() && data_ov024_020d8660->mUnk_1C == 1) {
        this->mUnk_04->func_ov000_02088268();

        if (this->mUnk_68 != 0x67) {
            this->func_ov000_020921e4(0x67);
        }

        return;
    }

    if (data_027e09a4->func_ov000_0207059c() && data_ov024_020d8660->mUnk_1C == 4) {
        this->mUnk_04->func_ov000_02088268();

        if (this->mUnk_68 != 0x76) {
            this->func_ov000_020921e4(0x76);
        }

        return;
    }

    bool var_r1;
    if (this->mUnk_68 != 0x3F) {
        unk32 temp_r0 = data_027e09a4->func_ov000_02070554();

        if (data_ov000_020aa88c[temp_r0].mUnk_04) {
            if (temp_r0 == 0x33) {
                struct {
                    void *ptr;
                    unk32 actorId;
                } local_18;
                local_18.ptr     = &data_ov000_020b3000;
                local_18.actorId = ActorId_Beedle;

                Actor **pBeedle = gpActorManager->func_01fff350(&local_18, gpActorManager->mActorTable);

                if (0) {
                var_r1_true:
                    var_r1 = true;
                } else if (pBeedle == gpActorManager->mUnk_08) {
                    goto var_r1_false;
                } else {
                    goto var_r1_true;
                }
            } else if (data_027e09a4->CurrentSceneIndex() == SceneIndex_f_hyral &&
                       data_027e09a4->func_ov000_02070560()->roomIndex == 5 &&
                       !data_027e09b8->HasAdventureFlag(AdventureFlag_WatchedZeldasBedroomFirstCS)) {
                this->mUnk_7D = false;
                var_r1        = false;
            } else {
                var_r1 = true;
            }
        } else {
            goto var_r1_false;
        }
    } else {
    var_r1_false:
        var_r1 = false;
    }

    if (var_r1) {
        this->func_ov000_020921e4(0x3F);
    } else if (this->mUnk_68 != 0) {
        this->func_ov000_020921e4(0x00);
    }
}

UnkStruct_027e0ce0_40_Base_7C::UnkStruct_027e0ce0_40_Base_7C(unk32 param1) :
    mUnk_00(param1),
    mUnk_04(param1 == -1 ? new(HeapIndex_1) UnkStruct_027e0ce0_40_Base_7C_04() : NULL),
    mUnk_08(NULL, 0x8FE, 0x41),
    mUnk_14(0) {}

UnkStruct_027e0ce0_40_Base_7C::~UnkStruct_027e0ce0_40_Base_7C() {
    delete this->mUnk_04;
}
