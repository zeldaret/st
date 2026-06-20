#include "MainGame/AdventureMode.hpp"
#include "Unknown/Common.hpp"
#include "Unknown/UnkFileSystem.hpp"
#include "Unknown/UnkStruct_027e09a0.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"
#include "files.h"

#include <nitro/mi.h>

extern "C" void func_02026800(void *, int, const char *, ...);
extern "C" unk32 func_02032784(unk32 param1);
extern "C" unk32 func_ov000_0205c7ac(unk32, unk32);
extern "C" bool func_ov000_0205c74c(unk32, unk32, unk32, unk32);

static const u8 data_ov024_020d756c[] = {0x01, 0x04, 0x10, 0x40};

UnkDataStruct4::UnkDataStruct4() {
    this->mUnk_04     = 0x14;
    this->mUnk_06     = 0x0F;
    this->mUnk_08     = 0;
    this->mUnk_0C     = 0;
    this->mUnk_10     = 0;
    this->mUnk_C8     = this->mUnk_68;
    this->mSceneIndex = SceneIndex_None;
}

void UnkDataStruct4::func_ov024_020d2518() {}

void UnkDataStruct4::func_ov024_020d251c() {}

void UnkDataStruct4::func_ov024_020d2520(UnkStruct_SceneChange1 *param1) {
    this->func_ov024_020d2538(param1->mSceneIndex, param1->mRoomIndex, NULL);
}

void UnkDataStruct4::func_ov024_020d2538(u32 sceneIndex, u8 roomIndex, UnkDataStruct4_14_2 *param3) {
    this->mUnk_64 = param3;
    this->func_ov024_020d258c(sceneIndex, roomIndex);
    this->func_ov024_020d3140();
    this->vfunc_00();
}

void UnkDataStruct4::func_ov024_020d2564() {
    this->vfunc_04();
    this->func_ov024_020d277c();
    this->mUnk_C8 = this->mUnk_68;
}

void UnkDataStruct4::func_ov024_020d258c(u32 sceneIndex, u8 roomIndex) {
    wchar_t sp34[16];
    wchar_t sp10[2];
    FileInfos sp8;
    CourseListEntry *pEntry;

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
    sp8.pFile = sp14.mpFile;
    sp8.size  = sp14.mFileSize;
    ZTB_ParseFile(&sp8, this);
}

void UnkDataStruct4::func_ov024_020d26b0(unk32 param1) {
    fx32 pos1 = INT_TO_FX32(param1);
    fx32 pos3 = MUL_FX32(pos1 >> 1, INT_TO_FX32(this->mUnk_06));
    fx32 pos2 = MUL_FX32(pos1 >> 1, INT_TO_FX32(this->mUnk_04));

    this->mUnk_08 = pos1;
    this->mUnk_0C = pos2;
    this->mUnk_10 = pos3;

    if (this->mUnk_64 != NULL) {
        for (int i = 0; i < ARRAY_LEN(this->mUnk_14); i++) {
            this->mUnk_14[i] = &this->mUnk_64[i];
        }
    } else {
        for (UnkDataStruct4_14_2 **ptr = this->mUnk_14; ptr != &this->mUnk_14[ARRAY_LEN(this->mUnk_14)]; ptr++) {
            *ptr = new(HeapIndex_1) UnkDataStruct4_14_2();
        }
    }

    this->func_ov024_020d27cc();
}

void UnkDataStruct4::func_ov024_020d277c() {
    if (this->mUnk_64 == NULL) {
        for (UnkDataStruct4_14_2 **ptr = this->mUnk_14; ptr != &this->mUnk_14[ARRAY_LEN(this->mUnk_14)]; ptr++) {
            delete *ptr;
        }
    }

    this->mUnk_08     = INT_TO_FX32(0);
    this->mUnk_0C     = INT_TO_FX32(0);
    this->mUnk_10     = INT_TO_FX32(0);
    this->mSceneIndex = SceneIndex_None;
}

void UnkDataStruct4::func_ov024_020d27cc() {
    UnkDataStruct4_14_2 **new_var;
    UnkDataStruct4_14_2 **new_var2;

    for (int i = 0; i < ARRAY_LEN(this->mUnk_14); i++) {
        for (int j = 0; j < ARRAY_LEN(this->mUnk_14[0]->mUnk_00); j++) {
            new_var2 = &this->mUnk_14[i];
            new_var  = new_var2;
            (*new_var)->mUnk_00[j].func_ov024_020d1fe8();
        }
    }
}

void UnkDataStruct4::func_ov024_020d280c() {
    UnkDataStruct4_14_2 **ppUnk_14;
    int i;
    int j;
    int k;
    int temp_r8;
    int temp_r9;

    for (i = 0; i < ARRAY_LEN(this->mUnk_14); i++) {
        temp_r8 = i + 1;

        for (j = 0; j < ARRAY_LEN(this->mUnk_14[0]->mUnk_00); j++) {
            ppUnk_14 = this->mUnk_14;

            if (ppUnk_14[i]->mUnk_00[j].func_ov024_020d1da0() != 0 ? true : false) {
                temp_r9 = j + 1;

                for (k = 0; k < 3; k++) {
                    if (!ppUnk_14[i]->mUnk_00[j].func_ov024_020d1fa4(k)) {
                        if (temp_r8 >= 0 && temp_r8 < this->mUnk_04 && j >= 0 && j < this->mUnk_06 &&
                            !this->mUnk_14[temp_r8]->mUnk_00[j].func_ov024_020d1fa4(k) &&
                            this->func_ov024_020d2a18(i, j, temp_r8, j, k)) {
                            this->func_ov024_020d29b0(i, j, temp_r8, j, k);
                        }

                        u32 new_var2 = temp_r9;
                        if (i >= 0 && i < this->mUnk_04 && temp_r9 >= 0 && temp_r9 < this->mUnk_06 &&
                            !ppUnk_14[i]->mUnk_00[new_var2].func_ov024_020d1fa4(k) &&
                            this->func_ov024_020d2a18(i, j, i, temp_r9, k)) {
                            this->func_ov024_020d29b0(i, j, i, temp_r9, k);
                        }
                    }
                }
            }
        }
    }
}

void UnkDataStruct4::func_ov024_020d29b0(unk32 param1, unk32 param2, unk32 param3, unk32 param4, unk32 param5) {
    unk32 iVar1 = func_ov000_0205c7ac(param3 - param1, param4 - param2);
    this->mUnk_14[param1]->mUnk_00[param2].func_ov024_020d2030(iVar1, param5);
    this->mUnk_14[param3]->mUnk_00[param4].func_ov024_020d2030((iVar1 + 2) & 0x03, param5);
}

bool UnkDataStruct4::func_ov024_020d2a18(unk32 param1, unk32 param2, unk32 param3, unk32 param4, unk32 param5) {
    if (param1 >= 0 && param1 < this->mUnk_04 && param2 >= 0 && param2 < this->mUnk_06 && param3 >= 0 &&
        param3 < this->mUnk_04 && param4 >= 0 && param4 < this->mUnk_06 &&
        func_ov000_0205c74c(param1, param2, param3, param4)) {
        unk32 temp_r5 = func_ov000_0205c7ac(param3 - param1, param4 - param2);
        unk32 temp_r4 = func_ov000_0205c7ac(param1 - param3, param2 - param4);

        if (this->mUnk_14[param1]->mUnk_00[param2].func_ov024_020d1dc8(temp_r5, param5) &&
            this->mUnk_14[param3]->mUnk_00[param4].func_ov024_020d1dc8(temp_r4, param5)) {
            return true;
        }

        return false;
    }

    return false;
}

void UnkDataStruct4::func_ov024_020d2b08(unk32 param1, unk32 param2, VecFx32 *param3) const {
    VecFx32 result;
    result.x = param1 * this->mUnk_08 - this->mUnk_0C + (this->mUnk_08 >> 1);
    result.y = 0;
    result.z = param2 * this->mUnk_08 - this->mUnk_10 + (this->mUnk_08 >> 1);
    VecFx32_Copy(&result, param3);
}

void UnkDataStruct4::func_ov024_020d2b40(Vec2s *param1, const UnkDataStruct4 *thisx) {
    param1->x = -1;
    param1->y = -1;

    switch (thisx->mSceneIndex) {
        case SceneIndex_t_area0:
            param1->x = 0x12;
            param1->y = 0x02;
            break;
        case SceneIndex_t_area1:
            param1->x = 0x12;
            param1->y = 0x0C;
            break;
        case SceneIndex_t_area2:
            param1->x = 0x01;
            param1->y = 0x02;
            break;
        case SceneIndex_t_area3:
            param1->x = 0x01;
            param1->y = 0x0C;
            break;
        default:
            break;
    }
}

void UnkDataStruct4::func_ov024_020d2bcc(Vec2s *param1, const UnkDataStruct4 *thisx) {
    param1->x = -1;
    param1->y = -1;

    switch (thisx->mSceneIndex) {
        case SceneIndex_t_area0:
            param1->x = 0x12;
            param1->y = 0x01;
            break;
        case SceneIndex_t_area1:
            param1->x = 0x12;
            param1->y = 0x0D;
            break;
        case SceneIndex_t_area2:
            param1->x = 0x01;
            param1->y = 0x01;
            break;
        case SceneIndex_t_area3:
            param1->x = 0x01;
            param1->y = 0x0D;
            break;
        default:
            break;
    }
}

void UnkDataStruct4::func_ov024_020d2c54(UnkArrayDataType1 param1, unk32 param2) {
    MI_CpuFill8(param1, 0, sizeof(UnkArrayDataType1));
    UnkDataStruct4_14_2 **ppUnk_14 = this->mUnk_14;

    for (int k = 0; k < ARRAY_LEN(data_ov024_020d7684) - 2; k++) {
        //! TODO: fake match, how is this accessed??
        if (GET_FLAG2(data_ov024_020d7684[k][12], param2)) {
            for (int i = 0; i < ARRAY_LEN(this->mUnk_14); i++) {
                for (int j = 0; j < ARRAY_LEN(this->mUnk_14[0]->mUnk_00); j++) {
                    param1[i][j] |= ppUnk_14[i]->mUnk_00[j].func_ov024_020d208c(k);
                }
            }
        }
    }
}

void UnkDataStruct4::func_ov024_020d2cfc(UnkArrayDataType1 param1, unk32 param2, unk32 param3) {
    u8 sp44[4];
    unk32 sp40;
    unk32 sp3C;
    u8 sp38[4];
    UnkDataStruct4_14_2 **sp24;
    unk32 sp20;
    UnkDataStruct4_14 *sp1C;
    unk32 sp18;
    unk32 var_r9;
    u8 temp_r10;
    unk32 temp_r8;
    unk32 temp_r4;
    UnkDataStruct4_14 *temp_r5;
    unk32 var_r7;
    unk32 var_r11;
    UnkDataStruct4_14_2 **dummy;
    UnkDataStruct4_14_2 *ptr;

    MI_CpuFill8(param1, 0, sizeof(UnkArrayDataType1));

#if __MWERKS__
    sp38 = data_ov024_020d756c;
#else
    sp38[0] = data_ov024_020d756c[0];
    sp38[1] = data_ov024_020d756c[1];
    sp38[2] = data_ov024_020d756c[2];
    sp38[3] = data_ov024_020d756c[3];
#endif

    for (sp20 = 0; sp20 < ARRAY_LEN(this->mUnk_14); sp20++) {
        for (var_r9 = 0; var_r9 < ARRAY_LEN(this->mUnk_14[0]->mUnk_00); var_r9++) {
            sp24  = this->mUnk_14;
            dummy = sp24; // somehow required to match
            ptr   = sp24[sp20];

            for (var_r7 = 0; var_r7 < 3; var_r7++) {
                sp1C = &ptr->mUnk_00[var_r9];

                if (param2 == sp1C->mUnk_02[var_r7] && param3 == sp1C->mUnk_06[var_r7]) {
                    sp18 = sp1C->mUnk_0C[var_r7];

#if __MWERKS__
                    sp44 = sp38;
#else
                    sp44[0] = sp38[0];
                    sp44[1] = sp38[1];
                    sp44[2] = sp38[2];
                    sp44[3] = sp38[3];
#endif

                    for (var_r11 = 0; var_r11 < 4; var_r11++) {
                        temp_r10 = sp44[var_r11];

                        if (sp18 & temp_r10) {
                            sp40 = 0;
                            sp3C = 0;
                            UnkDataStruct4_14::func_ov024_020d1ab8(temp_r10, &sp40, &sp3C);
                            temp_r8 = sp20 + sp40;
                            temp_r4 = var_r9 + sp3C;

                            if (this->func_ov024_020d2a18(sp20, var_r9, temp_r8, temp_r4, var_r7)) {
                                temp_r5 = &this->mUnk_14[temp_r8]->mUnk_00[temp_r4];

                                if (func_02032784(temp_r5->func_ov024_020d1d78()) > 0) {
                                    param1[sp20][var_r9] |= temp_r10;
                                    param1[temp_r8][temp_r4] |= UnkDataStruct4_14::func_ov024_020d1eac(temp_r10);
                                    param1[temp_r8][temp_r4] |= temp_r5->func_ov024_020d1d78();
                                } else if (param2 == temp_r5->mUnk_02[var_r7] && param3 == temp_r5->mUnk_06[var_r7]) {
                                    param1[sp20][var_r9] |= temp_r10;
                                    param1[temp_r8][temp_r4] |= UnkDataStruct4_14::func_ov024_020d1eac(temp_r10);
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    if (func_ov024_020d5434(this->mSceneIndex)) {
        for (int i = 0; i < 20; i++) {
            if (param1[i][0] & 0x01) {
                param1[i][0] |= 0x10;
            }
        }
    }

    if (func_ov024_020d5410(this->mSceneIndex)) {
        for (int i = 0; i < 20; i++) {
            if (param1[i][14] & 0x10) {
                param1[i][14] |= 0x01;
            }
        }
    }

    if (func_ov024_020d5458(this->mSceneIndex)) {
        for (int i = 0; i < 15; i++) {
            if (param1[0][i] & 0x04) {
                param1[0][i] |= 0x40;
            }
        }
    }

    if (func_ov024_020d547c(this->mSceneIndex)) {
        for (int i = 0; i < 15; i++) {
            if (param1[19][i] & 0x40) {
                param1[19][i] |= 0x04;
            }
        }
    }
}

void UnkDataStruct4::vfunc_00() {}

void UnkDataStruct4::vfunc_04() {}

s32 UnkDataStruct4::func_ov024_020d3068() const {
    return ((s32) this->mUnk_C8 - (s32) this->mUnk_68) / (s32) sizeof(VecFx32);
}

bool UnkDataStruct4::func_ov024_020d308c(fx32 *param1, fx32 *param2, unk16 param3) const {
    s32 arrayLen = this->func_ov024_020d3068();

    for (int i = 0; i < arrayLen; i++) {
        const VecFx32 *pUnk_68 = &this->mUnk_68[i];

        if (pUnk_68->x == param3) {
            if (param1 != NULL) {
                *param1 = pUnk_68->y;
            }

            if (param2 != NULL) {
                *param2 = pUnk_68->z;
            }

            return true;
        }
    }

    return false;
}

void UnkDataStruct4::func_ov024_020d3100() {
    UnkDataStruct4_14_2 **new_var;
    UnkDataStruct4_14_2 **new_var2;

    for (int i = 0; i < ARRAY_LEN(this->mUnk_14); i++) {
        for (int j = 0; j < ARRAY_LEN(this->mUnk_14[0]->mUnk_00); j++) {
            new_var2 = &this->mUnk_14[i];
            new_var  = new_var2;
            (*new_var)->mUnk_00[j].func_ov024_020d1c84();
        }
    }
}

void UnkDataStruct4::func_ov024_020d3140() {
    this->func_ov024_020d280c();
    this->func_ov024_020d3100();
}
