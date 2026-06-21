#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

enum ActorItemBoomerangState_ {
    ActorItemBoomerangState_0,
    ActorItemBoomerangState_1,
    ActorItemBoomerangState_MAX
};

class ActorItemBoomerang_C4 : public Actor_C4 {
public:
    ActorItemBoomerang_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorItemBoomerang : public Actor {
public:
    /* 000 (base) */
    /* 094 */ STRUCT_PAD(0x94, 0x128);
    /* 128 */ unk32 mUnk_128;
    /* 12C */ STRUCT_PAD(0x12C, 0x13C);
    /* 13C */ unk32 mUnk_13C;
    /* 140 */ VecFx32 mUnk_140;

    ActorItemBoomerang();

    /* 4C */ virtual ~ActorItemBoomerang() override;

    void func_ov031_020e45fc();
    void func_ov031_020e4760();
    void func_ov031_020e4774();
    void func_ov031_020e4788();
    void func_ov031_020e48d0();
    void SetState(ActorState state);
    void func_ov031_020e49b0(unk32 param1);
    void func_ov031_020e4a20();
    void func_ov031_020e5034();
    void func_ov031_020e5220();
    void func_ov031_020e52a0();
    void func_ov031_020e5354();
    void func_ov031_020e53c8(Actor *actor);
    void func_ov031_020e53e4(Actor *actor);
    bool func_ov031_020e5400(Actor *actor);
    void func_ov031_020e544c();
    void func_ov031_020e5488();
    void func_ov031_020e54a4();
    void func_ov031_020e54d4();
    void func_ov031_020e5704();
    void func_ov031_020e5710();
    void func_ov031_020e572c();
};

class ActorProfileItemBoomerang : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileItemBoomerang();
    ~ActorProfileItemBoomerang();

    /* 0C */ virtual Actor *Create();

    static ActorProfileItemBoomerang *GetProfile();
};
