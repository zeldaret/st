#include "Game/GameModeDownloadPlay.hpp"
#include "System/SysNew.hpp"

#include <dsprot.h>

void func_ov001_020c099c(void) {
    data_ov001_020c46fc = new(HeapIndex_1) UnkStruct_ov001_020c46fc();
}

void func_ov001_020c09c0(void) {
    DELETE(data_ov001_020c46fc);
}

void GameModeDownloadPlay::func_ov001_020c09dc() {
    DSProt_DetectNotFlashcart(func_ov001_020c099c);
    DSProt_DetectEmulator(func_ov001_020c09c0);

    if (DSProt_DetectDummy(NULL)) {
        DELETE(data_ov001_020c46fc);
    }

    this->mUnk_48       = data_ov001_020c46fc;
    data_ov001_020c46fc = NULL;
}
