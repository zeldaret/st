#include "Unknown/Common.hpp"
#include "Unknown/UnkFileSystem.hpp"
#include "Unknown/UnkStruct_027e09a0.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"

extern "C" void func_02026800(void *, int, const char *, ...);
extern "C" void func_ov024_020d3670(void *, UnkDataStruct4 *);

UnkDataStruct4::UnkDataStruct4() {
    this->mUnk_04     = 0x14;
    this->mUnk_06     = 0x0F;
    this->mUnk_08     = 0;
    this->mUnk_0C     = 0;
    this->mUnk_10     = 0;
    this->mUnk_C8     = &this->mUnk_68;
    this->mSceneIndex = SceneIndex_None;
}

void UnkDataStruct4::func_ov024_020d2518() {}

void UnkDataStruct4::func_ov024_020d251c() {}

void UnkDataStruct4::func_ov024_020d2520(UnkStruct_SceneChange1 *param1) {
    this->func_ov024_020d2538(param1->mSceneIndex, param1->mRoomIndex, 0);
}

void UnkDataStruct4::func_ov024_020d2538(u32 sceneIndex, u8 roomIndex, unk32 param3) {
    this->mUnk_64 = param3;
    this->func_ov024_020d258c(sceneIndex, roomIndex);
    this->func_ov024_020d3140();
    this->vfunc_00();
}

void UnkDataStruct4::func_ov024_020d2564() {
    this->vfunc_04();
    this->func_ov024_020d277c();
    this->mUnk_C8 = &this->mUnk_68;
}

void UnkDataStruct4::func_ov024_020d258c(u32 sceneIndex, u8 roomIndex) {
    wchar_t sp34[16];
    wchar_t sp10[2];
    unk32 sp8[2]; //! TODO: struct
    CourseEntry *pEntry;

    this->mSceneIndex = sceneIndex;

    sp10[0] = L'\0';
    sp10[1] = L'\0';
    func_02026800(sp10, sizeof(sp10), "T%02d", roomIndex);

    sp34[0]            = L'\0';
    sp34[15]           = L'\0';
    pEntry             = data_027e09a0->GetCourseEntry(sceneIndex);
    const char *string = "Map/%s/train%02d.bin";
    func_02026800(sp34, sizeof(sp34), string, pEntry->name, roomIndex);

    UnkStruct2 sp24(NULL, 1);
    sp24.mUnk_04 = (char *) sp34;
    sp24.func_020154ec((char *) sp10);

    pEntry = data_027e09a0->GetCourseEntry(sceneIndex);
    func_02026800(sp34, sizeof(sp34), "%s:ztb/%s_%02d.ztb", sp10, pEntry->name, roomIndex);

    UnkFileSystem3 sp14((char *) sp34);
    sp14.vfunc_08(0x10);
    sp8[0] = (unk32) sp14.mpFile;
    sp8[1] = sp14.mFileSize;
    func_ov024_020d3670(sp8, this);
}

void UnkDataStruct4::func_ov024_020d26b0() {}

void UnkDataStruct4::func_ov024_020d277c() {}

void UnkDataStruct4::func_ov024_020d27cc() {}

void UnkDataStruct4::func_ov024_020d280c() {}

void UnkDataStruct4::func_ov024_020d29b0() {}

void UnkDataStruct4::func_ov024_020d2a18() {}

void UnkDataStruct4::func_ov024_020d2b08(unk32 param1, unk32 param2, VecFx32 *param3) const {}

void UnkDataStruct4::func_ov024_020d2b40() {}

void UnkDataStruct4::func_ov024_020d2bcc() {}

void UnkDataStruct4::func_ov024_020d2cfc(void *param1, unk32 param2, unk32 param3) {}

void UnkDataStruct4::func_ov024_020d2c54(void *param1, unk32 param2) {}

void UnkDataStruct4::vfunc_00() {}

void UnkDataStruct4::vfunc_04() {}

void UnkDataStruct4::func_ov024_020d3068() {}

bool UnkDataStruct4::func_ov024_020d308c(fx32 *param1, fx32 *param2, unk16 param3) const {}

void UnkDataStruct4::func_ov024_020d3100() {}

void UnkDataStruct4::func_ov024_020d3140() {}
