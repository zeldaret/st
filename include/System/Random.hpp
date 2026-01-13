#pragma once

#include "global.h"
#include "types.h"

struct Random {
    /* 00 */ u64 mRandomValue;
    /* 08 */ u64 mFactor;
    /* 10 */ u64 mAddend;
    /* 18 */

    /**
     * Generate a random number from 0 (inclusive) to `max` (exclusive)
     */
    u32 Next(u64 min, u64 max) {
        mRandomValue = mAddend + mFactor * mRandomValue;
        u64 result;
        if ((max - min) == 0x100000000) {
            result = mRandomValue;
        } else {
            result = (mRandomValue >> 32) * (max - min);
        }
        return (result >> 32) + min;
    }

    void Init();
};

extern Random gRandom;
