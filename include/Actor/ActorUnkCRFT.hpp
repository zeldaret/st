//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkCRFT_c4 : public Actor_c4 {
public:
    ActorUnkCRFT_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkCRFT : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkCRFT();

    /* 4C */ virtual ~ActorUnkCRFT() override;

    void func_ov058_02148148(void);
    void func_ov058_02148178(void);
    void func_ov058_021481cc(void);
    void func_ov058_0214827c(void);
    void func_ov058_021482f8(void);
    void func_ov058_021483fc(void);
    void func_ov058_02148448(void);
    void func_ov058_0214847c(void);
    void func_ov058_021484e0(void);
    void func_ov058_02148514(void);
    void func_ov058_02148590(void);
    void func_ov058_0214860c(void);
    void func_ov058_0214869c(void);
    void func_ov058_02148710(void);
    void func_ov058_02148724(void);
    void func_ov058_02148760(void);
    void func_ov058_021487c8(void);
    void func_ov058_021487e4(void);
    void func_ov058_021487ec(void);
    void func_ov058_0214881c(void);
    void func_ov058_0214885c(void);
    void func_ov058_021488d8(void);
    void func_ov058_02148904(void);
    void func_ov058_021489a8(void);
    void func_ov058_02148a6c(void);
    void func_ov058_02148a98(void);
    void func_ov058_02148b04(void);
};

class ActorProfileUnkCRFT : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkCRFT();
    ~ActorProfileUnkCRFT();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkCRFT *GetProfile();
};
