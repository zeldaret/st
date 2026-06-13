#include "Unknown/Common.hpp"
#include "math.hpp"
#include "types.h"

static TrainSpeedPreset data_ov026_02135fec[TrainPresetType_Max] = {
    // TrainPresetType_Default
    {
        .reverse = {.speed = -143, .unk_04 = 50},
        .stop    = {.speed = 0, .unk_04 = 0},
        .slow    = {.speed = 115, .unk_04 = 50},
        .fast    = {.speed = 193, .unk_04 = 20},
        .unk_20  = 0,
        .unk_24  = 12,
        .unk_28  = 0,
        .unk_2C  = 50,
        .unk_30  = 143,
        .unk_34  = 5,
        .unk_38  = 30,
        .unk_3C  = FLOAT_TO_FX32(225.0f),
    },
    // TrainPresetType_DarkRealmNormal
    {
        .reverse = {.speed = -340, .unk_04 = 120},
        .stop    = {.speed = 0, .unk_04 = 0},
        .slow    = {.speed = 266, .unk_04 = 120},
        .fast    = {.speed = 496, .unk_04 = 40},
        .unk_20  = 0,
        .unk_24  = 50,
        .unk_28  = 0,
        .unk_2C  = 120,
        .unk_30  = 377,
        .unk_34  = 5,
        .unk_38  = 30,
        .unk_3C  = FLOAT_TO_FX32(225.0f),
    },
    // TrainPresetType_DarkRealmLightTear
    {
        .reverse = {.speed = -340, .unk_04 = 250},
        .stop    = {.speed = 193, .unk_04 = 250},
        .slow    = {.speed = 266, .unk_04 = 250},
        .fast    = {.speed = 496, .unk_04 = 80},
        .unk_20  = 193,
        .unk_24  = 600,
        .unk_28  = 0,
        .unk_2C  = 800,
        .unk_30  = 0,
        .unk_34  = 0,
        .unk_38  = 0,
        .unk_3C  = FLOAT_TO_FX32(225.0f),
    },
    // TrainPresetType_DarkRealmLightTearRope
    {
        .reverse = {.speed = -1229, .unk_04 = 3000},
        .stop    = {.speed = 1229, .unk_04 = 3000},
        .slow    = {.speed = 1229, .unk_04 = 3000},
        .fast    = {.speed = 1229, .unk_04 = 3000},
        .unk_20  = 1229,
        .unk_24  = 600,
        .unk_28  = 0,
        .unk_2C  = 0,
        .unk_30  = 0,
        .unk_34  = 0,
        .unk_38  = 0,
        .unk_3C  = FLOAT_TO_FX32(225.0f),
    },
    // TrainPresetType_DarkRealmFight
    {
        .reverse = {.speed = 152, .unk_04 = 61},
        .stop    = {.speed = 152, .unk_04 = 61},
        .slow    = {.speed = 172, .unk_04 = 61},
        .fast    = {.speed = 193, .unk_04 = 16},
        .unk_20  = 152,
        .unk_24  = 16,
        .unk_28  = 152,
        .unk_2C  = 61,
        .unk_30  = 0,
        .unk_34  = 0,
        .unk_38  = 30,
        .unk_3C  = FLOAT_TO_FX32(81.0f),
    },
    // TrainPresetType_5
    {
        .reverse = {.speed = -143, .unk_04 = 50},
        .stop    = {.speed = 0, .unk_04 = 0},
        .slow    = {.speed = 115, .unk_04 = 50},
        .fast    = {.speed = 193, .unk_04 = 20},
        .unk_20  = 0,
        .unk_24  = 12,
        .unk_28  = 0,
        .unk_2C  = 50,
        .unk_30  = 143,
        .unk_34  = 5,
        .unk_38  = 30,
        .unk_3C  = FLOAT_TO_FX32(81.0f),
    },
};

const TrainSpeedPreset *func_ov026_02102924(int index) {
    return &data_ov026_02135fec[index];
}
