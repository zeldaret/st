#pragma once

#include "Unknown/UnkStruct_ov000_0208f820.hpp"

struct PlayerLinkActor_A0_84;
struct PlayerLinkActor_70;

class UnkStruct_ov000_02090850_60 {
public:
    /* 00 */ PAD(0x00, 0x24);
    /* 00 */ PlayerLinkActor *mpLink;
    /* 04 */ UnkStruct_ov000_0208f820_2c *mUnk_04;
    /* 08 */ PlayerLinkActor_70 *mUnk_08;
    /* 08 */ PlayerLinkActor *mpLink2;
    /* 0C */ VecFx32 *mUnk_10;
    /* 10 */ unk32 mUnk_14;
    /* 14 */ unk16 mUnk_18;
    /* 16 */ unk8 mUnk_1A;
    /* 17 */ unk8 mUnk_1B;
    /* 18 */ unk32 mUnk_1C;
    /* 20 */ unk32 mUnk_20;
    /* 24 */

    UnkStruct_ov000_02090850_60(PlayerLinkActor *pLink, UnkStruct_ov000_0208f820_2c *param2);
};

class UnkStruct_ov000_02090850_84_10 : public UnkSystem7 {
public:
    /* 00 (base) */
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */

    UnkStruct_ov000_02090850_84_10();
    ~UnkStruct_ov000_02090850_84_10();
};

class UnkStruct_ov000_02090850_84 {
public:
    /* 00 */ PlayerLinkActor *mpLink;
    /* 04 */ UnkStruct_PlayerGet_50 *mUnk_04;
    /* 08 */ UnkStruct_PlayerGet_50 *mUnk_08;
    /* 0C */ unk32 mUnk_0C;
    /* 10 */ UnkStruct_ov000_02090850_84_10 mUnk_10[2];
    /* 28 */

    UnkStruct_ov000_02090850_84(PlayerLinkActor *pLink, UnkStruct_PlayerGet_50 *param2, UnkStruct_PlayerGet_50 *param3);

    // overlay 31
    void func_ov031_020dac20();
    void func_ov031_020dac40();
    bool func_ov031_020dac80();
    void func_ov031_020dacdc(bool param1);
};

struct UnkStruct_ov000_02090850_AC_14 {
    /* 00 */ PlayerLinkActor *mpLink;
    /* 04 */ UnkStruct_ov000_0208f820_2c *mUnk_04;
    /* 08 */ PlayerActorBase_70 *mUnk_08;
    /* 0C */
};

class UnkStruct_ov000_02090850_AC : public UnkStruct_PlayerGet_74_base {
public:
    /* 00 (base) */
    /* 14 */ PlayerLinkActor *mpLink;
    /* 18 */ UnkStruct_ov000_0208f820_2c *mUnk_18;
    /* 1C */ PlayerActorBase_70 *mUnk_1C;
    /* 20 */ PlayerLinkActor *mpLink2;
    /* 24 */ u32 mUnk_24;
    /* 28 */ unk32 mUnk_28;
    /* 2C */ ModelRender mUnk_2C;
    /* 8C */ UnkSystem5 mUnk_8C;
    /* AC */ G3d_Animation mUnk_AC;
    /* C8 */ unk32 mUnk_C8;
    /* CC */ UnkSystem7 mUnk_CC;
    /* D0 */ unk32 mUnk_D0;
    /* D4 */ unk32 mUnk_D4;
    /* D8 */

    UnkStruct_ov000_02090850_AC(PlayerLinkActor *pLink, UnkStruct_ov000_0208f820_2c *param2);

    // data_ov000_020b2b10
    /* 00 */ virtual void vfunc_00(unk32 param1, unk32 param2) override;

    // overlay 31
    void func_ov031_020dad80();
    void func_ov031_020dad98();
    void func_ov031_020dae3c();
    bool func_ov031_020dae8c(unk32 param1);
    void func_ov031_020dafe8(bool param1);
    void func_ov031_020db028();
};

class UnkStruct_ov000_02090850_184 {
public:
    /* 00 */ PlayerLinkActor *mUnk_00;
    /* 04 */ UnkStruct_ov000_0208f820_2c *mUnk_04;
    /* 08 */ PlayerLinkActor *mUnk_08;
    /* 0C */ VecFx32 *mUnk_0C;
    /* 10 */ unk32 mUnk_10;
    /* 14 */ unk16 mUnk_14;
    /* 16 */ unk8 mUnk_16;
    /* 17 */ unk8 mUnk_17;
    /* 18 */ unk32 mUnk_18;
    /* 20 */

    UnkStruct_ov000_02090850_184(PlayerLinkActor *pLink, UnkStruct_ov000_0208f820_2c *param2);
};

// related to the player receiving damages
class UnkStruct_ov000_02090850 : public UnkStruct_ov000_0208f820 {
public:
    /* 000 (base) */
    /* 054 */ unk8 mUnk_54;
    /* 055 */ unk8 mUnk_55;
    /* 056 */ unk8 mUnk_56;
    /* 057 */ unk8 mUnk_57;
    /* 058 */ unk8 mUnk_58;
    /* 059 */ unk8 mUnk_59;
    /* 05A */ unk8 mUnk_5A;
    /* 05B */ unk8 mUnk_5B;
    /* 05C */ unk8 mUnk_5C;
    /* 060 */ UnkStruct_ov000_02090850_60 mUnk_60;
    /* 084 */ UnkStruct_ov000_02090850_84 mUnk_84;
    /* 0AC */ UnkStruct_ov000_02090850_AC mUnk_AC;
    /* 184 */ UnkStruct_ov000_02090850_184 mUnk_184;
    /* 1A4 */ PAD(0x1A4, 0x1E0);
    /* 1E0 */

    UnkStruct_ov000_02090850(PlayerLinkActor_A0_84 *param1);

    /* 04 */ virtual ~UnkStruct_ov000_02090850() override;
    /* 0C */ virtual void vfunc_0C(UnkStruct_PlayerGet_vfunc_0C_param1 *param1) override;
    /* 10 */ virtual void vfunc_10(unk32 param1, unk32 param2) override;
    /* 14 */ virtual void vfunc_14() override;
    /* 18 */ virtual void vfunc_18(unk32 param1, unk32 param2, unk32 param3) override;
    /* 1C */ virtual bool vfunc_1C(VecFx32 *param1) override;
};
