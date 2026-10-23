#!/usr/bin/env python3
"""Write byte-exact disassembly slices for the three reconstructed functions."""
import pathlib,subprocess,shutil,argparse
p=argparse.ArgumentParser();p.add_argument('audit_folder');a=p.parse_args()
root=pathlib.Path(a.audit_folder)
out=root/'asm';out.mkdir(exist_ok=True)
which=shutil.which('llvm-objdump')
if not which: raise SystemExit('llvm-objdump not found (install LLVM to create ASM samples)')
specs=[
 ('arm9_memfill_0200093C.asm','arm9',0x0200093c,0x02000950,'armv5te-none-eabi'),
 ('arm9_boot_02000800.asm','arm9',0x02000800,0x02000914,'armv5te-none-eabi'),
 ('arm7_boot_02380000.asm','arm7',0x02380000,0x023800e4,'armv4t-none-eabi'),
 ('overlay001_alloc_020B6560.asm','overlay_001',0x020B6560,0x020B657C,'thumbv5te-none-eabi'),
 ('overlay000_interpolate_02051AE0.asm','overlay_000',0x02051AE0,0x02051B60,'armv5te-none-eabi'),
]
for name,component,start,end,triple in specs:
 args=[which,'-d','--triple='+triple,f'--start-address={start}',f'--stop-address={end}',str(root/'working_code'/(component+'.elf'))]
 cp=subprocess.run(args,check=True,text=True,capture_output=True)
 (out/name).write_text(cp.stdout,encoding='utf-8')
 print(name,len(cp.stdout.splitlines()),'lines')
