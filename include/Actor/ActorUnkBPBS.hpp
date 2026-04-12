//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkBPBS_c4 : public Actor_c4 {
public:
    ActorUnkBPBS_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkBPBS : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkBPBS();

    /* 4C */ virtual ~ActorUnkBPBS() override;

    void func_ov096_0217adb8(void);
    void func_ov096_0217add8(void);
    void func_ov096_0217b130(void);
    void func_ov096_0217b144(void);
    void func_ov096_0217b158(void);
    void func_ov096_0217b16c(void);
    void func_ov096_0217b354(void);
    void func_ov096_0217b378(void);
    void func_ov096_0217b3a4(void);
    void func_ov096_0217b3ec(void);
    void func_ov096_0217b46c(void);
    void func_ov096_0217b5bc(void);
    void func_ov096_0217b88c(void);
    void func_ov096_0217b980(void);
    void func_ov096_0217b9ac(void);
    void func_ov096_0217bc4c(void);
    void func_ov096_0217bcb8(void);
    void func_ov096_0217bfd0(void);
    void func_ov096_0217c03c(void);
    void func_ov096_0217c29c(void);
    void func_ov096_0217c2ec(void);
    void func_ov096_0217c3e8(void);
    void func_ov096_0217c3f8(void);
    void func_ov096_0217c548(void);
    void func_ov096_0217c818(void);
    void func_ov096_0217cb90(void);
    void func_ov096_0217cc48(void);
    void func_ov096_0217cc74(void);
    void func_ov096_0217ccfc(void);
    void func_ov096_0217cecc(void);
    void func_ov096_0217cee4(void);
    void func_ov096_0217cf18(void);
    void func_ov096_0217d084(void);
    void func_ov096_0217d19c(void);
    void func_ov096_0217d1b8(void);
    void func_ov096_0217d234(void);
};

class ActorProfileUnkBPBS : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkBPBS();
    ~ActorProfileUnkBPBS();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkBPBS *GetProfile();
};
