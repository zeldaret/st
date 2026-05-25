#ifndef _NITRO_RTC_H
#define _NITRO_RTC_H

#ifdef __cplusplus
extern "C" {
#endif

#include "nitro/types.h"

typedef struct RTCDate {
    u32 year;
    u32 month;
    u32 day;
    u32 unk;
} RTCDate;

typedef struct RTCTime {
    u32 hour;
    u32 minute;
    u32 second;
} RTCTime;

void RTC_Init(void);
s32 RTC_GetDate(RTCDate *date);
s32 RTC_GetTime(RTCTime *time);
u64 RTC_ConvertDateTimeToSecond(const RTCDate *date, const RTCTime *time);

#ifdef __cplusplus
} // extern "C"
#endif

#endif
