/* No dedicated header */

#include "dsprot.h"
#include "dsprot/encoding_constants.h"
#include "dsprot/encryptor.h"
#include "dsprot/integrity.h"
#include "dsprot/mac_owner.h"
#include "dsprot/rom_test.h"

// Functions to be encrypted (cannot be called directly)
u32 DetectFlashcart(void *callback);
u32 DetectNotFlashcart(void *callback);
u32 DetectEmulator(void *callback);
u32 DetectNotEmulator(void *callback);
u32 DetectDummy(void *callback);
u32 DetectNotDummy(void *callback);

#define DSP_OBFS_OFFSET (0x320)

#define FUNC_QUEUE_END (0)

typedef u32 (*TaskFunc)(void);
typedef void (*CallbackFunc)(void);

enum {
    EXPECT_FALSE,
    EXPECT_TRUE
};

// This was likely not originally an inline, but an inline is able to match here nicely
static inline u32 dsprotMain(u32 *func_queue, int expected_result, void *callback) {
    BOOL ret;
    BOOL func_result;
    s32 compare_sum;
    u32 i;
    s32 func_result_sum;

    // These two bit arrays must be signed to match
    compare_sum     = 0;
    func_result_sum = 0;

    for (i = 0; func_queue[i] != FUNC_QUEUE_END; i++) {
        func_result = ((TaskFunc) (func_queue[i] - ENC_VAL_1 - DSP_OBFS_OFFSET))() != 0;

        func_result_sum += func_result;
        func_result_sum <<= 1;

        compare_sum += TRUE;
        compare_sum <<= 1;
    }

    if (expected_result == EXPECT_TRUE) {
        ret = (func_result_sum >> 1) == (compare_sum >> 1);
    } else {
        ret = ((func_result_sum & compare_sum) >> 1) != 0;
    }

    if (callback != NULL && ret) {
        ((CallbackFunc) callback)();
    }

    return (u32) ret;
}

u32 DetectFlashcart(void *callback) {
    u32 func_queue[32];

    func_queue[2] = FUNC_QUEUE_END;
    func_queue[0] = ADDR_PLUS_ADDEND(RunEncrypted_ROMTest_IsBad, ENC_VAL_1) + DSP_OBFS_OFFSET;
    func_queue[1] = ADDR_PLUS_ADDEND(RunEncrypted_Integrity_ROMTest_IsBad, ENC_VAL_1) + DSP_OBFS_OFFSET;

    return dsprotMain(&func_queue[0], EXPECT_FALSE, callback);
}

u32 DetectNotFlashcart(void *callback) {
    u32 func_queue[32];

    func_queue[2] = FUNC_QUEUE_END;
    func_queue[0] = ADDR_PLUS_ADDEND(RunEncrypted_ROMTest_IsGood, ENC_VAL_1) + DSP_OBFS_OFFSET;
    func_queue[1] = ADDR_PLUS_ADDEND(RunEncrypted_Integrity_ROMTest_IsGood, ENC_VAL_1) + DSP_OBFS_OFFSET;

    return dsprotMain(&func_queue[0], EXPECT_TRUE, callback);
}

u32 DetectEmulator(void *callback) {
    u32 func_queue[32];

    func_queue[2] = FUNC_QUEUE_END;
    func_queue[0] = ADDR_PLUS_ADDEND(RunEncrypted_MACOwner_IsBad, ENC_VAL_1) + DSP_OBFS_OFFSET;
    func_queue[1] = ADDR_PLUS_ADDEND(RunEncrypted_Integrity_MACOwner_IsBad, ENC_VAL_1) + DSP_OBFS_OFFSET;

    return dsprotMain(&func_queue[0], EXPECT_FALSE, callback);
}

u32 DetectNotEmulator(void *callback) {
    u32 func_queue[32];

    func_queue[2] = FUNC_QUEUE_END;
    func_queue[0] = ADDR_PLUS_ADDEND(RunEncrypted_MACOwner_IsGood, ENC_VAL_1) + DSP_OBFS_OFFSET;
    func_queue[1] = ADDR_PLUS_ADDEND(RunEncrypted_Integrity_MACOwner_IsGood, ENC_VAL_1) + DSP_OBFS_OFFSET;

    return dsprotMain(&func_queue[0], EXPECT_TRUE, callback);
}

u32 DetectDummy(void *callback) {
    u32 func_queue[32];

    // Prevent optimization of the function queue processing
    *(u32 *) &func_queue[0] = FUNC_QUEUE_END;

    return dsprotMain(&func_queue[0], EXPECT_FALSE, callback);
}

u32 DetectNotDummy(void *callback) {
    u32 func_queue[32];

    // Prevent optimization of the function queue processing
    *(u32 *) &func_queue[0] = FUNC_QUEUE_END;

    return dsprotMain(&func_queue[0], EXPECT_TRUE, callback);
}

// DECRYPTION_WRAPPER(DetectFlashcart, 0xac, 0x2e8b, DSProt_)
// DECRYPTION_WRAPPER(DetectNotFlashcart, 0xac, 0x2e8b, DSProt_)
// DECRYPTION_WRAPPER(DetectEmulator, 0xac, 0x2e8b, DSProt_)
// DECRYPTION_WRAPPER(DetectNotEmulator, 0xac, 0x2e8b, DSProt_)
// DECRYPTION_WRAPPER(DetectDummy, 0x94, 0x2e8b, DSProt_)
// DECRYPTION_WRAPPER(DetectNotDummy, 0x94, 0x2e8b, DSProt_)

// // clang-format off
// asm void NitroStaticInit() {
//     stmdb sp!, {lr};
//     add r0, pc, #0x4;
//     bl Encryptor_DecodeFunctionTable;
//     ldmia sp!, {pc};
//     dcd DSProt_DetectFlashcart + ENC_VAL_1
//     dcd DSProt_BSS + 0x68 + ENC_VAL_1
//     dcd DSProt_DetectNotFlashcart + ENC_VAL_1
//     dcd DSProt_BSS + 0x68 + ENC_VAL_1
//     dcd DSProt_DetectEmulator + ENC_VAL_1
//     dcd DSProt_BSS + 0x68 + ENC_VAL_1
//     dcd DSProt_DetectNotEmulator + ENC_VAL_1
//     dcd DSProt_BSS + 0x68 + ENC_VAL_1
//     dcd DSProt_DetectDummy + ENC_VAL_1
//     dcd DSProt_BSS + 0x68 + ENC_VAL_1
//     dcd DSProt_DetectNotDummy + ENC_VAL_1
//     dcd DSProt_BSS + 0x68 + ENC_VAL_1
//     dcd 0
//     dcd 0
//     dcd DSProt_Garbage + 0x1400
// }
// // clang-format on
