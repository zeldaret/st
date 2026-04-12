//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkFLDK_c4 : public Actor_c4 {
public:
    ActorUnkFLDK_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkFLDK : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkFLDK();

    /* 4C */ virtual ~ActorUnkFLDK() override;

    void func_ov047_021354a4(void);
    void func_ov047_02135570(void);
};

class ActorProfileUnkFLDK : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkFLDK();
    ~ActorProfileUnkFLDK();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkFLDK *GetProfile();
};
