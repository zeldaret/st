#include "Actor/ActorManager.hpp"
#include "MapObject/MapObjectManager.hpp"
#include "Physics/AABB.hpp"
#include "System/OverlayManager.hpp"
#include "Unknown/UnkStruct_027e0960.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "Unknown/UnkStruct_ov000_020b5d34.hpp"
#include "files.h"

extern AABB data_027e0c90;
extern int data_ov089_02171540;

extern "C" fx32 func_ov000_02080068(fx32 x);
extern "C" fx32 func_ov000_02080080(fx32 x);
extern "C" void func_ov089_02165b18(void *);
extern "C" fx32 func_ov000_020775d8(fx32);

extern "C" BOOL ZMB_020ba350(ZMBFileInfos *pFileInfos, u8 param2, UnkStruct_027e0cd8_0C_Base *pDst);
extern "C" void ZMB_020ba388(CustomVector<EntranceInfo> *pVector, size_t param2);
extern "C" void ZMB_020ba408(CustomVector<UnkStruct_027e0cd8_0C_Base_148_00_Base *> *pVector, size_t param2);

BOOL ZMB_ParseFile(ZMBFileInfos *pFileInfos, UnkStruct_027e0cd8_0C_Base *pDst, bool param3) {
    bool isVersion2;
    ZMBHeader *pHeader;
    ZMBSectionHeader *pSection;

    pHeader = (ZMBHeader *) pFileInfos->pFile;

    if (pHeader->type != FileType_ZMBv1 && pHeader->type == FileType_ZMBv2) {
        isVersion2 = true;
    } else {
        isVersion2 = false;
    }

    pSection = (ZMBSectionHeader *) ((u8 *) pHeader + sizeof(ZMBHeader));

    for (int i = 0; i < pHeader->nSections; i++, pSection = (ZMBSectionHeader *) ((u8 *) pSection + pSection->nSize)) {
        if (isVersion2 == true) {
            continue;
        }

        if (param3) {
            switch (pSection->type) {
                case ZMBSectionType_ROMB:
                    ZMB_ParseROMB(pFileInfos, (ZMBSectionROMB *) pSection, pDst);
                    break;
                case ZMBSectionType_ROOM:
                    ZMB_ParseROOM(pFileInfos, (ZMBSectionROOM *) pSection, pDst);
                    break;
                default:
                    break;
            }
        } else {
            switch (pSection->type) {
                case ZMBSectionType_LDLB:
                    ZMB_ParseLDLB(pFileInfos, (ZMBSectionLDLB *) pSection, pDst);
                    break;
                case ZMBSectionType_MapObjects:
                    ZMB_ParseMapObjList(pFileInfos, (ZMBSectionMapObjectList *) pSection, pDst);
                    break;
                case ZMBSectionType_ARAB:
                    ZMB_ParseARAB(pFileInfos, (ZMBSectionARAB *) pSection, pDst);
                    break;
                case ZMBSectionType_RALB:
                    ZMB_ParseRALB(pFileInfos, (ZMBSectionRALB *) pSection, pDst);
                    break;
                case ZMBSectionType_NPCA:
                    ZMB_ParseActorList(pFileInfos, (ZMBSectionActorList *) pSection, pDst);
                    break;
                case ZMBSectionType_PLYR:
                    ZMB_ParsePLYR(pFileInfos, (ZMBSectionPLYR *) pSection, pDst);
                    break;
                case ZMBSectionType_WARP:
                    ZMB_ParseWARP(pFileInfos, (ZMBSectionWARP *) pSection, pDst);
                    break;
                case ZMBSectionType_CAME:
                    ZMB_ParseCAME(pFileInfos, (ZMBSectionCAME *) pSection, pDst);
                    break;
                case ZMBSectionType_CMPT:
                    ZMB_ParseCMPT(pFileInfos, (ZMBSectionCMPT *) pSection, pDst);
                    break;
                default:
                    break;
            }
        }
    }

    return true;
}

BOOL ZMB_ParseROMB(ZMBFileInfos *pFileInfos, ZMBSectionROMB *pSection, UnkStruct_027e0cd8_0C_Base *pDst) {
    pDst->ZMB_ParseROMB(pSection);
    return true;
}

BOOL ZMB_ParseLDLB(ZMBFileInfos *pFileInfos, ZMBSectionLDLB *pSection, UnkStruct_027e0cd8_0C_Base *pDst) {
    pDst->mUnk_104 = UnkFlags1_None;
    bool isCs      = data_027e09a4->mUnk_00.isCS;

    for (u16 i = 0; i < pSection->header.nEntries; i++) {
        ZMBEntryLBLB *pEntry = &pSection->entries[i];

        if (!(pEntry->unk_01 != 0xFF && isCs != pEntry->unk_01) &&
            !(pEntry->unk_04 != 0 && !data_027e0cd8->func_ov000_02081e30(pEntry->unk_04, pEntry->unk_03))) {
            u8 unk_00 = pEntry->unk_00;

            if (pEntry->unk_02 != 0) {
                SET_FLAG2(pDst->mUnk_104, unk_00);
            } else {
                UNSET_FLAG2(pDst->mUnk_104, unk_00);
            }
        }
    }

    if (data_027e09a4->CurrentSceneIndex() - SceneIndex_t_area0 <= 1 && GET_FLAG2(pDst->mUnk_104, UnkFlags1_6)) {
        if (data_027e0cd8->func_ov001_020b80fc(data_027e09a4->CurrentSceneIndex())) {
            UNSET_FLAG2(pDst->mUnk_104, UnkFlags1_6);
            SET_FLAG2(pDst->mUnk_104, UnkFlags1_7);
        } else {
            SET_FLAG2(pDst->mUnk_104, UnkFlags1_6);
            UNSET_FLAG2(pDst->mUnk_104, UnkFlags1_7);
        }
    }

    for (int i = 0; i < UnkFlags1_Max; i++) {
        if (GET_FLAG2(pDst->mUnk_104, i)) {
            pDst->func_ov001_020b88c0(i);
        }
    }

    return true;
}

BOOL ZMB_ParseARAB(ZMBFileInfos *pFileInfos, ZMBSectionARAB *pSection, UnkStruct_027e0cd8_0C_Base *pDst) {
    size_t capacity = pDst->mUnk_148.capacity();

    if (pSection->header.nEntries > capacity) {
        ZMB_020ba408(&pDst->mUnk_148, pSection->header.nEntries);
    }

    for (u16 i = 0; i < pSection->header.nEntries; i++) {
        pDst->func_ov001_020b8b94(&pSection->entries[i]);
    }

    return true;
}

BOOL ZMB_ParseRALB(ZMBFileInfos *pFileInfos, ZMBSectionRALB *pSection, UnkStruct_027e0cd8_0C_Base *pDst) {
    u32 nEntries = pSection->header.nEntries;
    if (nEntries == 0) {
        return true;
    }

    data_027e0960->func_ov000_0205a1fc(nEntries);

    u8 *offset = (u8 *) pSection->entries;

    for (u8 i = 0; i < nEntries; i++) {
        ZMBEntryRALB *pEntry = (ZMBEntryRALB *) offset;
        u8 numPoints         = pEntry->numPoints;

        data_027e0960->func_ov000_0205a288(i, pEntry);

        offset += sizeof(ZMBEntryRALB);

        for (u8 j = 0; j < numPoints; j++) {
            ZMBRALBPoint *pPoint = (ZMBRALBPoint *) offset;

            pPoint->angle = UNK_FX_OPERATION_1(INT_TO_FX32(pPoint->angle));

            if (data_027e09a4->CurrentSceneIndex() != SceneIndex_b_flame &&
                data_027e09a4->CurrentSceneIndex() != SceneIndex_tekiya08) {
                fx32 y        = pPoint->pos.y;
                pPoint->pos.y = 0x7FFFEFFF;
                pPoint->pos.y = y + pDst->vfunc_28(&pPoint->pos, 0, 0);
            }

            data_027e0960->func_ov000_0205a2a4(i, pPoint);
            offset += pPoint->unk_12;
        }
    }

    data_027e0960->func_ov000_0205a2c8();
    data_027e0960->func_ov000_0205a1a4();
    return true;
}

BOOL ZMB_ParseWARP(ZMBFileInfos *pFileInfos, ZMBSectionWARP *pSection, UnkStruct_027e0cd8_0C_Base *pDst) {
    if (pSection->header.nEntries + 8 > pDst->mUnk_154.cap()) {
        ZMB_020ba388(&pDst->mUnk_154, pSection->header.nEntries + 8);
    }

    for (u16 i = 0; i < pSection->header.nEntries; i++) {
        ZMBEntryWARP *pEntry = &pSection->entries[i];

        if (ZMB_020ba350(pFileInfos, pEntry->unk_16, pDst)) {
            pDst->func_ov001_020b8c30(EntranceInfo(pEntry));
        }
    }

    return true;
}

// https://decomp.me/scratch/DThHL
BOOL ZMB_ParseMapObjList(ZMBFileInfos *pFileInfos, ZMBSectionMapObjectList *pSection, UnkStruct_027e0cd8_0C_Base *pDst) {
    for (u16 i = 0; i < pSection->header.nEntries; i++) {
        ZMBMapObjEntry *pEntry = &pSection->entries[i];

        struct {
            u16 angle;
            Vec2b pos;
        } allocData;

        allocData.pos.x = pEntry->pos.x;
        allocData.pos.y = pEntry->pos.y;

        MapObject_20 local_30;
        local_30.Init();

        for (int j = 0; j < ARRAY_LEN(pEntry->params); j++) {
            local_30.mParams[j] = pEntry->params[j];
        }

        for (int j = 0; j < ARRAY_LEN(pEntry->unk_10); j++) {
            local_30.mUnk_08[j] = (pEntry->unk_10[j] >> 12) & 0xF;
            local_30.mUnk_0A[j] = (pEntry->unk_10[j] & 0xFFF);
        }

        local_30.mUnk_10 = pEntry->unk_14;

        if (pEntry->unk_19 == 0) {
            local_30.mUnk_16 = false;
        } else {
            local_30.mUnk_16 = true;
        }

        local_30.mUnk_17 = pEntry->unk_18;

        MapObjectProfile *pProfile = data_ov000_020b5d34.GetProfileFromId(pEntry->id);

        if (pProfile == NULL) {
            continue;
        }

        switch (pProfile->func_ov000_0209c8e4(&local_30)) {
            case 0:
                local_30.mUnk_14 = pFileInfos->unk_08;
                pFileInfos->unk_08++;
                break;
            case 1:
                local_30.mUnk_14 = pFileInfos->unk_0A;
                pFileInfos->unk_0A++;
                break;
            case 2:
                local_30.mUnk_14 = pFileInfos->unk_0C;
                pFileInfos->unk_0C++;
                break;
            default:
                break;
        }

        if (ZMB_020ba350(pFileInfos, pEntry->unk_18, pDst)) {
            allocData.angle = UNK_FX_OPERATION_1(INT_TO_FX32(pEntry->angle));
            gpMapObjManager->AllocateMapObject(pEntry->id, allocData.pos, allocData.angle, (int) &local_30, 1);
        }
    }

    return true;
}

BOOL ZMB_ParseActorList(ZMBFileInfos *pFileInfos, ZMBSectionActorList *pSection, UnkStruct_027e0cd8_0C_Base *pDst) {
    s32 xMod16;
    s32 yMod16;
    Vec2us somePos;

    somePos = pDst->mUnk_09C;

    for (u16 i = 0; i < pSection->header.nEntries; i++) {
        ZMBActorEntry *pEntry = &pSection->entries[i];

        s32 posX = (u8) (pEntry->pos.x / 16);
        s32 posY = (u8) (pEntry->pos.y / 16);

        xMod16 = (u8) (pEntry->pos.x % 16);
        yMod16 = (u8) (pEntry->pos.y % 16);

        if (posX < somePos.x && posY < somePos.y) {
            bool iVar6 = data_027e0cd8->func_ov000_02081edc(pFileInfos->unk_0E);

            if (ZMB_020ba350(pFileInfos, pEntry->unk_1C, pDst)) {
                ActorProfile *pProfile = data_ov000_020b539c_eur.GetProfileFromId(pEntry->id);

                if (pProfile == NULL) {
                    continue;
                }

                if (!iVar6 || pProfile->mUnk_15) {
                    VecFx32 local_24;
                    local_24.x = func_ov000_02080068(posX);
                    local_24.x += MUL_FX32(INT_TO_FX32(xMod16), 256);

                    local_24.z = func_ov000_02080080(posY);
                    local_24.z += MUL_FX32(INT_TO_FX32(yMod16), 256);

                    local_24.y = 0x7FFFEFFF;
                    local_24.y = pDst->vfunc_28(&local_24, 0x01, 0x00);

                    u8 bStack_40[2];
                    bStack_40[0] = posX;
                    bStack_40[1] = posY;
                    unk32 value  = pDst->func_ov000_02080180(bStack_40);

                    if (value == 0x14 || value == 0x47) {
                        local_24.y = 0;
                    }

                    local_24.y += UNK_FX_OPERATION_2(INT_TO_FX32(pEntry->unk_08));

                    ActorParams actorParams;
                    actorParams.mUnk_28.Reset();
                    actorParams.func_ov000_020975f8();
                    actorParams.mInitialPos.x = local_24.x;
                    actorParams.mInitialPos.y = local_24.y;
                    actorParams.mInitialPos.z = local_24.z;

                    for (int j = 0; j < ARRAY_LEN(pEntry->params); j++) {
                        actorParams.mParams[j] = pEntry->params[j];
                    }

                    for (int j = 0; j < ARRAY_LEN(pEntry->unk_14); j++) {
                        actorParams.mUnk_18[j] = (pEntry->unk_14[j] >> 12) & 0x0F;
                        actorParams.mUnk_1A[j] = (pEntry->unk_14[j] & 0xFFF);
                    }

                    actorParams.mUnk_0E = pEntry->unk_09;
                    actorParams.mUnk_20 = pEntry->unk_18;

                    if (pEntry->unk_1D == 0) {
                        actorParams.mUnk_0F = false;
                    } else {
                        actorParams.mUnk_0F = true;
                    }

                    actorParams.mInitialAngle = UNK_FX_OPERATION_1(INT_TO_FX32(pEntry->angle));
                    actorParams.mUnk_24       = pFileInfos->unk_0E;
                    actorParams.mUnk_26_0     = pEntry->unk_1C;

                    if (!ActorManager::func_ov001_020bb728(pEntry->id)) {
                        data_ov000_020b539c_eur.func_ov000_02097444(pEntry->id, &actorParams, 0x00);
                    }
                }
            }

            pFileInfos->unk_0E++;
        }
    }

    return true;
}

BOOL ZMB_ParseROOM(ZMBFileInfos *pFileInfos, ZMBSectionROOM *pSection, UnkStruct_027e0cd8_0C_Base *pDst) {
    for (u16 i = 0; i < pSection->header.nEntries; i++) {
        ZMBEntryROOM *pEntry = &pSection->entries[i];

        pDst->mUnk_108 = pEntry->unk_00;

        if (pEntry->unk_01 == 0xFF) {
            pDst->mUnk_110 = 0xFF;
        } else {
            pDst->mUnk_110 = pEntry->unk_01;
        }

        if (pEntry->unk_06 == 0xFF) {
            pDst->mUnk_10C = data_027e09a4->mUnk_54->mUnk_30;
        } else {
            pDst->mUnk_10C = pEntry->unk_06;
        }

        u8 var_r1_3 = pEntry->unk_07;
        if (pEntry->unk_07 == 0xFF) {
            switch (data_027e09a4->GetCurrentCourseEntry()->unk_10) {
                case 0x00:
                    var_r1_3 = 0x00;
                    break;
                case 0x02:
                case 0x04:
                    var_r1_3 = 0x02;
                    break;
                case 0x05:
                    var_r1_3 = 0x0F;
                    break;
                default:
                    var_r1_3 = 0x01;
                    break;
            }
        } else {
            var_r1_3 = pEntry->unk_07;
        }

        pDst->mUnk_114 = var_r1_3;

        fx32 var_r7 = UNK_FX_OPERATION_2(INT_TO_FX32(pEntry->unk_02));

        switch (pEntry->unk_03) {
            case 1:
                data_027e0cd8->mUnk_16 = true;
                break;
            case 2:
                data_027e0cd8->mUnk_16 = false;
                break;
            default:
                break;
        }

        pDst->mUnk_0B0 = pEntry->unk_04;
        pDst->mUnk_0B2 = pEntry->unk_04;
        pDst->mUnk_0B1 = pEntry->unk_05;
        pDst->mUnk_0B3 = pEntry->unk_05;
        pDst->mUnk_0FC = pEntry->unk_08;
        pDst->mUnk_118 = pEntry->unk_0C;

        switch (data_027e09a4->CurrentSceneIndex()) {
            case SceneIndex_b_deago:
                if (data_027e09b8->HasAdventureFlag(AdventureFlag_WatchedStavenPostBattleCS) &&
                    !data_027e09b8->HasAdventureFlag(AdventureFlag_WatchedMalladusOnTOSSummitCS)) {
                    pDst->mUnk_118 = 0x01;
                }
                break;
            case SceneIndex_d_main_s:
                if (data_027e09b8->HasAdventureFlag(AdventureFlag_WatchedStavenPostBattleCS) &&
                    !data_027e09b8->HasAdventureFlag(AdventureFlag_WatchedMalladusOnTOSSummitCS)) {
                    pDst->mUnk_118 = 0x01;
                }
                break;
            case SceneIndex_d_main:
                if (data_027e09a4->func_ov000_02070560()->roomIndex == 20 &&
                    !data_027e09b8->HasAdventureFlag(AdventureFlag_WatchedStavenPostBattleCS)) {
                    pDst->mUnk_118 = 0x01;
                }
                break;
            default:
                break;
        }

        if (pEntry->unk_0D == 0xFF) {
            UNSET_FLAG2(pDst->mUnk_128, UnkFlags2_1);
        } else {
            SET_FLAG2(pDst->mUnk_128, UnkFlags2_1);
            pDst->mUnk_0AF = pEntry->unk_0D_bool;
        }

        if (pEntry->unk_10 & 0x001) {
            SET_FLAG2(pDst->mUnk_128, UnkFlags2_0);
        } else {
            UNSET_FLAG2(pDst->mUnk_128, UnkFlags2_0);
        }

        if (pEntry->unk_10 & 0x002) {
            SET_FLAG2(pDst->mUnk_128, UnkFlags2_5);
        } else {
            UNSET_FLAG2(pDst->mUnk_128, UnkFlags2_5);
        }

        if (pEntry->unk_10 & 0x004) {
            SET_FLAG2(pDst->mUnk_128, UnkFlags2_6);
        } else {
            UNSET_FLAG2(pDst->mUnk_128, UnkFlags2_6);
        }

        if (pEntry->unk_10 & 0x008) {
            SET_FLAG2(pDst->mUnk_128, UnkFlags2_8);
            var_r7 += FLOAT_TO_FX32(1.2f);
        } else {
            UNSET_FLAG2(pDst->mUnk_128, UnkFlags2_8);
        }

        if (pEntry->unk_10 & 0x010) {
            SET_FLAG2(pDst->mUnk_128, UnkFlags2_2);
        } else {
            UNSET_FLAG2(pDst->mUnk_128, UnkFlags2_2);
        }

        if (pEntry->unk_10 & 0x020) {
            SET_FLAG2(pDst->mUnk_128, UnkFlags2_3);
        } else {
            UNSET_FLAG2(pDst->mUnk_128, UnkFlags2_3);
        }

        if (pEntry->unk_10 & 0x040) {
            SET_FLAG2(pDst->mUnk_128, UnkFlags2_4);
        } else {
            UNSET_FLAG2(pDst->mUnk_128, UnkFlags2_4);
        }

        if (pEntry->unk_10 & 0x080) {
            SET_FLAG2(pDst->mUnk_128, UnkFlags2_7);
        } else {
            UNSET_FLAG2(pDst->mUnk_128, UnkFlags2_7);
        }

        if (pEntry->unk_10 & 0x100) {
            SET_FLAG2(pDst->mUnk_128, UnkFlags2_9);
        } else {
            UNSET_FLAG2(pDst->mUnk_128, UnkFlags2_9);
        }

        if (pEntry->unk_10 & 0x200) {
            SET_FLAG2(pDst->mUnk_128, UnkFlags2_10);
        } else {
            UNSET_FLAG2(pDst->mUnk_128, UnkFlags2_10);
        }

        pDst->mUnk_11C = pEntry->unk_0E + 1;

        if (pEntry->unk_0F == 0) {
            UNSET_FLAG2(pDst->mUnk_128, UnkFlags2_11);
        } else {
            SET_FLAG2(pDst->mUnk_128, UnkFlags2_11);
        }

        data_027e0c90.max.y = pDst->mUnk_0A4 + var_r7;
    }

    if (data_027e09a4->IsLand() || data_027e09a4->GetCurrentCourseEntry()->unk_10 == 0x05) {
        if (GET_FLAG2(pDst->mUnk_128, UnkFlags2_4)) {
            data_02049ba0.Unload(OverlaySlot_12);
        } else if (GET_FLAG2(pDst->mUnk_128, UnkFlags2_2) || data_027e09a4->CurrentSceneIndex() == SceneIndex_b_flame ||
                   data_027e09a4->CurrentSceneIndex() == SceneIndex_tekiya08 ||
                   data_027e09a4->CurrentSceneIndex() == SceneIndex_battle03 ||
                   data_027e09a4->CurrentSceneIndex() == SceneIndex_battle05 ||
                   data_027e09a4->CurrentSceneIndex() == SceneIndex_battle09 ||
                   data_027e09a4->CurrentSceneIndex() == SceneIndex_battle11) {
            data_02049ba0.LoadIfNotLoaded(OverlaySlot_12, OverlayIndex_MapLava);
        } else if (GET_FLAG2(pDst->mUnk_128, UnkFlags2_3)) {
            data_02049ba0.LoadIfNotLoaded(OverlaySlot_12, OverlayIndex_MapWater);
        } else {
            data_02049ba0.Unload(OverlaySlot_12);
        }
    }

    data_027e0ce0->mUnk_1C->func_ov001_020bd0a4(GET_FLAG2(pDst->mUnk_128, UnkFlags2_11));

    if (GET_FLAG2(pDst->mUnk_128, UnkFlags2_9) ? true : false) {
        data_02049ba0.Unload(OverlaySlot_10);
        data_02049ba0.LoadIfNotLoaded(OverlaySlot_9, OverlayIndex_ASR);
        func_ov089_02165b18(&data_ov089_02171540);
    } else if (gOverlayManager.IsASR()) {
        data_02049ba0.LoadIfNotLoaded(OverlaySlot_9, OverlayIndex_Land2);
    }

    return true;
}

BOOL ZMB_ParsePLYR(ZMBFileInfos *pFileInfos, ZMBSectionPLYR *pSection, UnkStruct_027e0cd8_0C_Base *pDst) {
    for (u16 i = 0; i < pSection->header.nEntries; i++) {
        ZMBEntryPLYR *pEntry = &pSection->entries[i];

        if (ZMB_020ba350(pFileInfos, pEntry->unk_11, pDst)) {
            s32 unk_00 = ROUND_FX32(pEntry->unk_00.x);
            s32 unk_08 = ROUND_FX32(pEntry->unk_00.z);

            s32 tile_x = unk_00 / 16;
            s32 tile_z = unk_08 / 16;

            s32 xMod16 = unk_00 % 16;
            s32 zMod16 = unk_08 % 16;

            fx32 z = func_ov000_02080080(tile_z);
            z += MUL_FX32(INT_TO_FX32(zMod16), 256);

            fx32 x = func_ov000_02080068(tile_x);
            x += MUL_FX32(INT_TO_FX32(xMod16), 256);

            VecFx32 local_20;
            local_20.x = x;
            local_20.y = 0x7FFFEFFF;
            local_20.z = z;

            fx16 unk_0C = (u16) UNK_FX_OPERATION_1(INT_TO_FX32(pEntry->unk_0C));
            u8 unk_0E   = pEntry->unk_0E;
            u8 unk_12;
            u8 unk_0F = pEntry->unk_0F;
            u8 unk_10 = pEntry->unk_10;
            unk_12    = pEntry->unk_12;

            if (unk_12 != 0) {
                local_20.y = pEntry->unk_00.y;
            }

            UnkStruct_ov001_020c40f4 unkData(0); //! TODO: solve ctor oddities
            unkData.mUnk_00 = local_20;
            unkData.mUnk_0C = unk_0C;
            unkData.mUnk_0E = unk_0E;
            unkData.mUnk_0F = unk_12;
            unkData.mUnk_10 = unk_0F;
            unkData.mUnk_14 = unk_10;

            UnkStruct_ov001_020c40f4 *pEnd    = pDst->mUnk_13C.end();
            UnkStruct_ov001_020c40f4 *new_var = &unkData;
            if (pEnd != NULL) {
                pEnd->mUnk_00 = new_var->mUnk_00;
                pEnd->mUnk_0C = new_var->mUnk_0C;
                pEnd->mUnk_0E = new_var->mUnk_0E;
                pEnd->mUnk_0F = new_var->mUnk_0F;
                pEnd->mUnk_10 = new_var->mUnk_10;
                pEnd->mUnk_14 = new_var->mUnk_14;
            }

            pDst->mUnk_13C.grow_by(1);
        }
    }

    return true;
}

BOOL ZMB_ParseCAME(ZMBFileInfos *pFileInfos, ZMBSectionCAME *pSection, UnkStruct_027e0cd8_0C_Base *pDst) {
    for (u16 i = 0; i < pSection->header.nEntries; i++) {
        ZMBEntryCAME *pEntry = &pSection->entries[i];

        pEntry->unk_00 = func_ov000_020775d8(pEntry->unk_00);

        VecFx32 vec;
        VecFx32_Copy(&pEntry->unk_04, &vec);

        pEntry->unk_04.y += pDst->vfunc_28(&vec, 0x01, 0x00);
        pEntry->unk_10 = UNK_FX_OPERATION_1(INT_TO_FX32(pEntry->unk_10));
        pEntry->unk_12 = UNK_FX_OPERATION_1(INT_TO_FX32(pEntry->unk_12));
    }

    pDst->func_ov001_020b8c98(pSection);
    return true;
}

BOOL ZMB_ParseCMPT(ZMBFileInfos *pFileInfos, ZMBSectionCMPT *pSection, UnkStruct_027e0cd8_0C_Base *pDst) {
    for (u16 i = 0; i < pSection->header.nEntries; i++) {
        ZMBEntryCMPT *pEntry = &pSection->entries[i];

        if (pEntry->unk_0D != 0) {
            VecFx32 vec;
            VecFx32_Copy(&pEntry->unk_00, &vec);
            pEntry->unk_00.y += pDst->vfunc_28(&vec, 0x01, 0x00);
        }
    }

    pDst->func_ov001_020b8c90(pSection);
    return true;
}

BOOL ZMB_020ba350(ZMBFileInfos *pFileInfos, u8 param2, UnkStruct_027e0cd8_0C_Base *pDst) {
    BOOL isCS = pDst->mIsCS;

    if (param2 == 0xFF) {
        return true;
    }

    if (param2 < 2) {
        return (param2 == isCS);
    }

    if (GET_FLAG2(pDst->mUnk_104, (u8) (param2 - 2))) {
        return true;
    }

    return false;
}

void ZMB_020ba388(CustomVector<EntranceInfo> *pVector, size_t param2) {
    pVector->reallocate_copy(param2);
}

void ZMB_020ba408(CustomVector<UnkStruct_027e0cd8_0C_Base_148_00_Base *> *pVector, size_t param2) {
    pVector->reallocate_copy_alt(param2);
}
