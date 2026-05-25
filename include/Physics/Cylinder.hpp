#pragma once

#include "types.h"

#include "math.hpp"

struct Cylinder {
    VecFx32 pos;
    fx32 size; // height and radius

    Cylinder() {}
    Cylinder(fx32 size) {
        this->Init(size);
    }

    void Init(fx32 size) {
        pos.x = 0;
        pos.y = size;
        pos.z = 0;

        this->size = size;
    }

    void MakeEmpty() {
        pos  = gVecFx32_ZERO;
        size = -1;
    }
};
