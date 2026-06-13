#include "Unknown/Common.hpp"
#include "Unknown/UnkStruct_027e09a0.hpp"
#include "files.h"

THUMB_BEGIN

BOOL ZTB_ParseFile(FileInfos *pFileInfos, UnkDataStruct4 *pDst) {
    ZTBHeader *pHeader         = (ZTBHeader *) pFileInfos->pFile;
    ZTBSectionHeader *pSection = (ZTBSectionHeader *) ((u8 *) pHeader + sizeof(ZTBHeader));

    for (int i = 0; i < pHeader->nEntries; i++) {
        switch (pSection->type) {
            case ZTBSectionType_GRDB:
                ZTB_ParseGRDB(pFileInfos, pDst, (ZTBSectionGRDB *) pSection);
                break;
            case ZTBSectionType_STAB:
                ZTB_ParseSTAB(pFileInfos, pDst, (ZTBSectionSTAB *) pSection);
                break;
            case ZTBSectionType_LDMK:
                ZTB_ParseLDMK(pFileInfos, pDst, (ZTBSectionLDMK *) pSection);
                break;
            case ZTBSectionType_GRRL:
                ZTB_ParseGRRL(pFileInfos, pDst, (ZTBSectionGRRL *) pSection);
                break;
            default:
                break;
        }

        pSection = (ZTBSectionHeader *) ((u8 *) pSection + pSection->nSize);
    }

    return true;
}

BOOL ZTB_ParseGRDB(FileInfos *pFileInfos, UnkDataStruct4 *pDst, ZTBSectionGRDB *pGRDB) {
    pDst->func_ov024_020d26b0(pGRDB->header.unk_0A);

    for (u16 i = 0; i < pGRDB->header.nEntries1; i++) {
        for (u16 j = 0; j < pGRDB->header.nEntries2; j++) {
            ZTBEntryGRDB entry                   = pGRDB->entries[i * pGRDB->header.nEntries2 + j];
            pDst->mUnk_14[i]->mUnk_00[j].mUnk_00 = entry.unk_01;
        }
    }

    return true;
}

BOOL ZTB_ParseGRRL(FileInfos *pFileInfos, UnkDataStruct4 *pDst, ZTBSectionGRRL *pGRRL) {
    for (int i = 0; i < pGRRL->header.nEntries; i++) {
        ZTBEntryGRRL entry   = pGRRL->entries[i];
        ZTBEntryGRRL *pEntry = &entry;

        u8 var_r4                  = entry.unk_04;
        UnkDataStruct4_14 *temp_r5 = &pDst->mUnk_14[pGRRL->entries[i].unk_00]->mUnk_00[pGRRL->entries[i].unk_01];
        u8 *new_var                = &pEntry->unk_02;
        u8 new_var2                = pGRRL->entries[i].unk_01;

        if (var_r4 == 0x03) {
            pDst->mUnk_14[pGRRL->entries[i].unk_00]->mUnk_00[new_var2].mUnk_13 = 1;
            var_r4                                                             = 0x00;
        } else if (var_r4 == 0x04) {
            temp_r5->mUnk_13 = 2;
            var_r4           = 0x00;
        } else if (var_r4 == 0x05) {
            temp_r5->mUnk_13 = 3;
            var_r4           = 0x00;
        } else {
            temp_r5->mUnk_13 = 0;
        }

        if (*new_var & 0x01) {
            temp_r5->func_ov024_020d2098(0, var_r4);
        }

        if (*new_var & 0x10) {
            temp_r5->func_ov024_020d2098(2, var_r4);
        }

        if (*new_var & 0x04) {
            temp_r5->func_ov024_020d2098(1, var_r4);
        }

        if (*new_var & 0x40) {
            temp_r5->func_ov024_020d2098(3, var_r4);
        }

        temp_r5->mUnk_02[var_r4] = entry.unk_05;
        temp_r5->mUnk_06[var_r4] = entry.unk_06;
        temp_r5->func_ov024_020d1f60(entry.unk_03);
    }

    return true;
}

BOOL ZTB_ParseSTAB(FileInfos *pFileInfos, UnkDataStruct4 *pDst, ZTBSectionSTAB *pSTAB) {
    for (int i = 0; i < pSTAB->header.nEntries; i++) {
        ZTBEntrySTAB entry = pSTAB->entries[i];

        u8 new_var4 = pSTAB->entries[i].unk_11;
        new_var4    = new_var4 & 0xFF;

        UnkDataStruct4_14 *ptr  = &pDst->mUnk_14[pSTAB->entries[i].unk_10]->mUnk_00[new_var4];
        ptr->mStationSceneIndex = data_027e09a0->GetSceneIndexFromName(entry.sceneName);
    }

    return true;
}

BOOL ZTB_ParseLDMK(FileInfos *pFileInfos, UnkDataStruct4 *pDst, ZTBSectionLDMK *pLDMK) {
    for (int i = 0; i < pLDMK->header.nEntries; i++) {
        ZTBEntryLDMK entry = pLDMK->entries[i];

        VecFx32 temp;
        temp.x = entry.unk_00;
        temp.y = (entry.unk_01 - 0x80) * 0x1000;
        temp.z = (entry.unk_02 - 0x60) * 0x1000;

        if (pDst->mUnk_C8 != NULL) {
            *pDst->mUnk_C8 = temp;
        }

        pDst->mUnk_C8++;
    }

    return true;
}

THUMB_END
