#ifndef _NNS_FND_H
#define _NNS_FND_H

#include <nitro/types.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum NNSFndExpHeapAllocDir_ {
    NNS_FND_EXPHEAP_ALLOC_DIR_FRONT = 0x00,
    NNS_FND_EXPHEAP_ALLOC_DIR_REAR  = 0x01,
} NNSFndExpHeapAllocDir;

typedef enum NNSFndExpHeapAllocMode_ {
    NNS_FND_EXPHEAP_ALLOC_MODE_FIRST = 0x00,
    NNS_FND_EXPHEAP_ALLOC_MODE_NEAR  = 0x01,
} NNSFndExpHeapAllocMode;

typedef enum NNSFndHeapFill_ {
    NNS_FND_HEAP_FILL_NOUSE = 0x00,
    NNS_FND_HEAP_FILL_ALLOC = 0x01,
    NNS_FND_HEAP_FILL_FREE  = 0x02,
    NNS_FND_HEAP_FILL_MAX   = 0x03,
} NNSFndHeapFill;

typedef struct NNSiFndExpHeapMBlockHead_ {
    /* 00 */ u16 signature;
    /* 02 */ u16 attribute;
    /* 04 */ u32 blockSize;
    /* 08 */ struct NNSiFndExpHeapMBlockHead_ *pMBHeadPrev;
    /* 0C */ struct NNSiFndExpHeapMBlockHead_ *pMBHeadNext;
} NNSiFndExpHeapMBlockHead; // size = 0x10

typedef struct NNSiFndExpMBlockList_ {
    /* 00 */ NNSiFndExpHeapMBlockHead *head;
    /* 04 */ NNSiFndExpHeapMBlockHead *tail;
} NNSiFndExpMBlockList; // size = 0x08

typedef struct NNSiFndExpHeapHead_ {
    /* 00 */ NNSiFndExpMBlockList mbFreeList;
    /* 08 */ NNSiFndExpMBlockList mbUsedList;
    /* 0C */ u16 groupID;
    /* 0E */ u16 feature;
} NNSiFndExpHeapHead; // size = 0x10

typedef struct NNSiMemRegion_ {
    /* 00 */ void *start;
    /* 04 */ void *end;
} NNSiMemRegion; // size = 0x08

typedef struct NNSFndLinkList_ {
    /* 00 */ void *prev;
    /* 04 */ void *next;
} NNSFndLinkList; // size = 0x08

//! TODO: figure it out
typedef struct NNSFndAllocator_ {
    /* 00 */ s32 unk_00;
} NNSFndAllocator; // size = ?

typedef struct NNSFndList_ {
    /* 00 */ void *head;
    /* 04 */ void *tail;
    /* 08 */ u16 numElements;
    /* 0A */ u16 offset;
} NNSFndList; // size = 0x0C

typedef enum NNSFndHeapStamp_ {
    NNSFndHeapStamp_EXPH = 'EXPH', // Expanded Heap?
    NNSFndHeapStamp_FRMH = 'FRMH', // Frame Heap?
    NNSFndHeapStamp_UNTH = 'UNTH', // Unit Heap?
    NNSFndHeapStamp_UNSH = 'UNSH', // Unspecified Heap?
} NNSFndHeapStamp;

typedef struct NNSiFndHeapHead_ {
    /* 00 */ NNSFndHeapStamp stamp;
    /* 04 */ NNSFndLinkList link;
    /* 0c */ NNSFndList children;
    /* 18 */ NNSiMemRegion region;
    /* 20 */ u32 flags;
} NNSiFndHeapHead; // size = 0x24

//! TODO: figure it out
typedef struct NNSiFndUntMBlockList_ {
    /* 00 */ s32 unk_00;
} NNSiFndUntMBlockList; // size = ?

//! TODO: figure it out
typedef struct NNSiFndUntHeapMBlockHead_ {
    /* 00 */ s32 unk_00;
} NNSiFndUntHeapMBlockHead; // size = ?

//! TODO: figure it out
typedef struct NNSiFndUntHeapHead_ {
    /* 00 */ s32 unk_00;
} NNSiFndUntHeapHead; // size = ?

void *AllocatorAllocForExpHeap(NNSFndAllocator *pAllocator, size_t size);
void AllocatorFreeForExpHeap(NNSFndAllocator *pAllocator, void *memBlock);
void *AllocatorAllocForFrmHeap(NNSFndAllocator *pAllocator, size_t size);
void AllocatorFreeForFrmHeap(NNSFndAllocator *pAllocator, void *memBlock);
void *AllocatorAllocForUnitHeap(NNSFndAllocator *pAllocator, size_t size);
void AllocatorFreeForUnitHeap(NNSFndAllocator *pAllocator, void *memBlock);
void *NNS_FndAllocFromAllocator(NNSFndAllocator *pAllocator, size_t size);
void NNS_FndFreeToAllocator(NNSFndAllocator *pAllocator, void *memBlock);
void NNS_FndInitAllocatorForExpHeap(NNSFndAllocator *pAllocator, NNSiFndHeapHead *heap, s32 alignment);
void NNS_FndInitAllocatorForFrmHeap(NNSFndAllocator *pAllocator, NNSiFndHeapHead *heap, s32 alignment);
void NNS_FndInitAllocatorForUnitHeap(NNSFndAllocator *pAllocator, NNSiFndHeapHead *heap);

NNSiFndHeapHead *GetHeapHeadPtrFromExpHeapHead(NNSiFndExpHeapHead *pEHHead);
NNSiFndExpHeapHead *GetExpHeapHeadPtrFromHandle(NNSiFndHeapHead *heap);
void *GetMemPtrForMBlock(NNSiFndExpHeapMBlockHead *pMBlkHd);
NNSiFndExpHeapMBlockHead *GetMBlockHeadPtr(void *memBlock);
NNSiFndExpHeapMBlockHead *GetMBlockHeadCPtr(void *memBlock);
void *GetMBlockEndAddr(NNSiFndExpHeapMBlockHead *pMBHead);
u16 GetAlignmentForMBlock(NNSiFndExpHeapMBlockHead *pMBlkHd);
void SetAlignmentForMBlock(NNSiFndExpHeapMBlockHead *pMBlkHd, u16 alignment);
u16 GetGroupIDForMBlock(NNSiFndExpHeapMBlockHead *pMBHead);
void SetGroupIDForMBlock(NNSiFndExpHeapMBlockHead *pMBHead, u16 id);
u16 GetAllocDirForMBlock(NNSiFndExpHeapMBlockHead *pMBHead);
void SetAllocDirForMBlock(NNSiFndExpHeapMBlockHead *pMBHead, u16 mode);
u16 GetAllocMode(NNSiFndExpHeapHead *pEHHead);
void SetAllocMode(NNSiFndExpHeapHead *pEHHead, u16 mode);
void GetRegionOfMBlock(NNSiMemRegion *region, NNSiFndExpHeapMBlockHead *block);
NNSiFndExpHeapMBlockHead *RemoveMBlock(NNSiFndExpMBlockList list, NNSiFndExpHeapMBlockHead *block);
NNSiFndExpHeapMBlockHead *InsertMBlock(NNSiFndExpMBlockList list, NNSiFndExpHeapMBlockHead *target,
                                       NNSiFndExpHeapMBlockHead *prev);
void AppendMBlock(NNSiFndExpMBlockList list, NNSiFndExpHeapMBlockHead *block);
NNSiFndExpHeapMBlockHead *InitMBlock(NNSiMemRegion *pRegion, u16 signature);
NNSiFndExpHeapMBlockHead *InitFreeMBlock(NNSiMemRegion *pRegion);
NNSiFndHeapHead *NNS_FndCreateExpHeapEx(void *startAddress, size_t size, u16 optFlag);
void *NNS_FndAllocFromExpHeapEx(NNSiFndHeapHead *heap, size_t size, s32 alignment);
u32 NNS_FndResizeForMBlockExpHeap(NNSiFndHeapHead *heap, void *memBlock, size_t size);
void NNS_FndFreeToExpHeap(NNSiFndHeapHead *heap, void *memBlock);
u32 NNS_FndGetTotalFreeSizeForExpHeap(NNSiFndHeapHead *heap);
u32 NNS_FndGetAllocatableSizeForExpHeapEx(NNSiFndHeapHead *heap, s32 alignment);
void NNS_FndDestroyExpHeap(NNSiFndHeapHead *param1);

void *NNS_FndAllocFromFrmHeapEx(NNSiFndHeapHead *heap, size_t size, s32 alignment);
void NNS_FndDestroyFrmHeap(NNSiFndHeapHead *param1);
NNSiFndHeapHead *NNS_FndCreateFrmHeapEx(void *startAddress, size_t size, u16 optFlag);

NNSiFndExpHeapHead *GetExpHeapHeadPtrFromHeapHead(NNSiFndHeapHead *pHHead);
NNSiFndHeapHead *InitExpHeap(void *startAddress, void *endAddress, u16 optFlag);
void *AllocUsedBlockFromFreeBlock(NNSiFndExpHeapHead *pEHHead, NNSiFndExpHeapMBlockHead *pMBHeadFree, void *mblock,
                                  size_t size, u16 direction);
void *AllocFromHead(NNSiFndHeapHead *pHeapHd, size_t size, s32 alignment);
void *AllocFromTail(NNSiFndHeapHead *pHeapHd, size_t size, s32 alignment);
BOOL RecycleRegion(NNSiFndExpHeapHead *pEHHead, NNSiMemRegion *pRegion);
u16 NNS_FndSetAllocModeForExpHeap(NNSiFndHeapHead *heap, u16 mode);
size_t func_020010e0(NNSiFndHeapHead *pHead, void *ptr, s32 param3);

NNSiFndHeapHead *FindContainHeap(NNSFndList *pList, void *memBlock);
void DumpHeapList();
NNSFndList *FindListContainHeap(NNSiFndHeapHead *pHeapHd);
void NNSi_FndInitHeapHead(NNSiFndHeapHead *pHeapHd, u32 signature, void *heapStart, void *heapEnd, u16 optFlag);
void NNSi_FndFinalizeHeap(NNSiFndHeapHead *pHeapHd);
void NNSi_FndDumpHeapHead(NNSiFndHeapHead *pHeapHd);
NNSiFndHeapHead *NNS_FndFindContainHeap(void *memBlock);
void NNS_FndDumpHeap(NNSiFndHeapHead *heap);
u32 NNS_FndSetFillValForHeap(s32 type, u32 val);
u32 NNS_FndGetFillValForHeap(s32 type);
u32 NNSi_FndRoundUp(u32 value, u32 alignment);
void *NNSi_FndRoundUpPtr(void *ptr, u32 alignment);
u32 NNSi_FndRoundDown(u32 value, u32 alignment);
void *NNSi_FndRoundDownPtr(void *ptr, u32 alignment);
u32 NNSi_FndGetBitValue(u32 data, s32 st, s32 bits);
void NNSi_FndSetBitValue(u32 data, s32 st, u32 bits, u16 val);
u32 NNSiGetUIntPtr(void *ptr);

u32 GetOffsetFromPtr(void *start, void *end);
void *AddU32ToPtr(void *ptr, u32 val);
void *AddU32ToCPtr(void *ptr, u32 val);
void *SubU32ToPtr(void *ptr, u32 val);
void *SubU32ToCPtr(void *ptr, u32 val);
s32 ComparePtr(void *a, void *b);
u16 GetOptForHeap(NNSiFndHeapHead *pHeapHd);
void SetOptForHeap(NNSiFndHeapHead *pHeapHd, u16 optFlag);
void FillAllocMemory(NNSiFndHeapHead *pHeapHd, void *address, size_t size);
void FillFreeMemory(NNSiFndHeapHead *pHeapHd, void *address, size_t size);
void FillNoUseMemory(NNSiFndHeapHead *pHeapHd, void *address, size_t size);
void SetFirstObject(NNSFndList *list, void *obj);
void NNS_FndInitList(NNSFndList *list, u16 offset);
void NNS_FndAppendListObject(NNSFndList *list, void *obj);
void NNS_FndRemoveListObject(NNSFndList *list, void *obj);
void *NNS_FndGetNextListObject(NNSFndList *list, void *obj);

NNSiFndUntHeapMBlockHead *PopMBlock(NNSiFndUntMBlockList *list);
void PushMBlock(NNSiFndUntMBlockList *list, NNSiFndUntHeapMBlockHead *block);
NNSiFndUntHeapHead *GetUnitHeapHeadPtrFromHeapHead(NNSiFndHeapHead *pHeapHd);
BOOL IsValidUnitHeapHandle(NNSiFndHeapHead *handle);
NNSiFndHeapHead *NNS_FndCreateUnitHeap(void *startAddress, u32 heapSize, u32 memBlockSize);
u32 NNS_FndGetMemBlockSizeForUnitHeap(NNSiFndHeapHead *heap);
NNSiFndHeapHead *NNS_FndCreateUnitHeapEx(void *startAddress, u32 heapSize, u32 memBlockSize, s32 alignment, u16 optFlag);
void NNS_FndDestroyUnitHeap(NNSiFndHeapHead *heap);
void *NNS_FndAllocFromUnitHeap(NNSiFndHeapHead *heap);
void NNS_FndFreeToUnitHeap(NNSiFndHeapHead *heap, void *memBlock);
u32 NNS_FndCountFreeBlockForUnitHeap(NNSiFndHeapHead *heap);
u32 NNS_FndCalcHeapSizeForUnitHeap(u32 memBlockSize, u32 memBlockNum, s32 alignment);

NNSiFndHeapHead *func_02001488(void);

//! TODO: figure it out
// list = NNSFndList, obj = void*
#define OBJ_TO_LINK(list, obj)

//! TODO: figure it out
// list = NNSFndList, structName = char*, linkName = char*
#define NNS_FND_INIT_LIST(list, structName, linkName)

#define NNS_NULL_ASSERT(exp) (void) 0

#ifdef __cplusplus
}
#endif

#endif
