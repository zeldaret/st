//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSPID_c4 : public Actor_c4 {
public:
    ActorUnkSPID_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkSPID : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSPID();

    /* 4C */ virtual ~ActorUnkSPID() override;

    void func_ov090_0216f7cc(void);
    void func_ov090_0216f7e0(void);
    void func_ov090_0216f7f4(void);
    void func_ov090_0216f84c(void);
    void func_ov090_0216f880(void);
    void func_ov090_0216faf8(void);
    void func_ov090_0216fb4c(void);
    void func_ov090_0216fe40(void);
    void func_ov090_0216fec8(void);
    void func_ov090_0216ffe8(void);
    void func_ov090_02170124(void);
    void func_ov090_02170240(void);
    void func_ov090_021702c8(void);
    void func_ov090_02170348(void);
    void func_ov090_0217038c(void);
    void func_ov090_021703b0(void);
    void func_ov090_021703cc(void);
    void func_ov090_02170484(void);
    void func_ov090_0217049c(void);
    void func_ov090_021704fc(void);
    void func_ov090_0217053c(void);
    void func_ov090_02170688(void);
    void func_ov090_021706b4(void);
    void func_ov090_02170800(void);
    void func_ov090_02170818(void);
    void func_ov090_02170850(void);
    void func_ov090_02170874(void);
    void func_ov090_02170988(void);
    void func_ov090_02170a14(void);
    void func_ov090_02170ad8(void);
    void func_ov090_02170ba4(void);
    void func_ov090_02170c98(void);
    void func_ov090_02170cc8(void);
    void func_ov090_02170d74(void);
    void func_ov090_02170d8c(void);
    void func_ov090_02170de8(void);
    void func_ov090_02170e94(void);
    void func_ov090_02170ee4(void);
    void func_ov090_02170f30(void);
};

class ActorProfileUnkSPID : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkSPID();
    ~ActorProfileUnkSPID();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSPID *GetProfile();
};
