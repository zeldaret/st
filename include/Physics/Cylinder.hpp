#pragma once

#include "nitro/fx.h"

struct Cylinder {
    /* 00 */ VecFx32 center;
    /* 0C */ fx32 radius;
    /* 10 */ fx32 height;
    /* 14 */

    Cylinder() {}
};
