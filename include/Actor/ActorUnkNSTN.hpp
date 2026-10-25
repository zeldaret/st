#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "ActorPot.hpp"
#include "global.h"
#include "types.h"

enum ActorUnkNSTNState_ {
    ActorUnkNSTNState_0 = 0,
    ActorUnkNSTNState_1 = 1,
    ActorUnkNSTNState_2 = 2,
    ActorUnkNSTNState_3 = 3,
    ActorUnkNSTNState_4 = 4,
    ActorUnkNSTNState_5 = 5,
    ActorUnkNSTNState_6 = 6,
    ActorUnkNSTNState_7 = 7,
    ActorUnkNSTNState_Max
};

class ActorUnkNSTN : public Actor_ov031_02113fd4 {
public:
    /* 000 (base) */
    /* 110 */ ModelRender_ov000_020b198c mUnk_110;

    ActorUnkNSTN();

    /* 18 */ virtual bool Init(unk32 param1) override;
    /* 20 */ virtual void Update() override;
    /* 2C */ virtual void vfunc_2C(unk32 param1) override;
    /* 4C */ virtual ~ActorUnkNSTN() override;
    /* 58 */ virtual unk32 vfunc_58() override;
    /* 5C */ virtual void vfunc_5C(ActorState state) override;

    void func_ov058_02142abc();
    void func_ov058_02142bac();
    void func_ov058_02142bb8();
    void func_ov058_02142bc4();
    void func_ov058_02142bd0();
    void func_ov058_02142bdc();
    void func_ov058_02142be8();
    void func_ov058_02142bf4();
    void func_ov058_02142c00();
    void func_ov058_02142c0c();
    void func_ov058_02142c20();
    void func_ov058_02142c34();
    void func_ov058_02142d08();
};

class ActorProfileUnkNSTN : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkNSTN();
    ~ActorProfileUnkNSTN();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkNSTN *GetProfile();
};
