#include "Actor/ActorUnkVCFT.hpp"
#include "Actor/ActorId.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorUnkRMW0.hpp"
#include "CommonFuncs.hpp"
#include "Game/GameModeManager.hpp"
#include "LinkList.hpp"
#include "MainGame/AdventureMode.hpp"
#include "Render/ModelRender.hpp"
#include "Save/SaveManager.hpp"
#include "System/Random.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_02049be0.hpp"
#include "Unknown/UnkStruct_027e0954.hpp"
#include "Unknown/UnkStruct_027e09bc.hpp"
#include "Unknown/UnkStruct_ov000_020b504c.hpp"
#include "Unknown/UnkStruct_ov000_020b51b8.hpp"
#include "Unknown/UnkStruct_ov089_02171540.hpp"
#include "global.h"
#include "math.hpp"
#include "nitro/fx.h"
#include "nns/g3d/g3d.h"
#include "profile.hpp"

extern unk32 data_ov066_02161d60;

struct UnkStruct_ov066_0216080c {
    unk32 unk_00;
    const char *unk_04[];
};
extern UnkStruct_ov066_0216080c data_ov066_02160808;

struct UnkDataStructVCFT {
    u8 pad[0x104];
};

extern UnkDataStructVCFT data_ov066_02160e24[];
extern UnkDataStructVCFT data_ov066_02161a54[];
extern UnkDataStructVCFT data_ov066_0216080c[];
extern UnkDataStructVCFT data_ov066_02160500[];
extern UnkDataStructVCFT data_ov066_02161130[];
extern UnkDataStructVCFT data_ov066_0216143c[];
extern UnkDataStructVCFT data_ov066_021601f4[];
extern UnkDataStructVCFT data_ov066_02161748[];
extern UnkDataStructVCFT data_ov066_02160b18[];
extern const UnkStackStruct2 data_ov066_0215d830;

DECL_PROFILE(ActorProfileUnkVCFT);

Actor *ActorProfileUnkVCFT::Create() {
    return new(HeapIndex_2) ActorUnkVCFT();
}

ActorProfileUnkVCFT::ActorProfileUnkVCFT() :
    ActorProfile_Derived1(ActorId_VCFT) {
    this->mUnk_04.Init(0, FX_F32_TO_FX32(0.5f), 0, FX_F32_TO_FX32(0.4f));
    this->mUnk_1C             = 0xCCC;
    this->mUnk_1A             = 0x199A;
    this->vfunc_04()->mUnk_15 = 1;
}

static ActorUnkZLSL_AnimationTag data_ov066_0215ffe8[] = {
    {0x00, "action_end", 0x00},
    {0x01, "close", 0x00},
};

static ActorUnkZLSL_AnimationTag data_ov066_02160018[] = {
    {0x00, "wait", 0x00},       {0x01, "wait", 0x00}, {0x02, "talk", 0x00},     {0x03, "action", 0x00},
    {0x04, "action_end", 0x01}, {0x05, "nod", 0x00},  {0x06, "question", 0x00}, {0x07, "hear", 0x00},
};

static const u32 data_ov066_0215d7d8[] = {
    BMG_ID(BMGGroup_water, MsgIndex_Unk65),
    BMG_ID(BMGGroup_water, MsgIndex_Unk66),
};

static const u32 data_ov066_0215d7e0[] = {
    BMG_ID(BMGGroup_water, MsgIndex_Unk67),
    BMG_ID(BMGGroup_water, MsgIndex_Unk68),
    BMG_ID(BMGGroup_water, MsgIndex_Unk69),
    BMG_ID(BMGGroup_water, MsgIndex_Unk6A),
};

static const u32 data_ov066_0215d7f0[] = {
    BMG_ID(BMGGroup_water, MsgIndex_Unk67),
    BMG_ID(BMGGroup_water, MsgIndex_Unk68),
    BMG_ID(BMGGroup_water, MsgIndex_Unk69),
    BMG_ID(BMGGroup_water, MsgIndex_Unk6A),
};

static const u32 data_ov066_0215d800[] = {
    BMG_ID(BMGGroup_water, MsgIndex_Unk6B), BMG_ID(BMGGroup_water, MsgIndex_Unk6C), BMG_ID(BMGGroup_water, MsgIndex_Unk6D),
    BMG_ID(BMGGroup_water, MsgIndex_Unk6E), BMG_ID(BMGGroup_water, MsgIndex_Unk6F), BMG_ID(BMGGroup_water, MsgIndex_Unk70),
    BMG_ID(BMGGroup_water, MsgIndex_Unk71), BMG_ID(BMGGroup_water, MsgIndex_Unk72), BMG_ID(BMGGroup_water, MsgIndex_Unk73),
    BMG_ID(BMGGroup_water, MsgIndex_Unk74), BMG_ID(BMGGroup_water, MsgIndex_Unk75), BMG_ID(BMGGroup_water, MsgIndex_Unk76),
};

static const u32 data_ov066_0215d850[] = {
    BMG_ID(BMGGroup_water, MsgIndex_Unk86), BMG_ID(BMGGroup_water, MsgIndex_Unk87), BMG_ID(BMGGroup_water, MsgIndex_Unk88),
    BMG_ID(BMGGroup_water, MsgIndex_Unk89), BMG_ID(BMGGroup_water, MsgIndex_Unk8A), BMG_ID(BMGGroup_water, MsgIndex_Unk8B),
    BMG_ID(BMGGroup_water, MsgIndex_Unk8C), BMG_ID(BMGGroup_water, MsgIndex_Unk8D), BMG_ID(BMGGroup_water, MsgIndex_Unk8E),
    BMG_ID(BMGGroup_water, MsgIndex_Unk8F), BMG_ID(BMGGroup_water, MsgIndex_Unk90), BMG_ID(BMGGroup_water, MsgIndex_Unk91),
    BMG_ID(BMGGroup_water, MsgIndex_Unk92), BMG_ID(BMGGroup_water, MsgIndex_Unk93),
};

ActorUnkVCFT_328::ActorUnkVCFT_328(ActorUnkVCFT *pActor) :
    ActorUnkVCFT_328_Base(data_ov066_02160808.unk_04),
    mUnk_34(pActor),
    mUnk_38(1),
    mUnk_3C(0),
    mUnk_40(0),
    mUnk_41(0) {}

ActorUnkVCFT_328::~ActorUnkVCFT_328() {
    this->mUnk_34 = NULL;
}

void ActorUnkVCFT_328::func_ov066_02158eb4(void) {
    this->UnknownAction1(0, 0, 0);
}

// biggest function in the game!
bool ActorUnkVCFT_328::vfunc_08(void) {
    this->func_ov089_021658ec();

    if (this->func_ov089_02165a28(0) >= -0x3E8) {
        switch (data_02049be0.mUnk_00) {
            case 0:
                switch (this->mUnk_34->mUnk_3D0) {
                    case 0:
                        switch (this->func_ov089_02165a18(0)) {
                            case 0:
                            case 1:
                                this->UnknownAction1(1, 1, 0);
                                break;
                            case 2:
                            case 3:
                                this->UnknownAction2(2, 1);
                                break;
                            default:
                                this->mUnk_40 = 1;
                                this->mUnk_41 = 0;
                                break;
                        }
                        break;
                    case 1:
                        switch (this->func_ov089_02165a18(0)) {
                            case 0:
                            case 1:
                                this->UnknownAction1(1, 1, 0);
                                break;
                            case 2:
                            case 3:
                                this->UnknownAction2(2, 1);
                                break;
                            case 4:
                            case 5:
                                this->UnknownAction2(3, 2);
                                break;
                            case 6:
                            case 7:
                                this->UnknownAction2(4, 3);
                                break;
                            default:
                                this->mUnk_40 = 1;
                                this->mUnk_41 = 0;
                                break;
                        }
                        break;
                    case 2:
                        switch (this->func_ov089_02165a18(0)) {
                            case 0:
                            case 1:
                            case 2:
                            case 3:
                                this->UnknownAction1(1, 1, 0);
                                break;
                            case 4:
                            case 5:
                            case 6:
                            case 7:
                                this->UnknownAction2(2, 1);
                                break;
                            case 8:
                            case 9:
                            case 10:
                                this->UnknownAction2(3, 2);
                                break;
                            case 11:
                            case 12:
                            case 13:
                                this->UnknownAction2(4, 3);
                                break;
                            case 14:
                            case 15:
                            case 16:
                                this->UnknownAction2(5, 4);
                                break;
                            case 17:
                            case 18:
                            case 19:
                                this->UnknownAction2(6, 5);
                                break;
                            case 20:
                            case 21:
                            case 22:
                                this->UnknownAction2(7, 6);
                                break;
                            case 23:
                            case 24:
                            case 25:
                                this->UnknownAction2(8, 7);
                                break;
                            case 26:
                            case 27:
                            case 28:
                                this->UnknownAction2(9, 8);
                                break;
                            case 29:
                            case 30:
                            case 31:
                                this->UnknownAction2(10, 9);
                                break;
                            case 32:
                            case 33:
                            case 34:
                                this->UnknownAction2(11, 10);
                                break;
                            case 35:
                            case 36:
                            case 37:
                                this->UnknownAction2(12, 11);
                                break;
                            default:
                                this->mUnk_40 = 1;
                                this->mUnk_41 = 0;
                                break;
                        }
                        break;
                    default:
                        break;
                }
                break;
            case 2:
                switch (this->mUnk_34->mUnk_3D0) {
                    case 0:
                        if (this->func_ov089_02165a18(0) <= 4) {
                            this->UnknownAction1(1, 1, 0);
                        } else if ((this->func_ov089_02165a18(0) >= 5 && this->func_ov089_02165a18(0) <= 9)) {
                            this->UnknownAction2(2, 1);
                        } else {
                            this->mUnk_40 = 1;
                            this->mUnk_41 = 0;
                        }

                        break;
                    case 1:
                        if (this->func_ov089_02165a18(0) <= 2) {
                            this->UnknownAction1(1, 1, 0);
                        } else if ((this->func_ov089_02165a18(0) >= 3 && this->func_ov089_02165a18(0) <= 5)) {
                            this->UnknownAction2(2, 1);
                        } else if ((this->func_ov089_02165a18(0) >= 6 && this->func_ov089_02165a18(0) <= 8)) {
                            this->UnknownAction2(3, 2);
                        } else if ((this->func_ov089_02165a18(0) >= 9 && this->func_ov089_02165a18(0) <= 0xD)) {
                            this->UnknownAction2(4, 3);
                        } else {
                            this->mUnk_40 = 1;
                            this->mUnk_41 = 0;
                        }

                        break;
                    case 2:
                        if (this->func_ov089_02165a18(0) <= 3) {
                            this->UnknownAction1(1, 1, 0);
                        } else if ((this->func_ov089_02165a18(0) >= 4 && this->func_ov089_02165a18(0) <= 7)) {
                            this->UnknownAction2(2, 1);
                        } else if ((this->func_ov089_02165a18(0) >= 8 && this->func_ov089_02165a18(0) <= 0xA)) {
                            this->UnknownAction2(3, 2);
                        } else if ((this->func_ov089_02165a18(0) >= 0xB && this->func_ov089_02165a18(0) <= 0xF)) {
                            this->UnknownAction2(4, 3);
                        } else if (this->func_ov089_02165a18(0) >= 0x10 && this->func_ov089_02165a18(0) <= 0x12) {
                            this->UnknownAction2(5, 4);
                        } else if ((this->func_ov089_02165a18(0) >= 0x13 && this->func_ov089_02165a18(0) <= 0x15)) {
                            this->UnknownAction2(6, 5);
                        } else if ((this->func_ov089_02165a18(0) >= 0x16 && this->func_ov089_02165a18(0) <= 0x1A)) {
                            this->UnknownAction2(7, 6);
                        } else if (this->func_ov089_02165a18(0) >= 0x1B && this->func_ov089_02165a18(0) <= 0x1F) {
                            this->UnknownAction2(8, 7);
                        } else if (this->func_ov089_02165a18(0) >= 0x20 && this->func_ov089_02165a18(0) <= 0x23) {
                            this->UnknownAction2(9, 8);
                        } else if ((this->func_ov089_02165a18(0) >= 0x24 && this->func_ov089_02165a18(0) <= 0x26)) {
                            this->UnknownAction2(10, 9);
                        } else if ((this->func_ov089_02165a18(0) >= 0x27 && this->func_ov089_02165a18(0) <= 0x2A)) {
                            this->UnknownAction2(11, 10);
                        } else if ((this->func_ov089_02165a18(0) >= 0x2B && this->func_ov089_02165a18(0) <= 0x2F)) {
                            this->UnknownAction2(12, 11);
                        } else {
                            this->mUnk_40 = 1;
                            this->mUnk_41 = 0;
                        }

                        break;
                    default:
                        break;
                }
                break;
            case 3:
                if (func_02014fe0() == 2) {
                    switch (this->mUnk_34->mUnk_3D0) {
                        case 0:
                            if (this->func_ov089_02165a18(0) <= 4) {
                                this->UnknownAction1(1, 1, 0);
                            } else if ((this->func_ov089_02165a18(0) >= 5 && this->func_ov089_02165a18(0) <= 9)) {
                                this->UnknownAction2(2, 1);
                            } else {
                                this->mUnk_40 = 1;
                                this->mUnk_41 = 0;
                            }

                            break;
                        case 1:
                            if (this->func_ov089_02165a18(0) <= 4) {
                                this->UnknownAction1(1, 1, 0);
                            } else if ((this->func_ov089_02165a18(0) >= 5 && this->func_ov089_02165a18(0) <= 8)) {
                                this->UnknownAction2(2, 1);
                            } else if ((this->func_ov089_02165a18(0) >= 9 && this->func_ov089_02165a18(0) <= 12)) {
                                this->UnknownAction2(3, 2);
                            } else if ((this->func_ov089_02165a18(0) >= 13 && this->func_ov089_02165a18(0) <= 15)) {
                                this->UnknownAction2(4, 3);
                            } else {
                                this->mUnk_40 = 1;
                                this->mUnk_41 = 0;
                            }

                            break;
                        case 2:
                            if (this->func_ov089_02165a18(0) <= 1) {
                                this->UnknownAction1(1, 1, 0);
                            } else if ((this->func_ov089_02165a18(0) >= 2 && this->func_ov089_02165a18(0) <= 4)) {
                                this->UnknownAction2(2, 1);
                            } else if ((this->func_ov089_02165a18(0) >= 5 && this->func_ov089_02165a18(0) <= 6)) {
                                this->UnknownAction2(3, 2);
                            } else if ((this->func_ov089_02165a18(0) >= 7 && this->func_ov089_02165a18(0) <= 7)) {
                                this->UnknownAction2(4, 3);
                            } else if (this->func_ov089_02165a18(0) >= 8 && this->func_ov089_02165a18(0) <= 9) {
                                this->UnknownAction2(5, 4);
                            } else if ((this->func_ov089_02165a18(0) >= 0xA && this->func_ov089_02165a18(0) <= 0xD)) {
                                this->UnknownAction2(6, 5);
                            } else if ((this->func_ov089_02165a18(0) >= 0xE && this->func_ov089_02165a18(0) <= 0xE)) {
                                this->UnknownAction2(7, 6);
                            } else if (this->func_ov089_02165a18(0) >= 0xF && this->func_ov089_02165a18(0) <= 0x10) {
                                this->UnknownAction2(8, 7);
                            } else if (this->func_ov089_02165a18(0) >= 0x11 && this->func_ov089_02165a18(0) <= 0x12) {
                                this->UnknownAction2(9, 8);
                            } else if ((this->func_ov089_02165a18(0) >= 0x13 && this->func_ov089_02165a18(0) <= 0x13)) {
                                this->UnknownAction2(10, 9);
                            } else if ((this->func_ov089_02165a18(0) >= 0x14 && this->func_ov089_02165a18(0) <= 0x17)) {
                                this->UnknownAction2(11, 10);
                            } else if ((this->func_ov089_02165a18(0) >= 0x18 && this->func_ov089_02165a18(0) <= 0x19)) {
                                this->UnknownAction2(12, 11);
                            } else {
                                this->mUnk_40 = 1;
                                this->mUnk_41 = 0;
                            }

                            break;
                        default:
                            break;
                    }
                } else {
                    switch (this->mUnk_34->mUnk_3D0) {
                        case 0:
                            if (this->func_ov089_02165a18(0) <= 4) {
                                this->UnknownAction1(1, 1, 0);
                            } else if ((this->func_ov089_02165a18(0) >= 5 && this->func_ov089_02165a18(0) <= 9)) {
                                this->UnknownAction2(2, 1);
                            } else {
                                this->mUnk_40 = 1;
                                this->mUnk_41 = 0;
                            }

                            break;
                        case 1:
                            if (this->func_ov089_02165a18(0) <= 4) {
                                this->UnknownAction1(1, 1, 0);
                            } else if ((this->func_ov089_02165a18(0) >= 5 && this->func_ov089_02165a18(0) <= 10)) {
                                this->UnknownAction2(2, 1);
                            } else if ((this->func_ov089_02165a18(0) >= 11 && this->func_ov089_02165a18(0) <= 14)) {
                                this->UnknownAction2(3, 2);
                            } else if ((this->func_ov089_02165a18(0) >= 15 && this->func_ov089_02165a18(0) <= 17)) {
                                this->UnknownAction2(4, 3);
                            } else {
                                this->mUnk_40 = 1;
                                this->mUnk_41 = 0;
                            }

                            break;
                        case 2:
                            if (this->func_ov089_02165a18(0) <= 1) {
                                this->UnknownAction1(1, 1, 0);
                            } else if ((this->func_ov089_02165a18(0) >= 2 && this->func_ov089_02165a18(0) <= 4)) {
                                this->UnknownAction2(2, 1);
                            } else if ((this->func_ov089_02165a18(0) >= 5 && this->func_ov089_02165a18(0) <= 6)) {
                                this->UnknownAction2(3, 2);
                            } else if ((this->func_ov089_02165a18(0) >= 7 && this->func_ov089_02165a18(0) <= 7)) {
                                this->UnknownAction2(4, 3);
                            } else if (this->func_ov089_02165a18(0) >= 8 && this->func_ov089_02165a18(0) <= 9) {
                                this->UnknownAction2(5, 4);
                            } else if ((this->func_ov089_02165a18(0) >= 0xA && this->func_ov089_02165a18(0) <= 0xD)) {
                                this->UnknownAction2(6, 5);
                            } else if ((this->func_ov089_02165a18(0) >= 0xE && this->func_ov089_02165a18(0) <= 0xE)) {
                                this->UnknownAction2(7, 6);
                            } else if (this->func_ov089_02165a18(0) >= 0xF && this->func_ov089_02165a18(0) <= 0x10) {
                                this->UnknownAction2(8, 7);
                            } else if (this->func_ov089_02165a18(0) >= 0x10 && this->func_ov089_02165a18(0) <= 0x11) {
                                this->UnknownAction2(9, 8);
                            } else if ((this->func_ov089_02165a18(0) >= 0x12 && this->func_ov089_02165a18(0) <= 0x12)) {
                                this->UnknownAction2(10, 9);
                            } else if ((this->func_ov089_02165a18(0) >= 0x13 && this->func_ov089_02165a18(0) <= 0x16)) {
                                this->UnknownAction2(11, 10);
                            } else if ((this->func_ov089_02165a18(0) >= 0x17 && this->func_ov089_02165a18(0) <= 0x18)) {
                                this->UnknownAction2(12, 11);
                            } else {
                                this->mUnk_40 = 1;
                                this->mUnk_41 = 0;
                            }

                            break;
                        default:
                            break;
                    }
                }
                break;
            case 4:
                switch (this->mUnk_34->mUnk_3D0) {
                    case 0:
                        if (this->func_ov089_02165a18(0) <= 2) {
                            this->UnknownAction1(1, 1, 0);
                        } else if ((this->func_ov089_02165a18(0) >= 3 && this->func_ov089_02165a18(0) <= 5)) {
                            this->UnknownAction2(2, 1);
                        } else {
                            this->mUnk_40 = 1;
                            this->mUnk_41 = 0;
                        }

                        break;
                    case 1:
                        if (this->func_ov089_02165a18(0) <= 2) {
                            this->UnknownAction1(1, 1, 0);
                        } else if ((this->func_ov089_02165a18(0) >= 3 && this->func_ov089_02165a18(0) <= 5)) {
                            this->UnknownAction2(2, 1);
                        } else if ((this->func_ov089_02165a18(0) >= 6 && this->func_ov089_02165a18(0) <= 8)) {
                            this->UnknownAction2(3, 2);
                        } else if ((this->func_ov089_02165a18(0) >= 9 && this->func_ov089_02165a18(0) <= 11)) {
                            this->UnknownAction2(4, 3);
                        } else {
                            this->mUnk_40 = 1;
                            this->mUnk_41 = 0;
                        }

                        break;
                    case 2:
                        if (this->func_ov089_02165a18(0) <= 2) {
                            this->UnknownAction1(1, 1, 0);
                        } else if ((this->func_ov089_02165a18(0) >= 3 && this->func_ov089_02165a18(0) <= 5)) {
                            this->UnknownAction2(2, 1);
                        } else if ((this->func_ov089_02165a18(0) >= 6 && this->func_ov089_02165a18(0) <= 8)) {
                            this->UnknownAction2(3, 2);
                        } else if ((this->func_ov089_02165a18(0) >= 9 && this->func_ov089_02165a18(0) <= 0xB)) {
                            this->UnknownAction2(4, 3);
                        } else if (this->func_ov089_02165a18(0) >= 0xC && this->func_ov089_02165a18(0) <= 0xE) {
                            this->UnknownAction2(5, 4);
                        } else if ((this->func_ov089_02165a18(0) >= 0xF && this->func_ov089_02165a18(0) <= 0x11)) {
                            this->UnknownAction2(6, 5);
                        } else if ((this->func_ov089_02165a18(0) >= 0x12 && this->func_ov089_02165a18(0) <= 0x13)) {
                            this->UnknownAction2(7, 6);
                        } else if (this->func_ov089_02165a18(0) >= 0x14 && this->func_ov089_02165a18(0) <= 0x16) {
                            this->UnknownAction2(8, 7);
                        } else if (this->func_ov089_02165a18(0) >= 0x17 && this->func_ov089_02165a18(0) <= 0x19) {
                            this->UnknownAction2(9, 8);
                        } else if ((this->func_ov089_02165a18(0) >= 0x1A && this->func_ov089_02165a18(0) <= 0x1B)) {
                            this->UnknownAction2(10, 9);
                        } else if ((this->func_ov089_02165a18(0) >= 0x1C && this->func_ov089_02165a18(0) <= 0x1E)) {
                            this->UnknownAction2(11, 10);
                        } else if ((this->func_ov089_02165a18(0) >= 0x1F && this->func_ov089_02165a18(0) <= 0x21)) {
                            this->UnknownAction2(12, 11);
                        } else {
                            this->mUnk_40 = 1;
                            this->mUnk_41 = 0;
                        }

                        break;
                    default:
                        break;
                }
                break;
            case 5:
                if (func_02014fe0() == 2) {
                    switch (this->mUnk_34->mUnk_3D0) {
                        case 0:
                            if (this->func_ov089_02165a18(0) <= 2) {
                                this->UnknownAction1(1, 1, 0);
                            } else if ((this->func_ov089_02165a18(0) >= 3 && this->func_ov089_02165a18(0) <= 5)) {
                                this->UnknownAction2(2, 1);
                            } else {
                                this->mUnk_40 = 1;
                                this->mUnk_41 = 0;
                            }

                            break;
                        case 1:
                            if (this->func_ov089_02165a18(0) <= 4) {
                                this->UnknownAction1(1, 1, 0);
                            } else if ((this->func_ov089_02165a18(0) >= 5 && this->func_ov089_02165a18(0) <= 9)) {
                                this->UnknownAction2(2, 1);
                            } else if ((this->func_ov089_02165a18(0) >= 10 && this->func_ov089_02165a18(0) <= 14)) {
                                this->UnknownAction2(3, 2);
                            } else if ((this->func_ov089_02165a18(0) >= 15 && this->func_ov089_02165a18(0) <= 19)) {
                                this->UnknownAction2(4, 3);
                            } else {
                                this->mUnk_40 = 1;
                                this->mUnk_41 = 0;
                            }

                            break;
                        case 2:
                            if (this->func_ov089_02165a18(0) <= 3) {
                                this->UnknownAction1(1, 1, 0);
                            } else if ((this->func_ov089_02165a18(0) >= 4 && this->func_ov089_02165a18(0) <= 8)) {
                                this->UnknownAction2(2, 1);
                            } else if ((this->func_ov089_02165a18(0) >= 9 && this->func_ov089_02165a18(0) <= 0xA)) {
                                this->UnknownAction2(3, 2);
                            } else if ((this->func_ov089_02165a18(0) >= 0xB && this->func_ov089_02165a18(0) <= 0xE)) {
                                this->UnknownAction2(4, 3);
                            } else if (this->func_ov089_02165a18(0) >= 0xF && this->func_ov089_02165a18(0) <= 0x10) {
                                this->UnknownAction2(5, 4);
                            } else if ((this->func_ov089_02165a18(0) >= 0x11 && this->func_ov089_02165a18(0) <= 0x15)) {
                                this->UnknownAction2(6, 5);
                            } else if ((this->func_ov089_02165a18(0) >= 0x16 && this->func_ov089_02165a18(0) <= 0x19)) {
                                this->UnknownAction2(7, 6);
                            } else if (this->func_ov089_02165a18(0) >= 0x1A && this->func_ov089_02165a18(0) <= 0x1D) {
                                this->UnknownAction2(8, 7);
                            } else if (this->func_ov089_02165a18(0) >= 0x1E && this->func_ov089_02165a18(0) <= 0x21) {
                                this->UnknownAction2(9, 8);
                            } else if ((this->func_ov089_02165a18(0) >= 0x22 && this->func_ov089_02165a18(0) <= 0x26)) {
                                this->UnknownAction2(10, 9);
                            } else if ((this->func_ov089_02165a18(0) >= 0x27 && this->func_ov089_02165a18(0) <= 0x28)) {
                                this->UnknownAction2(11, 10);
                            } else if ((this->func_ov089_02165a18(0) >= 0x29 && this->func_ov089_02165a18(0) <= 0x2C)) {
                                this->UnknownAction2(12, 11);
                            } else {
                                this->mUnk_40 = 1;
                                this->mUnk_41 = 0;
                            }

                            break;
                        default:
                            break;
                    }
                } else {
                    switch (this->mUnk_34->mUnk_3D0) {
                        case 0:
                            if (this->func_ov089_02165a18(0) <= 3) {
                                this->UnknownAction1(1, 1, 0);
                            } else if ((this->func_ov089_02165a18(0) >= 4 && this->func_ov089_02165a18(0) <= 8)) {
                                this->UnknownAction2(2, 1);
                            } else {
                                this->mUnk_40 = 1;
                                this->mUnk_41 = 0;
                            }

                            break;
                        case 1:
                            if (this->func_ov089_02165a18(0) <= 4) {
                                this->UnknownAction1(1, 1, 0);
                            } else if ((this->func_ov089_02165a18(0) >= 5 && this->func_ov089_02165a18(0) <= 9)) {
                                this->UnknownAction2(2, 1);
                            } else if ((this->func_ov089_02165a18(0) >= 10 && this->func_ov089_02165a18(0) <= 14)) {
                                this->UnknownAction2(3, 2);
                            } else if ((this->func_ov089_02165a18(0) >= 15 && this->func_ov089_02165a18(0) <= 19)) {
                                this->UnknownAction2(4, 3);
                            } else {
                                this->mUnk_40 = 1;
                                this->mUnk_41 = 0;
                            }

                            break;
                        case 2:
                            if (this->func_ov089_02165a18(0) <= 3) {
                                this->UnknownAction1(1, 1, 0);
                            } else if ((this->func_ov089_02165a18(0) >= 4 && this->func_ov089_02165a18(0) <= 8)) {
                                this->UnknownAction2(2, 1);
                            } else if ((this->func_ov089_02165a18(0) >= 9 && this->func_ov089_02165a18(0) <= 0xA)) {
                                this->UnknownAction2(3, 2);
                            } else if ((this->func_ov089_02165a18(0) >= 0xB && this->func_ov089_02165a18(0) <= 0xE)) {
                                this->UnknownAction2(4, 3);
                            } else if (this->func_ov089_02165a18(0) >= 0xF && this->func_ov089_02165a18(0) <= 0x10) {
                                this->UnknownAction2(5, 4);
                            } else if ((this->func_ov089_02165a18(0) >= 0x11 && this->func_ov089_02165a18(0) <= 0x15)) {
                                this->UnknownAction2(6, 5);
                            } else if ((this->func_ov089_02165a18(0) >= 0x16 && this->func_ov089_02165a18(0) <= 0x19)) {
                                this->UnknownAction2(7, 6);
                            } else if (this->func_ov089_02165a18(0) >= 0x1A && this->func_ov089_02165a18(0) <= 0x1D) {
                                this->UnknownAction2(8, 7);
                            } else if (this->func_ov089_02165a18(0) >= 0x1E && this->func_ov089_02165a18(0) <= 0x21) {
                                this->UnknownAction2(9, 8);
                            } else if ((this->func_ov089_02165a18(0) >= 0x22 && this->func_ov089_02165a18(0) <= 0x26)) {
                                this->UnknownAction2(10, 9);
                            } else if ((this->func_ov089_02165a18(0) >= 0x27 && this->func_ov089_02165a18(0) <= 0x28)) {
                                this->UnknownAction2(11, 10);
                            } else if ((this->func_ov089_02165a18(0) >= 0x29 && this->func_ov089_02165a18(0) <= 0x2C)) {
                                this->UnknownAction2(12, 11);
                            } else {
                                this->mUnk_40 = 1;
                                this->mUnk_41 = 0;
                            }

                            break;
                        default:
                            break;
                    }
                }
                break;
            case 1:
            default:
                if (func_02014fe0() == 2) {
                    switch (this->mUnk_34->mUnk_3D0) {
                        case 0:
                            if (this->func_ov089_02165a18(0) <= 4) {
                                this->UnknownAction1(1, 1, 0);
                            } else if ((this->func_ov089_02165a18(0) >= 5 && this->func_ov089_02165a18(0) <= 10)) {
                                this->UnknownAction2(2, 1);
                            } else {
                                this->mUnk_40 = 1;
                                this->mUnk_41 = 0;
                            }

                            break;
                        case 1:
                            if (this->func_ov089_02165a18(0) <= 3) {
                                this->UnknownAction1(1, 1, 0);
                            } else if ((this->func_ov089_02165a18(0) >= 4 && this->func_ov089_02165a18(0) <= 6)) {
                                this->UnknownAction2(2, 1);
                            } else if ((this->func_ov089_02165a18(0) >= 7 && this->func_ov089_02165a18(0) <= 9)) {
                                this->UnknownAction2(3, 2);
                            } else if ((this->func_ov089_02165a18(0) >= 0xA && this->func_ov089_02165a18(0) <= 0xE)) {
                                this->UnknownAction2(4, 3);
                            } else {
                                this->mUnk_40 = 1;
                                this->mUnk_41 = 0;
                            }

                            break;
                        case 2:
                            if (this->func_ov089_02165a18(0) <= 3) {
                                this->UnknownAction1(1, 1, 0);
                            } else if ((this->func_ov089_02165a18(0) >= 4 && this->func_ov089_02165a18(0) <= 9)) {
                                this->UnknownAction2(2, 1);
                            } else if ((this->func_ov089_02165a18(0) >= 0xA && this->func_ov089_02165a18(0) <= 0xC)) {
                                this->UnknownAction2(3, 2);
                            } else if ((this->func_ov089_02165a18(0) >= 0xD && this->func_ov089_02165a18(0) <= 0x10)) {
                                this->UnknownAction2(4, 3);
                            } else if (this->func_ov089_02165a18(0) >= 0x11 && this->func_ov089_02165a18(0) <= 0x14) {
                                this->UnknownAction2(5, 4);
                            } else if ((this->func_ov089_02165a18(0) >= 0x15 && this->func_ov089_02165a18(0) <= 0x1A)) {
                                this->UnknownAction2(6, 5);
                            } else if ((this->func_ov089_02165a18(0) >= 0x1B && this->func_ov089_02165a18(0) <= 0x1E)) {
                                this->UnknownAction2(7, 6);
                            } else if (this->func_ov089_02165a18(0) >= 0x1F && this->func_ov089_02165a18(0) <= 0x22) {
                                this->UnknownAction2(8, 7);
                            } else if (this->func_ov089_02165a18(0) >= 0x23 && this->func_ov089_02165a18(0) <= 0x26) {
                                this->UnknownAction2(9, 8);
                            } else if ((this->func_ov089_02165a18(0) >= 0x27 && this->func_ov089_02165a18(0) <= 0x2A)) {
                                this->UnknownAction2(10, 9);
                            } else if ((this->func_ov089_02165a18(0) >= 0x2B && this->func_ov089_02165a18(0) <= 0x2F)) {
                                this->UnknownAction2(11, 10);
                            } else if ((this->func_ov089_02165a18(0) >= 0x30 && this->func_ov089_02165a18(0) <= 0x32)) {
                                this->UnknownAction2(12, 11);
                            } else {
                                this->mUnk_40 = 1;
                                this->mUnk_41 = 0;
                            }

                            break;
                        default:
                            break;
                    }
                } else {
                    switch (this->mUnk_34->mUnk_3D0) {
                        case 0:
                            if (this->func_ov089_02165a18(0) <= 1) {
                                this->UnknownAction1(1, 1, 0);
                            } else if ((this->func_ov089_02165a18(0) >= 2 && this->func_ov089_02165a18(0) <= 6)) {
                                this->UnknownAction2(2, 1);
                            } else {
                                this->mUnk_40 = 1;
                                this->mUnk_41 = 0;
                            }

                            break;
                        case 1:
                            if (this->func_ov089_02165a18(0) <= 5) {
                                this->UnknownAction1(1, 1, 0);
                            } else if ((this->func_ov089_02165a18(0) >= 6 && this->func_ov089_02165a18(0) <= 7)) {
                                this->UnknownAction2(2, 1);
                            } else if ((this->func_ov089_02165a18(0) >= 8 && this->func_ov089_02165a18(0) <= 9)) {
                                this->UnknownAction2(3, 2);
                            } else if ((this->func_ov089_02165a18(0) >= 0xA && this->func_ov089_02165a18(0) <= 11)) {
                                this->UnknownAction2(4, 3);
                            } else {
                                this->mUnk_40 = 1;
                                this->mUnk_41 = 0;
                            }

                            break;
                        case 2:
                            if (this->func_ov089_02165a18(0) <= 3) {
                                this->UnknownAction1(1, 1, 0);
                            } else if ((this->func_ov089_02165a18(0) >= 4 && this->func_ov089_02165a18(0) <= 6)) {
                                this->UnknownAction2(2, 1);
                            } else if ((this->func_ov089_02165a18(0) >= 7 && this->func_ov089_02165a18(0) <= 0xB)) {
                                this->UnknownAction2(3, 2);
                            } else if ((this->func_ov089_02165a18(0) >= 0xC && this->func_ov089_02165a18(0) <= 0xE)) {
                                this->UnknownAction2(4, 3);
                            } else if (this->func_ov089_02165a18(0) >= 0xF && this->func_ov089_02165a18(0) <= 0x10) {
                                this->UnknownAction2(5, 4);
                            } else if ((this->func_ov089_02165a18(0) >= 0x11 && this->func_ov089_02165a18(0) <= 0x13)) {
                                this->UnknownAction2(6, 5);
                            } else if ((this->func_ov089_02165a18(0) >= 0x14 && this->func_ov089_02165a18(0) <= 0x16)) {
                                this->UnknownAction2(7, 6);
                            } else if (this->func_ov089_02165a18(0) >= 0x17 && this->func_ov089_02165a18(0) <= 0x18) {
                                this->UnknownAction2(8, 7);
                            } else if (this->func_ov089_02165a18(0) >= 0x19 && this->func_ov089_02165a18(0) <= 0x1C) {
                                this->UnknownAction2(9, 8);
                            } else if ((this->func_ov089_02165a18(0) >= 0x1D && this->func_ov089_02165a18(0) <= 0x21)) {
                                this->UnknownAction2(10, 9);
                            } else if ((this->func_ov089_02165a18(0) >= 0x22 && this->func_ov089_02165a18(0) <= 0x24)) {
                                this->UnknownAction2(11, 10);
                            } else if ((this->func_ov089_02165a18(0) >= 0x25 && this->func_ov089_02165a18(0) <= 0x27)) {
                                this->UnknownAction2(12, 11);
                            } else {
                                this->mUnk_40 = 1;
                                this->mUnk_41 = 0;
                            }

                            break;
                        default:
                            break;
                    }
                }

                break;
        }
    } else {
        this->mUnk_40 = 1;
        this->mUnk_41 = 0;
    }

    return true;
}

void ActorUnkVCFT_328::func_ov066_0215ac68(const char **param1) {
    this->mUnk_30 = param1;
}

ActorUnkVCFT::ActorUnkVCFT() :
    ActorCharacter_Derived1(&this->mUnk_24C, GET_PROFILE(ActorProfileUnkVCFT)->vfunc_04()),
    mUnk_24C(G3d_GetModelPtr(GET_PROFILE(ActorProfileUnkVCFT)->vfunc_04()->mUnk_50)),
    mUnk_2BC(&this->mUnk_24C, GET_PROFILE(ActorProfileUnkVCFT)->vfunc_04()),
    mUnk_328(this),
    mUnk_36C(this),
    mUnk_3D0(-1),
    mUnk_3D4(0) {
    *(u16 *) &this->mUnk_3D8.value = 0;
    this->mUnk_3D8.max             = 300;

    *(u16 *) &this->mUnk_3DC.value = 0;
    this->mUnk_3DC.max             = 120;

    this->mUnk_3E0.SetAlt(0, 0);
    this->mUnk_3E4 = 0;
    this->mUnk_3E8 = false;
    this->mUnk_3E9 = false;
    this->mUnk_3EA = false;
    this->mUnk_0B8 = data_ov066_02160018;
    this->mUnk_3EC = gSaveManager.mUnk_000->unk_B78.unk_2E;
}

unk32 ActorUnkVCFT::vfunc_7C(unk32 param1) {
    UnkStackStruct2 sp0;
    UnkStruct_ov000_020b504c_28 *temp_r0;

    switch (param1) {
        case 0:
            this->mUnk_3D0++;
            this->mUnk_3D8.Set(0, 300);
            this->mUnk_328.func_ov066_02158eb4();

            switch (data_02049be0.mUnk_00) {

                case 0:
                    this->mUnk_328.func_ov066_0215ac68((const char **) &data_ov066_0216080c[this->mUnk_3D0]);
                    data_ov089_02171540.func_ov089_02165c80((const char **) &data_ov066_0216080c[this->mUnk_3D0],
                                                            &this->mUnk_328);
                    break;
                case 2:
                    this->mUnk_328.func_ov066_0215ac68((const char **) &data_ov066_02160500[this->mUnk_3D0]);
                    data_ov089_02171540.func_ov089_02165c80((const char **) &data_ov066_02160500[this->mUnk_3D0],
                                                            &this->mUnk_328);
                    break;
                case 3:
                    if (func_02014fe0() == 2) {
                        this->mUnk_328.func_ov066_0215ac68((const char **) &data_ov066_02161130[this->mUnk_3D0]);
                        data_ov089_02171540.func_ov089_02165c80((const char **) &data_ov066_02161130[this->mUnk_3D0],
                                                                &this->mUnk_328);
                    } else {
                        this->mUnk_328.func_ov066_0215ac68((const char **) &data_ov066_0216143c[this->mUnk_3D0]);
                        data_ov089_02171540.func_ov089_02165c80((const char **) &data_ov066_0216143c[this->mUnk_3D0],
                                                                &this->mUnk_328);
                    }
                    break;
                case 5:
                    if (func_02014fe0() == 2) {
                        this->mUnk_328.func_ov066_0215ac68((const char **) &data_ov066_021601f4[this->mUnk_3D0]);
                        data_ov089_02171540.func_ov089_02165c80((const char **) &data_ov066_021601f4[this->mUnk_3D0],
                                                                &this->mUnk_328);
                    } else {
                        this->mUnk_328.func_ov066_0215ac68((const char **) &data_ov066_02161748[this->mUnk_3D0]);
                        data_ov089_02171540.func_ov089_02165c80((const char **) &data_ov066_02161748[this->mUnk_3D0],
                                                                &this->mUnk_328);
                    }
                    break;
                case 4:
                    this->mUnk_328.func_ov066_0215ac68((const char **) &data_ov066_02160b18[this->mUnk_3D0]);
                    data_ov089_02171540.func_ov089_02165c80((const char **) &data_ov066_02160b18[this->mUnk_3D0],
                                                            &this->mUnk_328);
                    break;
                case 1:
                default:
                    if (func_02014fe0() == 2) {
                        this->mUnk_328.func_ov066_0215ac68((const char **) &data_ov066_02160e24[this->mUnk_3D0]);
                        data_ov089_02171540.func_ov089_02165c80((const char **) &data_ov066_02160e24[this->mUnk_3D0],
                                                                &this->mUnk_328);
                    } else {
                        this->mUnk_328.func_ov066_0215ac68((const char **) &data_ov066_02161a54[this->mUnk_3D0]);
                        data_ov089_02171540.func_ov089_02165c80((const char **) &data_ov066_02161a54[this->mUnk_3D0],
                                                                &this->mUnk_328);
                    }
                    break;
            }

            this->mUnk_3E8 = true;
            this->mUnk_3E0.Init();
            this->vfunc_98(7);
            break;
        case 5:
            this->mUnk_3D8.Set(0, 300);
            this->mUnk_328.func_ov066_02158eb4();

            switch (data_02049be0.mUnk_00) {

                case 0:
                    this->mUnk_328.func_ov066_0215ac68((const char **) &data_ov066_0216080c[this->mUnk_3D0]);
                    data_ov089_02171540.func_ov089_02165c80((const char **) &data_ov066_0216080c[this->mUnk_3D0],
                                                            &this->mUnk_328);
                    break;
                case 2:
                    this->mUnk_328.func_ov066_0215ac68((const char **) &data_ov066_02160500[this->mUnk_3D0]);
                    data_ov089_02171540.func_ov089_02165c80((const char **) &data_ov066_02160500[this->mUnk_3D0],
                                                            &this->mUnk_328);
                    break;
                case 3:
                    if (func_02014fe0() == 2) {
                        this->mUnk_328.func_ov066_0215ac68((const char **) &data_ov066_02161130[this->mUnk_3D0]);
                        data_ov089_02171540.func_ov089_02165c80((const char **) &data_ov066_02161130[this->mUnk_3D0],
                                                                &this->mUnk_328);
                    } else {
                        this->mUnk_328.func_ov066_0215ac68((const char **) &data_ov066_0216143c[this->mUnk_3D0]);
                        data_ov089_02171540.func_ov089_02165c80((const char **) &data_ov066_0216143c[this->mUnk_3D0],
                                                                &this->mUnk_328);
                    }
                    break;
                case 5:
                    if (func_02014fe0() == 2) {
                        this->mUnk_328.func_ov066_0215ac68((const char **) &data_ov066_021601f4[this->mUnk_3D0]);
                        data_ov089_02171540.func_ov089_02165c80((const char **) &data_ov066_021601f4[this->mUnk_3D0],
                                                                &this->mUnk_328);
                    } else {
                        this->mUnk_328.func_ov066_0215ac68((const char **) &data_ov066_02161748[this->mUnk_3D0]);
                        data_ov089_02171540.func_ov089_02165c80((const char **) &data_ov066_02161748[this->mUnk_3D0],
                                                                &this->mUnk_328);
                    }
                    break;
                case 4:
                    this->mUnk_328.func_ov066_0215ac68((const char **) &data_ov066_02160b18[this->mUnk_3D0]);
                    data_ov089_02171540.func_ov089_02165c80((const char **) &data_ov066_02160b18[this->mUnk_3D0],
                                                            &this->mUnk_328);
                    break;
                case 1:
                default:
                    if (func_02014fe0() == 2) {
                        this->mUnk_328.func_ov066_0215ac68((const char **) &data_ov066_02160e24[this->mUnk_3D0]);
                        data_ov089_02171540.func_ov089_02165c80((const char **) &data_ov066_02160e24[this->mUnk_3D0],
                                                                &this->mUnk_328);
                    } else {
                        this->mUnk_328.func_ov066_0215ac68((const char **) &data_ov066_02161a54[this->mUnk_3D0]);
                        data_ov089_02171540.func_ov089_02165c80((const char **) &data_ov066_02161a54[this->mUnk_3D0],
                                                                &this->mUnk_328);
                    }
                    break;
            }

            this->mUnk_3E8 = true;
            this->mUnk_3E0.Init();
            this->vfunc_98(7);
            break;
        case 1:
            data_ov089_02171540.func_ov089_02165d9c();
            this->mUnk_3E8 = false;
            this->mUnk_3E0.Init();
            this->vfunc_98(5);
            break;
        case 2:
            GetAdventureModeManager()->func_ov024_020c6a48(4, 0);
            this->mAngle  = 0;
            sp0           = data_ov066_0215d830;
            sp0.s.mUnk_06 = this->mAngle.angle_s;
            data_027e09bc->mUnk_04[2]->func_ov000_0207834c(&this->mPos, &sp0, 0);

            temp_r0                                              = data_ov000_020b504c.func_ov000_02067bc4(0);
            temp_r0->mUnk_08->mUnk_020.mCellAnim.unk_34          = (void *) 0xC;
            temp_r0->mUnk_08->mUnk_020.mCellAnim.unk_38          = 1;
            temp_r0->mUnk_08->mUnk_020.mCellAnim.animCtrl.unk_1C = (void *) UnkMsgDataStruct1::func_ov066_0215b2f4;
            break;
        case 3:
            GetAdventureModeManager()->func_ov024_020c6a48(4, 1);
            data_027e09bc->mUnk_04[2]->func_ov000_02078230(0);
            this->mUnk_3D0 = -1;
            this->vfunc_98(0);
            break;
        case 4:
            if (this->mUnk_3EA) {
                if (this->mUnk_3DC.HasExpired()) {
                    switch (this->mUnk_094.mUnk_0C->vfunc_30()) {
                        case 3:
                            this->vfunc_98(4);
                            this->func_ov066_0215b938();
                            return 0;
                        case 4:
                            if (this->mUnk_094.mUnk_0C->vfunc_28()->func_01ff8fa8() == 0) {
                                return 0;
                            }

                            this->vfunc_98(2);
                            this->mUnk_3EA = false;
                            return 1;
                        default:
                            break;
                    }
                } else {
                    return 0;
                }
            } else {
                this->vfunc_98(3);
                this->mUnk_3EA = true;
                this->mUnk_3DC.Set(0, 120);
                this->func_ov066_0215b8c4();
                data_ov000_020b51b8.func_ov000_0206d274(0x140);
                return 0;
            }
            break;
        default:
            break;
    }

    return 1;
}

void UnkMsgDataStruct1::func_ov066_0215b2f4(UnkMsgDataStruct1 *thisx, s32 param2) {
    UnkStruct_ov000_020b3000 sp4(ActorId_VCFT);

    Actor **temp_r0 = gpActorManager->func_01fff350(&sp4, gpActorManager->mActorTable);

    ActorUnkVCFT *var_r3 = NULL;
    if (temp_r0 != gpActorManager->mUnk_08) {
        RefStruct ref = (*temp_r0)->mRef;
        var_r3        = (ActorUnkVCFT *) gpActorManager->func_01fff3b4(ref);
    }

    UnkStruct_ov000_020b504c_Sub3 *ptr = data_ov000_020b504c.mUnk_000;

    //! @bug: `var_r3` can be NULL
    switch (param2) {
        case 0:
            thisx->func_ov000_02067a60(ptr, data_ov066_0215d7d8[var_r3->mUnk_328.mUnk_3C]);
            break;
        case 1:
            if (data_02049be0.mUnk_00 == 0) {
                thisx->func_ov000_02067a60(ptr, data_ov066_0215d7f0[var_r3->mUnk_328.mUnk_3C]);
            } else {
                thisx->func_ov000_02067a60(ptr, data_ov066_0215d7e0[var_r3->mUnk_328.mUnk_3C]);
            }
            break;
        case 2:
            thisx->func_ov000_02067a60(ptr, data_ov066_0215d800[var_r3->mUnk_328.mUnk_3C]);
            break;
        case 3:
            thisx->func_ov000_02067a60(ptr, data_ov066_0215d850[var_r3->mUnk_3D4]);
            break;
        default:
            thisx->mUnk_00 = &data_ov066_02161d60;
            break;
    }
}

s16 ActorUnkVCFT::vfunc_80(unk32 param1, unk32 param2, unk32 param3) {
#pragma unused(param1, param2)

    if (param3 == 3) {
        this->mUnk_3D4 = gRandom.Next32(20);
        return (data_02049bac.mUnk_08 + this->mUnk_328.mUnk_38) % 5;
    }

    if (this->mUnk_3E0.max != 0) {
        if (!this->mUnk_3E0.HasExpired()) {
            return -1;
        }

        this->mUnk_3E0.Init();
        return this->mUnk_3E4;
    }

    switch (this->mUnk_328.func_ov089_02165a34()) {
        case 0:
            this->mUnk_3B0.func_ov089_0216642c(0);
            break;
        case 1:
            this->mUnk_3B0.func_ov089_0216642c(1);
            break;
        case 2:
            if (this->mUnk_328.mUnk_41 != 0) {
                this->mUnk_3B0.func_ov089_0216642c(2);
            } else {
                this->mUnk_3B0.func_ov089_0216642c(3);
            }
            break;
        case 3:
            this->mUnk_3B0.func_ov089_0216642c(3);
            break;
        default:
            break;
    }

    if (this->mUnk_3D8.HasExpired()) {
        this->mUnk_3D8.Set(0, 300);
        this->mUnk_3E8 = false;
        return 2;
    }

    if (this->mUnk_328.mUnk_40 != 0) {
        this->mUnk_3E0.Set(0, 30);

        if (this->mUnk_328.mUnk_41 != 0) {
            this->mUnk_3E4 = 0;
        } else {
            this->mUnk_3E4 = 1;
        }

        this->mUnk_328.mUnk_40 = 0U;
        return -1;
    }

    return -1;
}

void ActorUnkVCFT::vfunc_2C(unk32 param1) {
    this->Actor_Derived1::vfunc_2C(param1);

    if (this->mUnk_3E8) {
#if __MWERKS__
        Vec2s vec(0x80, 0xA0);
        this->mUnk_3B0.mUnk_1C.coords = vec.coords;
#else
        this->mUnk_3B0.mUnk_1C = Vec2s(0x80, 0xA0);
#endif

        UnkStruct_027e0954_00 *ptr = &data_027e0954->mUnk_00[1];
        ptr->mUnk_04.Prepend((ActorUnkVCFT_3B0 *) GetLinkListRef(this->mUnk_3B0));
    }
}

void ActorUnkVCFT::Update(void) {
    s16 sp0;

    func_ov000_020986b4(&sp0, this, 0);

    if (((u32) ((sp0 + 0x2000) << 0x10) >> 0x1E) == 2) {
        this->mUnk_4A[0] = 0;
    } else {
        this->mUnk_4A[0] = 5;
    }

    this->ActorCharacter::Update();

    if (this->mUnk_3E9) {
        this->mUnk_2BC.vfunc_34();
    }

    this->mUnk_3B0.func_ov089_021664b8();

    if (this->mUnk_3E8) {
        data_ov000_020b51b8.func_ov000_0206c608(8, 0, 0x1000);
    }
}

void ActorUnkVCFT::vfunc_98(u32 index) {
    if (index < 8) {
        this->mUnk_094.mUnk_0C->vfunc_1C(this->mUnk_0B8[index], 0x1000, 0x19A, 0);

        switch (index) {
            case 4:
                this->func_ov066_0215b864(0);
                break;
            case 3:
            case 7:
                this->func_ov066_0215b864(1);
                break;
            case 0:
            case 2:
            case 5:
                this->func_ov066_0215b848();
                break;
            default:
                break;
        }

        if (!(index != 3 && index != 4)) {
            this->mUnk_0B0 |= 0x10;
        } else {
            this->mUnk_0B0 &= ~0x10;
        }
    }

    if (index < 0x32) {
        return;
    }

    if (index < 0x34) {
        if (index == 0x32) {
            this->func_ov066_0215b848();
        } else {
            this->func_ov066_0215b864(index - 0x33);
        }
    }
}

void ActorUnkVCFT::vfunc_0BC(void) {
    this->ActorCharacter::vfunc_0BC();
    this->func_ov066_0215b848();
}

void ActorUnkVCFT::func_ov066_0215b848(void) {
    this->mUnk_2BC.mUnk_08->func_ov000_02057cf4();
    this->mUnk_3E9 = false;
}

void ActorUnkVCFT::func_ov066_0215b864(s32 index) {
    this->mUnk_2BC.func_ov000_02099ddc(data_ov066_0215ffe8[index], 0x1000, 0);
    this->mUnk_3E9 = true;
}

void ActorUnkVCFT::func_ov066_0215b8c4(void) {
    UnkStruct_ov000_020b3000 sp0(ActorId_RMW0);
    ActorManager *pActorMgr = gpActorManager;

    Actor **temp_r0 = pActorMgr->func_01fff350(&sp0, pActorMgr->mActorTable);

    if (temp_r0 != pActorMgr->mUnk_08) {
        ActorUnkRMW0 *pActor = (ActorUnkRMW0 *) pActorMgr->func_01fff3b4((*temp_r0)->mRef);

        if (pActor != NULL) {
            pActor->func_ov066_0215c80c();
        }
    }
}

void ActorUnkVCFT::func_ov066_0215b938(void) {
    UnkStruct_ov000_020b3000 sp0(ActorId_RMW0);
    ActorManager *pActorMgr = gpActorManager;

    Actor **temp_r0 = pActorMgr->func_01fff350(&sp0, pActorMgr->mActorTable);

    if (temp_r0 != pActorMgr->mUnk_08) {
        ActorUnkRMW0 *pActor = (ActorUnkRMW0 *) pActorMgr->func_01fff3b4((*temp_r0)->mRef);

        if (pActor != NULL) {
            pActor->func_ov066_0215c868();
        }
    }
}
