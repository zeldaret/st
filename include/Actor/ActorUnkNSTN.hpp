//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkNSTN_c4 : public Actor_c4 {
public:
    ActorUnkNSTN_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkNSTN : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkNSTN();

    /* 4C */ virtual ~ActorUnkNSTN() override;

    void func_ov058_02142abc(void);
    void func_ov058_02142ad0(void);
    void func_ov058_02142ae8(void);
    void func_ov058_02142af0(void);
    void func_ov058_02142b44(void);
    void func_ov058_02142b7c(void);
    void func_ov058_02142bac(void);
    void func_ov058_02142bb8(void);
    void func_ov058_02142bc4(void);
    void func_ov058_02142bd0(void);
    void func_ov058_02142bdc(void);
    void func_ov058_02142be8(void);
    void func_ov058_02142bf4(void);
    void func_ov058_02142c00(void);
    void func_ov058_02142c0c(void);
    void func_ov058_02142c20(void);
    void func_ov058_02142c34(void);
    void func_ov058_02142d08(void);
};

class ActorProfileUnkNSTN : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkNSTN();
    ~ActorProfileUnkNSTN();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkNSTN *GetProfile();
};
