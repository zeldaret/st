#ifndef NITROSDK_OS_THREAD_H
#define NITROSDK_OS_THREAD_H

#include <nitro/os/context.h>

/// MARK: Types

typedef struct OSThread OSThread;
typedef struct OSMutex OSMutex;

typedef void (*OSThreadSwitchCallback)(OSThread *oldThread, OSThread *newThread);
typedef void (*OSThreadDestructor)(void *);

typedef struct OSThreadLinkedList {
    /* 0x04 */ OSThread *prev;
    /* 0x00 */ OSThread *next;
} OSThreadLinkedList;

typedef struct OSMutexQueue {
    /* 0x00 */ OSMutex *head;
    /* 0x04 */ OSMutex *tail;
} OSMutexQueue;

typedef struct OSMutexLinkedList {
    /* 0x00 */ OSMutex *next;
    /* 0x04 */ OSMutex *prev;
} OSMutexLinkedList;

typedef struct OSThreadQueue {
    /* 0x00 */ OSThread *head;
    /* 0x04 */ OSThread *tail;
} OSThreadQueue;

typedef struct OSThreadInfo {
    /* 0x00 */ u16 isSchedulerWaiting;
    /* 0x02 */ u16 irqDepth;
    /* 0x10 */ OSThread *current;
    /* 0x14 */ OSThread *list;
    /* 0x18 */ OSThreadSwitchCallback callback;
} OSThreadInfo;

typedef struct OSThread {
    /* 0x00 */ OSContext context;
    /* 0x64 */ s32 state;
    /* 0x68 */ OSThread *next;
    /* 0x6C */ u32 id;
    /* 0x70 */ u32 priority;
    /* 0x74 */ void *profiler;
    /* 0x78 */ OSThreadQueue *queue;
    /* 0x7C */ OSThreadLinkedList list;
    /* 0x84 */ OSMutex *mutex;
    /* 0x88 */ OSMutexQueue mutexQueue;
    /* 0x90 */ u32 stackTop;
    /* 0x94 */ u32 stackBottom;
    /* 0x98 */ u32 stackOffset;
    /* 0x9C */ OSThreadQueue joinQueue;
    /* 0xA4 */ void *unk_A4[3];
    /* 0xB0 */ void *unk_B0;
    /* 0xB4 */ OSThreadDestructor destructor;
    /* 0xB8 */ void *userParam;
    /* 0xBC */ s32 error;
} OSThread; // Size: 0xC0

extern OSThreadInfo ThreadInfo;

/// MARK: Functions

void OS_PauseThread(OSThreadQueue *queue);
void OS_UnpauseThread(OSThreadQueue *queue);
OSMutex *OS_RemoveMutexFromQueue(OSMutexQueue *queue);
OSThread *OS_SelectThread(void);
void OS_CreateThread(OSThread *thread, void (*func)(void *), void *arg, void *stack, u32 stackSize, u32 priority);
void OS_ExitThread(void);

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
    return thread->id;
}

#endif // NITROSDK_OS_THREAD_H
