//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkGRCM_c4 : public Actor_c4 {
public:
    ActorUnkGRCM_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkGRCM : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkGRCM();

    /* 4C */ virtual ~ActorUnkGRCM() override;

    void func_ov085_02150c58(void);
    void func_ov085_02150cb8(void);
    void func_ov085_02150cc8(void);
    void func_ov085_02150e64(void);
    void func_ov085_02150e6c(void);
    void func_ov085_02150eb0(void);
    void func_ov085_02150efc(void);
};

class ActorProfileUnkGRCM : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkGRCM();
    ~ActorProfileUnkGRCM();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkGRCM *GetProfile();
};
