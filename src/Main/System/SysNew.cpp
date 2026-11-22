#include "System/SysNew.hpp"
#include "CommonFuncs.hpp"
#include "nns/fnd.h"

extern char *data_0204372c[];

void *SysNew(NNSiFndHeapHead *param1, uint length, uint alignment) {
    void *ptr = NULL;

    switch ((u32) param1->stamp) {
        case NNSFndHeapStamp_EXPH:
            ptr = NNS_FndAllocFromExpHeapEx(param1, length, alignment);
            break;
        case NNSFndHeapStamp_FRMH:
            ptr = NNS_FndAllocFromFrmHeapEx(param1, length, alignment);
            break;
        case NNSFndHeapStamp_UNTH:
            ptr = NNS_FndAllocFromUnitHeap(param1);
            break;
        case NNSFndHeapStamp_UNSH:
            ptr = func_020145b0(func_02014704(), length);
            break;
        default:
            break;
    }

    return ptr;
}

void SysDelete(void *ptr) {
    NNSiFndHeapHead *pHead;

    if (ptr != NULL) {
        pHead = func_02001488();

        switch (pHead->stamp) {
            case NNSFndHeapStamp_EXPH:
                NNS_FndFreeToExpHeap(pHead, ptr);
                break;
            case NNSFndHeapStamp_UNTH:
                NNS_FndFreeToUnitHeap(pHead, ptr);
                break;
            case NNSFndHeapStamp_UNSH:
                func_02014630(func_02014704(), ptr);
                break;
            default:
                break;
        }
    }
}

void *func_02011f10(s32 length) {
    return SysNew(data_0204999c.mUnk_00[HeapIndex_1], length, 4);
}

void *func_02011f30(s32 length) {
    return func_02011f10(length);
}

void *operator new(size_t length, uint id, uint alignment) {
    void *ptr;
    NNSiFndHeapHead *pHead = data_0204999c.mUnk_00[id];

    ptr = SysNew(pHead, length, alignment);

    if (ptr == NULL) {
        switch (id) {
            case HeapIndex_1:
                GAME_ASSERT(ptr != NULL, 183, "%sノメモリガタリマセン.\nサイズ=%d\nノコリ =%d", data_0204372c[id], length,
                            func_020011f4(pHead));
                break;
            default:
                GAME_ASSERT(ptr != NULL, 187, "%sノメモリガタリマセン.\nサイズ=%d", data_0204372c[id], length);
                break;
        }
    }

    return ptr;
}

void operator delete(void *ptr) {
    SysDelete(ptr);
}

void operator delete[](void *ptr) {
    SysDelete(ptr);
}
