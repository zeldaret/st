#pragma once

#include "Render/ModelRender.hpp"
#include "profile.hpp"

#include <nitro/types.h>
#include <nns/g3d/sbc.h>

typedef enum SkyboxType_ {
    /* 00 */ SkyboxType_None        = 0x00,
    /* 01 */ SkyboxType_ForestRealm = 0x01, // "vr_mfield" -> "VrBox Mori Field"
    /* 02 */ SkyboxType_SnowRealmA  = 0x02, // "vr_sfield_A" -> "VrBox Snow Field A", before Snow Source
    /* 03 */ SkyboxType_SnowRealmB  = 0x03, // "vr_sfield_B" -> "VrBox Snow Field B", after Snow Source
    /* 04 */ SkyboxType_OceanRealm  = 0x04, // "vr_field" -> "VrBox Umi Field" (inverted with `SkyboxType_Land`)
    /* 05 */ SkyboxType_FireRealmA  = 0x05, // "vr_yfield_A" -> "VrBox Yama Field A", before Fire Source
    /* 06 */ SkyboxType_FireRealmB  = 0x06, // "vr_yfield_B" -> "VrBox Yama Field B", after Fire Source
    /* 07 */ SkyboxType_BossCyclok  = 0x07, // "vr_bossf" -> "VrBox Boss Field"? PH leftover
    /* 08 */ SkyboxType_SalvageGame = 0x08, // "vr_subm" -> "VrBox Submarine"? PH leftover
    /* 09 */ SkyboxType_DarkRealm   = 0x09, // "vr_dfield" -> "VrBox Dark Field"
    /* 10 */ SkyboxType_Land        = 0x0A, // "vr_ufield" -> "VrBox Field" (inverted with `SkyboxType_OceanRealm`)
    /* 11 */ SkyboxType_Max,
} SkyboxType;

class SkyboxManager_00 : public MapObjectProfile_Derived2_20_Base {
public:
    /* 00 (base) */
    /* 94 */

    SkyboxManager_00();

    // data_ov000_020b294c
    /* 00 */ virtual ~SkyboxManager_00() override; //! TODO: implicit?
};

// SkyboxType_BossCyclok, SkyboxType_SalvageGame and derived for the other types
class SkyboxBase : public ModelRender {
public:
    /* 00 (base) */
    /* 60 */ SkyboxManager_00 *mUnk_60;
    /* 64 */

    SkyboxBase(SkyboxManager_00 *param1);

    // data_ov000_020b2964
    /* 00 */ virtual ~SkyboxBase() override;
    /* 24 */ virtual void vfunc_24();
    /* 24 */ virtual unk32 vfunc_28();
};

// SkyboxType_ForestRealm and SkyboxType_OceanRealm
class SkyboxTrain : public SkyboxBase {
public:
    /* 00 (base) */
    /* 64 */ UnkSystem5 mUnk_64;
    /* 84 */ PAD(0x84, 0xA4);
    /* A4 */

    SkyboxTrain(SkyboxManager_00 *param1);

    // data_ov026_02136770
    /* 00 */ virtual ~SkyboxTrain() override;
    /* 1C */ virtual void vfunc_1C(G3d_RenderState *param1) override;
    /* 24 */ virtual void vfunc_24() override;
};

// SkyboxType_SnowRealmA
class SkyboxSnowRealmA : public SkyboxBase {
public:
    /* 00 (base) */
    /* 64 */ UnkSystem5 mUnk_64;
    /* 84 */ PAD(0x84, 0xC4);
    /* C4 */

    SkyboxSnowRealmA(SkyboxManager_00 *param1);

    // data_ov026_021367a4
    /* 00 */ virtual ~SkyboxSnowRealmA() override;
    /* 1C */ virtual void vfunc_1C(G3d_RenderState *param1) override;
    /* 24 */ virtual void vfunc_24() override;
};

// SkyboxType_SnowRealmB
class SkyboxSnowRealmB : public SkyboxBase {
public:
    /* 00 (base) */
    /* 64 */ UnkSystem5 mUnk_64;
    /* 84 */ PAD(0x84, 0xA4);
    /* A4 */

    SkyboxSnowRealmB(SkyboxManager_00 *param1);

    // data_ov028_021473c4
    /* 00 */ virtual ~SkyboxSnowRealmB() override;
    /* 1C */ virtual void vfunc_1C(G3d_RenderState *param1) override;
    /* 24 */ virtual void vfunc_24() override;
};

// SkyboxType_FireRealmA
class SkyboxFireRealmA : public SkyboxBase {
public:
    /* 00 (base) */
    /* 64 */ PAD(0x64, 0x6C);
    /* 6C */

    SkyboxFireRealmA(SkyboxManager_00 *param1);

    // data_ov030_02150fc8
    /* 00 */ virtual ~SkyboxFireRealmA() override;
    /* 1C */ virtual void vfunc_1C(G3d_RenderState *param1) override;
    /* 24 */ virtual void vfunc_24() override;
};

// SkyboxType_FireRealmB
class SkyboxFireRealmB : public SkyboxBase {
public:
    /* 00 (base) */
    /* 64 */ PAD(0x64, 0x84);
    /* 84 */

    SkyboxFireRealmB(SkyboxManager_00 *param1);

    // data_ov030_02150ffc
    /* 00 */ virtual ~SkyboxFireRealmB() override;
    /* 1C */ virtual void vfunc_1C(G3d_RenderState *param1) override;
    /* 24 */ virtual void vfunc_24() override;
};

// SkyboxType_DarkRealm
class SkyboxDarkRealm : public SkyboxBase {
public:
    /* 00 (base) */
    /* 64 */ PAD(0x64, 0x84);
    /* 84 */

    SkyboxDarkRealm(SkyboxManager_00 *param1);

    // data_ov092_0217ba34
    /* 00 */ virtual ~SkyboxDarkRealm() override;
    /* 24 */ virtual void vfunc_24() override;
};

// SkyboxType_Land
class SkyboxLand : public SkyboxBase {
public:
    /* 00 (base) */
    /* 64 */
    /* B0 */

    SkyboxLand(SkyboxManager_00 *param1);

    // data_ov031_02112aa0
    /* 00 */ virtual ~SkyboxLand() override;
    /* 18 */ virtual void vfunc_18(VecFx32 *param1) override;
    /* 1C */ virtual void vfunc_1C(G3d_RenderState *param1) override;
    /* 24 */ virtual void vfunc_24() override;
};

class SkyboxManager {
public:
    /* 00 */ SkyboxManager_00 *mUnk_00;
    /* 04 */ SkyboxBase *mpSkybox;
    /* 08 */ SkyboxType mSkyboxType;
    /* 0C */ bool mIsVisible;
    /* 10 */

    SkyboxManager();

    void CreateSkybox(SkyboxType skyboxType);
    void DestroySkybox();
};
