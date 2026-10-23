/* Spirit Tracks EUR Rev 1 ARM9: preliminary Base2 class reconstructions.
 * Inferred from ROM disassembly and config/eur1/arm9/symbols.txt.
 * Not binary-matching; not integrated with the upstream game's build.
 */
#include <stdint.h>
#include <stddef.h>
extern void sub_02016694(void *embedded);
extern void *sub_0201BA94(void *self);
extern void sub_0201667C(void *embedded);

/* ARM 0x0201BA1C: call a routine on self+0x20, call Base2 D1 destructor,
 * then return self. Function span 0x20 bytes. */
void *research_0201BA1C(void *self)
{
    sub_02016694((uint8_t *)self + 0x20);
    sub_0201BA94(self);
    return self;
}

/* Base2::Base2 C2 (0x0201BA3C) and C1 (0x0201BA68) have identical
 * effects and separate compiler-generated entrypoints. */
static void *initialize_base2_object(void *self)
{
    sub_0201667C((uint8_t *)self + 4);
    *(uint32_t *)self = UINT32_C(0x020440F4); /* DS vtable address */
    *((uint8_t *)self + 0x0C) = 0;
    return self;
}

void *research_0201BA3C(void *self) { return initialize_base2_object(self); }
void *research_0201BA68(void *self) { return initialize_base2_object(self); }
