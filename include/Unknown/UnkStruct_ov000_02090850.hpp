#pragma once

#include "Unknown/UnkStruct_ov000_0208f820.hpp"

struct PlayerLinkActor_A0_84;

class UnkStruct_ov000_02090850_60 {
public:
    /* 00 */ PAD(0x00, 0x24);
    /* 24 */

    UnkStruct_ov000_02090850_60(PlayerLinkActor *pLink, UnkStruct_ov000_0208f820_2c *param2);
};

class UnkStruct_ov000_02090850_84_10 : public UnkSystem7 {
public:
    /* 00 (base) */
    /* 04 */ unk32 mUnk_04;
    /* 04 */ unk32 mUnk_08;
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
};

class UnkStruct_ov000_02090850_AC : public UnkStruct_PlayerGet_74_base {
public:
    /* 00 (base) */
    /* 04 */ PAD(0x04, 0xD8);
    /* D8 */

    UnkStruct_ov000_02090850_AC(PlayerLinkActor *pLink, UnkStruct_ov000_0208f820_2c *param2);
};

class UnkStruct_ov000_02090850_184 {
public:
    /* 00 */ PAD(0x00, 0x20); //! TODO: size unsure
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
    /* 1A4 */

    UnkStruct_ov000_02090850(PlayerLinkActor_A0_84 *param1);

    /* 04 */ virtual ~UnkStruct_ov000_02090850() override;
    /* 0C */ virtual void vfunc_0C(UnkStruct_PlayerGet_vfunc_0C_param1 *param1) override;
    /* 10 */ virtual void vfunc_10(unk32 param1, unk32 param2) override;
    /* 14 */ virtual void vfunc_14() override;
    /* 18 */ virtual void vfunc_18(unk32 param1, unk32 param2, unk32 param3) override;
    /* 1C */ virtual bool vfunc_1C(VecFx32 *param1) override;
};
