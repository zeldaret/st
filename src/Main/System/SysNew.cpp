#include "System/SysNew.hpp"
#include "System/SysFault.hpp"
#include "global.h"

extern "C" {
void *func_02001654(void *);
void *func_020145b0(UnkId *, s32);
void *func_020010c0(void);
void *func_02001308(void);
UnkId *func_02001488(void);
UnkId *func_02014704(void *);
UnkId *func_020011c8(UnkId *, void *);
UnkId *func_02014630(UnkId *, void *);
UnkId *func_02001684(UnkId *, void *);
void func_020011f4(void *);
}
extern char *data_0204372c[];

// non-matching
ARM void *SysNew(UnkStruct_02011e10_Sub1 *param1, s32 length, s32 param3) {
    void *newPtr = NULL;
    void *ret;

    switch (param1->mId) {
        case UnkId_EXPH:
            newPtr = func_020010c0();
            break;
        case UnkId_FRMH:
            newPtr = func_02001308();
            break;
        case UnkId_UNTH:
            newPtr = func_02001654(param1);
            break;
        case UnkId_UNSH:
            newPtr = func_020145b0(func_02014704(param1), length);
            break;
        default:
            break;
    }

    return newPtr;
}

ARM void SysDelete(void *ptr) {
    UnkId *pUnkId;

    if (ptr != NULL) {
        pUnkId = func_02001488();

        switch (*pUnkId) {
            case UnkId_EXPH:
                func_020011c8(pUnkId, ptr);
                break;
            case UnkId_UNTH:
                func_02001684(pUnkId, ptr);
                break;
            case UnkId_UNSH:
                func_02014630(func_02014704(ptr), ptr);
                break;
            default:
                break;
        }
    }
}

ARM void *func_02011f10(s32 length) {
    return SysNew(data_0204999c.mUnk_00[1], length, 4);
}

ARM void *func_02011f30(s32 length) {
    return func_02011f10(length);
}

// non-matching
ARM void *operator new(unsigned long length, u32 id, u32 idLength) {
    void *pvVar1;
    char *uVar2;
    u16 line;
    char *uVar4;
    UnkStruct_02011e10_Sub1 *pUVar5;

    pUVar5 = data_0204999c.mUnk_00[id];
    pvVar1 = SysNew(pUVar5, length, idLength);

    if (pvVar1 == NULL) {
        if (id == 1) {
            func_020011f4(pUVar5);
            data_02049984.func_020125a4(__FILE__, 183, "%sノメモリガタリマセン.\nサイズ=%d\nノコリ =%d", data_0204372c[id],
                                        length);
        } else if (id == 0) {
            data_02049984.func_020125a4(__FILE__, 187, "%sノメモリガタリマセン.\nサイズ=%d", data_0204372c[id], length);
        }
    }

    return pvVar1;
}

ARM void operator delete(void *ptr) {
    SysDelete(ptr);
}

ARM void SysObject::operator delete[](void *ptr) {
    SysDelete(ptr);
}

void dummy() {
    ::operator new(1, 1);
}
