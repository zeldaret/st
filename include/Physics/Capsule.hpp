#pragma once

#include "nitro/fx.h"

struct Capsule {
    /* 00 */ VecFx32 start;
    /* 0C */ VecFx32 end;
    /* 18 */ fx32 radius;
    /* 1C */

    Capsule() {}
};
