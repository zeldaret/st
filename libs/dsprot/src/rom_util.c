#include "dsprot/rom_util.h"

#include <nitro/card.h>
#include <nitro/os.h>
#include <nitro/reg.h>

// Functions to be encrypted (cannot be called directly)
void ROMUtil_Read(void *dest, u32 addr, s32 num_bytes);
u32 ROMUtil_CRC32(void *buf, u32 size);

void ROMUtil_Read(void *dest, u32 addr, s32 num_bytes) {
    u8 buffer[8];
    vu8 *vnull;
    u32 register_base_1;
    vu8 *register_base_2;
    u32 card_ctrl_13;
    s32 addr_offset;
    u16 lock_id;
    u16 ext_mem_register_val_original;
    u32 output;
    s32 card_ctrl_cmd;
    int i;

    lock_id = OS_GetLockID();
    CARD_func_0010(lock_id);

    // Alias for volatile null pointer
    vnull = NULL;

    // Alias for register base (0x04000000)
    register_base_1 = 1;
    register_base_1 <<= 26;

    // Another alias for register base (0x04000000)
    register_base_2 = (vu8 *) REG_BASE;

    // External memory control register (0x04000204)
    // Save value to rewrite later
    ext_mem_register_val_original = REG_EXMEM_CNT;

    // Set current processor accessing the gamecard bus to the ARM9
    OS_SetNdsSlotAccess(OS_CPU_ARM9);

    // Obfuscated, create address 0x027FFE60
    // This is offset 0x60 in the ROM header: port 0x040001A4 / setting for normal commands
    card_ctrl_13 = 5;
    card_ctrl_13 <<= 18;
    card_ctrl_13 -= 13;

    // Detect if the system is in DSi mode. If so, change the address to 0x02FFFE60
    if (*(vu8 *) (register_base_1 + REG_A9ROM_OFFSET) & 1) {
        card_ctrl_13 |= 0x40000;
    }

    card_ctrl_13 <<= 5;

    // Read port setting and set page read flags
    card_ctrl_cmd = (*(vs32 *) card_ctrl_13 & ~CARD_CTL_CMD_MASK) | (CARD_CTL_CMD_PAGE | CARD_CTL_READ | CARD_CTL_START);

    // Calculate offset to round back to nearest 0x200-byte block.
    // E.G. if we want to read starting from 0x1208, we actually need to
    // request the block at 0x1200 and then ignore the first 8 bytes of the result.
    // This would set `addr_offset` to -8.
    addr_offset = 0 - (addr & (CARD_ROM_PAGE_SIZE - 1));

    // Wait for card to not be busy
    while (*(vu32 *) (register_base_1 + REG_CARD_CNT_OFFSET) & CARD_CTL_START) {
        continue;
    }

    // Write enable flag to card ROM and SPI control register
    *(vu8 *) (register_base_1 + REG_CARD_AUX_SPI_CNT_OFFSET + 1) = CARDMST_ENABLE;

    // Read 8-byte command out from gamecard bus, write this back later
    for (i = 0; i < 8; i++) {
        buffer[i] = *(vnull + _MAIN_REG_BASE + REG_CARD_CMD_OFFSET + i);
    }

    addr += addr_offset;

    while (addr_offset < num_bytes) {
        // Read a 0x200-byte data block from ROM

        // Write 8-byte command to registers
        // B7XXXXXXXX000000 -> 0x200-byte encrypted data read from address XXXXXXXX
        register_base_2[REG_CARD_CMD_OFFSET + 0] = CARD_CMD_ENCRYPTED_READ;
        register_base_2[REG_CARD_CMD_OFFSET + 1] = addr >> 24;
        register_base_2[REG_CARD_CMD_OFFSET + 2] = addr >> 16;
        register_base_2[REG_CARD_CMD_OFFSET + 3] = addr >> 8;
        register_base_2[REG_CARD_CMD_OFFSET + 4] = addr;
        register_base_2[REG_CARD_CMD_OFFSET + 5] = 0x00;
        register_base_2[REG_CARD_CMD_OFFSET + 6] = 0x00;
        register_base_2[REG_CARD_CMD_OFFSET + 7] = 0x00;

        // Submit command
        *(vu32 *) (register_base_1 + REG_CARD_CNT_OFFSET) = card_ctrl_cmd;

        // Copy the output into the destination buffer, within the bounds of num_bytes
        // (Must read the output out of the I/O register regardless)
        do {
            if (*(vu32 *) (register_base_1 + REG_CARD_CNT_OFFSET) & CARD_DATA_READY) {
                output = *(vu32 *) (register_base_1 + REG_CARD_DATA_OFFSET);
                if (addr_offset >= 0 && addr_offset < num_bytes) {
                    *(u32 *) ((u32) dest + addr_offset) = output;
                }

                addr_offset += 4;
            }
        } while (*(vu32 *) (register_base_1 + REG_CARD_CNT_OFFSET) & CARD_CTL_START);

        // Advance address to next block
        addr += CARD_ROM_PAGE_SIZE;
    }

    // Done reading, restore everything how it was before

    // Write original command back to gamecard bus
    for (i = 0; i < 8; i++) {
        *(vnull + _MAIN_REG_BASE + REG_CARD_CMD_OFFSET + i) = buffer[i];
    }

    // Write original value back to to external memory control register
    *(vu16 *) (register_base_1 + REG_EXMEM_CNT_OFFSET) = ext_mem_register_val_original;

    CARD_func_0011(lock_id);
    OS_func_0178(lock_id);
}

u32 ROMUtil_CRC32(void *buf, u32 size) {
    int i;
    u32 crc;
    u32 poly;
    u8 *byte_ptr;

    byte_ptr = (u8 *) buf;
    crc      = 0xFFFFFFFF;
    poly     = 0xEDB88320;
    while (size-- != 0) {
        crc ^= *byte_ptr++;
        for (i = 0; i < 8; i++) {
            if (crc & 1) {
                crc = (crc >> 1);
            } else {
                crc = poly ^ (crc >> 1);
            }
        }
    }

    return ~crc;
}
