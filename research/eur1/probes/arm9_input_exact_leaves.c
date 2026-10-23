/* Spirit Tracks EUR1: independently compiled, isolated ARMv5TE probes.
 * The other six input/frame helpers are semantic approximations ONLY.
 * These two functions are small enough to be Clang-byte-identical to ARM9.
 * Not matched with the original CodeWarrior compiler.
 */
#include <stdint.h>
#if defined(PROBE_02013B10)
/* Input::Init(), 0x02013B10, 20 bytes */
void st_input_init(volatile uint16_t *s) { s[0] = 0; s[1] = 0; s[2] = 0; }
#elif defined(PROBE_02013B88)
/* Input edge clearing, 0x02013B88, 16 bytes */
void st_input_clear_transitions(volatile uint16_t *s) { s[1] = 0; s[2] = 0; }
#else
#error Choose one PROBE macro
#endif
