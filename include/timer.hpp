#pragma once

#include "nitro/types.h"

struct Timer {
    /* 00 */ volatile u16 value;
    /* 02 */ u16 max;
    /* 04 */

    Timer() {}

    Timer(u16 value, u16 max) {
        this->value = value;
        this->max   = max;
    }

    // advances the value until it reached the max value
    void Update() {
        if (this->value < this->max) {
            this->value++;
        }
    }

    // same as `Update()` except it returns true if the max value is reached
    bool HasExpired() {
        if (this->value < this->max) {
            this->value++;
            return false;
        }

        return true;
    }

    void Set(u16 value, u16 max) {
        this->max   = max;
        this->value = value;
    }

    void SetAlt(u16 value, u16 max) {
        this->value = value;
        this->max   = max;
    }

    void Init() {
        this->Set(0, 0);
    }

    void Reset() {
        this->Set(0, -1);
    }

    int GetRemainingTime() {
        return this->max - this->value;
    }

    bool HasReachedMax() {
        return this->GetValue() >= this->max;
    }

    bool HasReachedMaxU() {
        u32 value = this->value;
        return value >= this->max;
    }

    int GetValue() {
        return this->value;
    }

    u32 GetValueU() {
        return this->value;
    }

    int GetMax() {
        return this->max;
    }

    bool Test(u16 value) {
        u16 max  = this->max;
        u16 time = this->value;

        return !(time < max && max - time != value);
    }
};
