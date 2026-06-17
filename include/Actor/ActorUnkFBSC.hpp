//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkFBSC_c4 : public Actor_c4 {
public:
    ActorUnkFBSC_c4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkFBSC : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkFBSC();

    /* 4C */ virtual ~ActorUnkFBSC() override;

    void func_ov058_0214aab8(void);
    void func_ov058_0214aacc(void);
    void func_ov058_0214ab04(void);
    void func_ov058_0214ab34(void);
    void func_ov058_0214ab68(void);
    void func_ov058_0214ab78(void);
};

class ActorProfileUnkFBSC : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkFBSC();
    ~ActorProfileUnkFBSC();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkFBSC *GetProfile();
};
