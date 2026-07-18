//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkQKSD_C4 : public Actor_C4 {
public:
    ActorUnkQKSD_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual bool vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkQKSD : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkQKSD();

    /* 4C */ virtual ~ActorUnkQKSD() override;

    void func_ov086_0215bc50(void);
    void func_ov086_0215bc64(void);
    void func_ov086_0215bcc8(void);
    void func_ov086_0215bcdc(void);
    void func_ov086_0215bcf0(void);
    void func_ov086_0215bd54(void);
};

class ActorProfileUnkQKSD : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkQKSD();
    ~ActorProfileUnkQKSD();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkQKSD *GetProfile();
};
