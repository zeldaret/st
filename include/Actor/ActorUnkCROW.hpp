//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkCROW_c4 : public Actor_c4 {
public:
    ActorUnkCROW_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkCROW : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkCROW();

    /* 4C */ virtual ~ActorUnkCROW() override;

    void func_ov049_02132330(void);
    void func_ov049_02132344(void);
    void func_ov049_021324dc(void);
    void func_ov049_0213259c(void);
    void func_ov049_02132600(void);
    void func_ov049_02132604(void);
    void func_ov049_021326d8(void);
    void func_ov049_02132714(void);
    void func_ov049_0213275c(void);
    void func_ov049_02132a40(void);
    void func_ov049_02132cf0(void);
    void func_ov049_02132d1c(void);
    void func_ov049_02132e00(void);
    void func_ov049_02132ea8(void);
    void func_ov049_02132f28(void);
    void func_ov049_02132fec(void);
    void func_ov049_02133068(void);
    void func_ov049_02133128(void);
    void func_ov049_02133488(void);
    void func_ov049_02133520(void);
    void func_ov049_02133594(void);
    void func_ov049_02133798(void);
    void func_ov049_021338ac(void);
    void func_ov049_02133a68(void);
    void func_ov049_02133acc(void);
    void func_ov049_02133af4(void);
    void func_ov049_02133b34(void);
    void func_ov049_02133bf4(void);
    void func_ov049_02133c70(void);
    void func_ov049_02133ce0(void);
    void func_ov049_02133d4c(void);
    void func_ov049_02133da4(void);
    void func_ov049_02133dec(void);
    void func_ov049_02133e70(void);
    void func_ov049_02133eb4(void);
    void func_ov049_02133ed8(void);
    void func_ov049_02133f04(void);
    void func_ov049_02133fbc(void);
    void func_ov049_021340a8(void);
    void func_ov049_021340cc(void);
    void func_ov049_021340f8(void);
    void func_ov049_02134104(void);
};

class ActorProfileUnkCROW : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkCROW();
    ~ActorProfileUnkCROW();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkCROW *GetProfile();
};
