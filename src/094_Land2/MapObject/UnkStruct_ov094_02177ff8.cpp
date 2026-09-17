#include "Map/MapObjectId.hpp"
#include "MapObject/MapObjectUnkWLMS.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_ov000_020b5d34.hpp"
#include "nns/g3d/g3d.h"

UnkStruct_ov094_02177ff8::UnkStruct_ov094_02177ff8() :
    mUnk_4C(G3d_GetModelPtr(data_ov000_020b5d34.GetProfileFromId(MapObjectId_WLMP)->vfunc_04()->mUnk_50), true),
    mUnk_58(0, NULL),
    mUnk_6C(-1) {}

void UnkStruct_ov094_02177ff8::vfunc_0C(void) {
    if (mUnk_6C >= 0 && data_027e09b8->func_ov000_020732ec(mUnk_6C)) {
        this->vfunc_38();
    }
}

// Matched
void UnkStruct_ov094_02177ff8::vfunc_38(void) {}
