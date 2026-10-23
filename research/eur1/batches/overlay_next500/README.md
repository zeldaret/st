# Spirit Tracks — 500 additional ARM9 C reconstructions (EUR Rev 1, third batch)

**500 unique new C function bodies**, with no overlap with the previously published 100 overlay0 or 500 mixed-overlay functions. Each compiled into its own Clang ARMv5TE `.text` section, compared byte-for-byte against the user's EUR Rev 1 Nintendo DS ROM (correct SHA-1 required).

| Category | Count |
| --- | ---: |
| **New functions (third batch)** | **500** |
| Non-empty reconstructed C functions | **245** |
| Originally empty `BX LR` routines | **255** |
| Reproduced instruction bytes | **3468** |
| ARM9 overlays | **47** |
| Function addresses in upstream symbol maps | **443** |
| Additional BL-target function candidates | **57** |
| Standalone Clang exact (verified) | **500/500** |
| Standalone CodeWarrior verified | **0 (not checked)** |
| Integrated into the official Nintendo DS build | **0** |

This count is **not** CodeWarrior-matching progress and is **not** evidence of PC-game playability. Empty functions do not implement gameplay, and C prototypes/type/signature/owners are provisional. BL-target-only entries require symbol boundary audit before normal game source integration. No Nintendo binaries, source assembly, or assets are published.

## Reproduce locally

On a checkout of `zeranemesis/st`, with own ROM assets extracted and BLZ-decompressed using the EUR Rev1 research extractor (see preceding batch documentation):

```powershell
python research/eur1/batches/overlay_next500/verify_next500.py --working-code C:\path\to\local\working_code
```

The verifier checks SHA-1 for every relevant original overlay, recompiles the entire C file with `clang --target=armv5te-none-eabi -march=armv5te -marm -O2 -ffunction-sections`, and byte-compares all 500 machine-code sections and 500 original-span SHA256 digests. It exits nonzero on any mismatch. The ROM itself must stay outside GitHub.

## Next integration milestones

Recover original function names, class ownership, struct layouts, calling conventions, and the exact C++ translation units. Use locally working CodeWarrior `dsi/1.2p1` compilation and objdiff to check against the actual EUR1 game build; a standalone byte match with Clang alone does **not** satisfy those criteria. Do not start native PC runtime work until requested.
