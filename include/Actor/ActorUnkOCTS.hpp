//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkOCTS_c4 : public Actor_c4 {
public:
    ActorUnkOCTS_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkOCTS : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkOCTS();

    /* 4C */ virtual ~ActorUnkOCTS() override;

    void func_ov042_02123600(void);
    void func_ov042_02123614(void);
    void func_ov042_02123698(void);
    void func_ov042_021238dc(void);
    void func_ov042_0212398c(void);
    void func_ov042_021239f0(void);
    void func_ov042_02123a38(void);
    void func_ov042_02123a70(void);
    void func_ov042_02123b3c(void);
    void func_ov042_02123b78(void);
    void func_ov042_02123c08(void);
};

class ActorProfileUnkOCTS : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkOCTS();
    ~ActorProfileUnkOCTS();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkOCTS *GetProfile();
};
