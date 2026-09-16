#include "Render/ModelRender.hpp"
#include "Unknown/UnkStruct_027e09c0.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"

void UnkStruct_027e0cd8_0C::vfunc_0C() {
    this->UnkStruct_027e0cd8_0C_Base::vfunc_0C();

    for (int var_r7 = 0; var_r7 < this->mUnk_1D4; var_r7++) {
        for (int var_r8 = 0; var_r8 < ARRAY_LEN(this->mUnk_170[0]); var_r8++) {
            if (this->mUnk_170[var_r7][var_r8] != NULL) {
                this->mUnk_170[var_r7][var_r8]->mUnk_00.func_01ffc3b4();
            }
        }
    }
}

void UnkStruct_027e0cd8_0C::func_ov102_02184628() {
    if (this->mUnk_110 == 7) {
        this->mUnk_098->func_ov047_0213055c();
    }
}
