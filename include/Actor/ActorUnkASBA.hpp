//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkASBA_c4 : public Actor_c4 {
public:
    ActorUnkASBA_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkASBA : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkASBA();

    /* 4C */ virtual ~ActorUnkASBA() override;

    void func_ov077_02157154(void);
    void func_ov077_02157168(void);
    void func_ov077_02157228(void);
    void func_ov077_02157520(void);
    void func_ov077_021575e8(void);
    void func_ov077_021576b4(void);
    void func_ov077_0215772c(void);
    void func_ov077_0215784c(void);
    void func_ov077_021578a4(void);
    void func_ov077_021578dc(void);
    void func_ov077_021579bc(void);
    void func_ov077_021579f8(void);
    void func_ov077_02157a80(void);
};

class ActorProfileUnkASBA : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkASBA();
    ~ActorProfileUnkASBA();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkASBA *GetProfile();
};
