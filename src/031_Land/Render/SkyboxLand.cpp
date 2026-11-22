#include "Render/Skybox.hpp"
#include "Unknown/UnkStruct_0204a110.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_ov000_020b4ec4.hpp"

#include <nitro/types.h>
#include <nns/g3d/g3d.h>

static const bool data_ov031_0211067c[SKYBOX_NUM_MAT_LAND] = {false, false, true, true, false};

static const s32 data_ov031_02110684[] = {0x02, 0x02, 0x00, 0x00, 0x01, 0x00};

static const char data_ov031_0211069c[SKYBOX_NUM_MAT_LAND][16] = {
    "Mat_kumo_top", "Mat_kumo_yoko", "Mat_sun", "Mat_sun_core", "Mat_sunny",
};

SkyboxLand::SkyboxLand(SkyboxManager_00 *param1) :
    SkyboxBase(param1),
    mUnk_64(param1->func_ov000_02058a58(0x02, 0x00), NNS_G3dGetMdl(param1->mUnk_50)),
    mUnk_AC(false) {
    EntranceInfo *pEntrance = data_027e09a4->func_ov000_02070560();

    if (pEntrance->sceneIndex == SceneIndex_f_forest3 && pEntrance->roomIndex == 2) {
        this->mUnk_AC = true;
    }

    for (int i = 0; i < SKYBOX_NUM_MAT_LAND; i++) {
        this->mUnk_98[i] = 0;
    }

    G3d_Material_List *pMatList = NNS_G3dGetMat(this->mpModel);

    for (int i = 0; i < SKYBOX_NUM_MAT_LAND; i++) {
        this->mUnk_84[i] = NNS_G3dGetUnkMatDataByName(pMatList, data_ov031_0211069c[i]);
    }

    this->func_ov000_02057c98(&this->mUnk_64.mUnk_00.mUnk_00);
    this->func_ov000_02057c38(0x04, 0x02);
}

SkyboxLand::~SkyboxLand() {}

void SkyboxLand::vfunc_18(VecFx32 *param1) {
    if (this->mUnk_AC || data_027e09b8->func_01ffd420()) {
        this->ModelRender::vfunc_18(param1);
    }
}

void SkyboxLand::vfunc_24() {
    if (this->mUnk_AC || data_027e09b8->func_01ffd420()) {
        this->mUnk_64.mUnk_00.mUnk_00.func_01ffc3b4();
        this->SkyboxBase::vfunc_24();
    }
}

#pragma opt_propagation off

void SkyboxLand::vfunc_1C(G3d_RenderState *param1) {
    G3d_MaterialAnimation *pMatAnim = param1->matAnim;
    s32 matId                       = G3d_GetCurMatId(param1);
    s32 matIndex;

    for (matIndex = 0; matIndex < SKYBOX_NUM_MAT_LAND; matIndex++) {
        if (this->mUnk_84[matIndex] == matId) {
            break;
        }
    }

    if (data_ov031_0211067c[matIndex]) {
        G3d_Model *pMdl = this->mpModel;
        func_0200ea38(pMdl, matId, data_ov000_020b4ec4.func_01ffc768(0x06));
    }

    if (data_ov031_02110684[matIndex] != 0x00) {
        pMatAnim->flag &= ~0x04;

        if (!data_0204a110.func_02019514()) {
            this->mUnk_98[matIndex] += data_ov031_02110684[matIndex];

            if (this->mUnk_98[matIndex] >= 0x1000) {
                this->mUnk_98[matIndex] -= 0x1000;
            } else if (this->mUnk_98[matIndex] <= 0) {
                this->mUnk_98[matIndex] += 0x1000;
            }
        }

        pMatAnim->unk_24 = this->mUnk_98[matIndex];
        pMatAnim->unk_28 = 0;
    }
}

#pragma opt_propagation reset
