//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRCFO_C4 : public Actor_C4 {
public:
    ActorUnkRCFO_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual bool vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkRCFO : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRCFO();

    /* 4C */ virtual ~ActorUnkRCFO() override;

    void func_ov033_02119504(void);
    void func_ov033_02119540(void);
    void func_ov033_0211961c(void);
    void func_ov033_02119828(void);
    void func_ov033_0211983c(void);
    void func_ov033_02119840(void);
    void func_ov033_021199f4(void);
    void func_ov033_02119a58(void);
    void func_ov033_02119bc4(void);
    void func_ov033_02119d00(void);
    void func_ov033_02119d40(void);
};

class ActorProfileUnkRCFO : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkRCFO();
    ~ActorProfileUnkRCFO();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRCFO *GetProfile();
};
