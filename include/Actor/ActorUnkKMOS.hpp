//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkKMOS_c4 : public Actor_c4 {
public:
    ActorUnkKMOS_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkKMOS : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkKMOS();

    /* 4C */ virtual ~ActorUnkKMOS() override;

    void func_ov050_02130724(void);
    void func_ov050_02130738(void);
    void func_ov050_0213074c(void);
    void func_ov050_021307b0(void);
    void func_ov050_0213087c(void);
    void func_ov050_021308d0(void);
    void func_ov050_02130d7c(void);
    void func_ov050_02130dbc(void);
    void func_ov050_02130dd8(void);
    void func_ov050_02130f14(void);
    void func_ov050_02130f48(void);
    void func_ov050_0213119c(void);
    void func_ov050_0213120c(void);
    void func_ov050_021314d0(void);
    void func_ov050_021314d4(void);
    void func_ov050_02131680(void);
    void func_ov050_021316c8(void);
    void func_ov050_02131974(void);
    void func_ov050_021319a8(void);
    void func_ov050_02131b8c(void);
    void func_ov050_02131bd8(void);
    void func_ov050_02131c84(void);
    void func_ov050_02131d20(void);
    void func_ov050_02131ea0(void);
    void func_ov050_02131f1c(void);
    void func_ov050_02131f20(void);
    void func_ov050_02131fe8(void);
    void func_ov050_02132330(void);
    void func_ov050_02132478(void);
    void func_ov050_021324dc(void);
    void func_ov050_02132640(void);
    void func_ov050_0213265c(void);
    void func_ov050_0213269c(void);
    void func_ov050_021326c0(void);
    void func_ov050_021326c4(void);
    void func_ov050_021327a8(void);
    void func_ov050_021327e4(void);
    void func_ov050_02132800(void);
    void func_ov050_02132874(void);
    void func_ov050_021328c8(void);
    void func_ov050_0213293c(void);
    void func_ov050_021329e0(void);
    void func_ov050_02132a4c(void);
    void func_ov050_02132b70(void);
    void func_ov050_02132bb4(void);
    void func_ov050_02132c34(void);
    void func_ov050_02132c9c(void);
    void func_ov050_02132cec(void);
    void func_ov050_02132d68(void);
    void func_ov050_02132d90(void);
    void func_ov050_02132db4(void);
    void func_ov050_02132dc4(void);
    void func_ov050_02132dcc(void);
    void func_ov050_02132de8(void);
    void func_ov050_02132e04(void);
    void func_ov050_02132e54(void);
};

class ActorProfileUnkKMOS : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkKMOS();
    ~ActorProfileUnkKMOS();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkKMOS *GetProfile();
};
