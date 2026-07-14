#ifndef _NITRO_TP_H
#define _NITRO_TP_H

#ifdef __cplusplus
extern "C" {
#endif

#include "nitro/types.h"

#define TP_VALIDITY_VALID 0
#define TP_VALIDITY_INVALID_X 1
#define TP_VALIDITY_INVALID_Y 2
#define TP_VALIDITY_INVALID_XY 3

#define TP_REQUEST_COMMAND_AUTO_SAMPLING 0x10

#define TP_RESULT_SUCCESS 0x0

#define TP_TOUCH_ON 0x1

typedef struct TPCalibrateParam {
    /* 00 */ s16 unk_00;
    /* 02 */ s16 unk_02;
    /* 04 */ s16 unk_04;
    /* 06 */ s16 unk_06;
    /* 08 */
} TPCalibrateParam;

typedef struct TPData {
    u16 x;
    u16 y;
    u16 touch;
    u16 validity;
} TPData;

typedef u32 TPRequestCommand;
typedef u32 TPRequestResult;

void TP_Init(void);
void TP_SetCallback(void (*callback)(TPRequestCommand command, TPRequestResult result, u16 index));
BOOL TP_GetUserInfo(TPCalibrateParam *calibrate);
void TP_SetCalibrateParam(const TPCalibrateParam *calibrate);

void func_020711c0(void);
BOOL func_02071254(TPData *data);
BOOL TP_GetData(TPData *data);

void TP_GetCalibratedPoint(TPData *, TPData *);

void _TP_RequestAutoSamplingStart(u32 param1, u32 param2, TPData *sampleBuf, u32 sampleBufSize);
void TP_func_02032704(u32 param1);
void TP_func_0203271c(u32 param1);
void TP_GetLatestCalibratedPointInAuto(TPData *data);

inline BOOL TP_RequestRawSampling(TPData *data) {
    func_020711c0();
    return func_02071254(data);
}

inline void TP_RequestAutoSamplingStart(u32 param1, u32 param2, TPData *sampleBuf, u32 sampleBufSize) {
    _TP_RequestAutoSamplingStart(param1, param2, sampleBuf, sampleBufSize);
    TP_func_02032704(2);
    TP_func_0203271c(2);
}

#ifdef __cplusplus
} // extern "C"
#endif

#endif
