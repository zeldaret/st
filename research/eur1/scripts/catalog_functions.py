#!/usr/bin/env python3
"""Best-effort ARM/Thumb function discovery. These entries are NOT decompiled C functions.
Output contains code-entry heuristics, not a proof of instruction reachability.
"""
import argparse,csv,json,pathlib,struct,collections
from analyze_nds import candidates_arm,candidates_thumb

def main():
    parser=argparse.ArgumentParser(); parser.add_argument('audit_folder');opts=parser.parse_args()
    root=pathlib.Path(opts.audit_folder)
    overlays=list(csv.DictReader((root/'reports'/'overlays.csv').open(encoding='utf-8')))
    tasks=[('arm9','ARM',0x02000000,None),('arm7','ARM',0x02380000,None)]
    for r in overlays:
        idx=int(r['id']); data=(root/'working_code'/f'overlay_{idx:03d}.bin').read_bytes()
        firsthalf=struct.unpack_from('<H',data)[0]
        firstword=struct.unpack_from('<I',data)[0]
        # Thumb and ARM often coexist. Choose just the overlay's START mode.
        mode='Thumb' if firsthalf&0xff00==0xB500 else 'ARM' if firstword>>28 in (0xE,0xF) else 'unknown'
        tasks.append((f'overlay_{idx:03d}',mode,int(r['ram'],16),idx))
    datafile=root/'reports'/'function_candidates.csv'
    summary=[]
    with datafile.open('w',newline='',encoding='utf-8') as f:
        writer=csv.writer(f);writer.writerow(['component','overlay_id','primary_mode','address_hex','evidence','bl_references_in_same_binary','entry_has_prologue'])
        for component,mode,base,idx in tasks:
            dat=(root/'working_code'/(component+'.bin')).read_bytes()
            if mode=='ARM': found=candidates_arm(dat,base)
            elif mode=='Thumb': found=candidates_thumb(dat,base)
            else:found=[]
            direct=0; prologues=0; strong=0
            for addr,evidence,refs,prologue in found:
                # ARM9 secure region 0x2000000..0x20007ff may contain encrypted bytes, do not count it.
                if component=='arm9' and addr<0x02000800: continue
                writer.writerow([component,'' if idx is None else idx,mode,f'0x{addr:08X}',evidence,refs,int(prologue)])
                direct+=bool(refs);prologues+=prologue;strong+=prologue and bool(refs)
            summary.append({'component':component,'overlay_id':idx,'primary_mode':mode,'entry_candidates':len(found),'candidate_prologues':prologues,'called_prologue_candidates':strong,'internal_bl_targets':direct})
    (root/'reports'/'function_catalog_summary.json').write_text(json.dumps(summary,indent=2),encoding='utf-8')
    types=collections.Counter(s['primary_mode'] for s in summary if s['overlay_id'] is not None)
    print('Primary overlay modes:',dict(types))
    print('Potential starts found (all):',sum(s['entry_candidates'] for s in summary))
    print('Candidates with both local call and prologue:',sum(s['called_prologue_candidates'] for s in summary))
    print('ARM9:',summary[0]);print('ARM7:',summary[1]);print('Top 5:',sorted(summary[2:],key=lambda e:e['called_prologue_candidates'],reverse=True)[:5])
if __name__=='__main__':main()
