#include "MainGame/AdventureMode.hpp"
#include "Unknown/UnkStruct_0204a088.hpp"
#include "Unknown/UnkStruct_0204a110.hpp"
#include "Unknown/UnkStruct_0204e5f8.hpp"
#include "Unknown/UnkStruct_027e09a0.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"
#include "Unknown/UnkStruct_ov000_02067bc4.hpp"
#include "Unknown/UnkStruct_ov000_020b51b8.hpp"
#include "Unknown/UnkStruct_ov024_020d86a0.hpp"
#include <nitro/reg.h>

extern "C" void func_02019b3c();
extern "C" AdventureModeManager_160_18 *func_ov006_020b6ab0(void *, void *);

//! TODO: this is fake according to GameModeTitleScreen::GameModeTitleScreen()
extern "C" AdventureModeManager_160_14 *func_ov001_020b6520(void *, void *, int);

bool AdventureModeManager_160_4C::vfunc_0C() {
    return data_0204a088->func_ov000_02061224();
}

AdventureModeManager_160::AdventureModeManager_160(GameModeManagerBase_104 *param1, AdventureModeManager_1B8 *param2) :
    mUnk_0C(0),
    mUnk_10(param1),
    mUnk_14(NULL),
    mUnk_18(0),
    mUnk_1C(param2),
    mUnk_20(0x1000),
    mUnk_24(0, 0) {
    data_0204a088->func_ov000_020611dc(this, 2);
    this->mUnk_70.mUnk_00.mUnk_18 = 0;
}

AdventureModeManager_160::~AdventureModeManager_160() {}

void AdventureModeManager_160::vfunc_08(unk32 param1) {
    switch (param1) {
        case 1:
        case 6:
        case 7:
        case 10:
            if (data_0204a110.mUnk_008 == 1) {
                this->mUnk_28.func_ov000_02066218(0x14);
                this->mUnk_0C         = 3;
                this->mUnk_70.mUnk_26 = true;
            } else if (data_0204a110.mUnk_DC0.mUnk_00) {
                this->func_ov024_020c83bc();
            } else {
                this->func_ov024_020c8454();
            }
            return;
        case 5:
        case 8:
            this->mUnk_0C = 0;
            break;
        default:
            break;
    }
}

void AdventureModeManager_160::vfunc_0C(unk32 param1) {
    switch (param1) {
        case 1:
        case 5:
        case 6:
        case 7:
        case 8:
        case 10:
            switch (this->mUnk_0C) {
                case 0:
                case 1:
                case 2:
                    break;
                case 3:
                    if (this->mUnk_28.mUnk_0D == this->mUnk_28.mUnk_10) {
                        if (data_0204a110.mUnk_DC0.mUnk_00) {
                            this->func_ov024_020c83bc();
                        } else {
                            this->func_ov024_020c8454();
                        }
                    }
                    break;
                case 4:
                    if (!data_0204a110.mUnk_DC0.mUnk_00) {
                        this->func_ov024_020c8454();
                    }
                    break;
                case 5:
                    if (data_0204a110.mUnk_DA8.mUnk_0C < 0) {
                        if (GetAdventureModeManager()->mAllowMapPaint) {
                            this->func_ov024_020c7cfc();
                        } else {
                            this->func_ov024_020c7d4c(param1);
                        }
                    }
                    break;
                case 6:
                    if (data_ov000_020b504c.func_ov000_02067f88(0, 1)) {
                        this->func_ov024_020c7d4c(param1);
                    }
                    break;
                case 7:
                    if (!data_0204a110.GetUnkDDC()->GetUnk0C()->UnkCheck1()) {
                        data_0204a088->func_ov000_02061230();
                    }
                    break;
                default:
                    break;
            }
            break;
        case 0:
        case 2:
        case 3:
        case 4:
        case 9:
        default:
            break;
    }

    if (param1 == 5) {
        data_ov000_020b51b8.func_ov000_0206c608(2, 0, 0x1000);
    }

    if (data_0204a110.mUnk_008 == 5) {
        data_ov000_020b51b8.func_ov000_0206c608(2, 0, 0x1000);
    }
}

void AdventureModeManager_160::vfunc_10(unk32 param1, unk32 param2) {
    if ((param1 == 5 || param1 == 8) && param2 == 2) {
        this->func_ov024_020c7d4c(param1);
    }
}

void AdventureModeManager_160::vfunc_14(unk32 param1) {
    if (param1 == 10) {
        this->mUnk_14->mUnk_1C = 1;
        this->mUnk_70.mUnk_25  = true;
    }

    this->mUnk_0C = 8;
}

void AdventureModeManager_160::func_ov024_020c7cfc() {
    this->mUnk_0C = 6;

    UnkStruct_ov000_02067bc4::UnkStruct1 stack;
    stack.mUnk_0D = 1;
    data_ov000_020b504c.func_ov000_02067cf8(BMG_ID(BMGGroup_maingame, MsgIndex_MapPaintNotAllowed), 1, &stack);
}

void AdventureModeManager_160::func_ov024_020c7d4c(unk32 param1) {
    this->func_ov024_020c851c(param1);

    UnkStruct_ov019_020d24c8_28_258 local_30(0x5F, 0);
    data_0204a110.GetUnkDDC()->func_0201e588(1, (s16) (-local_30.mUnk_0E.x / 2), 0, 8, 0);
    this->mUnk_18->func_ov006_020b6c74();
    this->mUnk_0C = 7;

    if (param1 == 6) {
        if (data_027e09a4->func_01ffd3d8()) {
            data_0204a110.func_02019538(4, 1);
        } else {
            data_0204a110.func_02019538(0, 1);
        }
    }

    REG_BG2CNT_SUB = (REG_BG2CNT_SUB & ~0x03) | 0x01;
}

void AdventureModeManager_160::vfunc_18(unk32 param1) {
    this->mUnk_14 = NULL;

    switch (param1) {
        case 1:
            data_ov000_020b5214.func_ov000_0206db44(0x3C);
            this->mUnk_1C->func_ov024_020d1364();
            this->func_ov024_020c8428();

            if (!GetAdventureModeManager()->func_ov024_020c681c() && !data_ov024_020d86a0->mUnk_0F) {
                this->mUnk_70.mUnk_27 = true;
            }
            break;
        case 8:
            data_ov000_020b5214.func_ov000_0206db44(0x49);
            // fallthrough
        case 5:
            this->mUnk_1C->func_ov024_020d1364();
            this->func_ov024_020c8428();
            this->mUnk_70.mUnk_00.mUnk_1A = 0x14;
            this->mUnk_70.mUnk_00.func_0201bbcc(-1, 1);
            data_0204e5f8.func_0201b9a8(&this->mUnk_70);
            this->mUnk_70.mUnk_24 = 2;
            break;
        case 7:
            data_ov000_020b5214.func_ov000_0206db44(0x3C);
            this->mUnk_1C->func_ov024_020d1364();
            this->func_ov024_020c8428();
            break;
        default:
            break;
    }

    data_ov000_020b504c.func_ov000_02067e60(0, 1);
}

void AdventureModeManager_160::vfunc_1C(unk32 param1) {
    switch (param1) {
        case 1:
        case 7:
            switch (this->mUnk_0C) {
                case 9:
                    if (!data_0204a110.GetUnkDDC()->GetUnk0C()->UnkCheck1() && gSaveManager.IsUnk210()) {
                        data_0204a110.mUnk_DA8.func_0201cf30();
                        this->mUnk_18 = 0;
                        this->mUnk_0C = 10;
                    }

                    break;
                case 10:
                    if (data_0204a110.mUnk_DA8.mUnk_0C < 0) {
                        if (this->mUnk_70.mUnk_27 || this->mUnk_70.mUnk_25) {
                            this->func_ov024_020c84c4();
                        } else {
                            unk32 temp = this->mUnk_20;

                            if (temp != 0x1000) {
                                Vec2s copy;
                                copy.x = this->mUnk_24.x;
                                copy.y = this->mUnk_24.y;

                                Vec2s sp18;
                                sp18.x = copy.x;
                                sp18.y = copy.y;

                                Vec2s sp14;
                                sp14.x = 0;
                                sp14.y = 0;

                                data_0204a110.mUnk_DC0.func_0201db14(0x1000, temp, &sp14, &sp18, 6, 3);
                            }

                            this->mUnk_0C = 11;
                        }
                    }

                    break;
                case 1:
                    if (this->mUnk_4C.mUnk_0D == this->mUnk_4C.mUnk_10) {
                        unk32 temp = this->mUnk_20;

                        if (temp != 0x1000) {
                            Vec2s copy;
                            copy.x = this->mUnk_24.x;
                            copy.y = this->mUnk_24.y;

                            Vec2s sp10;
                            sp10.x = copy.x;
                            sp10.y = copy.y;

                            Vec2s spC;
                            spC.x = 0;
                            spC.y = 0;

                            data_0204a110.mUnk_DC0.func_0201db14(0x1000, temp, &spC, &sp10, 6, 3);
                        }

                        this->mUnk_0C = 11;
                    }

                    break;
                case 11:
                    if (!data_0204a110.mUnk_DC0.mUnk_08->mUnk_0A) {
                        if (this->mUnk_70.mUnk_26) {
                            this->mUnk_28.func_ov000_02066218(0x14);
                            this->mUnk_0C = 12;
                        } else {
                            this->func_ov024_020c8484();
                        }
                    }

                    break;
                case 12:
                    if (this->mUnk_28.mUnk_0D == this->mUnk_28.mUnk_10) {
                        this->func_ov024_020c8484();
                    }

                    break;
                default:
                    break;
            }
            break;
        case 5:
        case 8:
            switch (this->mUnk_0C) {
                case 9:
                    if (!data_0204a110.GetUnkDDC()->GetUnk0C()->UnkCheck1() && gSaveManager.IsUnk210()) {
                        if (this->mUnk_70.mUnk_00.mUnk_0D == this->mUnk_70.mUnk_00.mUnk_10) {
                            this->mUnk_70.mUnk_24--;

                            if (this->mUnk_70.mUnk_24 == 0) {
                                this->mUnk_18 = 0;
                                data_0204a088->func_ov000_02061224();
                                this->mUnk_70.mUnk_00.func_0201bba4(0, 0x14);
                                data_0204e5f8.func_0201b9a8(&this->mUnk_70);
                                this->mUnk_0C = 2;
                            }
                        }
                    }

                    break;
                case 2:
                    if (this->mUnk_70.mUnk_00.mUnk_0D == this->mUnk_70.mUnk_00.mUnk_10) {
                        data_0204a088->func_ov000_02061230();
                    }

                    break;
            }
            break;
        default:
            break;
    }
}

void AdventureModeManager_160::vfunc_20(unk32 param1, unk32 param2) {
    if (param1 != 1) {
        return;
    }

    data_0204a088->func_ov000_02061248();

    if (this->mUnk_70.mUnk_27) {
        this->mUnk_70.mUnk_27 = false;
        SceneIndex sceneIndex = GetAdventureModeManager()->mUnk_1C4.sceneIndex;

        if (data_027e09a4->func_01ffd3d8()) {
            GetAdventureModeManager()->func_ov024_020c555c(1);
        } else {
            if (data_027e09a0->func_ov000_02070378(sceneIndex)) {
                GetAdventureModeManager()->func_ov024_020c555c(4);
            } else {
                GetAdventureModeManager()->func_ov024_020c555c(0);
            }
        }

        GetAdventureModeManager()->func_ov024_020c53e8();

        if (data_027e09a0->func_ov000_02070378(sceneIndex)) {
            GetAdventureModeManager()->func_ov024_020c671c();
        } else {
            GetAdventureModeManager()->func_ov024_020c66c0();
        }

        if (this->mUnk_70.mUnk_26) {
            this->mUnk_28.vfunc_0C();
        }
    } else {
        this->mUnk_70.mUnk_25 = false;
    }
}

void AdventureModeManager_160::vfunc_24() {}

void AdventureModeManager_160::func_ov024_020c83bc() {
    data_0204a110.mUnk_DC0.func_0201dd58(6, 3);
    this->mUnk_0C = 4;

    this->mUnk_20 = data_0204a110.mUnk_DC0.mUnk_08->func_0201ec30();

    Vec2s local_14;
    func_0201e8d4(&local_14, data_0204a110.mUnk_DC0.mUnk_04);
    this->mUnk_24.x = local_14.x;

    Vec2s local_18;
    func_0201e8d4(&local_18, data_0204a110.mUnk_DC0.mUnk_04);
    this->mUnk_24.y = local_18.y;
}

void AdventureModeManager_160::func_ov024_020c8428() {
    data_0204a110.GetUnkDDC()->func_0201e698();
    this->mUnk_18->func_ov006_020b6c80();
    this->mUnk_0C = 9;
    func_02019b3c();
}

void AdventureModeManager_160::func_ov024_020c8454() {
    data_ov000_020b5214.func_ov000_0206db44(0x3B);
    data_0204a110.mUnk_DA8.func_0201ced8();
    this->mUnk_0C = 5;
}

void AdventureModeManager_160::func_ov024_020c8484() {
    this->mUnk_0C = 0;
    data_0204a088->func_ov000_02061230();
    this->mUnk_70.mUnk_26 = false;
    this->mUnk_20         = 0x1000;
    Vec2s_Clear(&this->mUnk_24);
}

void AdventureModeManager_160::func_ov024_020c84c4() {
    this->mUnk_4C.func_0201bb84(0x14, 2, 0x14);

    if (this->mUnk_70.mUnk_25) {
        this->mUnk_4C.mUnk_18 = true;
        this->mUnk_4C.mUnk_19 = false;
    } else {
        this->mUnk_4C.mUnk_18 = false;
        this->mUnk_4C.mUnk_19 = true;
    }

    data_0204e5f8.func_0201b9a8(&this->mUnk_4C);
    this->mUnk_0C = 1;
}

void AdventureModeManager_160::func_ov024_020c851c(unk32 param1) {
    data_0204a088->func_ov000_02061248();

    //! TODO: fake match
    this->mUnk_14 = func_ov001_020b6520(&this->mUnk_10, this->mUnk_1C, param1);
    this->mUnk_18 = func_ov006_020b6ab0(&this->mUnk_10, this->mUnk_1C);

    if (param1 == 1 || param1 == 6) {
        this->mUnk_18->func_ov006_020b6bcc();
    }

    this->mUnk_14->mUnk_40 = this->mUnk_18;

    if (param1 == 10) {
        this->mUnk_14->mUnk_51 = true;
        this->mUnk_14->func_ov006_020b6938();
    }
}
