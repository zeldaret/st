#pragma once

#include "global.h"
#include "math.hpp"
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
     * @brief Sets the seed's value from a u64
     */
    void SetRandomValue(u64 value) {
        *(u64 *) this->mRandomValue = value;
    }

    /**
     * @brief Sets the seed's value from a u16 array
     */
    void SetRandomValue(u16 *value) {
        this->SetRandomValue(*(u64 *) value);
    }

    /**
     * @brief Setup the randomizer with a set seed as a u64
     */
    void Setup(u64 initial) {
        this->SetRandomValue(initial);
        this->SetFactorAddend();
    }

    /**
     * @brief Setup the randomizer with a set seed as a u16 array
     */
    void Setup(u16 *initial) {
        this->SetRandomValue(initial);
        this->SetFactorAddend();
    }

    /**
     * @brief Setup the randomizer without any specific seed
     */
    void Setup() {
        this->SetRandomValue((u64) 0);
        this->SetFactorAddend();
    }

    /**
     * @brief Sets the factor and addend values
     */
    void SetFactorAddend() {
        this->mFactor = 0x5D588B656C078965;
        this->mAddend = 0x00269EC3;
    }

    /**
     * @brief Updates the seed's value
     */
    void UpdateRandomValue() {
        *(u64 *) this->mRandomValue = this->mAddend + (this->mFactor * this->GetRandomValue());
    }

    /**
     * @brief Generates a random number as u32
     */
    u32 Next32(u32 factor) {
        this->UpdateRandomValue();
        u64 randomValue = this->GetRandomValue();

        if (factor == 0) {
            return randomValue >> 32;
        }

        return ((randomValue >> 32) * factor) >> 32;
    }

    /**
     * @brief Generates a random number as u32 then convert it to a u16
     */
    u16 Next16(u32 factor) {
        return this->Next32(factor) >> 16;
    }

    void Init();
};

extern Random gRandom;
