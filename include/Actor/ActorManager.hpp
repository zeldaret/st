#pragma once

#include "Actor/ActorRef.hpp"
#include "Actor/Actor_Derived1.hpp"
#include "System/SysNew.hpp"
#include "Unknown/Common.hpp"
#include "files.h"
#include "types.h"

class EntranceInfo;

class ActorManager : public AutoInstance<ActorManager> {
public:
    /* 00 */ Actor **mActorTable;
    /* 04 */ Actor **mActorTableEnd;
    /* 08 */ Actor **mUnk_08; // pointer to first available slot?
    /* 0C */ unk16 mActorCount;
    /* 0E */ unk16 mNextActorId;
    /* 10 */ unk8 mUnk_10;
    /* 10 */ unk8 mUnk_11;
    /* 10 */ unk8 mUnk_12;
    /* 10 */ unk8 mUnk_13;
    /* 14 */ UnkStruct_ov019_020d24c8_28_258_00 mUnk_14;
    /* 1C */ unk32 mUnk_1C;
    /* 20 */ unk8 mUnk_20;
    /* 21 */ unk8 mUnk_21;
    /* 22 */ unk8 mUnk_22;
    /* 23 */ unk8 mUnk_23;
    /* 24 */ unk32 mUnk_24;
    /* 28 */ unk32 mUnk_28;
    /* 2C */ unk32 mUnk_2C;
    /* 30 */ unk16 mUnk_30;
    /* 32 */ unk8 mUnk_32;
    /* 33 */ unk8 mUnk_33;
    /* 34 */ unk32 mUnk_34;
    /* 38 */

    ActorManager();
    ~ActorManager();

    // itcm
    Actor **func_01fff350(void *param1, Actor **ppActorTable);
    Actor *func_01fff3b4(ActorRef ref);

    // overlay 0
    void func_ov000_02096e44(int index);
    unk32 func_ov000_0209704c();
    unk32 func_ov000_020970c8(u16 param1, unk32 *param2);

    // overlay 1
    void func_ov001_020bafdc();
    void func_ov001_020bb018(ZOBHeader *pHeader);
    void func_ov001_020bb414();
    void func_ov001_020bb488();
    void func_ov001_020bb548();
    void func_ov001_020bb630();
    void func_ov001_020bb6b0(EntranceInfo *param1);
    void func_ov001_020bb7b0(ZeldaObjectList *pObjList);
    void func_ov001_020bb7f0();

    static ActorManager *Create();
    static void Destroy();
    static bool func_ov001_020bb728(ActorId actorId);
    static void func_ov001_020bb824();
    static void func_ov001_020bb844();
};

extern ActorManager *gpActorManager;
