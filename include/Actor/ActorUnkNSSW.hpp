#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "MapObject/MapObjectUnkSWSW.hpp"
#include "global.h"
#include "types.h"

class ActorUnkNSSW;

class ActorUnkNSSW_0E0 : public Actor_C4 {
public:
    /* 00 (base) */
    /* 24 */

    ActorUnkNSSW_0E0(ActorUnkNSSW *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual bool vfunc_04() override;
    /* 0C */ virtual void vfunc_0C(VecFx32 *param1) override;
};

class ActorUnkNSSW_104 : public UnkStruct_ov031_Items_01 {
public:
    /* 00 (base) */
    /* 2C */ ActorUnkNSSW *mUnk_2C;
    /* 30 */

    ActorUnkNSSW_104(ActorUnkNSSW *actor);

    /* 10 */ virtual void vfunc_10(Actor *actor) override;
};

class ActorUnkNSSW : public Actor_Derived2 {
public:
    /* 000 (base) */
    /* 0AE */ STRUCT_PAD(0x0AE, 0x0B0);
    /* 0B0 */ UnkSystem6_Derived2 mUnk_0B0;
    /* 0BC */ unk32 mUnk_0BC;
    /* 0C0 */ Actor_9C mUnk_0C0;
    /* 0E0 */ ActorUnkNSSW_0E0 mUnk_0E0;
    /* 104 */ ActorUnkNSSW_104 mUnk_104;
    /* 134 */ ActorRef mUnk_134;
    /* 138 */ VecFx32 mUnk_138;
    /* 144 */ unk32 mUnk_144;
    /* 148 */ unk32 mUnk_148;
    /* 14C */ unk32 mUnk_14C;
    /* 150 */ Mat3p mUnk_150;
    /* 174 */ unk32 mUnk_174;
    /* 178 */ unk32 mUnk_178;
    /* 17C */ unk32 mUnk_17C;
    /* 180 */ unk32 mUnk_180;
#if IS_JP
    /* 184 */ STRUCT_PAD(0x184, 0x190);
    /* 190 */ MapObjectUnkSWSW *mUnk_184_eur;
    /* 194 */ MapObjectUnkSWSW *mUnk_188_eur;
    /* 198 */ unk16 mUnk_18C_eur;
    /* 19C */ unk32 mUnk_190_eur;
    /* 1A0 */ unk32 mUnk_194_eur;
    /* 1A4 */ unk32 mUnk_198_eur;
    /* 1A8 */ STRUCT_PAD(0x1A8, 0x1A9);
    /* 1A9 */ unk8 mUnk_19D_eur;
#else
    /* 184 */ MapObjectUnkSWSW *mUnk_184_eur;
    /* 188 */ MapObjectUnkSWSW *mUnk_188_eur;
    /* 18C */ unk16 mUnk_18C_eur;
    /* 190 */ unk32 mUnk_190_eur;
    /* 194 */ unk32 mUnk_194_eur;
    /* 198 */ unk32 mUnk_198_eur;
    /* 19C */ STRUCT_PAD(0x19C, 0x19D);
    /* 19D */ unk8 mUnk_19D_eur;
#endif
    /* 18C */

    ActorUnkNSSW();

    /* 1C */ virtual bool Init(unk32 param1) override;
    /* 20 */ virtual void Setup() override;
    /* 2C */ virtual void vfunc_2C(Actor_vfunc_30 *param1) override;

    void func_ov032_02120118();
    void func_ov032_02120190();
    void func_ov032_0212025c();
    void func_ov032_021202d8();
    void func_ov032_021203fc();
    void func_ov032_02120880();
    void func_ov032_02120894(unk32 param1);
    void func_ov032_02120b34(ActorRef ref);
    void func_ov032_02120b6c();
    void func_ov032_02120b7c(VecFx32 *param1);
    void func_ov032_02120bc0();
    void func_ov032_02120bfc();
    void func_ov032_02120c64(MapObjectUnkSWSW *param1);
};

class ActorProfileUnkNSSW : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkNSSW();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkNSSW *GetProfile();
};
