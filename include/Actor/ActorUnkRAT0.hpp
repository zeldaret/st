//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRAT0_c4 : public Actor_c4 {
public:
    ActorUnkRAT0_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkRAT0 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRAT0();

    /* 4C */ virtual ~ActorUnkRAT0() override;

    void func_ov053_0213b4ac(void);
    void func_ov053_0213b4c0(void);
    void func_ov053_0213b530(void);
    void func_ov053_0213b554(void);
    void func_ov053_0213b790(void);
    void func_ov053_0213b80c(void);
    void func_ov053_0213b86c(void);
    void func_ov053_0213b924(void);
    void func_ov053_0213b9b0(void);
    void func_ov053_0213b9cc(void);
    void func_ov053_0213b9d0(void);
    void func_ov053_0213ba44(void);
    void func_ov053_0213bab4(void);
    void func_ov053_0213bac4(void);
    void func_ov053_0213baec(void);
    void func_ov053_0213bb28(void);
    void func_ov053_0213bb50(void);
    void func_ov053_0213bb54(void);
    void func_ov053_0213bc08(void);
    void func_ov053_0213bd04(void);
    void func_ov053_0213bd74(void);
    void func_ov053_0213c044(void);
    void func_ov053_0213c0d0(void);
    void func_ov053_0213c364(void);
    void func_ov053_0213c3a4(void);
    void func_ov053_0213c3f0(void);
    void func_ov053_0213c404(void);
    void func_ov053_0213c42c(void);
    void func_ov053_0213c4bc(void);
    void func_ov053_0213c4f8(void);
    void func_ov053_0213c690(void);
    void func_ov053_0213c804(void);
    void func_ov053_0213c824(void);
    void func_ov053_0213c8a4(void);
    void func_ov053_0213c910(void);
    void func_ov053_0213c91c(void);
    void func_ov053_0213c940(void);
    void func_ov053_0213c984(void);
    void func_ov053_0213c9b0(void);
    void func_ov053_0213c9cc(void);
    void func_ov053_0213ca50(void);
};

class ActorProfileUnkRAT0 : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRAT0();
    ~ActorProfileUnkRAT0();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRAT0 *GetProfile();
};
