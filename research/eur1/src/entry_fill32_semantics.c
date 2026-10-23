/* Spirit Tracks EUR1: research-only reconstruction of ARM9 0x0200093C.
 * Original five ARM instructions:
 *   ADD ip,r1,r2 ; CMP r1,ip ; STMLT r1!,{r0} ; BLT loop ; BX lr
 * Semantics: byte_count is a BYTE count; stores complete 32-bit words,
 * rounding up on nonmultiples of four.
 * Only the accessible normal address range is modeled here.
 * No CodeWarrior matching claim.
 */
#include <stdint.h>

uint32_t research_entry_fill32(uint32_t value, void *destination, uint32_t byte_count)
{
    uintptr_t write_address = (uintptr_t)destination;
    uintptr_t end_address = write_address + byte_count;
    while ((intptr_t)write_address < (intptr_t)end_address) {
        *(uint32_t *)write_address = value;
        write_address += sizeof(uint32_t);
    }
    return value;
}
