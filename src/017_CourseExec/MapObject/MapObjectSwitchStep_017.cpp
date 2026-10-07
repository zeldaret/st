#include "MapObject/MapObjectSwitchStep.hpp"
#include "nitro/math.h"

extern "C" void func_01ff91b8(unk16 *, fx32, fx32);
extern "C" fx32 func_01ffb464(fx32);

void MapObjectSwitchStep::vfunc_08() {
    s16 sp0 = this->mUnk_40.mUnk_60;

    switch (this->mState) {
        case 0:
            func_01ff91b8(&sp0, 0, 0x66);
            break;
        case 1:
            if (this->mUnk_E8 > 0) {
                func_01ff91b8(&sp0, -FX_F32_TO_FX32(0.1f), func_01ffb464(INT_TO_FX32(this->mUnk_E8)));
            }

            if (this->mUnk_E8 <= 0) {
                this->func_ov000_0209e11c(2, 0);
            }

            this->mUnk_E8--;
            break;
        case 2:
            if (this->mUnk_20.mParams[0] != 0) {
                if (this->mUnk_20.mParams[0] == 2) {
                    if (!this->func_ov000_0209d29c(1)) {
                        if (this->mUnk_EA == 0 && (this->mUnk_E4.HasReachedMaxU() || !this->func_ov000_0209d29c(0))) {
                            this->func_ov000_0209e11c(0, 0);
                            sp0 = this->mUnk_40.mUnk_60;
                        } else {
                            if (this->mUnk_EA != 0 && (this->mUnk_E4.HasReachedMaxU() || !this->func_ov000_0209d29c(0))) {
                                this->func_ov000_0209e11c(3, 0);
                            } else {
                                this->func_ov000_0209e38c();
                            }
                        }
                    }
                } else if (this->mUnk_EA == 0) {
                    this->func_ov000_0209e11c(0, 0);
                }
            }
            break;
        case 3:
            if (this->mUnk_EA == 0) {
                this->func_ov000_0209e11c(0, 0);
                sp0 = this->mUnk_40.mUnk_60;
            }

            break;
        default:
            break;
    }

    this->mUnk_40.mUnk_60 = sp0;
    this->mUnk_EA         = 0;
    this->mUnk_E4.Update();
}

void MapObjectSwitchStep::vfunc_14(unk32 param1) {
    this->mUnk_40.func_ov000_0209dde0();
    this->mUnk_40.vfunc_18(&this->mPos);
}
