#pragma once

#include "types.h"

#include "math.hpp"

struct Cylinder {
    /* 00 */ VecFx32 pos;
    /* 0C */ fx32 size; // height and radius
    /* 10 */

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

    void Init(fx32 x, fx32 y, fx32 z, fx32 size) {
        this->pos.x = x;
        this->pos.y = y;
        this->pos.z = z;

        this->size = size;
    }

    void MakeEmpty() {
        pos  = gVecFx32_ZERO;
        size = -1;
    }
};
