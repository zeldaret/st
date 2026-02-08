#pragma once

#include "global.h"
#include "nitro/math.h"
#include "types.h"

struct Random {
    /* 00 */ u16 mRandomValue[4];
    /* 08 */ u64 mFactor;
    /* 10 */ u64 mAddend;
    /* 18 */

    /**
     * @brief Gets the seed's value
     */
    u64 GetRandomValue() {
        return *(u64 *) this->mRandomValue;
    }

    /**
     * @brief Updates the seed's value
     */
    void UpdateRandomValue() {
        *(u64 *) this->mRandomValue = this->mAddend + (this->mFactor * this->GetRandomValue());
    }

    /**
     * @brief Generates a random number as a u16
     */
    u16 Next16() {
        this->UpdateRandomValue();
        return this->GetRandomValue() >> 48;
    }

    /**
     * @brief Generates a random number from 0 (inclusive) to `max` (exclusive) as a u32
     */
    u32 Next32(u64 min, u64 max) {
        this->UpdateRandomValue();
        return (((this->GetRandomValue() >> 32) * (max - min)) >> 32) + min;
    }

    u32 ConditionalNext32(u32 value) {
        this->UpdateRandomValue();

        u64 result = this->GetRandomValue() >> 32;

        if (value != 0) {
            result = (result * value) >> 32;
        }

        return result;
    }

#ifdef __MWERKS__
    Vec2us &NextPos(u16 xMax, u16 yMax) {
        Vec2us pos;

        pos.x = this->Next32(0, xMax);
        pos.y = this->Next32(0, yMax);

        return pos;
    }
#else
    const Vec2us NextPos(u16 xMax, u16 yMax) {
        const Vec2us pos = {(u16) this->Next32(0, xMax), (u16) this->Next32(0, yMax)};
        return pos;
    }
#endif

    void Init();
};

extern Random gRandom;
