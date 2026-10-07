#ifndef _NITRO_MIC_H
#define _NITRO_MIC_H

#ifdef __cplusplus
extern "C" {
#endif

#include "nitro/types.h"

typedef struct MIC_UnkStruct2 {
    /* 00 */ u32 unk_00;
    /* 04 */ u32 unk_04;
    /* 08 */ u32 unk_08;
    /* 0c */ u32 unk_0c;
    /* 10 */ u32 unk_10;
    /* 14 */ void (*unk_14)(u32, u32);
    /* 18 */ u32 unk_18;
    /* 1c */
} MIC_UnkStruct2;

void MIC_Init(void);
s32 MIC_StartAutoSamplingAsync(MIC_UnkStruct2 *arg0, void (*arg1)(s32, s32), s32 arg2);
s32 MIC_StartAutoSampling(MIC_UnkStruct2 *arg0);
s32 MIC_StopAutoSamplingAsync(void (*arg0)(s32, s32), s32 arg1);
s32 MIC_StopAutoSampling(void);
s32 MIC_GetLastSamplingAddress(void);

void MicWaitBusy(void);

#ifdef __cplusplus
}
#endif

#endif
