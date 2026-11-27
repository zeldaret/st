#pragma once

#include "MapObject/MapObject_10_Pot.hpp"

class Actor;
class UnkStruct_ov031_020f3310;
class UnkStruct_ov031_020e54d4;

class UnkStruct_027e0ce0_38_Base {
public:
    /* 00 (vtable) */
    /* 04 */

    // data_ov000_020b2838
    /* 00 */ virtual ~UnkStruct_027e0ce0_38_Base();
    /* 08 */ virtual bool vfunc_08(const UnkStruct_ov031_020f3310 *param1, unk32 param2);
    /* 0C */ virtual bool vfunc_0C(RefStruct ref, UnkStruct_ov031_020e54d4 *param2, const VecFx32 *param3,
                                   const VecFx32 *param4);
    /* 10 */ virtual bool vfunc_10(RefStruct param1, unk32 param2);
    /* 14 */
};

class UnkStruct_ov031_Items_00_Base : public UnkStruct_027e0ce0_38_Base {
public:
    /* 00 (vtable) */
    /* 04 */

    UnkStruct_ov031_Items_00_Base() {}

    /* 00 */ virtual ~UnkStruct_ov031_Items_00_Base();
};

class UnkStruct_ov031_Items_00 : public UnkStruct_ov031_Items_00_Base {
public:
    /* 00 (vtable) */
    /* 04 */

    UnkStruct_ov031_Items_00();

    // data_ov000_020b30d0
    /* 08 */ virtual bool vfunc_08(const UnkStruct_ov031_020f3310 *param1, unk32 param2) override; // func_ov000_020982d8
};

class UnkStruct_ov031_Items_01_Base {
public:
    /* 00 (vtable) */
    /* 04 */ RefStruct mUnk_04;
    /* 08 */ unk16 mUnk_08;
    /* 0C */

    UnkStruct_ov031_Items_01_Base() :
        mUnk_04(0x0),
        mUnk_08(0x0) {}

    /* 00 */ virtual ~UnkStruct_ov031_Items_01_Base();
};

class UnkStruct_ov031_Items_01 : public UnkStruct_ov031_Items_01_Base {
public:
    /* 00 (vtable) */
    /* 08 */ unk16 mUnk_0A;
    /* 0C */ Sphere mUnk_0C;
    /* 1C */ unk32 mUnk_1C;
    /* 20 */ unk32 mUnk_20;
    /* 24 */ unk32 mUnk_24;
    /* 28 */ unk32 mUnk_28;
    /* 2C */

    UnkStruct_ov031_Items_01() {
        this->mUnk_0C.Init(FX_F32_TO_FX32(0.0f));
        this->mUnk_1C = 0;
        this->mUnk_20 = 0;
        this->mUnk_24 = 0;
        this->mUnk_28 = 0;
    }

    // data_ov000_020b27c8
    /* 08 */ virtual void vfunc_08();
    /* 0C */ virtual bool vfunc_0C(Actor *param1, VecFx32 *vector);
    /* 10 */ virtual void vfunc_10(const Actor *actor);
};

class ActorUnkSCCN_B8 {
public:
    /* 00 (vtable) */
    /* 04 */ RefStruct mUnk_04;
    /* 08 */ VecFx32 *mUnk_08;
    /* 0C */ MapObject_10_Base *mUnk_0C;
    /* 10 */

    ActorUnkSCCN_B8();

    // data_ov000_020b287c
    /* 00 */ virtual ~ActorUnkSCCN_B8();
    /* 08 */ virtual bool vfunc_08(RefStruct ref, unk32 param2, unk32 param3);
};

class UnkStruct_ov031_Items_02_38 : public ActorUnkSCCN_B8 {
public:
    // data_ov031_02112a5c
    /* 08 */ virtual bool vfunc_08(RefStruct ref, unk32 param2, unk32 param3) override;
};

class UnkStruct_ov031_Items_02 {
public:
    /* 00 */ VecFx32Cpp mUnk_00;
    /* 0C */ unk32 mUnk_0C;
    /* 10 */ RefStruct mUnk_10;
    /* 14 */ bool mUnk_14;
    /* 18 */ MapObject_10_Pot mUnk_18;
    /* 38 */ UnkStruct_ov031_Items_02_38 mUnk_38;
    /* 48 */

    UnkStruct_ov031_Items_02();
    UnkStruct_ov031_Items_02(unk32 param1, bool param2);
    ~UnkStruct_ov031_Items_02();

    // overlay 31
    void func_ov031_020d8e88();
    void func_ov031_020d8f24();
    void func_ov031_020d8f58(unk16 param1);
    void func_ov031_020d8f98();
};

class UnkStruct_ov031_Items_01_Derived1 : public UnkStruct_ov031_Items_01 {
public:
    /* 00 (base) */
    /* 2C */ PlayerType mPlayerType;
    /* 30 */ unk16 mUnk_30;
    /* 34 */

    UnkStruct_ov031_Items_01_Derived1(PlayerType playerType);

    // data_ov031_02112ae0
    /* 0C */ virtual bool vfunc_0C(Actor *param1, VecFx32 *vector) override;
};

class UnkStruct_ov031_Items_01_Derived2 : public UnkStruct_ov031_Items_01 {
public:
    /* 00 (base) */
    /* 2C */ PlayerType mPlayerType;
    /* 30 */

    UnkStruct_ov031_Items_01_Derived2(PlayerType playerType);

    // data_ov031_02112afc
    /* 0C */ virtual bool vfunc_0C(Actor *param1, VecFx32 *vector) override;
};

class UnkStruct_ItemManager_20_04_32C;

class UnkStruct_ov031_02112b24 : public UnkStruct_ov031_Items_00_Base {
public:
    /* 00 (base) */
    /* 04 */ UnkStruct_ItemManager_20_04_32C *mUnk_04;
    /* 08 */ u16 mUnk_08;
    /* 0C */

    // data_ov031_02112b24
    /* 0C */ virtual bool vfunc_0C(RefStruct ref, UnkStruct_ov031_020e54d4 *param2, const VecFx32 *param3,
                                   const VecFx32 *param4) override;

    // overlay 31
    void func_ov031_020da274(const VecFx32 *param1, const VecFx32 *param2, u16 param3);
};

class UnkStruct_ov031_02112b40 : public UnkStruct_ov031_Items_00_Base {
public:
    /* 00 (base) */
    /* 04 */ RefStruct mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ VecFx32 mUnk_0C;
    /* 18 */ u16 mUnk_18;
    /* 1A */ bool mUnk_1A;

    // data_ov031_02112b40
    /* 08 */ virtual bool vfunc_08(const UnkStruct_ov031_020f3310 *param1, unk32 param2) override;
    /* 0C */ virtual bool vfunc_0C(RefStruct ref, UnkStruct_ov031_020e54d4 *param2, const VecFx32 *param3,
                                   const VecFx32 *param4) override;

    // overlay 31
    void func_ov031_020da5ec();
    bool func_ov031_020daaec(const UnkStruct_ov031_020e5d18_00 *param1, Sphere *pSphere);

    static unk32 func_ov031_020da584(vu32 param1);
};
