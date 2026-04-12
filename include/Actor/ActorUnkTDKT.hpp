//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTDKT_c4 : public Actor_c4 {
public:
    ActorUnkTDKT_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkTDKT : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkTDKT();

    /* 4C */ virtual ~ActorUnkTDKT() override;

    void func_ov092_021771f0(void);
    void func_ov092_02177230(void);
    void func_ov092_02177244(void);
    void func_ov092_02177298(void);
    void func_ov092_021772ac(void);
    void func_ov092_02177634(void);
    void func_ov092_02177b2c(void);
    void func_ov092_02177bdc(void);
    void func_ov092_02177c48(void);
    void func_ov092_02177c58(void);
    void func_ov092_02177c88(void);
    void func_ov092_02177d00(void);
};

class ActorProfileUnkTDKT : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkTDKT();
    ~ActorProfileUnkTDKT();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkTDKT *GetProfile();
};
