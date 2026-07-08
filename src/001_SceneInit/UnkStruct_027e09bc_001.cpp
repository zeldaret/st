#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"
#include "Unknown/UnkStruct_027e09bc.hpp"
#include "Unknown/UnkStruct_ov020_020e8544.hpp"

UnkStruct_027e09bc *UnkStruct_027e09bc::Create() {
    return new(HeapIndex_1) UnkStruct_027e09bc();
}

UnkStruct_027e09bc::UnkStruct_027e09bc() {
    this->mUnk_04    = NULL;
    this->mUnk_08    = 0;
    this->mUnk_0C    = NULL;
    this->mUnk_10    = NULL;
    this->mUnk_14[0] = NULL;
    this->mUnk_14[1] = NULL;
    this->mUnk_14[2] = NULL;
    this->mUnk_14[3] = NULL;

    if (data_027e09a4->IsSceneModeAdventure()) {
        this->mUnk_0C = new(HeapIndex_1) UnkStruct_027e09bc_0C(0);
        this->mUnk_10 = new(HeapIndex_1) UnkStruct_027e09bc_0C(1);
        this->func_ov000_020771b8(0x00);
        this->func_ov000_020771b8(0x01);
    } else if (data_027e09a4->IsSceneModeBattle()) {
        this->mUnk_14[0] = new(HeapIndex_1) UnkStruct_027e09bc_0C(0);
        this->mUnk_14[1] = new(HeapIndex_1) UnkStruct_027e09bc_0C(1);
        this->mUnk_14[2] = new(HeapIndex_1) UnkStruct_027e09bc_0C(2);
        this->mUnk_14[3] = new(HeapIndex_1) UnkStruct_027e09bc_0C(3);
        this->mUnk_04    = this->mUnk_14[data_ov020_020e8544->vfunc_20()];
    }
}

UnkStruct_027e09bc::~UnkStruct_027e09bc() {
    delete this->mUnk_0C;
    delete this->mUnk_10;
    delete this->mUnk_14[0];
    delete this->mUnk_14[1];
    delete this->mUnk_14[2];
    delete this->mUnk_14[3];

    this->mUnk_0C    = NULL;
    this->mUnk_10    = NULL;
    this->mUnk_14[0] = NULL;
    this->mUnk_14[1] = NULL;
    this->mUnk_14[2] = NULL;
    this->mUnk_14[3] = NULL;
}

void UnkStruct_027e09bc::func_ov001_020bab5c() {
    switch ((s32) data_027e09a4->CurrentSceneIndex()) {
        case SceneIndex_b_sand:
        case SceneIndex_tekiya09:
            data_027e09bc->mUnk_10->mUnk_264 = 0x7B;
            break;
        case SceneIndex_b_last2:
            data_027e09bc->mUnk_10->mUnk_264 = 0x00;
            break;
        case SceneIndex_b_last22:
            data_027e09bc->mUnk_10->mUnk_264 = 0x00;
            break;
        default:
            if (data_027e09a4->IsSceneModeAdventure()) {
                data_027e09bc->mUnk_10->func_ov000_02078cec();
            }
            break;
    }
}

void UnkStruct_027e09bc::func_ov001_020babc8() {
    if (data_027e09a4->IsSceneModeAdventure()) {
        this->mUnk_0C->func_ov000_02078ba4();
        this->mUnk_10->func_ov000_02078ba4();
    }
}

void UnkStruct_027e09bc::func_ov001_020babe8() {
    if (data_027e09a4->IsSceneModeAdventure()) {
        this->mUnk_0C->mUnk_280 = 0;
        this->mUnk_10->mUnk_280 = 0;
    }
}

void UnkStruct_027e09bc::func_ov001_020bac08() {
    if (data_027e09a4->IsSceneModeAdventure()) {
        this->mUnk_0C->mUnk_280 = 0;
        this->mUnk_10->mUnk_280 = 0;
    }
}

DECL_INSTANCE(UnkStruct_027e09bc, data_027e09bc);
