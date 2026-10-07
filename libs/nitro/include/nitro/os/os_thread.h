#ifndef _NITRO_OS_THREAD_H
#define _NITRO_OS_THREAD_H

#include "nitro/os/os_alarm.h"
#include "nitro/os/os_context.h"
#include "nitro/os/os_mutex.h"

/// MARK: Types

struct OSThread;

typedef void (*OSThreadSwitchCallback)(struct OSThread *oldThread, struct OSThread *newThread);
typedef void (*OSThreadDtor)(void *);

typedef struct OSThreadInfo {
    /* 0x00 */ u16 isSchedulerWaiting;
    /* 0x02 */ u16 irqDepth;
    /* 0x10 */ struct OSThread *current;
    /* 0x14 */ struct OSThread *list;
    /* 0x18 */ OSThreadSwitchCallback callback;
} OSThreadInfo;

typedef struct OSThread {
    /* 00 */ OSContext context;
    /* 64 */ u32 unk_64;
    /* 68 */ struct OSThread *nextPrio; // next thread with lower priority
    /* 6c */ u32 unk_6c;
    /* 70 */ u32 prio;
    /* 74 */ u32 unk_74;
    /* 78 */ OSThreadQueue *unk_78;
    /* 7c */ struct OSThread *prev;
    /* 80 */ struct OSThread *next;
    /* 84 */ OSMutex *unk_84;
    /* 88 */ OSMutexQueue unk_88;
    /* 90 */ void *stackLo;
    /* 94 */ void *stackHi;
    /* 98 */ u32 *unk_98;
    /* 9c */ OSThreadQueue unk_9c;
    /* a4 */ u8 unk_a4[0xb0 - 0xa4];
    /* b0 */ OSAlarm *alarm;
    /* b4 */ OSThreadDtor destructor;
    /* b8 */
} OSThread;

extern OSThreadInfo ThreadInfo;

/// MARK: Functions

void OS_PauseThread(OSThreadQueue *queue);
void OS_UnpauseThread(OSThreadQueue *queue);
OSMutex *OS_RemoveMutexFromQueue(OSMutexQueue *queue);
OSThread *OS_SelectThread(void);
void OS_CreateThread(OSThread *thread, void (*threadFunc)(void *arg), void *arg, void *stackHi, u32 stackSize, u32 prio);
void OS_WakeupThread(OSThreadQueue *);
void OS_ExitThread(void);
void OS_WakeupThreadDirect(OSThread *param1);
BOOL OS_IsThreadTerminated(const OSThread *thread);
void OS_KillThread(OSThread *thread, void *);
void OS_SleepThread(OSThreadQueue *list); // sleeps current thread, list is optional

/// MARK: Inlines

static inline void OS_InitThreadQueue(OSThreadQueue *queue) {
    queue->tail = NULL;
    queue->head = NULL;
}

static inline OSThreadInfo *OS_GetThreadInfo(void) {
    return &ThreadInfo;
}

static inline OSThread *OS_GetCurrentThread(void) {
    return OS_GetThreadInfo()->current;
}

static inline void OS_SetCurrentThread(OSThread *thread) {
    OS_GetThreadInfo()->current = thread;
}

static inline u32 OS_GetThreadId(OSThread *thread) {
    return thread->unk_6c;
}

#endif // _NITRO_THREAD_H
