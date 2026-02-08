#include "Game/Game.hpp"
#include "System/OverlayManager.hpp"
#include "System/Random.hpp"
#include "Unknown/UnkStruct_02049b74.hpp"
#include "Unknown/UnkStruct_02049bd4.hpp"
#include "Unknown/UnkStruct_0204a110.hpp"
#include "Unknown/UnkStruct_0204e64c.hpp"
#include "Unknown/UnkStruct_027e0208.hpp"
#include "Unknown/UnkStruct_ov000_020b50c0.hpp"
#include "regs.h"
#include "versions.h"

extern "C" void func_020196fc();
extern "C" unk32 func_02031e58();
extern "C" void func_02031e68();
extern "C" void func_01ff8d38();
extern "C" void func_020132c8();
extern "C" void func_020132dc();
extern "C" void func_02013354();
extern "C" void func_0201328c();
extern "C" int func_020280ec();
extern "C" void func_02028100(int enabled);
extern Mat3p data_027e02c4;

struct SomeSaveFileStruct {
    /* 00 */ SaveFile *mpSaveFiles[MAX_SAVE_SLOTS];

    SomeSaveFileStruct(unk32 param1);
    ~SomeSaveFileStruct();
};

ARM void Game::func_02013370(unk32 param1) {
    data_0204a110.func_02018c78(param1);
    data_ov000_020b50c0.mUnk_9C = param1;
}

ARM void Game::Run(unk32 param1) {
    this->func_ov018_020c48a4(param1);

    do {
        // initialization of the next game mode
        if (this->createCallback != NULL) {
            data_0204999c.func_02013014();

            {
                SomeSaveFileStruct local_28(0x1300);
                this->mpSaveFile = local_28.mpSaveFiles[0];

                if (this->mpCurrentGameMode != NULL) {
                    delete this->mpCurrentGameMode;
                }

                func_020196fc();
                data_02049b18.func_02013768();
                this->mFrameCounter = SHARED_WORK_C3C;

                this->mpCurrentGameMode = this->createCallback();
                this->createCallback    = NULL;
                this->mpCurrentGameMode->vfunc_08();
                this->mpSaveFile = NULL;
            }

            data_0204999c.func_02013070();
        }

        // update of the current game mode
        if (this->mpCurrentGameMode != NULL) {
            if (this->mUnk_08 != NULL) {
                this->mUnk_08();
                this->mUnk_08 = NULL;
            }

            if (func_02031e58() != 0) {
                func_02031e68();
            }

            data_02049bd4.func_02014d98();
            data_0204a110.func_02019300(data_0204a110.mUnk_DF8);

            gRandom.UpdateRandomValue();

            unk32 uVar4 = data_0204a110.func_02019300(data_0204a110.mUnk_DF8);
            data_02049b74.func_02013a44(data_0204a110.mUnk_004);

            if (this->mUnk_14 == NULL) {
                data_02049b18.func_02013840(data_0204a110.mUnk_004, uVar4);
            } else {
                data_02049b18.func_020138f4(uVar4);
            }

            data_0204e64c.func_020201c4(1);
            data_0204a110.func_02019350();

            if (data_0204a110.func_02019514() == 0 && data_0204e64c.mUnk_00.mUnk_0B == 0) {
                this->mpCurrentGameMode->vfunc_0C();
            }

            data_027e0208.mUnk_0EC = 0x1000;
            data_027e0208.mUnk_0F0 = 0x1000;
            data_027e0208.mUnk_0F4 = 0x1000;

            data_027e0208.mUnk_0E0 = 0;
            data_027e0208.mUnk_0E4 = 0;
            data_027e0208.mUnk_0E8 = 0;

            Mat3p_InitIdentity(&data_027e02c4);
            data_027e0208.mUnk_0FC = 0;
            func_01ff8d38();
            this->mpCurrentGameMode->vfunc_18();
            data_0204a110.func_020194dc();

            if (data_0204a110.func_02019514() == 0) {
                this->mpCurrentGameMode->vfunc_10();
            }

#if IS_JP
            func_01ff8d38();
#endif

            if (data_0204e64c.mUnk_00.mUnk_0B == 0) {
                data_0204a110.func_02019408();
            }

            this->mpCurrentGameMode->vfunc_1C();
            func_01ff8d38();
            data_0204a110.func_02019454();
            this->mpCurrentGameMode->vfunc_20();

            if (gOverlayManager.mLoadedOverlays[OverlaySlot_Second] == OverlayIndex_Second) {
                this->func_ov000_020576d0();
                this->func_ov000_0205770c();
            }
        }

        if (this->mFrameCounter + data_0204a110.mUnk_004 - (s32) SHARED_WORK_C3C > 1) {
            func_0201328c();
        }

        while (this->mFrameCounter + data_0204a110.mUnk_004 - (s32) SHARED_WORK_C3C > 1) {
            func_020132c8();
        }

        {
            int enabled = func_020280ec();
            this->mUnk_1C.func_02013e18(func_020132dc, 0);
            REG_SWAP_BUFFERS = 3;
            func_02028100(enabled);
        }

        func_020132c8();

        if (this->mUnk_18 != NULL) {
            while (this->mUnk_18() != 0) {
                while (this->mUnk_1C.func_02013e18(func_02013354, 0) == 0) {
                }

                func_020132c8();
            }
        }

        this->mFrameCounter = SHARED_WORK_C3C;
    } while (true);
}

bool Game::TrySetCreateCallback(GameModeCreateCallback createCallback) {
    if (this->createCallback == NULL) {
        this->createCallback = createCallback;
        return true;
    }

    return false;
}
