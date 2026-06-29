#include "Unknown/UnkStruct_027e0960.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "files.h"

extern "C" BOOL func_ov001_020ba350(ZMBFileInfos *pFileInfos, u8 param2, UnkStruct_027e0cd8_0C_Base *pDst);
extern "C" void func_ov001_020ba388(void *, int);
extern "C" void func_ov001_020ba408(void *);

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
                case ZMBSectionType_MPOB:
                    ZMB_ParseMPOB(pFileInfos, (ZMBSectionMPOB *) pSection, pDst);
                    break;
                case ZMBSectionType_ARAB:
                    ZMB_ParseARAB(pFileInfos, (ZMBSectionARAB *) pSection, pDst);
                    break;
                case ZMBSectionType_RALB:
                    ZMB_ParseRALB(pFileInfos, (ZMBSectionRALB *) pSection, pDst);
                    break;
                case ZMBSectionType_NPCA:
                    ZMB_ParseNPCA(pFileInfos, (ZMBSectionNPCA *) pSection, pDst);
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

BOOL ZMB_ParseROMB(ZMBFileInfos *pFileInfos, ZMBSectionROMB *pROMB, UnkStruct_027e0cd8_0C_Base *pDst) {
    pDst->ZMB_ParseROMB(pROMB);
    return true;
}

BOOL ZMB_ParseLDLB(ZMBFileInfos *pFileInfos, ZMBSectionLDLB *pLDLB, UnkStruct_027e0cd8_0C_Base *pDst) {
    pDst->mUnk_104 = UnkFlags1_None;
    bool isCs      = data_027e09a4->mUnk_00.mIsCS;

    for (u16 i = 0; i < pLDLB->header.nEntries; i++) {
        ZMBEntryLBLB *pEntry = &pLDLB->entries[i];

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

BOOL ZMB_ParseARAB(ZMBFileInfos *pFileInfos, ZMBSectionARAB *pARAB, UnkStruct_027e0cd8_0C_Base *pDst) {
    size_t capacity = pDst->mUnk_148.capacity();

    if (pARAB->header.nEntries > capacity) {
        func_ov001_020ba408(&pDst->mUnk_148);
    }

    for (u16 i = 0; i < pARAB->header.nEntries; i++) {
        pDst->func_ov001_020b8b94(&pARAB->entries[i]);
    }

    return true;
}

BOOL ZMB_ParseRALB(ZMBFileInfos *pFileInfos, ZMBSectionRALB *pRALB, UnkStruct_027e0cd8_0C_Base *pDst) {
    u32 nEntries = pRALB->header.nEntries;
    if (nEntries == 0) {
        return true;
    }

    data_027e0960->func_ov000_0205a1fc(nEntries);

    u8 *offset = (u8 *) pRALB->entries;

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

BOOL ZMB_ParseWARP(ZMBFileInfos *pFileInfos, ZMBSectionWARP *pWARP, UnkStruct_027e0cd8_0C_Base *pDst) {
    if (pWARP->header.nEntries + 8 > pDst->mUnk_154.cap()) {
        func_ov001_020ba388(&pDst->mUnk_154, pWARP->header.nEntries + 8);
    }

    for (u16 i = 0; i < pWARP->header.nEntries; i++) {
        ZMBEntryWARP *pEntry = &pWARP->entries[i];

        if (func_ov001_020ba350(pFileInfos, pEntry->unk_16, pDst)) {
            pDst->func_ov001_020b8c30(UnkStruct_SceneChange1(pEntry));
        }
    }

    return true;
}

BOOL ZMB_ParseMPOB(ZMBFileInfos *pFileInfos, ZMBSectionMPOB *pMPOB, UnkStruct_027e0cd8_0C_Base *pDst) {
    return true;
}

BOOL ZMB_ParseNPCA(ZMBFileInfos *pFileInfos, ZMBSectionNPCA *pNPCA, UnkStruct_027e0cd8_0C_Base *pDst) {
    return true;
}

BOOL ZMB_ParseROOM(ZMBFileInfos *pFileInfos, ZMBSectionROOM *pROOM, UnkStruct_027e0cd8_0C_Base *pDst) {
    return true;
}

BOOL ZMB_ParsePLYR(ZMBFileInfos *pFileInfos, ZMBSectionPLYR *pPLYR, UnkStruct_027e0cd8_0C_Base *pDst) {
    return true;
}

BOOL ZMB_ParseCAME(ZMBFileInfos *pFileInfos, ZMBSectionCAME *pCAME, UnkStruct_027e0cd8_0C_Base *pDst) {
    return true;
}

BOOL ZMB_ParseCMPT(ZMBFileInfos *pFileInfos, ZMBSectionCMPT *pCMPT, UnkStruct_027e0cd8_0C_Base *pDst) {
    return true;
}
