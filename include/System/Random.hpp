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
     * @brief Generates a random number
     */
    u32 Next() {
        this->UpdateRandomValue();
        return this->GetRandomValue() >> 48;
    }

    /**
     * @brief Generates a random number from 0 (inclusive) to `max` (exclusive)
     */
    u32 Next(u64 min, u64 max) {
        this->UpdateRandomValue();
        return (((this->GetRandomValue() >> 32) * (max - min)) >> 32) + min;
    }

    void Init();
};

extern Random gRandom;
