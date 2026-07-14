#include "MainGame/AdventureMode.hpp"
#include "Save/AdventureFlags.hpp"
#include "Unknown/UnkStruct_02049f8c.hpp"
#include "Unknown/UnkStruct_0204a088.hpp"
#include "Unknown/UnkStruct_0204a110.hpp"
#include "Unknown/UnkStruct_0204e5f8.hpp"
#include "Unknown/UnkStruct_027e0998.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_ov000_020b5214.hpp"

#include <nitro/g2.h>

extern "C" AdventureModeManager_18C_10 *func_ov011_020b6520(void *, int);
extern "C" void func_ov011_020b84f0(s16 *param1, void *, unk32 param2);
extern "C" void func_02019b3c();

THUMB_BEGIN

AdventureModeManager_18C_14::AdventureModeManager_18C_14() {}

bool AdventureModeManager_18C_14::vfunc_0C(void) {
    return data_0204a088->func_ov000_02061224();
}

bool AdventureModeManager_18C_14::vfunc_10(void) {
    return data_0204a088->func_ov000_02061224();
}

AdventureModeManager_18C::AdventureModeManager_18C(GameModeManagerBase_104 *param1) :
    mUnk_0C(param1),
    mUnk_10(NULL),
    mUnk_38(false),
    mUnk_39(false),
    mUnk_3A(false),
    mUnk_3C(0x1000) {
    this->mUnk_40.x = 0;
    this->mUnk_40.y = 0;
    this->mUnk_44   = 0x1000;
    this->mUnk_48.x = 0;
    this->mUnk_48.y = 0;
    data_0204a088->func_ov000_020611dc(this, 8);
}

AdventureModeManager_18C::~AdventureModeManager_18C() {}

void AdventureModeManager_18C::vfunc_08(unk32 param1) {
    switch (param1) {
        case 1:
            this->func_ov024_020ca034();
            break;
        case 6:
            this->func_ov024_020ca034();
            break;
        case 2:
            break;
        case 5:
            this->func_ov024_020ca034();
            break;
        default:
            break;
    }
}

void AdventureModeManager_18C::vfunc_0C(unk32 param1) {
    switch (param1) {
        case 6:
            switch (this->mUnk_54) {
                case 1:
                    if (this->mUnk_14.mUnk_0D == this->mUnk_14.mUnk_10) {
                        data_ov000_020b5214.func_ov000_0206db44(0x43);
                        data_0204a110.mUnk_DA8.func_0201ced8();
                        this->mUnk_54 = 2;
                    }

                    if (data_0204a110.mUnk_008 != 1 && this->mUnk_38) {
                        this->mUnk_38 = false;
                        this->func_ov024_020c9c6c();
                    }
                    break;
                case 2:
                    if (data_0204a110.mUnk_DA8.mUnk_0C < 0) {
                        data_0204a088->func_ov000_02061230();
                        this->mUnk_54 = 3;
                    }
                    break;
                default:
                    break;
            }
            break;
        case 1:
            if (this->mUnk_14.mUnk_0D == this->mUnk_14.mUnk_10) {
                data_0204a088->func_ov000_02061230();
                this->mUnk_54 = 3;
            }

            if (data_0204a110.mUnk_008 != 1 && this->mUnk_38) {
                this->mUnk_38 = false;
                this->func_ov024_020c9c6c();
            }
            break;
        case 2:
            break;
        case 5:
            if (this->mUnk_14.mUnk_0D == this->mUnk_14.mUnk_10) {
                data_0204a088->func_ov000_02061230();
                this->mUnk_54 = 3;
            }
            break;
        default:
            break;
    }
}

void AdventureModeManager_18C::vfunc_10(unk32 param1, unk32 param2) {
    if (param2 != 1) {
        return;
    }

    data_0204a088->func_ov000_02061248();

    switch (param1) {
        case 1:
        case 6:
            this->mUnk_38 = 1;

            if (data_0204a110.mUnk_DC0.mUnk_00) {
                data_0204a110.mUnk_DC0.func_0201dd58(1, 3);
                this->mUnk_3C = data_0204a110.mUnk_DC0.mUnk_08->func_0201ec30();

                Vec2s auStack_14;
                func_0201e8d4(&auStack_14, data_0204a110.mUnk_DC0.mUnk_04);
                this->mUnk_40.x = auStack_14.x;

                Vec2s auStack_18;
                func_0201e8d4(&auStack_18, data_0204a110.mUnk_DC0.mUnk_04);
                this->mUnk_40.y = auStack_18.y;
            }

            if (data_0204a110.mUnk_008 == 1) {
                this->mUnk_39          = true;
                data_0204a110.mUnk_DFE = true;
            }
            break;
        case 5:
            this->func_ov024_020c9c6c();
            break;
        case 2: {
            this->func_ov024_020c9c6c();
            unk32 temp = this->mUnk_44;

            Vec2s copy;
            copy.x = this->mUnk_48.x;
            copy.y = this->mUnk_48.y;

            Vec2s sp14;
            sp14.x = 0;
            sp14.y = 0;

            Vec2s sp18;
            sp18.x = copy.x;
            sp18.y = copy.y;

            data_0204a110.mUnk_DC0.func_0201db14(temp, 0x1000, &sp18, &sp14, 8, 4);

            this->mUnk_44   = 0x1000;
            this->mUnk_48.x = 0;
            this->mUnk_48.y = 0;
            break;
        }

        default:
            break;
    }

    this->mUnk_50         = data_02049f8c.mUnk_00;
    data_02049f8c.mUnk_00 = 0;
}

void AdventureModeManager_18C::func_ov024_020c9c6c() {
    GetAdventureModeManager()->func_ov024_020c699c();
    gpCurrentGameModeMgr->mUnk_004.func_0201c0c4(0x65);

    if (this->mUnk_3A) {
        this->mUnk_10 = func_ov011_020b6520(&this->mUnk_0C, this->mUnk_4C);
        this->mUnk_10->func_ov011_020b89f0(this->mUnk_4C);
    } else {
        unk32 var_r4 = -1;

        if (data_027e09b8->HasAdventureFlag(AdventureFlag_ObtainedFireGlyph)) {
            var_r4 = 3;
        } else if (data_027e09b8->HasAdventureFlag(AdventureFlag_ObtainedOceanGlyph)) {
            var_r4 = 2;
        } else if (data_027e09b8->HasAdventureFlag(AdventureFlag_ObtainedSnowGlyph)) {
            var_r4 = 1;
        } else if (data_027e09b8->HasAdventureFlag(AdventureFlag_ObtainedForestGlyph)) {
            var_r4 = 0;
        }

        this->mUnk_10 = func_ov011_020b6520(&this->mUnk_0C, var_r4);
    }

    GXS_SetVisiblePlane(28);
    G2S_SetBG2Priority(3);
    G2S_SetBG3Priority(2);
}

void AdventureModeManager_18C::vfunc_14(unk32 param1) {
    this->mUnk_10->func_ov011_020b88ac();
    this->mUnk_54 = 3;
}

void AdventureModeManager_18C::vfunc_18(unk32 param1) {
    switch (param1) {
        case 1:
            data_ov000_020b5214.func_ov000_0206db44(0x44);
            data_ov000_020b5214.func_ov000_0206db44(0x45);

            if (this->mUnk_3A) {
                this->func_ov024_020ca034();
            } else {
                data_0204a110.mUnk_DA8.func_0201cf30();
                this->mUnk_54 = 4;
            }
            break;
        case 5:
            data_ov000_020b5214.func_ov000_0206db44(0x44);
            this->func_ov024_020ca034();
            break;
        case 2: {
            if (this->mUnk_10->mUnk_10EC - 4 <= 3) {
                s16 stack[4];
                func_ov011_020b84f0(stack, this->mUnk_10, this->mUnk_10->mUnk_10EC);
                data_0204a110.mUnk_DC0.func_0201dc10(stack, 8, 4);
            }
            data_ov000_020b5214.func_ov000_0206db44(0x48);
            this->func_ov024_020ca034();
            break;
        }
        case 0:
        default:
            break;
    }
}

void AdventureModeManager_18C::vfunc_1C(unk32 param1) {
    switch (param1) {
        case 1:
            switch (this->mUnk_54) {
                case 4:
                    if (data_0204a110.mUnk_DA8.mUnk_0C < 0) {
                        this->func_ov024_020ca034();
                    }
                    break;
                case 1:
                    if (this->mUnk_14.mUnk_0D == this->mUnk_14.mUnk_10) {
                        data_0204a088->func_ov000_02061230();
                        this->mUnk_54 = 0;
                    }
                    break;
                default:
                    break;
            }

            break;
        case 5:
            if (this->mUnk_14.mUnk_0D == this->mUnk_14.mUnk_10) {
                data_0204a088->func_ov000_02061230();
                this->mUnk_54 = 0;
            }

            break;
        case 2:
            if (this->mUnk_14.mUnk_0D == this->mUnk_14.mUnk_10) {
                this->mUnk_54 = 0;
            }

            break;
        case 0:
        default:
            break;
    }
}

void AdventureModeManager_18C::vfunc_20(unk32 param1, unk32 param2) {
    if (param2 != 1) {
        return;
    }

    switch (param1) {
        case 1: {
            if (!data_027e09a4->IsTrain()) {
                GetAdventureModeManager()->mUnk_004.func_0201c0c4(0x68);
            }

            if (data_027e09a4->IsTrain()) {
                GetAdventureModeManager()->func_ov024_020c555c(1);
            } else if (data_027e0998->func_ov024_020c7354()) {
                GetAdventureModeManager()->func_ov024_020c555c(4);
            } else {
                GetAdventureModeManager()->func_ov024_020c555c(0);
            }

            GetAdventureModeManager()->func_ov024_020c53e8();

            if (data_027e09a4->IsTrain() || data_027e0998->func_ov024_020c7354()) {
                GetAdventureModeManager()->func_ov024_020c671c();
            } else {
                GetAdventureModeManager()->func_ov024_020c66c0();
            }

            if (this->mUnk_39 != 0) {
                this->mUnk_39          = false;
                data_0204a110.mUnk_DFE = true;
            }

            unk32 temp = this->mUnk_3C;

            if (temp != 0x1000) {
                Vec2s copy;
                copy.x = this->mUnk_40.x;
                copy.y = this->mUnk_40.y;

                Vec2s sp18;
                sp18.x = copy.x;
                sp18.y = copy.y;

                Vec2s sp14;
                sp14.x = 0;
                sp14.y = 0;

                data_0204a110.mUnk_DC0.func_0201db14(0x1000, temp, &sp14, &sp18, 1, 3);

                this->mUnk_3C   = 0x1000;
                this->mUnk_40.x = 0;
                this->mUnk_40.y = 0;
            }

            break;
        }
        case 2: {
            u32 temp_r6 = this->mUnk_10->mUnk_10EC;
            u8 temp_r7  = this->mUnk_10->mUnk_10E9;

            switch (temp_r6) {
                case 4:
                case 5:
                case 6:
                case 7:
                    this->mUnk_44 = data_0204a110.mUnk_DC0.mUnk_08->func_0201ec30();

                    Vec2s auStack_14;
                    func_0201e8d4(&auStack_14, data_0204a110.mUnk_DC0.mUnk_04);
                    this->mUnk_48.x = auStack_14.x;

                    Vec2s auStack_18;
                    func_0201e8d4(&auStack_18, data_0204a110.mUnk_DC0.mUnk_04);
                    this->mUnk_48.y = auStack_18.y;

                    data_0204a110.mUnk_DC0.func_0201d628();
                    GetAdventureModeManager()->func_ov024_020c555c(4);
                    GetAdventureModeManager()->func_ov024_020c53e8();
                    GetAdventureModeManager()->func_ov024_020c6770(temp_r6, temp_r7, 0, 4);
                    break;
                default:
                    GetAdventureModeManager()->func_ov024_020c555c(3);
                    GetAdventureModeManager()->func_ov024_020c53e8();
                    GetAdventureModeManager()->vfunc_38(temp_r6, temp_r7, 0, 0);
                    break;
            }

            break;
        }
        case 5:
        default:
            break;
    }

    data_02049f8c.mUnk_00 = this->mUnk_50;
    data_0204a088->func_ov000_02061248();
    func_02019b3c();
}

void AdventureModeManager_18C::vfunc_24() {
    this->mUnk_10 = NULL;
    this->mUnk_3A = false;
}

void AdventureModeManager_18C::func_ov024_020ca034() {
    this->mUnk_14.func_0201bb84(0x14, 2, 0x14);
    this->mUnk_14.mUnk_18 = false;
    this->mUnk_14.mUnk_19 = true;
    data_0204e5f8.func_0201b9a8(&this->mUnk_14);
    this->mUnk_54 = true;
}

void AdventureModeManager_18C::func_ov024_020ca068(unk32 param1) {
    this->mUnk_3A = true;
    this->mUnk_4C = param1;
}

bool AdventureModeManager_18C::func_ov024_020ca074() {
    return this->mUnk_3A;
}

THUMB_END
