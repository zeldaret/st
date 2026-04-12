//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSWBM_c4 : public Actor_c4 {
public:
    ActorUnkSWBM_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkSWBM : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSWBM();

    /* 4C */ virtual ~ActorUnkSWBM() override;

    void func_ov031_020e6c60(void);
    void func_ov031_020e6c74(void);
    void func_ov031_020e6c88(void);
    void func_ov031_020e6d48(void);
    void func_ov031_020e6d80(void);
    void func_ov031_020e6e84(void);
    void func_ov031_020e6ef8(void);
    void func_ov031_020e7160(void);
    void func_ov031_020e718c(void);
    void func_ov031_020e7294(void);
    void func_ov031_020e72f0(void);
    void func_ov031_020e7334(void);
};

class ActorProfileUnkSWBM : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkSWBM();
    ~ActorProfileUnkSWBM();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSWBM *GetProfile();
};
