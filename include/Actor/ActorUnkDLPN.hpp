//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkDLPN_c4 : public Actor_c4 {
public:
    ActorUnkDLPN_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkDLPN : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkDLPN();

    /* 4C */ virtual ~ActorUnkDLPN() override;

    void func_ov029_02146dc4(void);
    void func_ov029_02146dd8(void);
    void func_ov029_02146dec(void);
    void func_ov029_02146f70(void);
    void func_ov029_02146f84(void);
    void func_ov029_02147078(void);
    void func_ov029_021471f8(void);
    void func_ov029_0214726c(void);
    void func_ov029_0214738c(void);
    void func_ov029_021473e4(void);
    void func_ov029_02147448(void);
    void func_ov029_02147454(void);
    void func_ov029_02147470(void);
    void func_ov029_02147554(void);
    void func_ov029_02147668(void);
    void func_ov029_0214771c(void);
    void func_ov029_0214805c(void);
    void func_ov029_021481a0(void);
    void func_ov029_0214869c(void);
    void func_ov029_02148780(void);
    void func_ov029_02148dd0(void);
    void func_ov029_02148ed0(void);
    void func_ov029_02149164(void);
    void func_ov029_02149234(void);
    void func_ov029_0214964c(void);
    void func_ov029_02149690(void);
    void func_ov029_0214977c(void);
    void func_ov029_02149790(void);
    void func_ov029_02149900(void);
    void func_ov029_02149a08(void);
    void func_ov029_02149a6c(void);
    void func_ov029_02149b9c(void);
    void func_ov029_02149bfc(void);
    void func_ov029_02149c34(void);
    void func_ov029_02149c4c(void);
    void func_ov029_02149c70(void);
    void func_ov029_02149c9c(void);
};

class ActorProfileUnkDLPN : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkDLPN();
    ~ActorProfileUnkDLPN();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkDLPN *GetProfile();
};
