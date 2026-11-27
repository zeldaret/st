#pragma once

#include "nitro/fx.h"
#include "nitro/math.h"

struct Sphere {
    /* 00 */ VecFx32 center;
    /* 0C */ fx32 radius;
    /* 10 */

    Sphere() {}
    Sphere(fx32 size) {
        this->Init(size);
    }
    Sphere(fx32 x, fx32 y, fx32 z, fx32 size) {
        this->Init(x, y, z, size);
    }
    Sphere(VecFx32 *pos, fx32 size) {
        this->Init(pos, size);
    }

    void Init(fx32 size) {
        center.x = 0;
        center.y = size;
        center.z = 0;

        this->radius = size;
    }

    void Init(fx32 x, fx32 y, fx32 z, fx32 size) {
        this->center.x = x;
        this->center.y = y;
        this->center.z = z;

        this->radius = size;
    }

    void Init(VecFx32 *vec, fx32 size) {
        VecFx32_Copy(vec, &this->center);

        this->radius = size;
    }

    // overlay 31
    void func_ov031_020e45fc();
};
