//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkFIFI_C4 : public Actor_C4 {
public:
    ActorUnkFIFI_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual bool vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkFIFI : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkFIFI();

    /* 4C */ virtual ~ActorUnkFIFI() override;

    void func_ov035_0211e5d8(void);
    void func_ov035_0211e6d0(void);
};

class ActorProfileUnkFIFI : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkFIFI();
    ~ActorProfileUnkFIFI();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkFIFI *GetProfile();
};
