#include "FileSelect/FileSelect.hpp"
#include "FileSelect/FileSelectOptionsManager.hpp"
#include "Unknown/UnkStruct_0204a088.hpp"
#include "Unknown/UnkStruct_0204a110.hpp"
#include "Unknown/UnkStruct_0204aeec.hpp"
#include "Unknown/UnkStruct_ov000_020b50c0.hpp"

ARM FileSelectManager_164::FileSelectManager_164(GameModeManagerBase_104 *param1, FileSelectMain *param2) {
    this->mUnk_10 = param2;
    this->mUnk_14 = param1;
    this->mUnk_18 = param1;
    data_0204a088->func_ov000_020611dc(this, 0x12);
}

ARM FileSelectManager_164::~FileSelectManager_164() {
    if (gpFSOptionsManager != NULL) {
        FileSelectManager_164::func_ov019_020d02f4();
    }
}

ARM void FileSelectManager_164::vfunc_08(unk32 param1) {
    if (param1 == 0) {
        this->mUnk_0C = 0;
        this->mUnk_10->func_ov019_020cb6e8();
        data_0204a110.func_0201967c(0, 0x13C, 0x2D, 0, 4);
    }
}

ARM void FileSelectManager_164::vfunc_0C(unk32 param1) {
    if (param1 == 0) {
        switch (this->mUnk_0C) {
            case 0:
                if (this->mUnk_10->func_ov019_020cb748() && !data_0204a110.mUnk_DDC.mUnk_0C->UnkCheck1()) {
                    data_0204a088->func_ov000_02061224();
                    this->mUnk_0C = 1;
                }
                break;
            case 1:
                data_0204a088->func_ov000_02061230();
                break;
            default:
                break;
        }
    }
}

ARM void FileSelectManager_164::vfunc_14() {}

ARM void FileSelectManager_164::vfunc_10() {
    data_0204999c.func_02013014();
    data_0204999c.mUnk_60 = 0xD6D8;
    data_ov000_020b50c0.func_ov000_0206a758();
    GameModeLinkListNode::func_020166ac(&this->mUnk_10->mNode);
    this->mUnk_10->func_ov019_020cb664();
    data_0204a110.func_02019538(0x26, 1);
    FileSelectOptionsManager::Create(this->mUnk_18, this->mUnk_10->mSaveSlotIndex);

    FileSelectOptionsManager *pVar1 = gpFSOptionsManager;
    this->mUnk_14->mNode.func_020166cc(pVar1->GetNode());
    pVar1->vfunc_18();

    data_0204999c.func_02013070();
}

ARM void FileSelectManager_164::vfunc_18(unk32 param1) {
    if (param1 == 0) {
        this->mUnk_0C = 1;
        gpFSOptionsManager->func_ov019_020cc85c(2);
        data_0204aeec.func_0201e698();
    }
}

ARM void FileSelectManager_164::vfunc_1C(unk32 param1) {
    if (param1 == 0) {
        switch (this->mUnk_0C) {
            case 1:
                if (gpFSOptionsManager->func_ov019_020cc874() != 0 && !data_0204a110.mUnk_DDC.mUnk_0C->UnkCheck1()) {
                    data_0204a088->func_ov000_02061224();
                    this->mUnk_0C = 0;
                }
                break;
            case 0:
                if (this->mUnk_10->func_ov019_020cb748()) {
                    data_0204a088->func_ov000_02061230();
                }
                break;
            default:
                break;
        }
    }
}

ARM void FileSelectManager_164::vfunc_20() {
    data_0204999c.func_02013014();
    data_0204999c.mUnk_60 = 0xD6D8;
    FileSelectManager_164::func_ov019_020d02f4();
    data_0204a110.func_02019538(0x25, 1);

    FileSelectMain *temp_r4 = this->mUnk_10;
    this->mUnk_14->mNode.func_020166cc(temp_r4->GetNode());
    temp_r4->vfunc_18();

    this->mUnk_10->func_ov019_020cb5dc();
    this->mUnk_10->func_ov019_020cb718();
    data_ov000_020b50c0.func_ov000_0206a77c();
    data_0204999c.func_02013070();
}

ARM void FileSelectManager_164::func_ov019_020d02f4() {
    if (gpFSOptionsManager != NULL) {
        delete gpFSOptionsManager;
    }
}
