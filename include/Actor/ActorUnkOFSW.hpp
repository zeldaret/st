//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkOFSW_c4 : public Actor_c4 {
public:
    ActorUnkOFSW_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkOFSW : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkOFSW();

    /* 4C */ virtual ~ActorUnkOFSW() override;

    void func_ov077_0215ab4c(void);
    void func_ov077_0215ab6c(void);
    void func_ov077_0215abc4(void);
};

class ActorProfileUnkOFSW : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkOFSW();
    ~ActorProfileUnkOFSW();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkOFSW *GetProfile();
};
