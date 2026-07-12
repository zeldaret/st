#include "Actor/ActorManager.hpp"
#include "Cutscene/Cutscene.hpp"
#include "Game/GameModeManager.hpp"
#include "MapObject/MapObjectManager.hpp"
#include "Physics/AABB.hpp"
#include "Unknown/UnkStruct_027e095c.hpp"
#include "Unknown/UnkStruct_027e09a0.hpp"
#include "Unknown/UnkStruct_027e09ac.hpp"
#include "Unknown/UnkStruct_027e09b0.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_027e09c0.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"

#include <nns/g3d/g3d.h>
#include <printf.h>
#include <vector>

extern "C" BMDSectionModel *func_ov000_0205abcc(void *, void *, unk32, unk32, void *);
extern "C" void func_ov089_02165c34(void *);
extern AABB data_027e0ca8;
extern AABB data_027e0cc0;
extern AABB data_027e0c90;
extern int data_ov089_02171540;

static UnkStruct_ov001_020c40f4 data_ov001_020c40f4[0x40];

struct UnkStruct_ov001_020c2a40 {
    /* 00 */ unk32 unk_00;
    /* 04 */ unk32 unk_04;
    /* 08 */ unk16 unk_08;
    /* 0A */ u8 unk_0A;
    /* 0B */ u8 unk_0B;
    /* 0C */ u8 unk_0C;
    /* 0D */ u8 unk_0D;
    /* 0E */ u8 unk_0E;
    /* 0F */ u8 unk_0F;
    /* 10 */ u8 unk_10;
    /* 11 */ STRUCT_PAD(0x11, 0x14); // pad?
    /* 14 */

    UnkStruct_ov001_020c2a40(unk32 param1, unk32 param2, unk16 param3, unk8 param4, unk8 param5, unk8 param6, unk8 param7) {
        this->unk_00 = param1;
        this->unk_04 = param2;
        this->unk_08 = param3;
        this->unk_0A = param4;
        this->unk_0B = param5;
        this->unk_0C = param6;
        this->unk_0D = param7;
        this->unk_0E = 0x2B;
        this->unk_0F = 0;
        this->unk_10 = 0;
    }
};

static const UnkStruct_ov001_020c2a40 data_ov001_020c2a40[] = {
    UnkStruct_ov001_020c2a40(0x36, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3C),
    UnkStruct_ov001_020c2a40(0x29, 0x00, 0x00, 0x0B, 0x01, 0x00, 0x3D),
    UnkStruct_ov001_020c2a40(0x35, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3E),
    UnkStruct_ov001_020c2a40(0x04, 0x00, 0x00, 0x00, 0xFA, 0x00, 0x3F),
};

// https://decomp.me/scratch/JcRNn
UnkStruct_027e0cd8_0C_Base::UnkStruct_027e0cd8_0C_Base(UnkStruct_027e0cd8 *param1) :
    mUnk_004(NULL, 0x9B, 0x01, 0x01),
    mSceneRender(NULL),
    mUnk_070(NULL, 0x9B, 0x01, 0x00),
    mUnk_084_00(0),
    mUnk_084_01(0),
    mUnk_098(0),
    mUnk_09C((Vec2us *) &param1->mUnk_00),
    mUnk_0AC(false),
    mUnk_0AD(false),
    mUnk_0AE(false),
    mUnk_0AF(false),
    mUnk_0FC(0),
    mIsCS(false),
    mUnk_104(0),
    mUnk_108(0),
    mUnk_10C(0),
    mUnk_110(0),
    mUnk_114(0),
    mUnk_118(0),
    mUnk_11C(1),
    mUnk_120(0),
    mUnk_124(0),
    mUnk_128(0),
    mUnk_12A(true),
    mUnk_12B(false),
    mUnk_12C(false),
    mUnk_12D(false),
    mUnk_12E(false),
    mpROMB(NULL),
    mpCAME(NULL),
    mpCMPT(NULL) {
    Vec2s local_30;
    VecFx32 sp18;
    VecFx32 spC;

    this->mUnk_0A0.x = 0;
    this->mUnk_0A0.y = 0;
    this->mUnk_0A0.z = 0;

    fx32 y = (this->mUnk_11C << 14);
    fx32 z = ((u32) (u16) this->mUnk_09C.y >> 1) << 12;
    fx32 x = ((u32) (u16) this->mUnk_09C.x >> 1) << 12;

    data_027e0c90.min.x = -x;
    data_027e0c90.min.y = -y;
    data_027e0c90.min.z = -z;

    data_027e0c90.max.x = x;
    data_027e0c90.max.y = 0;
    data_027e0c90.max.z = z;

    spC               = data_027e0c90.min;
    data_027e0ca8.min = spC;

    sp18              = data_027e0c90.max;
    data_027e0ca8.max = sp18;

    data_027e0cc0.min = spC;
    data_027e0cc0.max = sp18;

    this->mUnk_13C.Init(data_ov001_020c40f4, 0x40);

    Vec2s_Copy((Vec2s *) &this->mUnk_09C, &local_30);
    gpMapObjManager->func_ov001_020baea0((u16 *) &local_30);
    data_027e095c->func_ov000_020592a0();
}

UnkStruct_027e0cd8_0C_Base::~UnkStruct_027e0cd8_0C_Base() {
    data_027e095c->func_ov000_020592ec();
    gpMapObjManager->func_ov001_020baf28();
    DELETE(this->mUnk_098);
    this->mpROMB = NULL;
    this->mpCMPT = NULL;
    this->mpCAME = NULL;
    this->mUnk_154.clear();
    this->func_ov001_020b8aec();
}

void UnkStruct_027e0cd8_0C_Base::vfunc_38() {}

void UnkStruct_027e0cd8_0C_Base::vfunc_08() {}

void UnkStruct_027e0cd8_0C_Base::func_ov001_020b85d0(const EntranceInfo *param1) {
    this->mIsCS = param1->isCS;

    wchar_t local_c8[2];
    local_c8[0]                        = L'\0';
    local_c8[sizeof(local_c8) / 2 - 1] = L'\0';
    snprintf((char *) local_c8, sizeof(local_c8), "M%02d", param1->roomIndex);
    this->mUnk_084[0] = local_c8[0];
    this->mUnk_084[1] = local_c8[1];

    CourseListEntry *pEntry = data_027e09a0->GetCourseEntry(param1->sceneIndex);

    wchar_t local_34[16];
    local_34[0]                        = L'\0';
    local_34[sizeof(local_34) / 2 - 1] = L'\0';
    snprintf((char *) local_34, sizeof(local_34), "Map/%s/map%02d.bin", pEntry->name, param1->roomIndex);

    this->mUnk_004.~UnkSystem3();
    this->mUnk_004.mUnk_00 = local_34;
    this->mUnk_004.func_0201541c((char *) local_c8, 0x10);
    this->LoadSceneModel(param1);

    snprintf((char *) local_34, sizeof(local_34), "%s:zcb/%s_%02d.zcb", local_c8, pEntry->name, param1->roomIndex);
    UnkFileSystem3 local_44((char *) local_34);
    data_027e09c0->func_ov001_020be3dc(&local_44, this);

    wchar_t local_64[16];
    local_64[0]                        = L'\0';
    local_64[sizeof(local_64) / 2 - 1] = L'\0';
    snprintf((char *) local_64, sizeof(local_64), "%s:zmb/%s_%02d.zmb", local_c8, pEntry->name, param1->roomIndex);
    UnkFileSystem3 local_74((char *) local_64);
    local_74.vfunc_08(0x10);

    ZMBFileInfos zmbFileInfos;
    zmbFileInfos.pFile  = local_74.mpFile;
    zmbFileInfos.size   = local_74.mFileSize;
    zmbFileInfos.unk_08 = 0;
    zmbFileInfos.unk_0A = 0;
    zmbFileInfos.unk_0C = 0;
    zmbFileInfos.unk_0E = 0;
    ZMB_ParseFile(&zmbFileInfos, this, true);

    gpMapObjManager->func_ov001_020bade0();
    gpActorManager->func_ov001_020bb630();

    if (param1->isCS == false) {
        gpActorManager->func_ov001_020bb6b0((EntranceInfo *) param1);
    }

    data_027e095c->func_ov000_020592a0();

    u32 isCs = this->mIsCS;
    snprintf((char *) local_34, sizeof(local_34), "%s:zob/motype_%02d_%1d.zob", local_c8, param1->roomIndex, isCs);
    UnkFileSystem3 local_94((char *) local_34);
    this->mUnk_0B4 = (ZeldaObjectList *) local_94.vfunc_08(sizeof(ZOBHeader));
    gpMapObjManager->func_ov001_020bae40(this->mUnk_0B4);
    for (int i = 0; i < ARRAY_LEN(this->mUnk_0B8); i++) {
        // i + 2 because 0 is the default one and 1 is the cutscene one
        snprintf((char *) local_34, sizeof(local_34), "%s:zob/motype_%02d_%1d.zob", local_c8, param1->roomIndex, i + 2);
        UnkFileSystem3 local_a4((char *) local_34);
        this->mUnk_0B8[i] = (ZeldaObjectList *) local_a4.vfunc_08(sizeof(ZOBHeader));
    }

    isCs = this->mIsCS;
    snprintf((char *) local_34, sizeof(local_34), "%s:zob/npctype_%02d_%1d.zob", local_c8, param1->roomIndex, isCs);
    UnkFileSystem3 local_b4((char *) local_34);
    this->mUnk_0D8 = (ZeldaObjectList *) local_b4.vfunc_08(sizeof(ZOBHeader));
    gpActorManager->func_ov001_020bb7b0(this->mUnk_0D8);
    for (int i = 0; i < ARRAY_LEN(this->mUnk_0DC); i++) {
        // i + 2 because 0 is the default one and 1 is the cutscene one
        snprintf((char *) local_34, sizeof(local_34), "%s:zob/npctype_%02d_%1d.zob", local_c8, param1->roomIndex, i + 2);
        UnkFileSystem3 local_c4((char *) local_34);
        this->mUnk_0DC[i] = (ZeldaObjectList *) local_c4.vfunc_08(sizeof(ZOBHeader));
    }

    data_027e09b0->func_ov000_02072cc4(0x0000, 0x7FFF);
    ZMB_ParseFile(&zmbFileInfos, this, false);
    this->vfunc_40(param1->spawnIndex);

    if (param1->sceneIndex == SceneIndex_t_area1) {
        if (GET_FLAG(data_027e09b8->mAdventureFlags, AdventureFlag_ObtainedSnowSource)) {
            this->mUnk_110 = 0x0A;
        }
    } else if (param1->sceneIndex == SceneIndex_t_area3) {
        if (GET_FLAG(data_027e09b8->mAdventureFlags, AdventureFlag_ObtainedFireSource)) {
            this->mUnk_110 = 0x10;
            this->mUnk_114 = 0x1F;
        }
    }

    this->func_ov001_020b8db8();
    this->func_ov001_020b8e24();

    if (param1->isCS == true) {
        this->mUnk_114 = Cutscene_GetParamEntry(param1->csIndex)->mUnk_0E;
    }

    data_027e09ac->func_ov000_020726f0(this->mUnk_114, 0x00, 0x00);
    this->vfunc_38();
}

void UnkStruct_027e0cd8_0C_Base::func_ov001_020b88c0(unk32 param1) {
    gpMapObjManager->func_ov001_020bae40(this->mUnk_0B8[param1]);
    gpActorManager->func_ov001_020bb7b0(this->mUnk_0DC[param1]);
}

void UnkStruct_027e0cd8_0C_Base::func_ov001_020b88ec() {
    this->func_ov001_020b8e54();
    this->mUnk_088.func_ov000_0208261c();
    gpMapObjManager->func_ov001_020bae6c();
    gpActorManager->func_ov001_020bb7f0();
    data_027e095c->func_ov000_020592ec();
    data_027e09c0->func_ov001_020be400();
    this->mUnk_004.~UnkSystem3();

    if (this->mUnk_128 & 0x200) {
        func_ov089_02165c34(&data_ov089_02171540);
    }
}

void UnkStruct_027e0cd8_0C_Base::LoadSceneModel(const EntranceInfo *param1) {
    const char *pName = data_027e09a0->GetCourseEntry(param1->sceneIndex)->name;

    wchar_t local_40[20];
    local_40[0]                        = L'\0';
    local_40[sizeof(local_40) / 2 - 1] = L'\0';
    snprintf((char *) local_40, sizeof(local_40), "%s:nsbmd/%s_%02d.nsbmd", this->mUnk_084, pName, param1->roomIndex);
    UnkFileSystem3 local_50((char *) local_40);

    wchar_t local_78[20];
    local_78[0]                        = L'\0';
    local_78[sizeof(local_78) / 2 - 1] = L'\0';
    const char *path                   = "Map/%s/map%02d.nsbtx";
    snprintf((char *) local_78, sizeof(local_78), path, pName, param1->roomIndex);

    this->mUnk_070.vfunc_0C();
    this->mUnk_070.mUnk_04 = (char *) local_78;
    this->mUnk_070.vfunc_08(0x10);

    BMDSectionModel *pBMD = func_ov000_0205abcc(&local_50, &this->mUnk_070, 0x01, 0x00, NULL);
    G3d_Model *pModel     = G3d_GetModelPtr(pBMD);
    G3d_0200e6a0(pModel, 0x00, 0x40);
    G3d_0200e6a0(pModel, 0x00, 0x80);
    this->mSceneRender.vfunc_08(pModel);
}

void UnkStruct_027e0cd8_0C_Base::vfunc_1C(const EntranceInfo *param1, bool param2, bool param3) {
    SceneIndex sceneIndex = param1->sceneIndex;
    u8 roomIndex          = param1->roomIndex;

    if (param2 != 0) {
        if (param3 == 0) {
            return;
        }

        roomIndex = 99;
    }

    gpCurrentGameModeMgr->vfunc_38(sceneIndex, roomIndex, 0x01, 0x00);
}

void UnkStruct_027e0cd8_0C_Base::vfunc_20() {}

const UnkStruct_ov001_020c40f4 *UnkStruct_027e0cd8_0C_Base::func_ov001_020b8a5c(unk32 spawnIndex, unk32 param1) {
    UnkStruct_ov001_020c40f4 *result =
        std::find_if(this->mUnk_13C.begin(), this->mUnk_13C.end(), UnkStruct_ov001_020c40f4::Predicate(spawnIndex, param1));

    if (param1 == 0) {
        if (result == this->mUnk_13C.end()) {
            result = this->mUnk_13C.begin();
        }

        if (result->mUnk_0F == 0) {
            result->mUnk_00.y = this->vfunc_28(&result->mUnk_00, 1, 0);
        }

        return result;
    } else {
        if (result == this->mUnk_13C.end()) {
            return this->func_ov001_020b8a5c(spawnIndex, 0x00);
        }

        if (result->mUnk_0F == 0) {
            result->mUnk_00.y = this->vfunc_28(&result->mUnk_00, 1, 0);
        }

        return result;
    }
}

void UnkStruct_027e0cd8_0C_Base::func_ov001_020b8aec() {
    STACK_PAD(0x24);
    this->mUnk_148.unk_action1();
}

void UnkStruct_027e0cd8_0C_Base::func_ov001_020b8b94(ZMBEntryARAB *pARAB) {
    UnkStruct_027e0cd8_0C_Base_148_00_Base *ptr = NULL;

    if (pARAB->unk_0C == 1) {
        ptr = new(HeapIndex_1) UnkStruct_027e0cd8_0C_Base_148_02(pARAB);
    } else if (pARAB->unk_0D == 1) {
        ptr = new(HeapIndex_1) UnkStruct_027e0cd8_0C_Base_148_01(pARAB);
    } else {
        ptr = new(HeapIndex_1) UnkStruct_027e0cd8_0C_Base_148_00(pARAB);
    }

    this->mUnk_148.push_back(ptr);
}

void UnkStruct_027e0cd8_0C_Base::func_ov001_020b8c30(const EntranceInfo &param1) {
    this->mUnk_154.push_back(param1);
}

void *UnkStruct_027e0cd8_0C_Base::func_ov001_020b8c80(unk32 param1) {
    return (void *) &data_ov001_020c2a40[param1 - 0x3C];
}

void UnkStruct_027e0cd8_0C_Base::func_ov001_020b8c90(ZMBSectionCMPT *pCMPT) {
    this->mpCMPT = pCMPT;
}

void UnkStruct_027e0cd8_0C_Base::func_ov001_020b8c98(ZMBSectionCAME *pCAME) {
    this->mpCAME = pCAME;
}

void UnkStruct_027e0cd8_0C_Base::ZMB_ParseROMB(ZMBSectionROMB *pROMB) {
    this->mpROMB = pROMB;
}

void UnkStruct_027e0cd8_0C_Base::vfunc_40(u8 spawnIndex) {
    switch (spawnIndex) {
        case 0xFB:
        case 0xFC:
        case 0xFD:
        case 0xFE: {
            UnkStruct_ov001_020c40f4 stack_elem;
            UnkStruct_WarpUnk1_A0 *pEntry = data_027e09a4->func_ov000_02070538();
            VecFx32 pos                   = pEntry->mUnk_04;
            fx16 angle                    = DEG_TO_ANG(0);

            switch (spawnIndex) {
                case 0xFB:
                    pos.z = data_027e0c90.max.z - FLOAT_TO_FX32(0.5f);
                    angle = DEG_TO_ANG(180);
                    break;
                case 0xFC:
                    pos.z = data_027e0c90.min.z + FLOAT_TO_FX32(0.5f);
                    angle = DEG_TO_ANG(0);
                    break;
                case 0xFD:
                    pos.x = data_027e0c90.max.x - FLOAT_TO_FX32(0.5f);
                    angle = DEG_TO_ANG(270);
                    break;
                case 0xFE:
                    pos.x = data_027e0c90.min.x + FLOAT_TO_FX32(0.5f);
                    angle = DEG_TO_ANG(90);
                    break;
                default:
                    break;
            }

            stack_elem.mUnk_0E = spawnIndex;
            VecFx32_Copy(&pos, &stack_elem.mUnk_00);
            stack_elem.mUnk_0C = angle;
            stack_elem.mUnk_10 = 0xFD;

            UnkStruct_ov001_020c40f4 *pEnd = this->mUnk_13C.end();
            if (pEnd != NULL) {
                pEnd->mUnk_00 = stack_elem.mUnk_00;
                pEnd->mUnk_0C = stack_elem.mUnk_0C;
                pEnd->mUnk_0E = stack_elem.mUnk_0E;
                pEnd->mUnk_0F = stack_elem.mUnk_0F;
                pEnd->mUnk_10 = stack_elem.mUnk_10;
                pEnd->mUnk_14 = stack_elem.mUnk_14;
            }

            this->mUnk_13C.grow_by(1);
            break;
        }
        default:
            break;
    }
}

void UnkStruct_027e0cd8_0C_Base::func_ov001_020b8db8() {
    unk32 uVar1;

    uVar1 = 0;
    switch (this->mUnk_110) {
        case 0x00:
        case 0x03:
            uVar1 = 0x0A;
            break;
        case 0x0E:
            uVar1 = 0x01;
            break;
        case 0x05:
        case 0x09:
            uVar1 = 0x02;
            break;
        case 0x0A:
            uVar1 = 0x03;
            break;
        case 0x02:
            uVar1 = 0x04;
            break;
        case 0x0F:
            uVar1 = 0x05;
            break;
        case 0x10:
            uVar1 = 0x06;
            break;
        case 0x08:
            uVar1 = 0x00;
            break;
        case 0x0C:
            uVar1 = 0x09;
            break;
        case 0x06:
            uVar1 = 0x07;
            break;
        case 0x01:
        case 0x07:
        case 0x04:
        case 0x0B:
            break;
        default:
            uVar1 = 0x00;
            break;
    }

    this->mUnk_088.func_ov000_020823a8(uVar1);
}

void UnkStruct_027e0cd8_0C_Base::func_ov001_020b8e24() {
    if (this->mUnk_110 == 7 && this->mUnk_098 == NULL) {
        this->mUnk_098 = new(HeapIndex_1) UnkStruct_027e0cd8_0C_Base_98();
    }
}

void UnkStruct_027e0cd8_0C_Base::func_ov001_020b8e54() {
    DELETE(this->mUnk_098);
}
