#pragma once

#include "global.h"
#include "types.h"
#include "versions.h"

#include "Render/ModelRender.hpp"
#include "Unknown/Common.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "Unknown/UnkStruct_ov000_0208f820.hpp"
#include "math.hpp"

enum GIModel_ {
    GIModel_None = 0,
    GIModel_stmp = 'stmp',
    GIModel_shdA = 'shdA',
    GIModel_rupR = 'rupR',
    GIModel_trnd = 'trnd',
    GIModel_litA = 'litA',
    GIModel_stlb = 'stlb',
    GIModel_keyB = 'keyB',
    GIModel_ring = 'ring',
    GIModel_gold = 'gold',
    GIModel_bmst = 'bmst',
    GIModel_makA = 'makA',
    GIModel_bmrn = 'bmrn',
    GIModel_ptmL = 'ptmL',
    GIModel_star = 'star',
    GIModel_poit = 'poit',
    GIModel_cloB = 'cloB',
    GIModel_crwn = 'crwn',
    GIModel_rupL = 'rupL',
    GIModel_mons = 'mons',
    GIModel_swdA = 'swdA',
    GIModel_beee = 'beee',
    GIModel_makB = 'makB',
    GIModel_szku = 'szku',
    GIModel_keyN = 'keyN',
    GIModel_srod = 'srod',
    GIModel_pnec = 'pnec',
    GIModel_frcY = 'frcY',
    GIModel_prlA = 'prlA',
    GIModel_poiF = 'poiF',
    GIModel_bowB = 'bowB',
    GIModel_sold = 'sold',
    GIModel_apdM = 'apdM',
    GIModel_hrtu = 'hrtu',
    GIModel_poiD = 'poiD',
    GIModel_poi5 = 'poi5',
    GIModel_pflt = 'pflt',
    GIModel_rbnt = 'rbnt',
    GIModel_cloA = 'cloA',
    GIModel_arst = 'arst',
    GIModel_revY = 'revY',
    GIModel_swdB = 'swdB',
    GIModel_bomb = 'bomb',
    GIModel_litD = 'litD',
    GIModel_revP = 'revP',
    GIModel_rupB = 'rupB',
    GIModel_Lcmp = 'Lcmp',
    GIModel_shdB = 'shdB',
    GIModel_gdpf = 'gdpf',
    GIModel_bmbM = 'bmbM',
    GIModel_przC = 'przC',
    GIModel_prlB = 'prlB',
    GIModel_poiP = 'poiP',
    GIModel_rupG = 'rupG',
    GIModel_revR = 'revR',
    GIModel_mrrn = 'mrrn',
    GIModel_zola = 'zola',
    GIModel_bowA = 'bowA',
    GIModel_bmbL = 'bmbL',
    GIModel_litC = 'litC',
    GIModel_bowl = 'bowl',
    GIModel_whip = 'whip',
    GIModel_coin = 'coin',
    GIModel_apdL = 'apdL',
    GIModel_poiS = 'poiS',
    GIModel_jade = 'jade',
    GIModel_glon = 'glon',
    GIModel_poiG = 'poiG',
    GIModel_litB = 'litB',
};

u32 func_ov000_020a4c00(ItemId itemId);

struct UnkStruct_ov110_02185dc8 {
    u16 mItemId;
    u16 mItemFlag;
};

class UnkStruct_ov110_021861ec {
public:
    /* 00 */ VecFx32 mUnk_00;
    /* 0C */

    UnkStruct_ov110_021861ec(fx32 x, fx32 y, fx32 z) {
        this->mUnk_00.x = x;
        this->mUnk_00.y = y;
        this->mUnk_00.z = z;
    }
};

class UnkStruct_PlayerGet_74 : public UnkStruct_PlayerGet_74_base {
public:
    /* 00 (base) */
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ unk32 mUnk_0C;
    /* 10 */ unk32 mUnk_10;
    /* 14 */ UnkStruct_ov000_0208f820 *mUnk_14;

    /* 00 */ virtual void vfunc_00(unk32 param1, unk32 param2, unk32 param3) override;

    UnkStruct_PlayerGet_74(UnkStruct_ov000_0208f820 *param1) {
        this->mUnk_14 = param1;
    }
};

class UnkStruct_PlayerGet_50 {
public:
    unk32 func_01ff8fa8();
    unk32 func_02015080(unk32 param1);
};

class UnkStruct_PlayerGet_fc {
public:
    /* 00 */ UnkStruct_PlayerGet_ec *mUnk_00;
};

class UnkStruct_PlayerGet_48 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ STRUCT_PAD(0x04, 0x40);
    /* 40 */ unk16 mUnk_40;
    /* 42 */ unk16 mUnk_42;
    /* 44 */ unk8 mUnk_44;
    /* 45 */ unk8 mUnk_45;
    /* 46 */ unk8 mUnk_46;
    /* 47 */ unk8 mUnk_47;
    /* 48 */ STRUCT_PAD(0x48, 0x5E);
    /* 5E */ unk16 mUnk_5E;
    /* 60 */ unk8 mUnk_60;
    /* 61 */ unk8 mUnk_61;
    /* 62 */ unk8 mUnk_62;
    /* 63 */ unk8 mUnk_63;
};

class PlayerGet : public UnkStruct_ov000_0208f820 {
public:
    /* 000 (base) */
    /* 048 */ UnkStruct_PlayerGet_48 *mUnk_48;
    /* 04C */ unk32 *mUnk_4C;
    /* 050 */ UnkStruct_PlayerGet_50 *mUnk_50;
    /* 054 */ UnkStruct_ov000_0208f820_04 mUnk_54;
    /* 064 */ UnkStruct_PlayerGet_64_2 mUnk_64;
    /* 068 */ unk32 mUnk_68;
    /* 06C */ unk32 mUnk_6C; // scale
    /* 070 */ unk16 mUnk_70; // angle/rotation
    /* 070 */ u8 mUnk_72;    // probably bools
    /* 070 */ u8 mUnk_73;    // probably bools
    /* 074 */ UnkStruct_PlayerGet_74 mUnk_74;
    /* 08C */ ModelRender mUnk_8C;
    /* 0EC */ UnkStruct_PlayerGet_ec mUnk_EC[4];
    /* 0FC */ void *mUnk_FC;
    /* 100 */

    /* 04 */ virtual ~PlayerGet() override;
    /* 0C */ virtual void vfunc_0C(UnkStruct_PlayerGet_vfunc_0C_param1 *param1) override;
    /* 10 */ virtual void vfunc_10(unk32 param1, unk32 param2) override;
    /* 18 */ virtual void vfunc_18(unk32 param1, unk32 param2, unk32 param3) override;

    PlayerGet();

#if IS_JP
    bool func_ov110_02186b8c();
#else
    bool func_ov110_02186b8c() {
        return true;
    }
#endif
};

extern const UnkStruct_ov110_021861ec data_ov110_021861ec;
