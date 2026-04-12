//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTEHT_c4 : public Actor_c4 {
public:
    ActorUnkTEHT_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkTEHT : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkTEHT();

    /* 4C */ virtual ~ActorUnkTEHT() override;

    void func_ov036_0211db28(void);
    void func_ov036_0211db70(void);
    void func_ov036_0211db94(void);
    void func_ov036_0211dba8(void);
    void func_ov036_0211dce0(void);
    void func_ov036_0211dce4(void);
    void func_ov036_0211dce8(void);
    void func_ov036_0211dcec(void);
    void func_ov036_0211dcf0(void);
    void func_ov036_0211dcf4(void);
    void func_ov036_0211dcf8(void);
    void func_ov036_0211dd08(void);
    void func_ov036_0211dd0c(void);
};

class ActorProfileUnkTEHT : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkTEHT();
    ~ActorProfileUnkTEHT();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkTEHT *GetProfile();
};
