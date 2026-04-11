//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

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
