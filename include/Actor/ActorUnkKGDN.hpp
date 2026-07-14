//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkKGDN_C4 : public Actor_C4 {
public:
    ActorUnkKGDN_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkKGDN : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkKGDN();

    /* 4C */ virtual ~ActorUnkKGDN() override;

    void func_ov041_02124248(void);
    void func_ov041_021242c4(void);
    void func_ov041_0212430c(void);
    void func_ov041_0212450c(void);
    void func_ov041_02124624(void);
    void func_ov041_02124700(void);
    void func_ov041_02124928(void);
    void func_ov041_02124998(void);
    void func_ov041_02124a30(void);
    void func_ov041_02124a90(void);
    void func_ov041_02124ac4(void);
};

class ActorProfileUnkKGDN : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkKGDN();
    ~ActorProfileUnkKGDN();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkKGDN *GetProfile();
};
