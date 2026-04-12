//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkDMGN_c4 : public Actor_c4 {
public:
    ActorUnkDMGN_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkDMGN : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkDMGN();

    /* 4C */ virtual ~ActorUnkDMGN() override;

    void func_ov067_0215ad2c(void);
    void func_ov067_0215ad54(void);
    void func_ov067_0215ad9c(void);
    void func_ov067_0215adb0(void);
    void func_ov067_0215adfc(void);
    void func_ov067_0215ae60(void);
    void func_ov067_0215ae64(void);
    void func_ov067_0215aec8(void);
    void func_ov067_0215aecc(void);
    void func_ov067_0215af30(void);
    void func_ov067_0215af34(void);
    void func_ov067_0215afa4(void);
    void func_ov067_0215afd8(void);
};

class ActorProfileUnkDMGN : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkDMGN();
    ~ActorProfileUnkDMGN();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkDMGN *GetProfile();
};
