#include "Unknown/UnkFileSystem.hpp"
#include "Unknown/UnkStruct_027e09e8.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "files.h"

extern "C" void func_01ffd1b4(VecFx32 *, VecFx32 *);

BOOL ZCB_ParseFile(ZCBFileInfos *pFileInfos, UnkStruct_027e09e8 *pDst, UnkStruct_027e0cd8_0C_Base *param3) {
    int i;
    ZCBHeader *pHeader;
    ZCBSectionHeader *pSection;

    pFileInfos->pFile->vfunc_08(0x10);
    pHeader  = (ZCBHeader *) pFileInfos->pFile->mpFile;
    pSection = (ZCBSectionHeader *) ((u8 *) pHeader + sizeof(ZCBHeader));

    for (i = 0; i < pHeader->nSections; i++) {
        switch (pSection->type) {
            case ZCBSectionType_VTXB:
                ZCB_ParseVTXB(pFileInfos, (ZCBSectionVTXB *) pSection, pDst, param3);
                break;
            case ZCBSectionType_NRMB:
                ZCB_ParseNRMB(pFileInfos, (ZCBSectionNRMB *) pSection, pDst);
                break;
            case ZCBSectionType_PCLB:
                ZCB_ParsePCLB(pFileInfos, (ZCBSectionPCLB *) pSection, pDst);
                break;
            case ZCBSectionType_TRIB:
                ZCB_ParseTRIB(pFileInfos, (ZCBSectionTRIB *) pSection, pDst);
                break;
            case ZCBSectionType_GRDB:
                ZCB_ParseGRDB(pFileInfos, (ZCBSectionGRDB *) pSection, pDst, param3);
                break;
            default:
                break;
        }

        pSection = (ZCBSectionHeader *) ((u8 *) pSection + pSection->nSize);
    }

    return true;
}

void ZCB_ParseVTXB(ZCBFileInfos *pFileInfos, ZCBSectionVTXB *pSection, UnkStruct_027e09e8 *pDst,
                   UnkStruct_027e0cd8_0C_Base *param3) {
    u16 nEntries = pSection->header.nEntries;
    VecFx32 sp24 = param3->mUnk_0A0;
    VecFx32 sp18;
    VecFx32 spC;

    VecFx32_Copy(&sp24, &spC);
    VecFx32_Copy(&sp24, &sp18);

    for (u32 i = 0; i < nEntries; i++) {
        VecFx32 *pEntry = &pSection->entries[i];

        VecFx32_Add(pEntry, &sp24, pEntry);
        func_01ffd1b4(&spC, pEntry);
    }

    pDst->mpVerticesTable    = &pSection->entries[0];
    pDst->mpVerticesTableEnd = &pSection->entries[nEntries];
    pDst->mNumVertices       = nEntries;
    pDst->mUnk_48            = spC;
    pDst->mUnk_54            = sp18;
}

void ZCB_ParseNRMB(ZCBFileInfos *pFileInfos, ZCBSectionNRMB *pSection, UnkStruct_027e09e8 *pDst) {
    u32 nEntries = pSection->header.nEntries;

    //! TODO: 6 = sizeof(ZCBEntryNRMB) - 2?
    pDst->mpNormalTable    = &pSection->entries[0];
    pDst->mpNormalTableEnd = (ZCBEntryNRMB *) ((u8 *) pSection->entries + nEntries * 6);
    pDst->mNumNormals      = nEntries;
}

void ZCB_ParsePCLB(ZCBFileInfos *pFileInfos, ZCBSectionPCLB *pSection, UnkStruct_027e09e8 *pDst) {
    u32 nEntries = pSection->header.nEntries;

    pDst->mpPolyClassTable    = &pSection->entries[0];
    pDst->mpPolyClassTableEnd = &pSection->entries[nEntries];
    pDst->mNumPolyClasses     = nEntries;
}

void ZCB_ParseTRIB(ZCBFileInfos *pFileInfos, ZCBSectionTRIB *pSection, UnkStruct_027e09e8 *pDst) {
    pDst->func_ov000_0207bab4(pSection->entries, pSection->header.nEntries);
}

void ZCB_ParseGRDB(ZCBFileInfos *pFileInfos, ZCBSectionGRDB *pSection, UnkStruct_027e09e8 *pDst,
                   UnkStruct_027e0cd8_0C_Base *param3) {
    pDst->func_ov000_0207e99c(pSection, param3);
}
