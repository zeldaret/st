/*
 * Spirit Tracks EU Rev 1 (BKIP) — original preliminary C reconstruction.
 * MANUAL PSEUDO-DECOMPILATION: not byte-matching C, not a full game port.
 * Provenance: user-provided ROM disassembly, see asm/ for actual ARM instructions.
 *
 * These implementations are intentionally NOT wired into a runnable game.
 * Symbols named by machine address; inferred names/signatures are provisional.
 * The original game code and assets are not redistributed in this package.
 */
#include <stdint.h>
#include <stddef.h>

/* ARM9 startup @ 0x0200093C .. 0x0200094F.
 * Inputs are r0=word, r1=destination, r2=byte_count.
 * The original loops with a signed ARM 'lt' comparison; it writes whole words.
 * Return is the r0 register retained by the assembly routine.
 */
uint32_t sub_0200093C_fill_words(uint32_t value, void *dest, uint32_t byte_count)
{
    uintptr_t cursor = (uintptr_t)dest;
    uintptr_t end = cursor + byte_count;
    while ((intptr_t)cursor < (intptr_t)end) {
        *(uint32_t *)cursor = value;
        cursor += sizeof(uint32_t);
    }
    return value;
}

/* Overlay 1 @ 0x020B6560 .. 0x020B6579, Thumb.
 * Allocation and constructor parameter types are not yet proven.
 * 0x02011F3C is reached with BLX; 0x020B657C with BL.
 */
extern void *sub_02011F3C(uint32_t a0, uint32_t a1, uint32_t a2);
extern void *sub_020B657C(void *allocated, void *arg);

void *sub_020B6560_allocate_and_init(void *arg)
{
    void *obj = sub_02011F3C(0x68, 1, 4);
    if (obj != NULL) {
        return sub_020B657C(obj, arg);
    }
    return obj;
}

/* Overlay 0 @ 0x02051AE0 .. 0x02051B5F, ARM.
 * The function reads a packed set of three signed 16-bit values and two
 * transition timepoints (bytes) from the object pointed to by arg1+4.
 * At arg0+0x34 it stores an interpolated signed 16-bit number.
 * Interpretations like 'animation' or 'curve' are semantic guesses.
 * We rely on an external signed division function identified by its ARM code.
 */
extern int32_t sub_0203A1BC_signed_div(int32_t numerator, int32_t denominator);

static int16_t load_s16(const uint8_t *p) {
    return (int16_t)((uint16_t)p[0] | ((uint16_t)p[1] << 8));
}

void sub_02051AE0_interpolate(void *dst, const void *descriptor, int32_t frame)
{
    const uint8_t *desc = (const uint8_t *)descriptor;
    /* A word-sized data pointer lives at descriptor+4 in the original.
     * A native host pointer is wider; this is conceptual C, not a host ABI port.
     */
    uintptr_t packed_data_pointer = (uintptr_t)*(const uint32_t *)(desc + 4);
    const uint8_t *keys = (const uint8_t *)packed_data_pointer;
    int16_t first = load_s16(keys);
    int16_t middle = load_s16(keys+2);
    int16_t last = load_s16(keys+4);
    uint8_t early_end = keys[6];
    uint8_t late_start = keys[7];
    int32_t result;
    if (frame < (int32_t)early_end) {
        result = first + sub_0203A1BC_signed_div((middle-first)*frame, (int32_t)early_end);
    } else if (frame < (int32_t)late_start) {
        result = middle;
    } else {
        result = last + sub_0203A1BC_signed_div((last-middle)*(frame-255),255-(int32_t)late_start);
    }
    uint8_t *output = (uint8_t *)dst + 0x34;
    /* Binary uses STRH and therefore stores only low 16 bits. */
    uint16_t low=(uint16_t)result;
    output[0]=(uint8_t)low;
    output[1]=(uint8_t)(low>>8);
}
