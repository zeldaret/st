//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkCRCH_c4 : public Actor_c4 {
public:
    ActorUnkCRCH_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkCRCH : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkCRCH();

    /* 4C */ virtual ~ActorUnkCRCH() override;

    void func_ov049_021341cc(void);
    void func_ov049_021341d4(void);
    void func_ov049_0213420c(void);
    void func_ov049_021342f0(void);
    void func_ov049_021343c8(void);
    void func_ov049_021343cc(void);
    void func_ov049_021343d4(void);
    void func_ov049_021343e4(void);
};

class ActorProfileUnkCRCH : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkCRCH();
    ~ActorProfileUnkCRCH();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkCRCH *GetProfile();
};
