#ifndef _NITRO_SND_H
#define _NITRO_SND_H

#ifdef __cplusplus
extern "C" {
#endif

#include "nitro/types.h"

#define SND_COMMAND_NOBLOCK 0
#define SND_COMMAND_BLOCK 1

#define SND_TIMER_CLOCK 0xffb0ff

#define SND_WAVE_FORMAT_PCM16 1

#define SND_CHANNEL_LOOP_REPEAT 1

#define SND_CHANNEL_DATASHIFT_NONE 0

typedef void (*SNDAlarmCallback)(void *arg);

typedef u32 SNDCommandType;
enum SNDCommandType_ {
    SNDCommandType_StartTimer       = 0xc,
    SNDCommandType_SetupChannelPcm  = 0xe,
    SNDCommandType_SetupAlarm       = 0x12,
    SNDCommandType_SetChannelVolume = 0x14,
    SNDCommandType_SetChannelPan    = 0x15,
    SNDCommandType_LockChannel      = 0x1a,
    SNDCommandType_Unk_1d           = 0x1d,
};

typedef struct SNDCommand {
    /* 00 */ struct SNDCommand *next;
    /* 04 */ SNDCommandType type;
    // Usage differs based on command type
    // For channels and alarms, each bit is a channel/alarm to apply to
    // It can also be a pointer to memory
    /* 08 */ u32 target;
    /* 0c */ u32 param0;
    /* 10 */ u32 param1;
    /* 14 */ u32 param2;
    /* 18 */
} SNDCommand;

void SND_Init(void);
SNDCommand *SND_RecvCommandReply(u32);
BOOL SND_FlushCommand(u32);

void SND_StopTimer(u32 channel, u32, u32 alarm, u32);
void SND_UnlockChannel(u32 channel, u32);
void SND_LockChannel(u32 channel, u32);
void SND_SetChannelVolume(u32 channel, u32 volume, u32 datashift);
void SND_SetChannelPan(u32 channel, u32 pan);

void SND_SetupChannelPcm(u32 channel, u32 format, void *buf, u32 loop, u32, u32 numSamples, u32 volume, u32 datashift, u32,
                         u32);

void SND_SetupAlarm(u32 num, u32, u32, SNDAlarmCallback callback, void *arg);
void SND_StartTimer(u32 channel, u32, u32 num, u32);

u32 SND_GetCurrentCommandTag(void);
void SND_WaitForCommandProc(u32 tag);

#ifdef __cplusplus
} // extern "C"
#endif

#endif
