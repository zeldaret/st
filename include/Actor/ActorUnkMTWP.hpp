//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkMTWP_c4 : public Actor_c4 {
public:
    ActorUnkMTWP_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkMTWP : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkMTWP();

    /* 4C */ virtual ~ActorUnkMTWP() override;

    void func_ov092_0216f7dc(void);
    void func_ov092_0216f820(void);
    void func_ov092_0216f874(void);
    void func_ov092_0216f8cc(void);
    void func_ov092_0216f8ec(void);
    void func_ov092_0216f90c(void);
    void func_ov092_0216f944(void);
    void func_ov092_0216f984(void);
    void func_ov092_0216fce0(void);
    void func_ov092_0216fd24(void);
    void func_ov092_0217006c(void);
    void func_ov092_021700bc(void);
    void func_ov092_021700e4(void);
    void func_ov092_02170118(void);
    void func_ov092_02170230(void);
};

class ActorProfileUnkMTWP : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkMTWP();
    ~ActorProfileUnkMTWP();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkMTWP *GetProfile();
};
