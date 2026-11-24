#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "ActorUnkZLSL_ZSRS.hpp"
#include "Unknown/UnkStruct_ov031_Items.hpp"
#include "global.h"
#include "types.h"

class ActorUnkFBRD;

class ActorUnkFBRD_1CC : public Actor_9C {
public:
    /* 00 (base) */
    /* 20 */

    /* 04 */ virtual unk32 vfunc_04(RefStruct param1, unk32 param2, unk32 param3, unk32 *param4) override;
};

class ActorUnkFBRD_1F8 : public UnkStruct_ov031_Items_00_Base {
public:
    /* 00 (base) */
    /* 04 */ ActorUnkFBRD *mUnk_04;
    /* 08 */ bool mUnk_08;
    /* 09 */ bool mUnk_09;
    /* 10 */
    /* 1C */

    ActorUnkFBRD_1F8(ActorUnkFBRD *actor);

    /* 08 */ virtual bool vfunc_08(const UnkStruct_ov031_020f3310 *param1, unk32 param2) override;
    /* 10 */ virtual bool vfunc_10(RefStruct param1, unk32 param2) override;
};

class ActorUnkFBRD : public Actor {
public:
    /* 000 (base) */
    /* 094 */ PAD(0x094, 0x100);
    /* 100 */ UnkStruct_ov000_020b31f0 mUnk_100;
    /* 12C */ PAD(0x12C, 0x1CC);
    /* 1CC */ ActorUnkFBRD_1CC mUnk_1CC;
    /* 1EC */ PAD(0x1EC, 0x1F8);
    /* 1F8 */ ActorUnkFBRD_1F8 mUnk_1F8;
    /* 204 */ PAD(0x204, 0x258);
    /* 258 */

    ActorUnkFBRD();

    /* 18 */ virtual bool Init(unk32 param1) override;
    /* 1C */ virtual void Setup() override;
    /* 20 */ virtual void Update() override;
    /* 24 */ virtual void vfunc_24() override;
    /* 2C */ virtual void vfunc_2C(unk32 param1) override;
    /* 4C */ virtual ~ActorUnkFBRD() override;

    void func_ov058_02149314();
    void func_ov058_02149354();
    void func_ov058_0214938c();
    void func_ov058_021494c0();
    void func_ov058_0214951c();
    void func_ov058_02149574();
    void func_ov058_021495fc();
    void func_ov058_021496e4();
    void func_ov058_021498b4();
    void func_ov058_02149bcc();
    void func_ov058_02149c5c();
    void func_ov058_02149d84();
    void func_ov058_02149d98();
    void func_ov058_0214a36c();
    void func_ov058_0214a384();
    void func_ov058_0214a7e0();
    void func_ov058_0214a840();
    void func_ov058_0214a8d0();
    void func_ov058_0214a8e4();
};

class ActorProfileUnkFBRD : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkFBRD();
    ~ActorProfileUnkFBRD();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkFBRD *GetProfile();
};
