#include "Player/PlayerLink.hpp"
#include "Unknown/UnkStruct_027e0954.hpp"
#include "Unknown/UnkStruct_027e09bc.hpp"

void PlayerLinkActor_A0_38::func_ov017_020be0a8(unk32 param1) {
    if (param1 != 0) {
        this->mUnk_30 += 0x2454;
        this->mUnk_32 = 12;
        return;
    }

    if (this->mUnk_32 > 0) {
        this->mUnk_32--;
    }
}

void PlayerLinkActor_A0_38::func_ov017_020be0e0(s32 param1, VecFx32 *param2, bool param3, bool param4) {
    if (param3 || this->mUnk_32 > 0) {
        bool var_r6 = false;

        if (param4) {
            this->mUnk_2C.y = this->mUnk_00.y;
            this->mUnk_2C.x = this->mUnk_00.x;
            this->mUnk_34 |= 0x03;
            var_r6 = true;
        } else if (data_027e09bc->mUnk_04[param1]->func_01ffd43c(&this->mUnk_2C, param2, 0x01)) {
            var_r6 = true;

            if (this->mUnk_37 == 0 || UnknownCheck1(0x01, this->mUnk_2C.x, 170, 92) ||
                UnknownCheck1(0x02, this->mUnk_2C.y, 125, 88)) {
                if (this->mUnk_2C.x < SUBSCREEN_WIDTH / 2) {
                    this->mUnk_34 |= 0x01;
                } else {
                    this->mUnk_34 &= ~0x01;
                }

                if (this->mUnk_2C.y < SUBSCREEN_HEIGHT / 2) {
                    this->mUnk_34 |= 0x02;
                } else {
                    this->mUnk_34 &= ~0x02;
                }
            }

            if (this->mUnk_34 & 1) {
                this->mUnk_2C.x += 19;
            } else {
                this->mUnk_2C.x -= 92;
            }

            if (this->mUnk_34 & 2) {
                this->mUnk_2C.y -= 4;
            } else {
                this->mUnk_2C.y -= 87;
            }
        }

        if (var_r6) {
            int x = this->mUnk_2C.x + 32;
            int y = this->mUnk_2C.y + 32;

            if (x >= -72 && x < 328 && y >= -72 && y < 264) {
                this->mUnk_36 = param3;

                {
                    UnkStruct_027e0954 *ptr         = data_027e0954;
                    PlayerLinkActor_A0_38_04 *pList = GetLinkListRef(this->mUnk_04);
                    ptr->mUnk_00[1].mUnk_04.Prepend(pList);
                }

                {
                    UnkStruct_027e0954 *ptr         = data_027e0954;
                    PlayerLinkActor_A0_38_18 *pList = GetLinkListRef(this->mUnk_18);
                    ptr->mUnk_00[0].mUnk_04.Prepend(pList);
                }

                this->mUnk_37 = true;
                return;
            }

            this->mUnk_37 = false;
            return;
        }

        this->mUnk_37 = false;
        return;
    }

    this->mUnk_37 = false;
}
