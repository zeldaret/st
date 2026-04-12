//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTPDO_c4 : public Actor_c4 {
public:
    ActorUnkTPDO_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkTPDO : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkTPDO();

    /* 4C */ virtual ~ActorUnkTPDO() override;

    void func_ov091_0216dbdc(void);
    void func_ov091_0216dbf0(void);
    void func_ov091_0216dbf8(void);
    void func_ov091_0216dc90(void);
    void func_ov091_0216dcf8(void);
    void func_ov091_0216ddd4(void);
    void func_ov091_0216deb0(void);
    void func_ov091_0216df7c(void);
    void func_ov091_0216e0c0(void);
    void func_ov091_0216e498(void);
    void func_ov091_0216e4f8(void);
    void func_ov091_0216e5f4(void);
};

class ActorProfileUnkTPDO : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkTPDO();
    ~ActorProfileUnkTPDO();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkTPDO *GetProfile();
};
