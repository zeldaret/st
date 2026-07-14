#include "Unknown/UnkStruct_027e09a0.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_027e0d08.hpp"
#include "Unknown/UnkStruct_ov000_020b50c0.hpp"
#include "Unknown/UnkStruct_ov000_020b51b8.hpp"
#include "Unknown/UnkStruct_ov000_020b52e8.hpp"
#include "versions.h"

extern "C" BOOL NNS_SndArcLoadBank(unk32 param1, unk32 param2);
extern "C" void func_0200240c(unk32);
extern "C" unk32 func_ov026_0212e54c();

void UnkStruct_ov000_020b50c0::func_ov001_020bd854(void) {
    data_027e099c->func_ov001_020bde6c();
    data_ov000_020b51b8.func_ov000_0206bbfc(0x01);
    this->func_ov001_020bd934(false);
}

void UnkStruct_ov000_020b50c0::func_ov001_020bd87c(void) {
#if IS_JP
    data_ov000_020b51b8.func_ov000_0206c4ec(0x00);
    data_027e099c->func_ov001_020bde7c();
    data_027e099c->func_ov000_0206f61c(0x00);
    this->func_ov000_0206a52c(0x01);
#else
    data_ov000_020b51b8.func_ov000_0206c4ec(0x00);
    data_027e099c->func_ov001_020bde7c();
    this->func_ov000_0206a52c(0x01);
    this->func_ov001_020bd934(true);
#endif
}

void UnkStruct_ov000_020b50c0::func_ov001_020bd8ac(void) {
    unk32 value = data_0204999c.mUnk_24[0];
    this->func_ov000_0206a52c(0x02);
    NNS_SndArcLoadBank(0x89, value);
    this->mUnk_A8[2] = -1;
    this->func_ov001_020bd934(true);
}

void UnkStruct_ov000_020b50c0::func_ov001_020bd8dc(void) {
    this->func_ov001_020bd934(0x00);
}

void UnkStruct_ov000_020b50c0::func_ov001_020bd8e8(void) {
    data_ov000_020b51b8.func_ov000_0206bbfc(0x01);
    this->func_ov000_0206a260(0x0A, 0x02, -1);
    this->func_ov001_020bd934(false);
}

void UnkStruct_ov000_020b50c0::func_ov001_020bd910(void) {
#if IS_JP
    data_ov000_020b51b8.func_ov000_0206c4ec(0x00);
    data_027e099c->func_ov001_020bde7c();
    data_027e099c->func_ov000_0206f61c(0x00);
    this->func_ov000_0206a52c(0x01);
#else
    data_ov000_020b51b8.func_ov000_0206c4ec(0x00);
    this->func_ov000_0206a52c(0x01);
    this->func_ov001_020bd934(true);
#endif
}

void UnkStruct_ov000_020b50c0::func_ov001_020bd934(bool param1) {
    if (param1) {
        this->func_ov000_0206a704(0x00);
        func_0200240c(0);
        return;
    }

    if (this->mUnk_94 == 2) {
        this->func_ov000_0206a704(0x02);
        return;
    }

    this->func_ov000_0206a740();

    if (this->mUnk_94 == 3) {
        func_0200240c(1);
    }
}

void UnkStruct_ov000_020b50c0::func_ov001_020bd970(const EntranceInfo *param1) {
    SceneIndex scene = param1->sceneIndex;
    unk32 iVar7      = data_027e09a0->GetCourseEntry(scene)->unk_10;
    unk32 uVar6      = 0;
    unk32 uVar5      = 0;
    unk32 local_18   = -1;
    unk32 local_1c   = -1;
    u8 csIndex       = param1->csIndex;

    if (param1->isCS == true && csIndex != CutsceneIndex_Max) {
        switch (csIndex) {
            case CutsceneIndex_TitleScreen:
                uVar6 = 0x4A;
                break;
            case CutsceneIndex_Intro:
                uVar6 = 0x4C;
                break;
            case CutsceneIndex_EngineerCertificate:
                uVar6 = 0x4D;
                break;
            case CutsceneIndex_SpiritTowerSplit_01:
                uVar6 = 0x4E;
                break;
            case CutsceneIndex_SpiritTowerSplit_02:
                uVar6 = 0x4F;
                break;
            case CutsceneIndex_SpiritTowerSplit_03:
                uVar6 = 0x50;
                break;
            case CutsceneIndex_SpiritTowerSplit_04:
                uVar6 = 0x51;
                break;
            case CutsceneIndex_SpiritTowerSplit_05:
                uVar6 = 0x52;
                break;
            case CutsceneIndex_WalkingToSpiritTower:
                uVar6 = 0x53;
                break;
            case CutsceneIndex_FirstAnjeanMeeting:
                uVar6 = 0x54;
                break;
            case CutsceneIndex_FirstPhantomPossession:
                uVar6 = 0x55;
                break;
            case CutsceneIndex_ForestTempleCompleted_01:
                uVar6 = 0x56;
                break;
            case CutsceneIndex_ForestTempleCompleted_02:
                uVar6 = 0x57;
                break;
            case CutsceneIndex_ForestTempleCompleted_03:
                uVar6 = 0x58;
                break;
            case CutsceneIndex_BlizzardTempleCompleted_01:
                uVar6 = 0x59;
                break;
            case CutsceneIndex_BlizzardTempleCompleted_02:
                uVar6 = 0x5A;
                break;
            case CutsceneIndex_BlizzardTempleCompleted_03:
                uVar6 = 0x5B;
                break;
            case CutsceneIndex_MarineTempleCompleted_01:
                uVar6 = 0x5C;
                break;
            case CutsceneIndex_MarineTempleCompleted_02:
                uVar6 = 0x5D;
                break;
            case CutsceneIndex_MarineTempleCompleted_03:
                uVar6 = 0x5E;
                break;
            case CutsceneIndex_StavenInTOSAfterFireGlyph_01:
                uVar6 = 0x5F;
                break;
            case CutsceneIndex_StavenInTOSAfterFireGlyph_02:
                uVar6 = 0x60;
                break;
            case CutsceneIndex_MountainTempleCompleted_01:
                uVar6 = 0x61;
                break;
            case CutsceneIndex_MountainTempleCompleted_02:
                uVar6 = 0x62;
                break;
            case CutsceneIndex_MountainTempleCompleted_03:
                uVar6 = 0x63;
                break;
            case CutsceneIndex_StavenPreBattle:
                uVar6 = 0x64;
                break;
            case CutsceneIndex_StavenPostBattle:
                uVar6 = 0x65;
                break;
            case CutsceneIndex_MalladusOnTOSSummit_01:
                uVar6 = 0x66;
                break;
            case CutsceneIndex_MalladusOnTOSSummit_02:
                uVar6 = 0x67;
                break;
            case CutsceneIndex_PassengerCarAnjeanBowOfLight:
                uVar6 = 0x68;
                break;
            case CutsceneIndex_LokomoSword:
                uVar6 = 0x69;
                break;
            case CutsceneIndex_PassengerCarBeforeMalladusFight:
                uVar6 = 0x6A;
                break;
            case CutsceneIndex_BoardingDemonTrain:
                uVar6 = 0x6B;
                break;
            case CutsceneIndex_BeforeMalladusBeast_01:
                uVar6 = 0x6C;
                break;
            case CutsceneIndex_BeforeMalladusBeast_02:
                uVar6 = 0x6D;
                break;
            case CutsceneIndex_BeforeMalladusBeast_03:
                uVar6 = 0x6E;
                break;
            case CutsceneIndex_PreCredits:
                uVar6 = 0x6F;
                break;
            case CutsceneIndex_Credits_01:
                uVar6 = 0x71;
                break;
            case CutsceneIndex_Credits_02:
                uVar6 = 0x72;
                break;
            case CutsceneIndex_Credits_03:
                uVar6 = 0x73;
                break;
            case CutsceneIndex_SpiritPipes:
                uVar6 = 0x74;
                break;
            case CutsceneIndex_ForestTracksRestoredFromGlyph:
                uVar6 = 0x75;
                break;
            case CutsceneIndex_MalladusBeastDestroyed:
                uVar6 = 0x76;
            default:
                break;
        }
    } else {
        if (iVar7 == 2 || iVar7 == 4) {
            this->mUnk_E4 = func_ov026_0212e54c();
        }

        uVar6 = 0;
        switch (iVar7) {
            case 2:
            case 4:
                uVar6 = 0x02;
                break;
            case 0:
            case 6:
                uVar6 = 0x03;
                break;
            case 1:
            case 3:
                uVar6 = 0x04;
                break;
            case 5:
                uVar6 = 0x0A;
                break;
            default:
                break;
        }

        uVar5     = 0;
        u8 unk_1F = data_027e09a0->GetCourseEntry(scene)->unk_1F;
        switch (unk_1F) {
            case 0x00:
                uVar5 = 0x0B;
                break;
            case 0x01:
                uVar5 = 0x0C;
                break;
            case 0x02:
                uVar5 = 0x0D;
                break;
            case 0x03:
                uVar5    = 0x0E;
                local_18 = 0x07;
                break;
            case 0x04:
                if (data_027e09b8->HasAdventureFlag(AdventureFlag_ObtainedSnowSource)) {
                    uVar5    = 0x0F;
                    local_18 = 0x07;
                } else {
                    uVar5    = 0x10;
                    uVar6    = 0x08;
                    local_18 = 0x02;
                }
                break;
            case 0x05:
                uVar5    = 0x11;
                local_18 = 0x07;
                break;
            case 0x06:
                if (data_027e09b8->HasAdventureFlag(AdventureFlag_ObtainedFireSource)) {
                    uVar5    = 0x12;
                    local_18 = 0x07;
                } else {
                    uVar5    = 0x13;
                    uVar6    = 0x08;
                    local_18 = 0x02;
                }
                break;
            case 0x07:
                uVar5 = 0x16;
                break;
            case 0x08:
                uVar5 = 0x17;
                break;
            case 0x09: {
                int index = param1->roomIndex;

                if (index <= 2) {
                    uVar5 = 0x1D;
                } else if (index <= 6) {
                    uVar5 = 0x1E;
                } else if (index <= 11) {
                    uVar5 = 0x1F;
                } else if (index <= 16) {
                    uVar5 = 0x20;
                } else if (index <= 20) {
                    uVar5 = 0x21;
                } else if (index == 30) {
                    uVar5 = 0x22;
                } else {
                    switch (index) {
                        case 40:
                            uVar5 = 0x1D;
                            break;
                        case 41:
                            uVar5 = 0x1E;
                            break;
                        case 21:
                        case 22:
                        case 42:
                            uVar5 = 0x1F;
                            break;
                        case 43:
                            uVar5 = 0x20;
                            break;
                        case 23:
                        case 24:
                            uVar5 = 0x21;
                            break;
                        default:
                            uVar5 = 0x22;
                            break;
                    }
                }

                local_1c = 0x1C;
                break;
            }
            case 0x0A:
                uVar5 = 0x24;
                break;
            case 0x0B:
                uVar5 = 0x27;
                break;
            case 0x0C:
                uVar5 = 0x28;
                break;
            case 0x0D:
                uVar5 = 0x29;
                break;
            case 0x0E:
                uVar5 = 0x2A;
                break;
            case 0x0F:
                uVar5 = 0x2B;
                break;
            case 0x10:
                uVar5 = 0x2D;
                break;
            case 0x11:
                uVar5 = 0x2E;
                break;
            case 0x12:
                uVar5 = 0x2F;
                break;
            case 0x13:
                uVar5 = 0x30;
                break;
            case 0x14:
                uVar5 = 0x32;
                break;
            case 0x15:
                uVar5 = 0x32;
                break;
            case 0x16:
                if (data_027e09b8->HasAdventureFlag(AdventureFlag_WatchedSpiritTowerSplitCS) &&
                    !data_027e09b8->HasAdventureFlag(AdventureFlag_ObtainedSpiritTrain)) {
                    local_18 = 0x09;
                }

                uVar5 = 0x37;
                break;
            case 0x17:
                if (data_027e09b8->HasAdventureFlag(AdventureFlag_WatchedSpiritTowerSplitCS) &&
                    !data_027e09b8->HasAdventureFlag(AdventureFlag_ObtainedSpiritTrain)) {
                    local_18 = 0x09;
                }

                uVar5 = 0x38;
                break;
            case 0x18:
                uVar5 = 0x39;
                break;
            case 0x19:
                uVar5 = 0x3A;
                break;
            case 0x1A:
                uVar5 = 0x3B;
                break;
            case 0x1B:
                uVar5 = 0x3C;
                break;
            case 0x1C:
                uVar5 = 0x3E;
                break;
            case 0x1D:
                uVar5 = 0x3F;
                break;
            case 0x1E:
                uVar5 = 0x15;
                break;
            case 0x1F:
                uVar5 = 0x18;
                break;
            case 0x20:
                uVar5 = 0x19;
                break;
            case 0x21:
                this->func_ov000_0206a52c(0x01);
                uVar5 = 0x1A;
                break;
            case 0x22:
                if (this->mUnk_A8[3] != 0x1B) {
                    this->func_ov000_0206a52c(0x01);
                }

                uVar5 = 0x1B;
                break;
            case 0x23:
                uVar5 = 0x25;
                break;
            case 0x24:
                uVar5 = 0x2C;
                break;
            case 0x25:
                uVar5 = 0x31;
                break;
            case 0x26:
                uVar5 = 0x33;
                break;
            case 0x27:
                uVar5 = 0x34;
                break;
            case 0x28:
                uVar5 = 0x3D;
                break;
            case 0x29:
                uVar5 = 0x26;
                break;
            case 0x2A:
                uVar5 = 0x40;
                break;
            case 0x2B:
                uVar5 = 0x41;
                break;
            case 0x2C:
                uVar5 = 0x42;
                break;
            case 0x2D:
                uVar5 = 0x43;
                break;
            case 0x2E:
                uVar5 = 0x44;
                break;
            case 0x2F:
                uVar5 = 0x45;
                break;
            case 0x30:
                uVar5 = 0x46;
                break;
            case 0x31:
                uVar5 = 0x47;
                break;
            case 0x32:
                uVar5 = 0x48;
                break;
            default:
                break;
        }

        switch (unk_1F) {
            case 0x10:
            case 0x11:
            case 0x12:
            case 0x13:
            case 0x14:
            case 0x15:
            case 0x25:
            case 0x26:
            case 0x27:
                uVar6 = 0x05;
                break;
            default:
                break;
        }

        if (scene == SceneIndex_b_last2) {
            local_1c = 0x35;
        } else if (scene == SceneIndex_b_last22) {
            uVar6 = 0x06;
            uVar5 = 0x36;
        } else if (scene == SceneIndex_b_last23) {
            uVar6 = 0x06;
        }

        if (scene == SceneIndex_f_passenger) {
            uVar6 = 0x68;
            uVar5 = 0x49;
        }
    }

    this->func_ov000_0206a260(uVar6, 0x02, local_18);
    this->func_ov000_0206a260(uVar5, 0x03, local_1c);
    data_027e099c->func_ov001_020bde90(param1);
    data_ov000_020b51b8.func_ov000_0206bbfc(0x00);
    data_ov000_020b5214.func_ov000_0206d43c();
    data_ov000_020b52e8.func_ov000_0206f994();

    if (param1->isCS == true && csIndex != CutsceneIndex_Max) {
        data_ov000_020b5214.func_ov000_0206d960();
    } else {
        data_ov000_020b5214.func_ov000_0206d984();
    }

    this->func_ov000_02069c78();
}

void UnkStruct_ov000_020b50c0::func_ov001_020bde04(const EntranceInfo *param1) {
    unk32 unk_10 = data_027e09a0->GetCourseEntry(param1->sceneIndex)->unk_10;
    data_027e099c->func_ov001_020bdfa0(param1);

    if (unk_10 == 2 || unk_10 == 4) {
        this->mUnk_E4 = 0;
    }

    data_ov000_020b5214.func_ov000_0206d984();
    data_ov000_020b52e8.mUnk_04 = 0;
}

void UnkStruct_ov000_020b50c0::func_ov001_020bde4c(const EntranceInfo *param1) {
    data_027e099c->func_ov001_020bdfb8(param1);
}

void UnkStruct_ov000_020b50c0::func_ov001_020bde5c(void) {
    data_027e099c->func_ov001_020be030();
}

void UnkStruct_ov018_020c5ac0::func_ov001_020bde6c() {
    UnkStruct_027e0d08::Create();
    this->mUnk_01 = true;
}

void UnkStruct_ov018_020c5ac0::func_ov001_020bde7c() {
    if (this->mUnk_01) {
        UnkStruct_027e0d08::Destroy();
        this->mUnk_01 = false;
    }
}

void UnkStruct_ov018_020c5ac0::func_ov001_020bde90(const EntranceInfo *param1) {
    s32 scene    = param1->sceneIndex;
    unk32 unk_10 = data_027e09a0->GetCourseEntry(scene)->unk_10;
    unk32 var_r4 = 0;
    unk32 sp8    = 0x00;
    bool sp4     = true;
    u8 csIndex   = param1->csIndex;

    if (param1->isCS == true && csIndex != CutsceneIndex_Max) {
        this->func_ov000_0206f61c(0x00);

        switch (csIndex) {
            case CutsceneIndex_FirstPhantomPossession:
                var_r4 = 0x00;
                break;

            case CutsceneIndex_FirstAnjeanMeeting:
            case CutsceneIndex_StavenInTOSAfterFireGlyph_01:
            case CutsceneIndex_StavenInTOSAfterFireGlyph_02:
            case CutsceneIndex_MountainTempleCompleted_01:
            case CutsceneIndex_StavenPreBattle:
            case CutsceneIndex_StavenPostBattle:
                var_r4 = 0x02;
                break;

            case CutsceneIndex_ForestTempleCompleted_02:
            case CutsceneIndex_ForestTempleCompleted_03:
            case CutsceneIndex_BlizzardTempleCompleted_02:
            case CutsceneIndex_BlizzardTempleCompleted_03:
            case CutsceneIndex_MarineTempleCompleted_02:
            case CutsceneIndex_MarineTempleCompleted_03:
            case CutsceneIndex_MountainTempleCompleted_02:
            case CutsceneIndex_MountainTempleCompleted_03:
                var_r4 = 0x01;
                break;

            case CutsceneIndex_BeforeMalladusBeast_03:
                sp4 = false;
                break;

            default:
                break;
        }
    } else {
        if (unk_10 == 2 || unk_10 == 4) {
            var_r4 = 0x01;
        }

        switch (scene) {
            case SceneIndex_t_forest:
                var_r4 = 0x00;
                break;
            case SceneIndex_t_smarine:
            case SceneIndex_t_smount:
            case SceneIndex_t_smount2:
            case SceneIndex_t_smount3:
            case SceneIndex_e3_smount:
                this->func_ov000_0206f61c(0x00);
                var_r4 = 0x02;
                break;
            case SceneIndex_t_dark:
            case SceneIndex_t_eviltrain:
            case SceneIndex_t_eviltrain2:
            case SceneIndex_t_eviltrain3:
                this->func_ov000_0206f61c(0x00);
                var_r4 = 0x02;
                sp8    = 0x01;
                break;
            default:
                break;
        }
    }

    if (this->mUnk_01 && sp4) {
        data_027e0d08->func_ov024_020d5dd4(sp8);
    }

    this->mUnk_02 = 0x01;
    this->func_ov000_0206f61c(var_r4);
}

void UnkStruct_ov018_020c5ac0::func_ov001_020bdfa0(const EntranceInfo *param1) {
    u8 csIndex = param1->csIndex;

    if (param1->isCS == true && csIndex != CutsceneIndex_Max) {
        this->func_ov000_0206f61c(0x00);
    }
}

void UnkStruct_ov018_020c5ac0::func_ov001_020bdfb8(const EntranceInfo *param1) {
    if (data_027e0cd8->mUnk_0C != NULL && GET_FLAG2(data_027e0cd8->mUnk_0C->mUnk_128, UnkFlags2_7)) {
        if (param1->isCS == true && param1->csIndex == CutsceneIndex_FirstPhantomPossession) {
            this->func_ov000_0206f61c(0x00);
        } else {
            this->func_ov000_0206f61c(0x02);
        }
    } else if (this->mUnk_02 == 0) {
        switch (param1->sceneIndex) {
            case SceneIndex_t_smarine:
            case SceneIndex_t_smount:
            case SceneIndex_t_smount2:
            case SceneIndex_t_smount3:
            case SceneIndex_t_dark:
            case SceneIndex_t_eviltrain:
            case SceneIndex_t_eviltrain2:
            case SceneIndex_t_eviltrain3:
            case SceneIndex_e3_smount:
                this->func_ov000_0206f61c(0x02);
                break;
            default:
                this->func_ov000_0206f61c(0x00);
                break;
        }
    }

    this->mUnk_02 = 0;
}

void UnkStruct_ov018_020c5ac0::func_ov001_020be030() {}

void UnkStruct_027e0d08::Destroy() {
    if (data_027e0d08 != NULL) {
        delete data_027e0d08;
    }
}
