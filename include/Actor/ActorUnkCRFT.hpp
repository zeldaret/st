#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "Actor_Character.hpp"
#include "global.h"
#include "types.h"

class ActorUnkCRFT : public Actor_Character {
public:
    /* 000 (base) */
    /* 120 */ PAD(0x120, 0x358);
    /* 358 */

    ActorUnkCRFT();

    /* 018 */ virtual bool Init(unk32 param1) override;
    /* 01C */ virtual void Setup() override;
    /* 020 */ virtual void Update() override;
    /* 02C */ virtual void vfunc_2C(unk32 param1) override;
    /* 048 */ virtual bool vfunc_48(unk32 param1) override;
    /* 04C */ virtual ~ActorUnkCRFT() override;
    /* 054 */ virtual void vfunc_54(unk32 param1) override;
    /* 058 */ virtual void vfunc_58(ActorState param1) override;
    /* 05C */ virtual void vfunc_5C() override;
    /* 07C */ virtual unk32 vfunc_7C(unk32 param1) override;
    /* 080 */ virtual unk32 vfunc_80(unk32 param1, unk32 param2) override;
    /* 09C */ virtual void vfunc_9C() override;
    /* 0A0 */ virtual unk32 vfunc_A0() override;
    /* 0A4 */ virtual void vfunc_A4() override;
    /* 0BC */ virtual void vfunc_0BC() override;
    /* 0CC */ virtual void vfunc_0CC() override;
    /* 0D0 */ virtual void vfunc_0D0() override;
    /* 114 */ virtual void vfunc_114();
    /* 118 */ virtual void vfunc_118();
    /* 11C */ virtual void vfunc_11C();
    /* 120 */ virtual void vfunc_120();
    /* 124 */ virtual void vfunc_124();
    /* 128 */ virtual void vfunc_128();

    void func_ov058_02148710();
    void func_ov058_021487c8();
    void func_ov058_0214885c();
    void func_ov058_021488d8();
    void func_ov058_02148b04();
};

class ActorProfileUnkCRFT : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkCRFT();
    ~ActorProfileUnkCRFT();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkCRFT *GetProfile();
};
