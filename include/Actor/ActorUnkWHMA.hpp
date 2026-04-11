//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkWHMA : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkWHMA();

    /* 4C */ virtual ~ActorUnkWHMA() override;

    void func_ov082_02152d1c(void);
    void func_ov082_02152eec(void);
    void func_ov082_02152f68(void);
    void func_ov082_02152fb0(void);
    void func_ov082_02153004(void);
    void func_ov082_02153198(void);
    void func_ov082_02153208(void);
    void func_ov082_02153230(void);
    void func_ov082_0215326c(void);
    void func_ov082_021532ec(void);
    void func_ov082_02153384(void);
    void func_ov082_02153420(void);
    void func_ov082_02153510(void);
    void func_ov082_0215358c(void);
    void func_ov082_02153634(void);
    void func_ov082_02153708(void);
    void func_ov082_02153a10(void);
    void func_ov082_02153b48(void);
    void func_ov082_02153e78(void);
    void func_ov082_02153ef4(void);
    void func_ov082_02154180(void);
    void func_ov082_02154368(void);
    void func_ov082_02154624(void);
    void func_ov082_02154740(void);
    void func_ov082_02154938(void);
    void func_ov082_02154a28(void);
    void func_ov082_02154ce4(void);
    void func_ov082_02154e10(void);
    void func_ov082_02155030(void);
    void func_ov082_02155124(void);
    void func_ov082_021551c0(void);
    void func_ov082_02155290(void);
    void func_ov082_02155300(void);
    void func_ov082_0215542c(void);
    void func_ov082_0215549c(void);
    void func_ov082_0215582c(void);
    void func_ov082_021558f4(void);
    void func_ov082_02155954(void);
    void func_ov082_02155a14(void);
    void func_ov082_02155aa4(void);
    void func_ov082_02155b5c(void);
    void func_ov082_02155c30(void);
    void func_ov082_02155d20(void);
    void func_ov082_02155dd0(void);
    void func_ov082_02155e60(void);
    void func_ov082_02155ebc(void);
    void func_ov082_02155f30(void);
    void func_ov082_02155f80(void);
    void func_ov082_0215641c(void);
    void func_ov082_021564a8(void);
    void func_ov082_02156638(void);
    void func_ov082_02156654(void);
    void func_ov082_021566cc(void);
    void func_ov082_02156728(void);
    void func_ov082_02156750(void);
    void func_ov082_02156844(void);
    void func_ov082_02156930(void);
    void func_ov082_0215695c(void);
    void func_ov082_02156a1c(void);
    void func_ov082_02156b08(void);
    void func_ov082_02156cf8(void);
    void func_ov082_02156e6c(void);
    void func_ov082_02157348(void);
    void func_ov082_021574f4(void);
    void func_ov082_021575e0(void);
    void func_ov082_0215765c(void);
    void func_ov082_02157680(void);
    void func_ov082_021576ac(void);
};

class ActorProfileUnkWHMA : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkWHMA();
    ~ActorProfileUnkWHMA();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkWHMA *GetProfile();
};
