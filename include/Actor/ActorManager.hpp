#pragma once

#include "Actor/ActorUnk_ov000_020a8bb0.hpp"
#include "files.h"
#include "types.h"

class ActorManager {
public:
    /* 00 */ Actor **mActorTable;
    /* 04 */ Actor **mActorTableEnd;
    /* 08 */ Actor **mUnk_08;
    /* 0c */ unk16 mActorCount;
    /* 0e */ unk16 mNextActorId;
    /* 10 */ unk8 mUnk_10[0x14 - 0x10];
    /* 14 */ unk32 mUnk_14;
    /* 18 */ unk32 mUnk_18;
    /* 1c */ unk8 mUnk_1c[0x24 - 0x1c];
    /* 24 */ unk32 mUnk_24;
    /* 28 */ unk32 mUnk_28;
    /* 2c */ unk32 mUnk_2c;
    /* 30 */ unk16 mUnk_30;
    /* 32 */ unk8 mUnk_32[0x34 - 0x32];
    /* 34 */ unk32 mUnk_34;
    /* 38 */

    ActorManager();
    ~ActorManager();
    static void SetInstance(ActorManager *instance);
    static void ClearInstance();
    static void Create();
    static void Destroy();
    void func_ov001_020bafdc();
    void func_ov001_020bb018(s32 param1);
    void func_ov001_020bb414();
    void func_ov001_020bb488();
    void func_ov001_020bb548();
    void func_ov001_020bb630();
    void func_ov001_020bb6b0(s32 *param1);
    static bool func_ov001_020bb728(s32 param1);
    void func_ov001_020bb7b0(ZeldaObjectList *pObjList);
    void func_ov001_020bb7f0();
    static void func_ov001_020bb824();
    static void func_ov001_020bb844();

    ActorUnk_ov000_020a8bb0 *func_01fff3b4(unk32 param1);
};

extern ActorManager *gActorManager;
