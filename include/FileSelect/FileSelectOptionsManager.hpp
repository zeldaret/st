#pragma once

#include "FileSelect/Common.hpp"
#include "System/SysNew.hpp"
#include "global.h"
#include "nitro/math.h"
#include "types.h"

class FileSelectOptions;
class FileSelectMicTest;

class OptionsManagerAssessor {
public:
    OptionsManagerAssessor();
    ~OptionsManagerAssessor();
};

class FileSelectOptionsManager : public OptionsManagerAssessor,
                                 public GameModeManagerBase_104 { // 0x022E9B44
public:
    /* 00 (base) */
    /* 1C */ unk32 mUnk_1C;
    /* 20 */ u8 mUnk_20; // bool?
    /* 21 */ unk8 mUnk_21;
    /* 22 */ unk8 mUnk_22;
    /* 23 */ unk8 mUnk_23;
    /* 24 */ GameModeManagerBase_104 *mUnk_24;
    /* 28 */ FileSelectMicTest *mpMicTest;
    /* 2C */ FileSelectOptions *mpOptions;
    /* 30 */

    FileSelectOptionsManager(void *param1, unk32 param2);
    void func_ov019_020cc85c(unk32 param1);
    unk32 func_ov019_020cc874();

    // data_ov019_020d2224 vtable
    /* 00 */ virtual ~FileSelectOptionsManager() override;
    /* 08 */ virtual void vfunc_08() override;

    static GameModeManagerBase_104 *Create(void *param1, s32 saveSlotIndex);
};

extern FileSelectOptionsManager *gpFSOptionsManager;
