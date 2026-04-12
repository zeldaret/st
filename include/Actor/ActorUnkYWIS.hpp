//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkYWIS_c4 : public Actor_c4 {
public:
    ActorUnkYWIS_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkYWIS : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkYWIS();

    /* 4C */ virtual ~ActorUnkYWIS() override;

    void func_ov065_021597bc(void);
    void func_ov065_021597c4(void);
    void func_ov065_021597f4(void);
    void func_ov065_02159808(void);
    void func_ov065_02159810(void);
};

class ActorProfileUnkYWIS : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkYWIS();
    ~ActorProfileUnkYWIS();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkYWIS *GetProfile();
};
