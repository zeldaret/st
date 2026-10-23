# Spirit Tracks EUR Rev 1 — 13 isolated ARM9 Clang byte matches

Date: 2026-10-23. Game build: **Europe Rev 1 (BKIP)**.
Input ROM SHA-1: `dcb221a89acb894503a461c2c7d4cfdad9a06b68`.
Decompressed ARM9 SHA-1: `650ea160271b2297bfdea0ff3b97e9fa335d7f73`.
Compiler: Clang 17.0.0 with `--target=armv5te-none-eabi -march=armv5te -marm -O2 -ffreestanding -fomit-frame-pointer`.

The 13 C reconstructions in [arm9_short_functions.c](../probes/arm9_short_functions.c)
were compiled **one function per object file**. The emitted `.text` section of each
was compared **byte-for-byte** against the corresponding executable span in
the decompressed ARM9 segment of the user's SHA-1-verified EUR1 ROM.

| ARM9 address | Span | SHA-256 original executable span | Result |
| --- | ---: | --- | --- |
| `0x020022A8` | 12 | `72ecdc8d5bb4b626192587ed9e0ea29096d203c62e519d89d091449084819b8b` | PASS |
| `0x02002C80` | 12 | `4e04ee5e8b0262b528762ebe6bb10dc4fc3c9037cac69eff72906b7667e6ea14` | PASS |
| `0x02005030` | 12 | `4e04ee5e8b0262b528762ebe6bb10dc4fc3c9037cac69eff72906b7667e6ea14` | PASS |
| `0x0200E254` | 12 | `4e04ee5e8b0262b528762ebe6bb10dc4fc3c9037cac69eff72906b7667e6ea14` | PASS |
| `0x02007350` | 16 | `017c0e7c777bc02020a6766f5f68cb2ea169e781c98cb2adf9f9ea86f338307d` | PASS |
| `0x02007360` | 16 | `3ba0c8795fc25907165c80b5bf0d67fb74843d71fe8cbd45731211f63820008c` | PASS |
| `0x020075E0` | 12 | `db96bc622a6983b4e8cce683e8a7ddc14ef7ac8a72fcc870f6faefc8caa11842` | PASS |
| `0x020092EC` | 12 | `79be843949fc8c48306cba7ccc189b0ea7ce46927e0418fb9e6e49e68965a162` | PASS |
| `0x02013A34` | 16 | `5645c4392e859ab3fd779024bf6986ca7302d6481e9628bd8785ebcf7e77d96b` | PASS |
| `0x02013B88` | 16 | `c3af8a6939c13ddd13ea093ed140316b635c27636afd071b6286cd1884b79373` | PASS |
| `0x02016798` | 16 | `1171a917d5aaeea356aa756627cc27e8c7073273749226cbbd250692343b7c50` | PASS |
| `0x0201BE20` | 12 | `6f2b80de7dbd6084018e24105257669143d468d5fd17398ad244000305b4433e` | PASS |
| `0x020186F8` | 12 | `71a683758bf9a0977eb525307476fa292e32934226f0ce8e3c0c8f5328891279` | PASS |

**Total:** 13 distinct 12-to-16-byte ARM functions, **176 original bytes** reproduced by Clang.

All 13 addresses and lengths were cross-checked with `config/eur1/arm9/symbols.txt`;
the original instruction bytes are not stored in this repository. One of these
addresses (`0x0201BE20`) had been researched earlier as approximate C and is
**not** an additional distinct function in that older tally.

## Reproducing

From a complete checkout of `zeranemesis/st` with your own legitimately obtained
decrypted EUR Rev1 ROM located at `extract/baserom_st_eur1.nds`:

```sh
python research/eur1/scripts/verify_arm9_short_functions.py --rom extract/baserom_st_eur1.nds
```

Or with your local decompressed ARM9 image:

```sh
python research/eur1/scripts/verify_arm9_short_functions.py --arm9 /path/to/decompressed/arm9.bin
```

Requires Clang, llvm-objcopy and the existing research `analyze_nds.py` ROM decoder.
Both positive test modes passed locally; a negative test with one modified ARM9
byte returned a nonzero failure (SHA-1 rejection).

## What this proves / does not prove

Proves: The submitted standalone C snippets produce *exactly the same 12–16
ARM instruction bytes* at these addresses using the stated Clang toolchain.
This is stronger than syntax-only or host-mock tests.

Does **not** prove: that signatures or semantic names are accurate, that this
is compiler-matched to Nintendo's original **CodeWarrior** output, that the
source was integrated into the zeldaret build, or that gameplay works.
The upstream *matching decompilation* progress **has not increased** from
this isolated Clang experiment.

Next: reproduce with the CodeWarrior toolchain, determine whether these
functions are already implemented by upstream, integrate appropriate clean
C++ sources, and use the repository's objdiff/target build for matching.
