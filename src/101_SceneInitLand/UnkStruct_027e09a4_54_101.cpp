#include "Unknown/Common.hpp"
#include "Unknown/UnkStruct_02049be0.hpp"
#include "Unknown/UnkStruct_027e09a0.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"

#include <string.h>

UnkStruct_027e09a4_54_Derived1::UnkStruct_027e09a4_54_Derived1(unk32 *param1) :
    UnkStruct_027e09a4_54_Base(param1) {
    this->mUnk_04.Init(sizeof(UnkStruct_027e09a4_54_04) * 4);
}

void UnkStruct_027e09a4_54_Derived1::vfunc_0C() {
    this->UnkStruct_027e09a4_54_Base::vfunc_0C();

    bool unk_1B_and_0x40 = data_027e09a0->GetCourseEntry(this->mUnk_1C.sceneIndex)->unk_1B & 0x40;

    {
        UnkStruct_StackTitleScreen auStack_2c("Screen/tex2d.bin", 0x01);

        if (unk_1B_and_0x40) {
            auStack_2c.func_ov000_02059270(0x28, "scratchBalloon", 0x35B00000);
            auStack_2c.func_ov000_02059270(0x29, "scratchPen", 0x35A00000);
            auStack_2c.func_ov000_02059270(0x2A, "scratchArrow", 0x34B00000);
            auStack_2c.func_ov000_02059270(0x2B, "scratchLink0", 0x2D200000);
            auStack_2c.func_ov000_02059270(0x2C, "scratchLink1", 0x34A00000);
        }

        auStack_2c.func_ov000_02059270(0x2E, "boomhit", 0x29200000);
        auStack_2c.func_ov000_02059270(0x2F, "subhit", 0x29200000);

        this->vfunc_10(&auStack_2c);
    }

    if (unk_1B_and_0x40) {
        const char *pcVar2 = data_02049be0.func_02014ff4();

        wchar_t acStack_6c[32];
        acStack_6c[ARRAY_LEN(acStack_6c) - 1] = L'\0';

        strncpy((char *) acStack_6c, pcVar2, sizeof(acStack_6c) - 1);

        const char *pathEnd = "/Screen/tex2d.bin";
        size_t length       = strlen((char *) acStack_6c);
        strncpy((char *) acStack_6c + length, pathEnd, sizeof(acStack_6c) - 1 - length);

        UnkStruct_StackTitleScreen austack_80((char *) acStack_6c, 0x01);
        austack_80.func_ov000_02059270(0x2D, "scratchText", 0x34B00000);
    }
}

void UnkStruct_027e09a4_54_Derived1::vfunc_10(UnkStruct_StackTitleScreen *param1) {}
