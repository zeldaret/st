#ifndef _NITRO_MXI_H
#define _NITRO_MXI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "nitro/types.h"

#define PXI_IPC_FIFO_CNT_SEND_FULL (1 << 1)  // true if send fifo is full
#define PXI_IPC_FIFO_CNT_RECV_EMPTY (1 << 8) // true if recv fifo is empty
#define PXI_IPC_FIFO_CNT_ERROR (1 << 14)
#define PXI_IPC_FIFO_CNT_ERROR_ACK (1 << 14)
#define PXI_IPC_FIFO_CNT_ENABLE (1 << 15) // enables writes to REG_IPC_FIFO_SEND

typedef struct PXI_UnkStruct1 {
    u32 unk_00_0 : 5;
    u32 unk_00_5 : 1;
    u32 unk_00_6 : 26;
} PXI_UnkStruct1;

void PXI_Init(void);
void PXI_InitFifo(void);
BOOL PXI_IsCallbackReady(u32, u32);
void PXI_SetFifoRecvCallback(u32, void (*)(u32, u32, u32));
s32 PXI_SendWordByFifo(u32, u32, u32);

#ifdef __cplusplus
}
#endif

#endif
