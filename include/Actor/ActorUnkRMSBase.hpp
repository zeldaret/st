#pragma once

#include "Render/ModelRender.hpp"
#include "Unknown/UnkStruct_ov031_02114870.hpp"
#include "nitro/types.h"
#include "nns/g3d/g3d.h"

class ActorUnkRMSBase : public UnkStruct_ov031_02114870 {
public:
    /* 00 (base) */
    /* F4 */ ModelRender mUnk_F4;
    /* 154 */ u8 mUnk_154;
    /* 155 */ unk8 mUnk_155;
    /* 156 */ PAD(0x156, 0x158);
    /* 158 */

    ActorUnkRMSBase();

    /* 18 */ virtual bool Init(unk32 param1) override;
    /* 1C */ virtual void Setup() override;
    /* 20 */ virtual void Update() override;
    /* 24 */ virtual void vfunc_24() override;
    /* 2C */ virtual void vfunc_2C(Actor_vfunc_30 *param1) override;
    /* 58 */ virtual G3d_Model *vfunc_58() = 0;
};
