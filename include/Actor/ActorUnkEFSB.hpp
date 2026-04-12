//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkEFSB_c4 : public Actor_c4 {
public:
    ActorUnkEFSB_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkEFSB : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkEFSB();

    /* 4C */ virtual ~ActorUnkEFSB() override;

    void func_ov031_020fb614(void);
    void func_ov031_020fb6cc(void);
    void func_ov031_020fb704(void);
    void func_ov031_020fb718(void);
    void func_ov031_020fb720(void);
};

class ActorProfileUnkEFSB : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkEFSB();
    ~ActorProfileUnkEFSB();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkEFSB *GetProfile();
};
