#ifndef NITROSDK_OS_MUTEX_H
#define NITROSDK_OS_MUTEX_H

#include <nitro/os/thread.h>
#include <types.h>

typedef struct OSMutex {
    /* 0x00 */ OSThreadQueue queue;
    /* 0x08 */ OSThread *thread;
    /* 0x0C */ s32 count;
    /* 0x10 */ OSMutexLinkedList list;
} OSMutex; // Size: 0x18

void OS_InitMutex(OSMutex *mutex);
void OS_LockMutex(OSMutex *mutex);
void OS_UnlockMutex(OSMutex *mutex);
void OS_UnlockAllQueuedThreadMutex(OSThread *thread);
bool OS_TryLockMutex(OSMutex *mutex);

#endif
