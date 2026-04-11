//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkDMPK : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkDMPK();

    /* 4C */ virtual ~ActorUnkDMPK() override;

    void func_ov088_02170e68(void);
    void func_ov088_02170e7c(void);
    void func_ov088_02170fdc(void);
    void func_ov088_02171018(void);
    void func_ov088_02171020(void);
    void func_ov088_02171030(void);
    void func_ov088_02171044(void);
    void func_ov088_02171058(void);
    void func_ov088_02171098(void);
    void func_ov088_021710b8(void);
    void func_ov088_0217111c(void);
    void func_ov088_0217114c(void);
};

class ActorProfileUnkDMPK : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkDMPK();
    ~ActorProfileUnkDMPK();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkDMPK *GetProfile();
};
