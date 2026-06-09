// clang-format off
// ModelRender must be placed before the other one for vtable ordering purposes
#include "Render/ModelRender.hpp"
#include "Unknown/UnkStruct_027e0d00.hpp"
// clang-format on

extern "C" void func_02026800(void *, int, const char *, ...);
extern const char *data_ov000_020aa244; // ".narc"
extern const char *data_ov000_020aa24c; // ".bin"
extern const char *data_ov000_020aa250[4];

static const char *data_ov024_020d8474[] = {
    "Train/loco",
    "Train/cann",
    "Train/pass",
    "Train/flat",
};

static const char *data_ov024_020d8484[] = {
    "lord", "wood", "iron", "bone", "euro", "fest", "cute", "gold",
};

DATA_ALIGN_FIX();

void UnkStruct_027e0d00_20::func_ov024_020d4e9c(wchar_t *param1, unk32 param2, bool param3) {
    const char *fileExt = param3 ? data_ov000_020aa24c : data_ov000_020aa244;
    func_02026800(param1, 0x40, "%s/anim%s", data_ov024_020d8474[param2], fileExt);
}

void UnkStruct_027e0d00_20::func_ov024_020d4edc(wchar_t *param1, wchar_t *param2, unk32 param3) {
    func_02026800(param1, 0x40, "%s:/anm%s", param2, data_ov000_020aa250[param3]);
}

UnkStruct_027e0d00_20::UnkStruct_027e0d00_20(unk32 param1, unk32 param2) :
    MapObjectProfile_Derived2_20_Base(data_ov024_020d8474[param1], data_ov024_020d8484[param2], "model", "anm", 1, 0),
    mUnk_94(param1),
    mUnk_98(param2),
    mUnk_A4(NULL, 0, 1, 1),
    mUnk_B0(0),
    mUnk_B4(0) {}

void UnkStruct_027e0d00_20::func_ov024_020d4fa0(unk32 param1, unk32 param2) {
    u8 unknown[0x90];
    ModelRender_Derived2 local_120(G3d_GetModelPtr(this->mUnk_50), 0x0C, unknown);
    void *iVar2;
    void *iVar3;
    s32 temp;

    iVar2         = local_120.func_ov000_0205a7a8(local_120.func_ov000_0205a778("rear_point"));
    iVar3         = local_120.func_ov000_0205a7a8(local_120.func_ov000_0205a778("front_point"));
    temp          = (*(u32 *) ((u8 *) iVar3 + 8)) - (*(u32 *) ((u8 *) iVar2 + 8));
    this->mUnk_B0 = temp;

    iVar2         = local_120.func_ov000_0205a7a8(local_120.func_ov000_0205a778("rear_point"));
    iVar3         = local_120.func_ov000_0205a7a8(local_120.func_ov000_0205a778("front_point"));
    temp          = (*(u32 *) ((u8 *) iVar3 + 8)) + (*(u32 *) ((u8 *) iVar2 + 8));
    this->mUnk_B4 = temp / 2;

    if (*(volatile unk32 *) &this->mUnk_94 != 0) {
        wchar_t local_160[32];
        UnkStruct_027e0d00_20::func_ov024_020d4e9c(local_160, this->mUnk_94, true);
        this->mUnk_A4.~UnkSystem3();
        this->mUnk_A4.mUnk_00 = local_160;
        this->mUnk_A4.func_02015460((const char *) &this->mUnk_9C.mUnk_00, (void *) param1, param2);

        for (int i = 0; i < ARRAY_LEN(data_ov000_020aa250); i++) {
            UnkStruct_027e0d00_20::func_ov024_020d4edc(local_160, (wchar_t *) &this->mUnk_9C.mUnk_00, i);

            MapObjectProfile_Derived2_20_Base_54 *ptr = &this->mUnk_54[i];
            ptr->vfunc_0C();
            this->mUnk_54[i].mUnk_04 = (const char *) local_160;
            ptr->vfunc_08(0x10);
        }
    }
}

void UnkStruct_027e0d00_20::func_ov024_020d5174() {
    if (this->mUnk_A4.mUnk_04 != NULL) {
        this->mUnk_A4.~UnkSystem3();
    }
}
