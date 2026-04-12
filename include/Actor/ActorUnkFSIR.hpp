//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkFSIR_c4 : public Actor_c4 {
public:
    ActorUnkFSIR_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkFSIR : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkFSIR();

    /* 4C */ virtual ~ActorUnkFSIR() override;

    void func_ov056_0213af0c(void);
    void func_ov056_0213af70(void);
    void func_ov056_0213af9c(void);
    void func_ov056_0213b028(void);
    void func_ov056_0213b088(void);
    void func_ov056_0213b0e4(void);
    void func_ov056_0213b134(void);
    void func_ov056_0213b138(void);
    void func_ov056_0213b13c(void);
    void func_ov056_0213b140(void);
    void func_ov056_0213b144(void);
    void func_ov056_0213b148(void);
    void func_ov056_0213b234(void);
};

class ActorProfileUnkFSIR : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkFSIR();
    ~ActorProfileUnkFSIR();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkFSIR *GetProfile();
};
