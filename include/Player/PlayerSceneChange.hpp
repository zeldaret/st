#pragma once

#include "global.h"
#include "types.h"
#include "versions.h"

#include "Unknown/UnkStruct_027e09a4.hpp"
#include "Unknown/UnkStruct_ov000_0208f820.hpp"
#include "nitro/math.h"

class PlayerSceneChange : public UnkStruct_ov000_0208f820 {
public:
    /* 00 (base) */
    /* 48 */ unk32 mUnk_48;
    /* 4C */ unk32 mUnk_4C;
    /* 50 */ unk32 mUnk_50;
    /* 54 */ UnkStruct_SceneChange1 mUnk_54;
    /* 68 */ unk32 mUnk_68;
    /* 6C */ s32 mUnk_6C;
    /* 70 */ volatile Vec3p mUnk_70;
    /* 7C */ unk32 mUnk_7C;
    /* 80 */ volatile Vec3p mUnk_80;
    /* 8C */ unk32 mUnk_8C;
    /* 90 */ volatile u32 mUnk_90;
    /* 94 */ u16 mUnk_94[2];
    /* 98 */ unk32 mUnk_98;
    /* 9C */ Vec3p mUnk_9C;
    /* A8 */ unk16 mUnk_A8;
    /* AA */ unk16 mUnk_AA;
    /* AC */ bool mUnk_AC;
    /* AD */ bool mUnk_AD;
    /* AE */ s16 mUnk_AE;

    PlayerSceneChange();

    s16 func_ov112_02184bbc(s16 param1);

    /* 04 */ virtual ~PlayerSceneChange() override;
    /* 0C */ virtual void vfunc_0c(UnkStruct_PlayerGet_vfunc_0c_param1 *param1) override;
    /* 10 */ virtual void vfunc_10(unk32 param1, unk32 param2) override;
    /* 1C */ virtual bool vfunc_1c(Vec3p *param1) override;
};

class PlayerSceneChange2 : public UnkStruct_ov000_0208f820 {
public:
    /* 00 (base) */
    /* 48 */ unk32 mUnk_48;
    /* 4C */ unk32 mUnk_4C;
    /* 50 */ unk32 mUnk_50;
    /* 54 */ Vec3p mUnk_54;
    /* 54 */ Vec3p mUnk_60;

    PlayerSceneChange2();

    /* 04 */ virtual ~PlayerSceneChange2() override;
    /* 0C */ virtual void vfunc_0c(UnkStruct_PlayerGet_vfunc_0c_param1 *param1) override;
    /* 10 */ virtual void vfunc_10(unk32 param1, unk32 param2) override;
};
