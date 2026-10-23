# Spirit Tracks EUR Rev 1 — ARM9 overlay 0, additional 165 C functions

This is a **second incremental reconstruction batch**, strictly about Nintendo DS game-code decompilation (not a native PC-port project).

**Locally verified from the user-supplied EUR Rev 1 ROM:**

| Measure | Additional batch | Both ov000 batches |
| --- | ---: | ---: |
| Distinct translated C function bodies | 165 | 265 |
| Nonempty original functions | 44 | 144 |
| Original functions consisting only of `BX LR` | 121 | 121 |
| Original ARM9 instruction bytes reproduced | 1,024 | 1,940 |
| Original CodeWarrior byte-matched functions integrated into game | 0 | 0 |

`overlay000_additional_165.c` contains 165 standalone C functions obtained from ARM instructions in the EUR Rev 1 overlay 0. **121 of these are genuinely empty original functions; this count should not be confused with progress on complex game logic.** The remaining 44 implement operations including constant returns, field access and assignment, conditionals and short state changes. None overlaps the previous 100-function batch.

Clang ARMv5TE recompilation with `-O2 -ffunction-sections` was tested on the whole source file, comparing the **individual `.text.st_ov000_<address>` sections** byte-for-byte against the verified decompressed overlay. Result **165/165, 1,024 bytes reproduced exactly**. A modified binary was correctly rejected by the SHA-1 check. `manifest_165.json` records function categories, addresses, sizes and SHA-256 fingerprints, not original machine-code bytes.

## Reproduce on the original ROM

First extract your own legally dumped, SHA-1-verified Europe Rev 1 game using the existing analysis tool:

```powershell
python research/eur1/scripts/analyze_nds.py extract/baserom_st_eur1.nds --output local_audit
python research/eur1/batches/ov000_165/verify_ov000_165.py --overlay0 local_audit/working_code/overlay_000.bin
```

Requirements: Clang with ARMv5TE code generation, `llvm-objcopy`, Python 3.11+. No ROM, extracted assets, original assembly, BIOS or copyrighted binaries are committed.

The previous 100 are in [`../ov000_100`](../ov000_100). The combined **265** were selected without duplicate addresses. Isolated Clang machine-byte equality is **not** the same as matching the original Nintendo CodeWarrior compilation; no DS runtime integration, ROM rebuild, native PC execution or gameplay validation has been accomplished by these research batches. Future work: resolve ABI/class ownership, trace callers and move validated implementations into the DS project with proper compiler and runtime tests.