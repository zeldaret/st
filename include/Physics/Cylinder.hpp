#pragma once

#include "types.h"

#include "nitro/math.h"

struct Cylinder {
    Vec3p pos;
    q20 size; // height and radius

    Cylinder() {}
    Cylinder(q20 size) {
        this->Init(size);
    }

    void Init(q20 size) {
        pos.x = 0;
        pos.y = size;
        pos.z = 0;

        this->size = size;
    }

    void MakeEmpty() {
        pos  = gVec3p_ZERO;
        size = -1;
    }
};
