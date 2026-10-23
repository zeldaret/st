# Reproducing the Spirit Tracks EUR Rev 1 research on Windows

This guide is for your own dumped, decrypted European Rev 1 Nintendo DS ROM, SHA-1:
`dcb221a89acb894503a461c2c7d4cfdad9a06b68`.
Neither the original ROM nor extracted assets or BIOS are committed to this GitHub repository.

## 1. Prepare tools
Install **Git**, **Python 3.11+**, **GCC 9+**, and **Ninja**, as required by upstream
[zeldaret/st's installation instructions](../../INSTALL.md).
Optionally install Clang for the isolated host tests.

```powershell
git clone https://github.com/zeranemesis/st.git
cd st
python -m pip install -r tools/requirements.txt
```

## 2. Place the correct ROM

```powershell
New-Item -ItemType Directory -Force .\extract | Out-Null
Copy-Item "C:\Path\To\Your\Own\SpiritTracks_EUR_Rev1.nds" ".\extract\baserom_st_eur1.nds"
Get-FileHash ".\extract\baserom_st_eur1.nds" -Algorithm SHA1
```

Compare the result with the SHA-1 above. **Do not proceed if it differs.**

**Filename discrepancy in upstream docs:** `extract/README.md` currently lists
`baserom_st_eur_rev1.nds`, but the checked `tools/configure.py` and
`tools/delink.py` detect `baserom_st_eur1.nds`. The latter is used here.
This copy is excluded from Git by `*.nds`.

## 3. Generate build and try the official ROM build

```powershell
python tools/configure.py --version eur1
ninja
```

This is a **Nintendo DS** reconstruction; a successful build does not mean PC port.
For byte-identical matching, upstream instructions also discuss use of your
own legitimately dumped ARM7 BIOS (`arm7_bios.bin`).

## 4. Verify researched ARM9 instruction spans

First extract the local code binaries (output directory can be any local path):

```powershell
python research/eur1/scripts/analyze_nds.py ".\extract\baserom_st_eur1.nds" --output ".\research\eur1"
python research/eur1/scripts/verify_arm9_spans.py ".\research\eur1\working_code\arm9.bin"
```

Expected: **PASS: 20 ARM9 spans**. The manifest includes the exact address,
byte length, canonical symbol name from `config/eur1/arm9/symbols.txt`, and
SHA-256 of that machine-code span. **This does not validate reconstructed C.**

## 5. Run provisional C tests (Clang optional)

```powershell
clang -std=c11 -Wall -Wextra -Werror -pedantic -O2 -o research_batch2.exe research/eur1/tests/test_recovered_arm9_batch2.c
.\research_batch2.exe
```

A zero exit code is a successful host test, not a target compiler match.

## Next actual decompilation milestone

Use the upstream target CodeWarrior compiler configuration and its existing
object-diff tools to recompile one experimental function and compare the
resulting ARM/Thumb instructions against the original code. Until a
byte-identical match is demonstrated, do **not** claim this research increased
the community matching-decomp percentage.
