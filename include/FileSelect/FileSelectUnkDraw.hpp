#pragma once

#include "FileSelect/FileSelectMain.hpp"
#include "Game/GameModeManager.hpp"
#include "System/SysNew.hpp"

class FileSelectManager_UnkDrawBase : public SysObject {
public:
    class Sub1 {
    public:
        void *mUnk_00;

        Sub1();
    };

    /* 00 (vtable) */
    /* 04 */ Sub1 *mUnk_04;

    FileSelectManager_UnkDrawBase();

    /* 00 */ virtual ~FileSelectManager_UnkDrawBase();
    /* 08 */ virtual void vfunc_08(unk32 param1);
    /* 0C */ virtual void vfunc_0C(unk32 param1);
    /* 10 */ virtual void vfunc_10();
    /* 14 */ virtual void vfunc_14();
    /* 18 */ virtual void vfunc_18(unk32 param1);
    /* 1C */ virtual void vfunc_1C(unk32 param1);
    /* 20 */ virtual void vfunc_20();
    /* 24 */ virtual void vfunc_24();
    /* 28 */
};

class FileSelectManager_160 : public FileSelectManager_UnkDrawBase {
public:
    /* 00 (vtable) */
    /* 08 */ void *mUnk_08;
    /* 0C */ unk32 mUnk_0C;
    /* 10 */ FileSelectMain *mUnk_10;
    /* 14 */ GameModeManagerBase_104 *mUnk_14;
    /* 18 */ GameModeManagerBase_104 *mUnk_18;
    /* 1C */ void *mUnk_1C;
    /* 20 */

    FileSelectManager_160(GameModeManagerBase_104 *param1, FileSelectMain *param2);

    // data_ov019_020d23e0 vtable
    /* 00 */ virtual ~FileSelectManager_160();
    /* 08 */ virtual void vfunc_08(unk32 param1);
    /* 0C */ virtual void vfunc_0C(unk32 param1);
    /* 10 */ virtual void vfunc_10();
    /* 14 */ virtual void vfunc_14();
    /* 18 */ virtual void vfunc_18(unk32 param1);
    /* 1C */ virtual void vfunc_1C(unk32 param1);
    /* 20 */ virtual void vfunc_20();
    /* 24 */ virtual void vfunc_24();
    /* 28 */
};

class FileSelectManager_164 : public FileSelectManager_UnkDrawBase {
public:
    /* 00 (base) */
    /* 08 */ unk32 mUnk_08;
    /* 0C */ unk32 mUnk_0C;
    /* 10 */ FileSelectMain *mUnk_10;
    /* 14 */ GameModeManagerBase_104 *mUnk_14;
    /* 18 */ GameModeManagerBase_104 *mUnk_18;
    /* 1C */

    FileSelectManager_164(GameModeManagerBase_104 *param1, FileSelectMain *param2);

    // data_ov019_020d2410 vtable
    /* 04 */ virtual ~FileSelectManager_164();
    /* 08 */ virtual void vfunc_08(unk32 param1);
    /* 0C */ virtual void vfunc_0C(unk32 param1);
    /* 10 */ virtual void vfunc_10();
    /* 14 */ virtual void vfunc_14();
    /* 18 */ virtual void vfunc_18(unk32 param1);
    /* 1C */ virtual void vfunc_1C(unk32 param1);
    /* 20 */ virtual void vfunc_20();

    static void func_ov019_020d02f4();
};
