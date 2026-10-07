#ifndef _NITRO_OS_H
#define _NITRO_OS_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdarg.h>

#include "nitro/os/os_alarm.h"
#include "nitro/os/os_arena.h"
#include "nitro/os/os_cache.h"
#include "nitro/os/os_common.h"
#include "nitro/os/os_context.h"
#include "nitro/os/os_irq.h"
#include "nitro/os/os_mutex.h"
#include "nitro/os/os_owner.h"
#include "nitro/os/os_protection.h"
#include "nitro/os/os_thread.h"
#include "nitro/reg.h"

#define OS_IE_V_BLANK 1
#define OS_IE_H_BLANK 2

#define OS_CURRENT_HEAP_HANDLE -1

#define OS_MESSAGE_NOBLOCK 0
#define OS_MESSAGE_BLOCK 1

#define OS_CONSOLE_ISDEBUGGER 0x40000000
#define OS_CONSOLE_NITRO 0x80000000

#define OS_LOCK_ID_ERROR -3

#define OS_THREAD_LAUNCHER_PRIORITY 0x10

#define OS_EXMEM_CNT_NDS_SLOT_ACCESS_SHIFT 11
#define OS_EXMEM_CNT_NDS_SLOT_ACCESS (1 << OS_EXMEM_CNT_NDS_SLOT_ACCESS_SHIFT)

#define OS_CPU_ARM9 ((OSCpu) 0)
#define OS_CPU_ARM7 ((OSCpu) 1)

typedef u32 OSCpu;

typedef struct OSMessageQueue {
    /* 00 */ OSLinkedList unk_00;
    /* 08 */ u32 unk_08;
    /* 0c */ u32 unk_0c;
    /* 10 */ u32 unk_10;
    /* 14 */ u32 unk_14;
    /* 18 */ u32 unk_18;
    /* 1c */ u32 unk_1c;
    /* 20 */
} OSMessageQueue;

// TODO: Maybe align is wrong? g_msgBuf in PM4 is aligned by 8 with 4 bytes of padding before it
typedef void *OSMessage ATTRIBUTE_ALIGN(8);

typedef struct OSDma {
    /* 00 */ vu32 src;
    /* 04 */ vu32 dst;
    /* 08 */ vu32 cnt;
    /* 0c */
} OSDma;

typedef u64 OSTime;

void OS_Init(void);
void OS_InitThread(void);
void OS_InitTick(void);
void OS_InitAlarm(void);
void OS_Terminate(void);

void OS_WaitVBlankIntr(void);
void _OS_SpinWait(u32 param1);
inline void OS_SpinWait(u32 param1) {
    _OS_SpinWait(param1 / 2);
}

void _OS_Panic();

#ifdef DEBUG
void OS_TPrintf(const char *format, ...) {}
void OS_Printf(const char *format, ...) {}
void OS_TVPrintf(const char *format, va_list args) {}
void OS_TPanic(const char *message) {}
void OS_Panic(const char *message) {}
#else
    #define OS_TPrintf(...)
    #define OS_Printf(...)
    #define OS_TVPrintf(...)
    #define OS_TPanic(...) OS_Terminate()
    #define OS_Panic(...) OS_Terminate()
#endif

void OS_ResetSystem(u32);

void OS_Sleep(u32 time);

#ifdef DEBUG
void OS_CheckStack(OSThread *thread);
#else
    #define OS_CheckStack(thread)
#endif
void OS_func_0044(void);
OSMutex *OS_func_0039(OSMutexQueue *param1);

void OS_InitMessageQueue(OSMessageQueue *queue, OSMessage *buf, u32 bufLength);
void OS_ReceiveMessage(OSMessageQueue *queue, OSMessage *message, u32 block);
void OS_SendMessage(OSMessageQueue *queue, OSMessage message, u32 block);

void OS_CreateAlarm(OSAlarm *alarm);
void OS_SetPeriodicAlarm(OSAlarm *alarm, OSTime, OSTime, void (*callback)(void *arg), void *arg);
void OS_CancelAlarm(OSAlarm *alarm);

OSTime OS_GetTick(void);

u32 OS_GetConsoleType(void);

u32 OS_GetLockID(void);

BOOL OS_func_0206d5ac(u16, u32);
void OS_func_0206d66c(u16, u32);
u32 OS_func_0206d3cc(void);
u32 OS_GetProcMode(void);

void OS_Halt(void);

void OSi_ReferSymbol(void);

void OS_func_0013(s32, void (*)(u32), u32);

void OS_func_0094(OSAlarm *timer, u64 time, void *callback, void *arg);

u32 OS_func_0159(void);

void OS_func_0167(void);
void OS_func_0169(u32, void (*)(u32, u32, u32));
BOOL OS_func_0170(u32, u32);
s32 OS_func_0171(u32, u32, u32);
s32 OS_func_0174(void);
BOOL OS_func_0065(void);

void OS_func_0176(u8 *);
void OS_func_0178(u32);

void OS_func_0149(u32, u32, u32);

inline void *OS_Alloc(u32 size) {
    return OS_AllocFromHeap(OS_ARENA_MAIN, OS_CURRENT_HEAP_HANDLE, size);
}

inline void OS_Free(void *ptr) {
    OS_FreeFromHeap(OS_ARENA_MAIN, OS_CURRENT_HEAP_HANDLE, ptr);
}

inline OSTime OS_MilliSecondsToTicks(OSTime ms) {
    return (ms * 33514) / 64;
}

inline OSTime OS_MicroSecondsToTicks(OSTime us) {
    return OS_MilliSecondsToTicks(us) / 1000;
}

inline OSTime OS_TicksToMilliSeconds(OSTime ticks) {
    return (ticks * 64) / 33514;
}

inline BOOL OS_IsRunOnTwl(void) {
#ifndef IS_TWL
    return false;
#else
        // Probably checks some reg here
    #define REG_A9ROM_OFFSET 0x4000
    #define REG_SCFG_A9ROM_SEC_MASK 1

#endif
}

inline void OS_SetNdsSlotAccess(u32 processor) {
    REG_EXMEM_CNT = (REG_EXMEM_CNT & ~OS_EXMEM_CNT_NDS_SLOT_ACCESS) | (processor << OS_EXMEM_CNT_NDS_SLOT_ACCESS_SHIFT);
}

#ifdef __cplusplus
} // extern "C"
#endif

#endif
