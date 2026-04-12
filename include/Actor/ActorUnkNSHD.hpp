//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkNSHD_c4 : public Actor_c4 {
public:
    ActorUnkNSHD_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkNSHD : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkNSHD();

    /* 4C */ virtual ~ActorUnkNSHD() override;

    void func_ov062_02158cc8(void);
    void func_ov062_02158ce8(void);
    void func_ov062_02158df4(void);
    void func_ov062_02158e38(void);
    void func_ov062_02158e4c(void);
};

class ActorProfileUnkNSHD : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkNSHD();
    ~ActorProfileUnkNSHD();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkNSHD *GetProfile();
};
