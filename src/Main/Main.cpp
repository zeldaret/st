#include "Unknown/UnkStruct_02049a2c.hpp"
#include "global.h"
#include "regs.h"
#include "types.h"

void func_0203b920(void);
void func_02011da0(void);
void CallStaticInitializers(void);
void main(void);

void func_02000a78(void);
void *func_0200093c(unk32, u32 *, unk32);
void func_020009fc(void);
void func_02000950(unk32 *);
void func_01ffbd70(void);

#define UNK_027FFF9C (*(u32 *) 0x027FFF9C)

typedef void (*UnkStruct_027e0000_Callback)(void);
struct UnkStruct_027e0000 {
    unk8 mUnk_00[0x3FFC];
    UnkStruct_027e0000_Callback mUnk_3FFC;
};
extern UnkStruct_027e0000 *data_027e0000;

extern unk32 *data_0204cde0;
extern unk32 *data_0204cdf8;
extern unk32 *data_02044dc0;
extern unk32 *data_02044dc0;

struct RomBuildInfo {
    /* 00 */ unk32 *mUnk_00;
    /* 04 */ unk32 *mUnk_04;
    /* 08 */ unk32 *mUnk_08;
    /* 0C */ unk32 *mUnk_0C;
    /* 10 */ unk32 *mUnk_10;
    /* 14 */ unk32 *mUnk_14;
    /* 18 */ unk32 mUnk_18;
    /* 1C */ unk32 mUnk_1C;
    /* 20 */ unk32 mUnk_20;
    /* 24 */ char mUnk_24[28];
    /* 3D */ char mUnk_3D[40];
};
extern RomBuildInfo BuildInfo;

// non-matching
ARM void Entry(void) {
    unk32 *puVar1;
    unk32 *puVar2;
    u32 uVar3;
    unk32 *puVar4;

    REG_IME = 0x04000000;

    do {
    } while (REG_VCOUNT != 0x0);

    func_02000a78();
    func_0200093c(0, (u32 *) data_027e0000, 0x4000);
    func_0200093c(0, RAM_PALETTES, 0x400);
    func_0200093c(0x200, RAM_OAM, 0x400);
    func_02000950(BuildInfo.mUnk_14);
    func_020009fc();
    puVar4 = BuildInfo.mUnk_10;
    puVar1 = BuildInfo.mUnk_0C;

    for (puVar2 = puVar1; puVar2 < puVar4; puVar2 = puVar2 + 0x1) {
        *puVar2 = 0x0;
    }

    uVar3 = (u32) puVar1 & 0xFFFFFFE0;

    do {
        // inline asm?
        // coproc_moveto_Data_Synchronization(0x0);
        // coproc_moveto_Invalidate_Instruction_Cache_by_MVA(uVar3);
        // coproc_moveto_Invalidate_Data_Cache_by_MVA(uVar3);
        uVar3 = uVar3 + 0x20;
    } while ((int) uVar3 < (int) puVar4);

    UNK_027FFF9C             = 0x0;
    data_027e0000->mUnk_3FFC = func_01ffbd70;

    func_0203b920();
    func_02011da0();
    CallStaticInitializers();
    main();
}

// non-matching
ARM void *func_0200093c(unk32 param1, u32 *param2, unk32 param3) {
    u32 *p = param2 + param3;

    while (param2 < p) {
        *p++ = param1;
    }

    return param2;
}

void AutoloadCallback(void) {}

void func_02000b60(void) {}

RomBuildInfo BuildInfo = {
    .mUnk_00 = data_0204cde0,
    .mUnk_04 = data_0204cdf8,
    .mUnk_08 = data_02044dc0,
    .mUnk_0C = data_02044dc0,
    .mUnk_10 = (unk32 *) 0x02051AE0,
    .mUnk_14 = NULL,
    .mUnk_18 = 0x04027539,
    .mUnk_1C = 0x04027539,
    .mUnk_20 = 0xDEC00621,
    "\xDE\xC0\x06![SDK+NINTENDO:BACKUP]",
    "[SDK+MEI:libASR_V1.0.5-CW2.0-SDK4.0]",
};

void main(void) {
    data_02049a2c.Run();
}
