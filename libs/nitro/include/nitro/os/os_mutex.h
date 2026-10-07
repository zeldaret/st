#ifndef _NITRO_OS_MUTEX_H
#define _NITRO_OS_MUTEX_H

#ifdef __cplusplus
extern "C" {
#endif

#include "nitro/os/os_common.h"
#include "nitro/types.h"

struct OSMutex;
struct OSThread;

typedef struct OSMutexQueue {
    /* 0x00 */ struct OSMutex *head;
    /* 0x04 */ struct OSMutex *tail;
} OSMutexQueue;

typedef struct OS_Mutex_UnkStruct1 {
    /* 00 */ PAD(0x00, 0x04);
    /* 04 */ struct OSThread *unk_04;
    /* 08 */
} OS_Mutex_UnkStruct1;

typedef struct OSMutex {
    /* 00 */ OSThreadQueue unk_00;
    /* 08 */ struct OSThread *unk_08;
    /* 0c */ vu32 unk_0c;
    /* 10 */ OSMutexQueue queue;
    /* 18 */
} OSMutex;

void OS_InitMutex(OSMutex *mutex);
void OS_LockMutex(OSMutex *mutex);
void OS_UnlockMutex(OSMutex *mutex);
bool OS_TryLockMutex(OSMutex *mutex);

void OSi_UnlockAllMutex(struct OSThread *param1);
void OS_UnlockAllQueuedThreadMutex(struct OSThread *thread);

#ifdef __cplusplus
} // extern "C"
#endif

#endif
