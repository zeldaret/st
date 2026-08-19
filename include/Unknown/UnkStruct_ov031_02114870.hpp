#pragma once

#include "Unknown/UnkStruct_ov031_02114664.hpp"
#include "nns/g3d/g3d.h"

class UnkStruct_ov031_02114870 : public UnkStruct_ov031_02114664 {
public:
    /* 94 */ ModelRender mUnk_94;
    /* F4 */

    UnkStruct_ov031_02114870();

    /* 18 */ virtual bool vfunc_18(unk32 param1) override;
    /* 2C */ virtual void vfunc_2C(unk32 param1) override;
    /* 54 */ virtual G3d_Model *vfunc_54();
};
