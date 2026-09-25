#include "MainGame/CargoManager.hpp"
#include "Unknown/UnkStruct_0204a110.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"

void UnkStruct_027e0ce0::func_ov017_020bd4a0(unk32 param1, bool param2) {
    unk32 temp_r4 = data_0204a110.func_02019300(param1);

    if (this->mUnk_24 != NULL) {
        if (temp_r4 == 0) {
            return;
        }

        this->mUnk_24->func_ov021_020eab6c(param2);
    } else {
        if (this->mUnk_34 != NULL && temp_r4 != 0 && !param2) {
            CargoManager::DoUpdate();
        }

        if (this->mUnk_38 != NULL) {
            this->mUnk_38->func_ov026_020de19c(param1, param2);

            if (temp_r4 == 0) {
                return;
            }
        } else if (this->mUnk_3C != NULL) {
            this->mUnk_3C->func_ov088_0216fbf0(param1);

            if (temp_r4 == 0) {
                return;
            }
        } else {
            if (temp_r4 == 0) {
                return;
            }

            this->mUnk_40->func_ov102_0218303c(param2, this->mUnk_28);
        }
    }

    this->mUnk_30->func_ov017_020bc5fc(this->mUnk_28);
}

void UnkStruct_027e0ce0::func_ov017_020bd568(unk32 param1) {
    bool result = data_027e09b8->func_01ffd420();

    if (this->mUnk_24 != NULL) {
        this->mUnk_24->func_ov021_020eae2c(param1);
        return;
    }

    if (this->mUnk_38 == NULL && this->mUnk_3C == NULL) {
        this->mUnk_40->func_ov102_02183180(param1, result);
    }
}

void UnkStruct_027e0ce0::func_ov017_020bd5c4(void *param1) {
    if (this->mUnk_38 != NULL) {
        this->mUnk_38->func_ov026_020de45c(param1);
    }
}

void UnkStruct_027e0ce0::func_ov017_020bd5dc(void *param1) {
    if (this->mUnk_24 != NULL) {
        this->mUnk_24->func_ov021_020eae84();
        return;
    }

    if (this->mUnk_38 != NULL) {
        this->mUnk_38->func_ov026_020de46c();
        return;
    }

    if (this->mUnk_3C != NULL) {
        this->mUnk_3C->func_ov088_0216fca0();
        return;
    }

    if (this->mUnk_28 != NULL) {
        this->mUnk_28->func_ov017_020bd2e8(param1);
    }

    this->mUnk_40->func_ov102_021831b4(param1);
}

void UnkStruct_027e0ce0::func_ov017_020bd644(void *param1) {
    if (this->mUnk_24 != NULL) {
        this->mUnk_24->func_ov021_020eb010();
        return;
    }

    if (this->mUnk_38 != NULL) {
        this->mUnk_38->func_ov026_020de49c();
        return;
    }

    if (this->mUnk_3C != NULL) {
        this->mUnk_3C->func_ov088_0216ff10();
        return;
    }

    this->mUnk_40->func_ov102_021831f0(param1);
}

void UnkStruct_027e0ce0::func_ov017_020bd69c() {
    if (this->mUnk_40 != NULL) {
        this->mUnk_40->mPlayer.func_ov017_020be098();
    }
}
