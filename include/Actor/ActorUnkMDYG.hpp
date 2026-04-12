//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkMDYG_c4 : public Actor_c4 {
public:
    ActorUnkMDYG_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkMDYG : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkMDYG();

    /* 4C */ virtual ~ActorUnkMDYG() override;

    void func_ov029_0214b260(void);
    void func_ov029_0214b34c(void);
    void func_ov029_0214b468(void);
    void func_ov029_0214b4dc(void);
    void func_ov029_0214b514(void);
    void func_ov029_0214b530(void);
    void func_ov029_0214b554(void);
    void func_ov029_0214b5b8(void);
    void func_ov029_0214b73c(void);
    void func_ov029_0214b7d8(void);
    void func_ov029_0214b8b8(void);
    void func_ov029_0214b8c4(void);
    void func_ov029_0214ba04(void);
    void func_ov029_0214ba2c(void);
    void func_ov029_0214bac8(void);
    void func_ov029_0214bc48(void);
    void func_ov029_0214bc68(void);
    void func_ov029_0214bce0(void);
    void func_ov029_0214bd6c(void);
    void func_ov029_0214c008(void);
    void func_ov029_0214c018(void);
    void func_ov029_0214c190(void);
    void func_ov029_0214c250(void);
    void func_ov029_0214c30c(void);
    void func_ov029_0214c380(void);
    void func_ov029_0214c3f0(void);
    void func_ov029_0214c4f4(void);
    void func_ov029_0214c5dc(void);
    void func_ov029_0214c664(void);
    void func_ov029_0214c840(void);
    void func_ov029_0214c98c(void);
    void func_ov029_0214c9ec(void);
    void func_ov029_0214cd30(void);
    void func_ov029_0214cd88(void);
    void func_ov029_0214cddc(void);
    void func_ov029_0214ce04(void);
    void func_ov029_0214cf50(void);
    void func_ov029_0214d0b0(void);
    void func_ov029_0214d0e0(void);
    void func_ov029_0214d14c(void);
    void func_ov029_0214d2f4(void);
    void func_ov029_0214d3bc(void);
    void func_ov029_0214d490(void);
    void func_ov029_0214d4e8(void);
    void func_ov029_0214d58c(void);
    void func_ov029_0214d5e0(void);
    void func_ov029_0214d6d0(void);
    void func_ov029_0214d720(void);
    void func_ov029_0214d750(void);
    void func_ov029_0214d768(void);
    void func_ov029_0214d7a0(void);
};

class ActorProfileUnkMDYG : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkMDYG();
    ~ActorProfileUnkMDYG();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkMDYG *GetProfile();
};
