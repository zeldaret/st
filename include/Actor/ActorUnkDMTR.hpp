//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkDMTR_C4 : public Actor_C4 {
public:
    ActorUnkDMTR_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkDMTR : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkDMTR();

    /* 4C */ virtual ~ActorUnkDMTR() override;

    void func_ov088_0216c74c(void);
    void func_ov088_0216c818(void);
    void func_ov088_0216cb08(void);
    void func_ov088_0216cbf0(void);
};

class ActorProfileUnkDMTR : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkDMTR();
    ~ActorProfileUnkDMTR();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkDMTR *GetProfile();
};
