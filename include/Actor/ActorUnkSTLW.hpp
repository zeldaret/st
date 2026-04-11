//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSTLW : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSTLW();

    /* 4C */ virtual ~ActorUnkSTLW() override;

    void func_ov052_021306d8(void);
    void func_ov052_021307d4(void);
    void func_ov052_021308c4(void);
    void func_ov052_02130918(void);
    void func_ov052_0213093c(void);
    void func_ov052_021309d0(void);
    void func_ov052_02130cd0(void);
    void func_ov052_02130d88(void);
    void func_ov052_02130e08(void);
    void func_ov052_02130e70(void);
    void func_ov052_02130f30(void);
    void func_ov052_02130f84(void);
    void func_ov052_02130f94(void);
    void func_ov052_02131020(void);
    void func_ov052_021310ec(void);
    void func_ov052_021311a4(void);
    void func_ov052_02131224(void);
    void func_ov052_021312a8(void);
    void func_ov052_02131380(void);
    void func_ov052_02131460(void);
    void func_ov052_02131670(void);
    void func_ov052_02131754(void);
    void func_ov052_021319b8(void);
    void func_ov052_02131a34(void);
    void func_ov052_02131ad0(void);
    void func_ov052_02131bbc(void);
    void func_ov052_02131c38(void);
    void func_ov052_02131d70(void);
    void func_ov052_02131e6c(void);
    void func_ov052_02131eb4(void);
    void func_ov052_02131ecc(void);
    void func_ov052_02131f10(void);
    void func_ov052_02131fec(void);
    void func_ov052_02132058(void);
    void func_ov052_02132070(void);
    void func_ov052_021320f8(void);
    void func_ov052_0213222c(void);
    void func_ov052_02132378(void);
    void func_ov052_02132474(void);
    void func_ov052_02132504(void);
    void func_ov052_021325e4(void);
    void func_ov052_02132608(void);
    void func_ov052_0213267c(void);
    void func_ov052_02132718(void);
    void func_ov052_02132790(void);
    void func_ov052_02132834(void);
    void func_ov052_0213284c(void);
    void func_ov052_02132c04(void);
    void func_ov052_02132c6c(void);
    void func_ov052_02132c94(void);
    void func_ov052_02132d7c(void);
    void func_ov052_02132dac(void);
    void func_ov052_02132e40(void);
    void func_ov052_02132fcc(void);
    void func_ov052_021330d8(void);
    void func_ov052_021330fc(void);
    void func_ov052_02133128(void);
    void func_ov052_02133134(void);
};

class ActorProfileUnkSTLW : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkSTLW();
    ~ActorProfileUnkSTLW();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSTLW *GetProfile();
};
