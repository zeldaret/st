#include "Actor/ActorManager.hpp"
#include "MapObject/MapObjectManager.hpp"
#include "Physics/AABB.hpp"
#include "Unknown/UnkStruct_027e0960.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_ov000_020b5d34.hpp"
#include "files.h"

extern AABB data_027e0c90;

extern "C" BOOL func_ov001_020ba350(ZMBFileInfos *pFileInfos, u8 param2, UnkStruct_027e0cd8_0C_Base *pDst);
extern "C" void func_ov001_020ba388(void *, int);
extern "C" void func_ov001_020ba408(void *);
extern "C" fx32 func_ov000_02080068(fx32 x);
extern "C" fx32 func_ov000_02080080(fx32 x);

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
        func_ov001_020ba408(&pDst->mUnk_148);
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
        func_ov001_020ba388(&pDst->mUnk_154, pSection->header.nEntries + 8);
    }

    for (u16 i = 0; i < pSection->header.nEntries; i++) {
        ZMBEntryWARP *pEntry = &pSection->entries[i];

        if (func_ov001_020ba350(pFileInfos, pEntry->unk_16, pDst)) {
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

        if (func_ov001_020ba350(pFileInfos, pEntry->unk_18, pDst)) {
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

            if (func_ov001_020ba350(pFileInfos, pEntry->unk_1C, pDst)) {
                ActorProfile *pProfile = data_ov000_020b539c_eur.GetProfileFromId(pEntry->id);

                if (pProfile == NULL) {
                    continue;
                }

                if (!iVar6 || pProfile->mUnk_15) {
                    VecFx32 local_24;
                    local_24.x = func_ov000_02080068(posX);
                    local_24.x += (fx32) ((((s64) (INT_TO_FX32(xMod16)) << 8) + 0x800) >> 12);

                    local_24.z = func_ov000_02080080(posY);
                    local_24.z += (fx32) ((((s64) (INT_TO_FX32(yMod16)) << 8) + 0x800) >> 12);

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
                        actorParams.mUnk_18[j] = (pEntry->unk_14[j] >> 12) & 0xF;
                        actorParams.mUnk_1A[j] = (pEntry->unk_14[j] & 0xFFF);
                    }

                    actorParams.mUnk_0E = pEntry->unk_09;
                    actorParams.mUnk_20 = *(u32 *) &pEntry->unk_18;

                    if (pEntry->unk_1D == 0) {
                        actorParams.mUnk_0F = false;
                    } else {
                        actorParams.mUnk_0F = true;
                    }

                    actorParams.mInitialAngle = UNK_FX_OPERATION_1(INT_TO_FX32(pEntry->angle));
                    actorParams.mUnk_24       = pFileInfos->unk_0E;
                    actorParams.mUnk_26_0     = pEntry->unk_1C;

                    if (!ActorManager::func_ov001_020bb728(pEntry->id)) {
                        data_ov000_020b539c_eur.func_ov000_0207444(pEntry->id, &actorParams, 0x00);
                    }
                }
            }

            pFileInfos->unk_0E++;
        }
    }

    return true;
}

BOOL ZMB_ParseROOM(ZMBFileInfos *pFileInfos, ZMBSectionROOM *pSection, UnkStruct_027e0cd8_0C_Base *pDst) {
    return true;
}

BOOL ZMB_ParsePLYR(ZMBFileInfos *pFileInfos, ZMBSectionPLYR *pSection, UnkStruct_027e0cd8_0C_Base *pDst) {
    return true;
}

BOOL ZMB_ParseCAME(ZMBFileInfos *pFileInfos, ZMBSectionCAME *pSection, UnkStruct_027e0cd8_0C_Base *pDst) {
    return true;
}

BOOL ZMB_ParseCMPT(ZMBFileInfos *pFileInfos, ZMBSectionCMPT *pSection, UnkStruct_027e0cd8_0C_Base *pDst) {
    return true;
}
