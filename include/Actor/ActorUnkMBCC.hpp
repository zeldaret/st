//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkMBCC_c4 : public Actor_c4 {
public:
    ActorUnkMBCC_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkMBCC : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkMBCC();

    /* 4C */ virtual ~ActorUnkMBCC() override;

    void func_ov092_0217368c(void);
    void func_ov092_02173728(void);
    void func_ov092_02173740(void);
    void func_ov092_02173900(void);
    void func_ov092_0217395c(void);
    void func_ov092_02173a38(void);
    void func_ov092_02173d24(void);
    void func_ov092_02173dfc(void);
    void func_ov092_02173f94(void);
    void func_ov092_02173f98(void);
    void func_ov092_02173fbc(void);
    void func_ov092_02174030(void);
    void func_ov092_02174084(void);
    void func_ov092_021740c4(void);
    void func_ov092_02174194(void);
    void func_ov092_021742a0(void);
    void func_ov092_02174364(void);
    void func_ov092_02174488(void);
    void func_ov092_02174494(void);
    void func_ov092_021744d4(void);
};

class ActorProfileUnkMBCC : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkMBCC();
    ~ActorProfileUnkMBCC();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkMBCC *GetProfile();
};
