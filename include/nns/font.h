#ifndef _NNS_FONT_H
#define _NNS_FONT_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Font_UnkStruct1 {
    /* 00 */ void *mpFINF; // pointer to the FINF section of the FNTR file
    /* 04 */ void *mUnk_04; // pointer to a function
    /* 08 */
} Font_UnkStruct1;

void func_020090b0(Font_UnkStruct1 *pFont_UnkStruct1, void *pFontFile);

#ifdef __cplusplus
}
#endif

#endif
