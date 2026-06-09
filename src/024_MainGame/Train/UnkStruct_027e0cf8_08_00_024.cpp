#include "Unknown/UnkStruct_027e0cf8.hpp"

#include <nitro/mi.h>

extern "C" fx32 func_01ffb66c(unk32, unk32);

bool UnkStruct_027e0cf8_08_00::func_ov024_020d3900(Vec2s *param1, fx32 *param2, fx32 *param3, unk32 param4, unk32 param5) {
    return UnkStruct_027e0cf8_08_00::func_ov024_020d3970(param1, param2, param3, param4, param5);
}

bool UnkStruct_027e0cf8_08_00::func_ov024_020d3914(Vec2s *param1, Vec2s *param2, Vec2s *param3) {
    fx32 x = 0;
    fx32 y = 0;

    if (UnkStruct_027e0cf8_08_00::func_ov024_020d3900(param1, &x, &y, param3->x, param3->y)) {
        param2->x = x;
        param2->y = y;
        return true;
    }

    return false;
}

bool UnkStruct_027e0cf8_08_00::func_ov024_020d3970(Vec2s *param1, fx32 *param2, fx32 *param3, unk32 param4, unk32 param5) {
    if (UnkStruct_027e0cf8_08_00::func_ov024_020d39fc(param1, param4, param5)) {
        fx32 temp1 = param4 - param1->x;
        fx32 temp2 = param5 - param1->y;

        fx32 temp_r5 = func_01ffb66c(temp1, 0x0C);
        fx32 temp_r0 = func_01ffb66c(temp2, 0x0C);

        if (UnkStruct_027e0cf8_08_00::func_ov024_020d3a34(param1, temp_r5, temp_r0)) {
            *param2 = temp_r5;
            *param3 = temp_r0;
            return true;
        }

        return false;
    }

    return false;
}

bool UnkStruct_027e0cf8_08_00::func_ov024_020d39fc(Vec2s *param1, unk32 param2, unk32 param3) {
    unk32 temp_r1 = param2 - param1->x;
    unk32 temp_r0 = param3 - param1->y;

    if (temp_r1 >= 0 && temp_r1 < 0xF0 && temp_r0 >= 0 && temp_r0 < 0xB4) {
        return true;
    }

    return false;
}

bool UnkStruct_027e0cf8_08_00::func_ov024_020d3a34(Vec2s *param1, unk32 param2, unk32 param3) {
    if (param2 >= 0 && param2 < 0x14 && param3 >= 0 && param3 < 0x0F) {
        return true;
    }

    return false;
}

void UnkStruct_027e0cf8_08_00::func_ov024_020d3a60(Vec2s *param1, Vec2s *param2, unk32 param3, unk32 param4) {
    fx32 x    = param2->x + (param3 * 0x0C) + 0x06;
    fx32 y    = param2->y + (param4 * 0x0C) + 0x06;
    param1->x = x;
    param1->y = y;
}

bool UnkStruct_027e0cf8_08_00::func_ov024_020d3a8c(Vec2s *param1) {
    bool var_r2 = true;
    bool var_r3 = true;
    bool var_ip = true;

    if (param1->x >= 0x03 && param1->x <= 0xFD) {
        var_ip = false;
    }

    if (!var_ip && param1->y >= 0x03) {
        var_r3 = false;
    }

    if (!var_r3 && param1->y <= 0xBD) {
        var_r2 = false;
    }

    return var_r2;
}

void UnkStruct_027e0cf8_08_00::func_ov024_020d3adc(Vec2s *param1, unk32 param2, unk32 param3, u8 param4, bool param5,
                                                   u8 param6) {
    UnkArrayDataType2 sp10;
    Vec2s spC;
    s32 temp_r0;
    Vec2s temp_r5;

    MI_CpuFill32(0, &sp10, sizeof(sp10));

    temp_r0 = this->func_ov024_020d3bfc(sp10, param2, param3, param5);

    for (int i = 0; i < temp_r0; i++) {
        s16 x1 = sp10[i].x;
        s16 y1 = sp10[i].y;

        temp_r5.x = x1 + param1->x;
        temp_r5.y = y1 + param1->y;

        if (i == 0 || i == temp_r0 - 1) {
            spC.x = temp_r5.x;
            spC.y = temp_r5.y;

            if (UnkStruct_027e0cf8_08_00::func_ov024_020d3a8c(&spC)) {
                this->func_ov024_020d0924(temp_r5.x, temp_r5.y, param4, param6);
            } else {
                this->func_ov024_020d0924(temp_r5.x, temp_r5.y, param4, param6 - 2);
            }
        } else {
            this->func_ov024_020d0924(temp_r5.x, temp_r5.y, param4, param6);
        }
    }
}

unk32 UnkStruct_027e0cf8_08_00::func_ov024_020d3bfc(UnkArrayDataType2 param1, unk32 param2, unk32 param3, bool param4) {
    int i;
    Vec2s *temp_r5 = this->mUnk_178[param2][param3];
    s32 arrayLen   = param4 ? 4 : 7;

    for (i = 0; i < arrayLen; i++) {
        Vec2s_Copy(&temp_r5[i], &param1[i]);
    }

    return arrayLen;
}
