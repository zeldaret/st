//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkWTTH_c4 : public Actor_c4 {
public:
    ActorUnkWTTH_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkWTTH : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkWTTH();

    /* 4C */ virtual ~ActorUnkWTTH() override;

    void func_ov046_021236c8(void);
    void func_ov046_021236dc(void);
    void func_ov046_02123784(void);
    void func_ov046_021237a8(void);
    void func_ov046_021237cc(void);
    void func_ov046_02123800(void);
    void func_ov046_0212383c(void);
    void func_ov046_0212384c(void);
    void func_ov046_021238b8(void);
    void func_ov046_021238d4(void);
    void func_ov046_021238d8(void);
    void func_ov046_021239c4(void);
    void func_ov046_02123ad8(void);
    void func_ov046_02123af4(void);
    void func_ov046_02123bb4(void);
    void func_ov046_02123bec(void);
    void func_ov046_02123c74(void);
    void func_ov046_02123e48(void);
    void func_ov046_02123e74(void);
    void func_ov046_02123efc(void);
    void func_ov046_02124044(void);
    void func_ov046_02124070(void);
    void func_ov046_02124164(void);
    void func_ov046_02124208(void);
    void func_ov046_0212424c(void);
    void func_ov046_021242e8(void);
    void func_ov046_02124384(void);
    void func_ov046_021243c8(void);
    void func_ov046_02124458(void);
    void func_ov046_02124574(void);
    void func_ov046_021245b0(void);
    void func_ov046_021247b4(void);
    void func_ov046_02124be4(void);
    void func_ov046_02124c10(void);
    void func_ov046_02124c88(void);
    void func_ov046_02124ca4(void);
    void func_ov046_02124cc8(void);
    void func_ov046_02124cf4(void);
    void func_ov046_02124d64(void);
};

class ActorProfileUnkWTTH : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkWTTH();
    ~ActorProfileUnkWTTH();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkWTTH *GetProfile();
};
