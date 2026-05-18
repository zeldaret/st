#include "MainGame/UnkAdventureModeSystem1.hpp"

UnkAdventureModeSystem1::UnkAdventureModeSystem1(Vec2s *param1, Vec2s *param2, bool param3) {
    Vec2s local_24;
    Vec2s local_20;

    local_20.x = param2->x;
    local_20.y = param2->y;

    local_24.x = param1->x;
    local_24.y = param1->y;

    this->mUnk_04.func_0201e874(8, &local_24, &local_20, 0);

    if (!param3) {
        this->mUnk_04.mUnk_10 = this->mUnk_04.mUnk_20;
        this->mUnk_04.mUnk_14 = this->mUnk_04.mUnk_24;
        this->mUnk_04.mUnk_04 = this->mUnk_04.mUnk_06;
        this->mUnk_04.mUnk_0A = false;
        this->mUnk_04.mUnk_0B = false;
        this->mUnk_04.mUnk_0C = true;
    }
}

UnkAdventureModeSystem1::UnkAdventureModeSystem1(bool param3) {
    if (!param3) {
        this->mUnk_04.mUnk_10 = this->mUnk_04.mUnk_20;
        this->mUnk_04.mUnk_14 = this->mUnk_04.mUnk_24;
        this->mUnk_04.mUnk_04 = this->mUnk_04.mUnk_06;
        this->mUnk_04.mUnk_0A = false;
        this->mUnk_04.mUnk_0B = false;
        this->mUnk_04.mUnk_0C = true;
    }
}

void UnkAdventureModeSystem1::func_ov024_020cab58(Vec2s *param1, Vec2s *param2) {
    Vec2s local_24;
    Vec2s local_20;

    local_20.x = param2->x;
    local_20.y = param2->y;

    local_24.x = param1->x;
    local_24.y = param1->y;

    this->mUnk_04.func_0201e874(8, &local_24, &local_20, 0);
}

bool UnkAdventureModeSystem1::func_ov024_020caba4(unk32 param1) {
    this->mUnk_04.UpdateLogic();

    switch (this->vfunc_00(param1)) {
        case 0:
            if (!this->mUnk_04.mUnk_0A) {
                this->mUnk_04.UnkOperations1();
            }
            break;
        case 2:
            if (!this->mUnk_04.mUnk_0B) {
                this->mUnk_04.UnkOperations2();
            }
        case 1:
        default:
            break;
    }

    if (this->mUnk_04.mUnk_10 == this->mUnk_04.mUnk_18 && this->mUnk_04.mUnk_14 == this->mUnk_04.mUnk_1C &&
        !this->mUnk_04.mUnk_0A) {
        return true;
    }

    return false;
}

bool UnkAdventureModeSystem1::func_ov024_020cad7c(unk32 param1) {
    bool ret = this->func_ov024_020caba4(param1);

    bool result = true;

    if (!ret) {
        result = false;
    }

    this->mUnk_48->mUnk_2A = result;
    return ret;
}
