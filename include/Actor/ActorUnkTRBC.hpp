//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTRBC_C4 : public Actor_C4 {
public:
    ActorUnkTRBC_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkTRBC : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkTRBC();

    /* 4C */ virtual ~ActorUnkTRBC() override;

    void func_ov026_0210fec0(void);
    void func_ov026_0210fed8(void);
    void func_ov026_0210ff24(void);
    void func_ov026_02110024(void);
    void func_ov026_0211006c(void);
    void func_ov026_021100ac(void);
    void func_ov026_02110140(void);
    void func_ov026_02110150(void);
    void func_ov026_021101c8(void);
    void func_ov026_021101cc(void);
};

class ActorProfileUnkTRBC : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkTRBC();
    ~ActorProfileUnkTRBC();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkTRBC *GetProfile();
};
