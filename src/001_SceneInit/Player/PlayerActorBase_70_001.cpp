#include "Player/PlayerActorBase.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"

extern "C" void *func_ov000_0208ea70(PlayerCharacter, unk32, bool); // returns pointer to .NSBTX

extern unk16 data_ov000_020ab314;

ModelRender_UnkSystem1 *func_ov001_020bbac4(BOOL isNotLink, G3d_Model *pModel, unk32 param3, bool param4) {
    if (param4 && data_027e09a4->IsSceneModeBattle()) {
        return NULL;
    }

    return isNotLink == true ? new(HeapIndex_1) ModelRender_UnkSystem1(pModel, 0x3C)
                             : new(HeapIndex_1) ModelRender_UnkSystem1_Derived1(pModel, 0);
}

PlayerActorBase_70::PlayerActorBase_70(PlayerCharacter character, unk32 param2) :
    mIsNotLink(PlayerCharacter_IsNotLink(character)),
    mCharacter(character),
    mUnk_008(param2),
    mUnk_00C(character, param2),
    mUnk_01C(new(HeapIndex_1) PlayerActorBase_70_1C(this)),
    mUnk_020(func_ov001_020bbac4(this->mIsNotLink, this->mUnk_00C.GetModel1(), 0x01, false)),
    mUnk_024(func_ov001_020bbac4(this->mIsNotLink, this->mUnk_00C.GetModel1(), 0x01, true)),
    mUnk_028(func_ov001_020bbac4(this->mIsNotLink, this->mUnk_00C.GetModel1(), 0x00, false)),
    mUnk_02C(func_ov001_020bbac4(this->mIsNotLink, this->mUnk_00C.GetModel1(), 0x00, true)),
    mUnk_030(character, this->mUnk_020, this->mUnk_024),
    mUnk_04C(character, this->mUnk_028, this->mUnk_02C),
    mUnk_068(0x400),
    mUnk_06A(0x400),
    mUnk_06C(character, func_ov000_0208ea70(character, param2, true), this->mUnk_00C.GetUnk08()->mpModel),
    mUnk_0DC(this->mIsNotLink == true ? new(HeapIndex_1) PlayerActorBase_70_DC(character, this->mUnk_00C.GetUnk08()->mpModel)
                                      : NULL),
    mUnk_0E0(this->mUnk_00C.GetUnk08(), character),
    mUnk_114(param2 == -1 && character == PlayerCharacter_Link ? new(HeapIndex_1) Mat4x3p[PlayerCharacter_Max] : NULL),
    mUnk_118(false),
    mUnk_11C(false),
    mUnk_120(false),
    mUnk_124(false),
    mUnk_126(false),
    mUnk_127(false),
    mUnk_128(false),
    mUnk_129(true),
    mUnk_12A(true),
    mUnk_12B(false),
    mUnk_12C(false),
    mUnk_12D(false),
    mUnk_131(false),
    mUnk_132(data_ov000_020ab314),
    mUnk_15C(0x20000) {
    if (this->mUnk_114 != NULL) {
        for (u32 i = 0; i < PlayerCharacter_Max; i++) {
            Mat4x3p_InitIdentity(&this->mUnk_114[i]);
        }
    }
}

PlayerActorBase_70::~PlayerActorBase_70() {
    delete[] this->mUnk_114;
    delete this->mUnk_0DC;
    delete this->mUnk_02C;
    delete this->mUnk_028;
    delete this->mUnk_024;
    delete this->mUnk_020;
    delete this->mUnk_01C;
    delete this->mUnk_00C.GetUnk0C();
    delete this->mUnk_00C.GetUnk08();
}

void PlayerActorBase_70::func_ov001_020bbe18(unk32 param1, UnkStruct_func_ov001_020bbe18 param2, u32 param3, u8 param4) {
    this->mUnk_129 = true;
    this->mUnk_12A = true;

    if (this->mIsNotLink == true) {
        this->func_ov000_02082e78(0x00, param1, 0x01, 0x00);
    }

    this->func_ov000_020830d4(param2, param3, param4, 0x00);
}
