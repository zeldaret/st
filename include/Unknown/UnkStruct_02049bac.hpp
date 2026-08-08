#pragma once

#include "global.h"
#include "types.h"

union Date {
    struct {
        u16 day : 5;
        u16 month : 4;
        u16 year : 7;
    };
    u16 data[1];

    void operator=(Date &from) {
#if __MWERKS__
        this->data = from.data;
#else
        this->data[0] = from.data[0];
#endif
    }

    void operator=(s16 from) {
        this->data[0] = from;
    }

    bool operator==(u16 other) {
        return other == this->data[0];
    }

    bool operator!=(u16 other) {
        return !(*this == other);
    }

    bool operator==(Date &other) {
        return this->data[0] == other.data[0];
    }

    bool operator!=(Date &other) {
        return !(*this == other);
    }
};

class UnkStruct_02049bac {
public:
    /* 00 */ unk32 mUnk_00;

    UnkStruct_02049bac();
    ~UnkStruct_02049bac();

    void func_02014a34(Date *param1);
    u64 func_02014b00();
};

// some time system?
extern UnkStruct_02049bac data_02049bac;
