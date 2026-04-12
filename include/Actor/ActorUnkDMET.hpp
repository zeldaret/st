//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkDMET_c4 : public Actor_c4 {
public:
    ActorUnkDMET_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkDMET : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkDMET();

    /* 4C */ virtual ~ActorUnkDMET() override;

    void func_ov088_0217205c(void);
    void func_ov088_02172070(void);
    void func_ov088_021720c4(void);
    void func_ov088_021720d4(void);
    void func_ov088_021720e8(void);
    void func_ov088_021720fc(void);
    void func_ov088_0217213c(void);
    void func_ov088_0217218c(void);
};

class ActorProfileUnkDMET : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkDMET();
    ~ActorProfileUnkDMET();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkDMET *GetProfile();
};
