//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkICBB_c4 : public Actor_c4 {
public:
    ActorUnkICBB_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkICBB : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkICBB();

    /* 4C */ virtual ~ActorUnkICBB() override;

    void func_ov044_02125f58(void);
    void func_ov044_02125f8c(void);
    void func_ov044_021262c4(void);
    void func_ov044_021262d8(void);
    void func_ov044_021262ec(void);
    void func_ov044_02126314(void);
    void func_ov044_0212645c(void);
    void func_ov044_021265b4(void);
    void func_ov044_02126654(void);
    void func_ov044_021266ac(void);
    void func_ov044_021266fc(void);
    void func_ov044_02126acc(void);
    void func_ov044_02126b00(void);
    void func_ov044_02126d64(void);
    void func_ov044_02126dd4(void);
    void func_ov044_02126e5c(void);
    void func_ov044_02126f00(void);
    void func_ov044_0212716c(void);
    void func_ov044_02127208(void);
    void func_ov044_02127594(void);
    void func_ov044_02127630(void);
    void func_ov044_02127908(void);
    void func_ov044_02127a18(void);
    void func_ov044_02127cc0(void);
    void func_ov044_02127e54(void);
    void func_ov044_021280d4(void);
    void func_ov044_021281fc(void);
    void func_ov044_02128344(void);
    void func_ov044_02128434(void);
    void func_ov044_0212849c(void);
    void func_ov044_021284e0(void);
    void func_ov044_02128594(void);
    void func_ov044_021285d0(void);
    void func_ov044_02128688(void);
    void func_ov044_02128868(void);
    void func_ov044_02128914(void);
    void func_ov044_02128b94(void);
    void func_ov044_02128cb0(void);
    void func_ov044_02128d20(void);
    void func_ov044_02129128(void);
    void func_ov044_0212919c(void);
    void func_ov044_021291d0(void);
    void func_ov044_02129244(void);
    void func_ov044_021292a8(void);
    void func_ov044_0212936c(void);
    void func_ov044_021293b0(void);
    void func_ov044_021293e4(void);
    void func_ov044_02129440(void);
    void func_ov044_0212951c(void);
    void func_ov044_02129554(void);
    void func_ov044_02129768(void);
    void func_ov044_021297fc(void);
    void func_ov044_0212984c(void);
    void func_ov044_02129870(void);
    void func_ov044_02129948(void);
    void func_ov044_02129a5c(void);
    void func_ov044_02129d34(void);
    void func_ov044_02129e70(void);
    void func_ov044_02129f88(void);
    void func_ov044_0212a244(void);
    void func_ov044_0212a2b0(void);
    void func_ov044_0212a2f8(void);
    void func_ov044_0212a3a4(void);
    void func_ov044_0212a3c8(void);
    void func_ov044_0212a3f4(void);
    void func_ov044_0212a410(void);
};

class ActorProfileUnkICBB : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkICBB();
    ~ActorProfileUnkICBB();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkICBB *GetProfile();
};
