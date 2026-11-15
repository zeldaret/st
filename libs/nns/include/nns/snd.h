#ifndef _NNS_SND_H
#define _NNS_SND_H

#include <nitro/types.h>

#ifdef __cplusplus
extern "C" {
#endif

void NNS_SndSetMonoFlag(s32);
void NNS_SndInit();
void NNS_SndHandleInit(void *param1);

BOOL NNS_SndCaptureStartEffect(void *, int, int, int, int, void *, int);
void NNS_SndCaptureStopEffect();

BOOL NNS_SndArcLoadBank(s32 param1, s32 param2);
void NNS_SndArcInit(void *param1, const char *soundDataPath, s32 param2, s32 param3);
void NNS_SndArcPlayerSetup(s32 param1);

void *NNS_SndHeapCreate(void *param1, size_t param2);
void NNS_SndHeapSaveState(s32 param1);

void NNS_SndPlayerStopSeq(void *param1, s32 param2);
s32 NNS_SndPlayerGetSeqNo(void *param1);

#ifdef __cplusplus
}
#endif

#endif
