#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "files.h"

BOOL ZAB_ParseFile(FileInfos *pFileInfos, u32 sceneIndex, UnkStruct_027e0cd8_04 *pDst, const CourseListEntry *pEntry,
                   const UnkStruct_func_ov000_020702a8 *pUnk1, BOOL param6) {
    int i;
    ZABHeader *pHeader         = (ZABHeader *) pFileInfos->pFile;
    ZABSectionHeader *pSection = (ZABSectionHeader *) ((u8 *) pHeader + sizeof(ZABHeader));

    for (i = 0; i < pHeader->nSections; i++) {
        switch (pSection->type) {
            case ZABSectionType_CABM:
                ZAB_ParseCAMB(pFileInfos, (ZABSectionCABM *) pSection, sceneIndex, pDst, pEntry, pUnk1, param6);
                break;
            case ZABSectionType_CABI:
                ZAB_ParseCABI(pFileInfos, (ZABSectionCABI *) pSection, param6);
                break;
            default:
                break;
        }

        pSection = (ZABSectionHeader *) ((u8 *) pSection + pSection->nSize);
    }

    return true;
}

BOOL ZAB_ParseCAMB(FileInfos *pFileInfos, ZABSectionCABM *pCABM, u32 sceneIndex, UnkStruct_027e0cd8_04 *pDst,
                   const CourseListEntry *pEntry, const UnkStruct_func_ov000_020702a8 *pUnk1, BOOL param6) {
    u8 params[2];
    u8 uVar4[2];
    u8 unk_04[2];
    u8 unk_02[2];
    u8 unk_00[2];
    Vec2p sp44;
    s32 sp24;
    s32 sp20;
    u8 entry_unk_00;
    u8 entry_unk_01;
    u8 entry_unk_02;
    s8 entry_unk_03;
    u32 entry_unk_04;
    CourseListRoomEntry sp3A;
    CourseListRoomEntry local;
    int i;

    if (!param6) {
        unk_04[0]               = pCABM->header.unk_08;
        unk_04[1]               = pCABM->header.unk_09;
        *(u16 *) &pDst->mUnk_12 = *(u16 *) &unk_04;

        unk_02[0]               = pCABM->header.unk_08;
        unk_02[1]               = pCABM->header.unk_09;
        *(u16 *) &pDst->mUnk_10 = *(u16 *) &unk_02;

        unk_00[0]               = pCABM->header.unk_0A;
        unk_00[1]               = pCABM->header.unk_0B;
        *(u16 *) &pDst->mUnk_14 = *(u16 *) &unk_00;

        if (pCABM->header.unk_0C == 0) {
            params[0] = 1;
        } else {
            pDst->mUnk_01 = true;
            params[0]     = pCABM->header.unk_0C;
        }

        if (pCABM->header.unk_0D == 0) {
            params[1] = 1;
        } else {
            pDst->mUnk_01 = true;
            params[1]     = pCABM->header.unk_0D;
        }

        *(u16 *) &pDst->mUnk_16 = *(u16 *) params;

        if (pDst->mUnk_01) {
            sp44.x = 0;
            sp44.y = 0;

            *(u16 *) uVar4 = *(u16 *) &pDst->mUnk_16;

            if (uVar4[0] > uVar4[1]) {
                sp44.y = (SUBSCREEN_HEIGHT / (uVar4[0] * 2)) * (uVar4[0] - uVar4[1]);
            } else if (uVar4[0] < uVar4[1]) {
                sp44.x = (SUBSCREEN_WIDTH / (uVar4[1] * 2)) * (uVar4[1] - ((u8 *) uVar4)[0]);
            }

            pDst->mUnk_18 = sp44;
        }
    }

    pDst->func_ov000_02081874(pCABM->header.nEntries);
    sp24 = 0x80000000;
    sp20 = 0x7FFFFFFF;

    for (i = 0; i < pCABM->header.nEntries; i++) {
        entry_unk_00 = pCABM->entries[i].unk_00;
        entry_unk_01 = pCABM->entries[i].unk_01;
        entry_unk_02 = pCABM->entries[i].unk_02;
        entry_unk_03 = pCABM->entries[i].unk_03;
        entry_unk_04 = pCABM->entries[i].unk_04;

        ZAB_GetRoomEntry(pFileInfos, entry_unk_00, pEntry, &sp3A);

        *(u16 *) &local = *(u16 *) &sp3A;
        local.unk_02    = sp3A.unk_02;

        if (local.unk_02 >= 0x100 && local.unk_02 != 0xFFFF) {
            local.unk_02 = 0xFFFF;
        }

        if (local.mapPaintIndex >= 0x78 && local.mapPaintIndex != 0xFF) {
            local.mapPaintIndex = 0xFF;
        }

        if (param6 == 0) {
            pDst->func_ov000_020818d0(&local, entry_unk_01, entry_unk_02, entry_unk_03, entry_unk_04);
        } else {
            pDst->func_ov000_0208199c(sceneIndex, &local, entry_unk_03);
        }

        if (entry_unk_03 != 0) {
            if (entry_unk_03 < sp20) {
                sp20 = entry_unk_03;
            }

            if (entry_unk_03 > sp24) {
                sp24 = entry_unk_03;
            }
        }
    }

    pDst->func_ov000_020819a4(pUnk1);

    if (sp24 != 0x80000000) {
        pDst->mUnk_04 = sp24;
        pDst->mUnk_08 = sp20;
    }

    return true;
}

BOOL ZAB_ParseCABI(FileInfos *pFileInfos, ZABSectionCABI *pCABI, BOOL param3) {
    return true;
}

BOOL ZAB_GetRoomEntry(FileInfos *pFileInfos, u8 param2, const CourseListEntry *pEntry, CourseListRoomEntry *param4) {
    for (int i = 0; i < pEntry->numRooms; i++) {
        if (param2 == pEntry->roomEntries[i].roomIndex) {
            *param4 = pEntry->roomEntries[i];
            return true;
        }
    }

    param4->roomIndex = ROOM_INDEX_NONE;
    return false;
}
