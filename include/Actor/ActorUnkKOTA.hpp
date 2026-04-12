//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkKOTA_c4 : public Actor_c4 {
public:
    ActorUnkKOTA_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkKOTA : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkKOTA();

    /* 4C */ virtual ~ActorUnkKOTA() override;

    void func_ov094_0216e43c(void);
    void func_ov094_0216e444(void);
    void func_ov094_0216e490(void);
    void func_ov094_0216e4a4(void);
    void func_ov094_0216e4f0(void);
    void func_ov094_0216e5a4(void);
    void func_ov094_0216e9fc(void);
    void func_ov094_0216ed94(void);
};

class ActorProfileUnkKOTA : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkKOTA();
    ~ActorProfileUnkKOTA();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkKOTA *GetProfile();
};
