# Spirit Tracks (Nintendo DS) — EUR Rev 1 matching-decomp roadmap

Source of truth: [zeldaret/st](https://github.com/zeldaret/st). This fork uses the existing build and codebase; independent observations go under `research/eur1`.

## Baseline (23 October 2026)
- BKIP EUR Rev 1 ROM digest: `dcb221a89acb894503a461c2c7d4cfdad9a06b68`.
- Local audit: 114 ARM9 overlays decompressed, 3,442 NitroFS files named.
- 27,785 heuristic function entry candidates (9,248 high-evidence call/prologue combinations). These are **not** validated functions.
- 13 provisional source reconstructions, including 10 ARM9 wrappers in `src/recovered_arm9_wrappers.c`; 9 host mock scenarios passed.
- **Zero newly proven binary-matching functions** from this audit. Recompilation of full EUR1 project not done here.

## Route to complete matching decompilation
- [ ] Establish a reproducible `eur1` ROM build with the authentic target compiler/linker and local game dump. **Check filename discrepancy**: `tools/configure.py` searches for `extract/baserom_st_eur1.nds`, but upstream `extract/README.md` documents `baserom_st_eur_rev1.nds`.
- [ ] Generate EUR1 baseline build, symbols, and per-module byte-matching progress report.
- [ ] Cross-reference research candidates against existing upstream symbols; remove matches and false positives.
- [ ] Resolve instruction mode (ARM/Thumb), code/data boundaries, control flow, stack frames, and ABI for each remaining function.
- [ ] Translate one function at a time into readable C/C++; rebuild, compare machine code **byte-for-byte**, and fix mismatches.
- [ ] Cover ARM9 main, all overlays, ARM7 and embedded libraries; measure data and linker matching separately where relevant.
- [ ] Test rebuilt ROM using an emulator/DS device with a legitimately dumped ROM and required BIOS; automate smoke tests.
- [ ] Track remaining unmatched bytes and all regressions until the supported `eur1` build is matching.
- [ ] Consider PC port separately after decompilation; a compilable DS ROM is not a playable PC port.

## Validation levels
1. **Disassembled**: ARM/Thumb instructions recovered (not C).
2. **Provisional C**: readable approximation (our current research).
3. **Host-tested C**: basic mocked behaviors verified (9 cases in this batch).
4. **Target-compiled C**: CodeWarrior-produced binary exists.
5. **Matching**: target machine code matches original ROM.
6. **Integrated/tested**: matches and rebuilt game passes runtime tests.

Only level 5+ improves the verifiable matching percentage. No game ROMs, assets, extracted binaries, BIOS or assembly dumps are committed. zeldaret/st does not accept AI-generated source PRs; keep AI-assisted work on this fork unless independently rewritten and conforming to upstream policy.
