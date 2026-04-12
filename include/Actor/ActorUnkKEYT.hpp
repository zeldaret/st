//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkKEYT_c4 : public Actor_c4 {
public:
    ActorUnkKEYT_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkKEYT : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkKEYT();

    /* 4C */ virtual ~ActorUnkKEYT() override;

    void func_ov041_02123c7c(void);
    void func_ov041_02123cf8(void);
    void func_ov041_02123d40(void);
    void func_ov041_02123d88(void);
    void func_ov041_02123eb8(void);
    void func_ov041_02123ff8(void);
    void func_ov041_02124094(void);
    void func_ov041_021240c0(void);
    void func_ov041_02124164(void);
};

class ActorProfileUnkKEYT : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkKEYT();
    ~ActorProfileUnkKEYT();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkKEYT *GetProfile();
};
