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

    /* 00 */ virtual bool vfunc_00(RefStruct ref, unk32 param2) override;
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

#if IS_JP
class ActorUnkNSSW_138 : public UnkStruct_ov031_Items_00 {
public:
    /* 00 (base) */
    /* 04 */ unk32 mUnk_04;
    /* 08 */ ActorUnkNSSW *mUnk_08;

    ActorUnkNSSW_138(ActorUnkNSSW *actor) :
        UnkStruct_ov031_Items_00(),
        mUnk_08(actor) {}

    /* 0C */ virtual bool vfunc_0C(RefStruct ref, UnkStruct_ov031_020e54d4 *param2, const VecFx32 *param3,
                                   const VecFx32 *param4) override;
};
#endif

class ActorUnkNSSW : public Actor_Derived2 {
public:
    /* 000 (base) */
    /* 0AE */ PAD(0x0AE, 0x0B0);
    /* 0B0 */ UnkSystem6_Derived2 mUnk_0B0;
    /* 0BC */ unk32 mUnk_0BC;
    /* 0C0 */ Actor_9C mUnk_0C0;
    /* 0E0 */ ActorUnkNSSW_0E0 mUnk_0E0;
    /* 104 */ ActorUnkNSSW_104 mUnk_104;
    /* 134 */ RefStruct mUnk_134;
#if IS_JP
    /* 138 */ ActorUnkNSSW_138 mUnk_138_jp;
    /* 144 */ VecFx32Cpp mUnk_138_eur;
    /* 144 */ VecFx32Cpp mUnk_144_eur;
    /* 150 */ MtxFx33 mUnk_150_eur;
    /* 174 */ unk32 mUnk_174_eur;
    /* 178 */ unk32 mUnk_178_eur;
    /* 17C */ unk32 mUnk_17C_eur;
    /* 180 */ unk32 mUnk_180_eur;
    /* 190 */ MapObjectUnkSWSW *mUnk_184_eur;
    /* 194 */ MapObjectUnkSWSW *mUnk_188_eur;
    /* 198 */ unk16 mUnk_18C_eur;
    /* 19C */ VecFx32Cpp mUnk_190_eur;
    /* 1A8 */ bool mUnk_19C_eur;
    /* 1A9 */ bool mUnk_19D_eur;
    /* 1AC */ unk32 mUnk_1A0_eur;
#else
    /* 138 */ VecFx32Cpp mUnk_138_eur;
    /* 144 */ VecFx32Cpp mUnk_144_eur;
    /* 150 */ MtxFx33 mUnk_150_eur;
    /* 174 */ unk32 mUnk_174_eur;
    /* 178 */ unk32 mUnk_178_eur;
    /* 17C */ unk32 mUnk_17C_eur;
    /* 180 */ unk32 mUnk_180_eur;
    /* 184 */ MapObjectUnkSWSW *mUnk_184_eur;
    /* 188 */ MapObjectUnkSWSW *mUnk_188_eur;
    /* 18C */ unk16 mUnk_18C_eur;
    /* 190 */ VecFx32Cpp mUnk_190_eur;
    /* 19C */ bool mUnk_19C_eur;
    /* 19D */ bool mUnk_19D_eur;
    /* 1A0 */ unk32 mUnk_1A0_eur;
#endif
    /* 18C */

    ActorUnkNSSW();

    /* 1C */ virtual bool Init(unk32 param1) override;
    /* 20 */ virtual void Update() override;
    /* 2C */ virtual void vfunc_2C(Actor_vfunc_30 *param1) override;

    void func_ov032_02120118();
    void func_ov032_02120190();
    void func_ov032_0212025c();
    void func_ov032_021202d8();
    void func_ov032_021203fc();
    void func_ov032_02120880();
    void func_ov032_02120894(unk32 param1);
    void func_ov032_02120b34(RefStruct ref);
    void func_ov032_02120b6c();
    void func_ov032_02120b7c(VecFx32 *param1);
    void func_ov032_02120bc0();
    void func_ov032_02120bfc(Actor *actor);
#if IS_JP
    void func_ov032_02122b0c(MapObject *mapObject);
#endif
    void func_ov032_02120c64(MapObjectUnkSWSW *param1);
};

class ActorProfileUnkNSSW : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkNSSW();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkNSSW *GetProfile();
};
