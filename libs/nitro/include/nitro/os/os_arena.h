#ifndef _NITRO_OS_ARENA_H
#define _NITRO_OS_ARENA_H

#ifdef __cplusplus
extern "C" {
#endif

#include "nitro/types.h"

#define OS_ARENA_MAIN 0
#define OS_ARENA_2 2
#define OS_ARENA_ITCM 3
#define OS_ARENA_DTCM 4
#define OS_ARENA_5 5
#define OS_ARENA_6 6
#define OS_ARENA_COUNT 7

typedef s32 OSHeapHandle;

typedef struct OSMemoryBlock {
    /* 00 */ struct OSMemoryBlock *prev;
    /* 04 */ struct OSMemoryBlock *next;
    /* 08 */ u32 size;
    /* 0c */
} OSMemoryBlock;

typedef struct OSHeap {
    /* 00 */ s32 size;
    /* 04 */ OSMemoryBlock *free; // sorted by address, descending
    /* 08 */ OSMemoryBlock *occupied;
    /* 0c */
} OSHeap;

typedef struct OSAlloc {
    /* 00 */ OSHeapHandle currentHeap;
    /* 04 */ s32 numHeaps;
    /* 08 */ void *lo;
    /* 0c */ void *hi;
    /* 10 */ OSHeap *heaps;
    /* 14 */ OSHeap heapsArray[]; // length stored in numHeaps
} OSAlloc;

extern u32 _OS_unk_linker_1; // 0xffffd9b8
extern u32 _OS_unk_linker_2; // gtactw_eu, diamondtrust_us: 0x800
extern u32 _OS_unk_linker_3; // 0x027e0080
extern u32 _OS_unk_linker_4; // gtactw_eu, diamondtrust_us: 0
#define OS_unk_linker_1 ((s32) (&_OS_unk_linker_1))
#define OS_unk_linker_2 ((u32) (&_OS_unk_linker_2))
#define OS_unk_linker_3 ((u8 *) (&_OS_unk_linker_3))
#define OS_unk_linker_4 ((s32) (&_OS_unk_linker_4))

extern BOOL OSi_ArenaInitialized;

void *OS_InitAlloc(u32 arena, void *addrLo, void *addrHi, u32);
void *OS_GetArenaLo(u32 arena);
void *OS_GetArenaHi(u32 arena);

void OS_SetArenaLo(u32 arena, void *addr);
void OS_SetArenaHi(u32 arena, void *addr);
void *OS_AllocFromArenaLo(u32 arena, u32 size, u32 num);

OSHeapHandle OS_CreateHeap(u32 arena, void *addrLo, void *addrHi);
OSHeapHandle OS_SetCurrentHeap(u32 arena, OSHeapHandle heap);
void OS_DumpHeap(u32 arena, OSHeapHandle heap);
void *OS_AllocFromHeap(u32 arena, OSHeapHandle heap, s32 size);
void OS_FreeFromHeap(u32 arena, OSHeapHandle heap, void *ptr);
s32 OS_CheckHeap(u32 arena, OSHeapHandle heap);

inline void *OS_GetMainArenaLo(void) {
    return OS_GetArenaLo(OS_ARENA_MAIN);
}
inline void *OS_GetMainArenaHi(void) {
    return OS_GetArenaHi(OS_ARENA_MAIN);
}
inline void *OS_GetITCMArenaLo(void) {
    return OS_GetArenaLo(OS_ARENA_ITCM);
}
inline void *OS_GetITCMArenaHi(void) {
    return OS_GetArenaHi(OS_ARENA_ITCM);
}
inline void *OS_GetDTCMArenaLo(void) {
    return OS_GetArenaLo(OS_ARENA_DTCM);
}
inline void *OS_GetDTCMArenaHi(void) {
    return OS_GetArenaHi(OS_ARENA_DTCM);
}

inline void OS_SetMainArenaLo(void *addr) {
    OS_SetArenaLo(OS_ARENA_MAIN, addr);
}

inline void *OS_AllocFromMainArenaLo(u32 size, u32 num) {
    return OS_AllocFromArenaLo(OS_ARENA_MAIN, size, num);
}

#ifdef __cplusplus
} // extern "C"
#endif

#endif
