# Spirit Tracks EUR Rev 1 — reproducible research audit

This directory contains an **independent preliminary audit** for the Nintendo DS release of *The Legend of Zelda: Spirit Tracks*, Europe Rev 1 (`BKIP`). It is intended as supporting research alongside [zeldaret/st](https://github.com/zeldaret/st), **not** a matched or playable replacement for that project.

## Integrity and scope

- SHA-1 of the user-supplied input ROM: `dcb221a89acb894503a461c2c7d4cfdad9a06b68` (a known `eur1` digest in the upstream project's README).
- 114 ARM9 overlays extracted/decompressed; 3,442 NitroFS named files indexed; 9,248 **heuristic** call/prologue candidates, not confirmed functions.
- `src/recovered_functions.c` contains **three provisional human-readable translations**; syntax checked with `clang -fsyntax-only -std=c11 -Wall -Wextra -Werror`. None is binary-matched or validated in-game.
- No original ROM, original code binaries, disassembly excerpts, game assets, or BIOS files are tracked in this directory.

## Local analysis with your legitimately obtained ROM

From the `research/eur1/` directory, on Windows PowerShell:

```powershell
py -3 .\scripts\analyze_nds.py "C:\Path\To\SpiritTracks_EUR_Rev1.nds" --output "."
py -3 .\scripts\catalog_functions.py "."
```

This creates `working_code/` locally. These files, and files in `working_files/` and `asm/`, are ignored by Git. For a local-only assembly sample, run `py -3 .\scripts\make_asm_samples.py "."` after installing LLVM. **Do not commit the generated ASM or extracted binaries.**

## Build the upstream decomp project

Use the upstream `INSTALL.md` and `extract/README.md` to configure its proper ROM layout and version; upstream's code and build system remain unchanged. The audited `eur1` ROM hash is listed upstream. Do not confuse the research C file with a contribution to upstream's matched `src/` tree.

## Next milestones

1. Map these candidate functions against known upstream symbols and skip any code already matched.
2. Validate ARM/Thumb mode, code/data boundaries, calls, and inferred signatures.
3. Port **verified** functions into the upstream C++ tree, compile with the target toolchain, and measure byte-for-byte matching.
4. Test rebuilt ROM in DS emulator/hardware; only later consider a separate PC port.

See [ETAT_DES_LIEUX.md](ETAT_DES_LIEUX.md) for the detailed report, assumptions, and limitations.
