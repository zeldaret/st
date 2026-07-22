#pragma once

#include "Actor/ActorId.hpp"
#include "global.h"
#include "types.h"

class UnkActorSystem1 {
public:
    /* 00 (vtable) */
    /* 04 */ bool mUnk_04;

    UnkActorSystem1();

    // data_ov024_020d7b98
    /* 00 */ virtual ~UnkActorSystem1();
    /* 08 */ virtual void vfunc_08();
    /* 0C */ virtual void vfunc_0C();
    /* 10 */ virtual void vfunc_10(unk32 param1);
    /* 14 */ virtual void vfunc_14(unk32 param1);
    /* 18 */ virtual void vfunc_18(unk8 *param1);
    /* 1C */ virtual void vfunc_1C(unk32 param1);
    /* 20 */ virtual void vfunc_20(unk32 param1);
    /* 24 */ virtual unk32 vfunc_24() = 0;
    /* 28 */ virtual unk32 vfunc_28() = 0;
    /* 2C */ virtual bool vfunc_2C();
    /* 30 */
};

class UnkActorSystem1_Derived1 : public UnkActorSystem1 {
public:
    /* 00 (base) */
    /* 05 */

    // ?
    /* 24 */ virtual unk32 vfunc_24() override;
    /* 28 */ virtual unk32 vfunc_28() override;
};

struct UnkActorSystem_Infos1 {
    /* 0C */ s16 mUnk_00;
    /* 0E */ unk16 mUnk_02;
    /* 10 */ unk32 mUnk_04;
    /* 14 */ unk32 mUnk_08;
    /* 18 */ bool mUnk_0C;
    /* 19 */ bool mUnk_0D;
    /* 1A */ unk8 mUnk_0E; // pad?
    /* 1B */ unk8 mUnk_0F; // pad?
};

class UnkStruct_ov024_020d8660 : public AutoInstance<UnkStruct_ov024_020d8660> {
public:
    /* 00 */ UnkActorSystem1 *mUnk_00;
    /* 04 */ ActorId mActorId;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ UnkActorSystem_Infos1 mUnk_0C;
    /* 1C */ unk32 mUnk_1C;

    UnkStruct_ov024_020d8660();
    ~UnkStruct_ov024_020d8660();

    void func_ov024_020c4a8c(UnkActorSystem1 *param1);
    void func_ov024_020c4b10();
    void func_ov024_020c4b24();
    void func_ov024_020c4b4c(unk32 param1);
    void func_ov024_020c4ba0();
    void func_ov024_020c4cc8();
    bool func_ov024_020c4d74();
    void func_ov024_020c4d88(ActorId actorId, unk32 param2);
    void func_ov024_020c4dac(ActorId actorId, unk32 param2, UnkActorSystem_Infos1 *param3);

    static void func_ov024_020c4ac0();
    static void SetInstance(UnkStruct_ov024_020d8660 *pInstance);
    static bool ClearInstance();
};

// related to minigames
extern UnkStruct_ov024_020d8660 *data_ov024_020d8660;
