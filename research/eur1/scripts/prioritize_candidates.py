#!/usr/bin/env python3
"""Rank ARM9 candidate entries against zeldaret/st EUR1 symbols (not matching status).
All candidates are heuristics; a known symbol does NOT prove a function is decompiled.
"""
import argparse, csv, re
from pathlib import Path

PATTERN=re.compile(r"^(\S+) kind:function\((arm|thumb),size=(0x[0-9a-fA-F]+)\) addr:(0x[0-9a-fA-F]+)")
LIBS=("NNS_","OS_","MI_","FS_","FX_","GX_","G3_","G2_","CARD_","SVC_","SDK_",
      "PAD_","RTC_","WM_","PM_","SPI_","PXI_","DC_","DWC_","MATH_")

def symbols(repo:Path, component:str, overlay_id:str)->dict[int,dict]:
    if component=="arm9":
        f=repo/"config/eur1/arm9/symbols.txt"
    elif component.startswith("overlay_") and overlay_id:
        f=repo/f"config/eur1/arm9/overlays/ov{int(overlay_id):03d}/symbols.txt"
    else:
        return {}
    if not f.exists(): return {}
    out={}
    for line in f.read_text(encoding="utf-8").splitlines():
        m=PATTERN.match(line)
        if m:
            name,isa,size,addr=m.groups()
            out[int(addr,16)]={"upstream_symbol":name,"size_bytes":int(size,16),"isa":isa}
    return out

def rank(r:dict)->tuple:
    n=int(r["size_bytes"]) if r["size_bytes"] else 999999
    return (-int(r["entry_has_prologue"]=="1"),-int(1<=n<=128),
            -int(r["upstream_symbol"].startswith("func_")),
            -min(int(r["bl_references_in_same_binary"]),8),n,r["component"],r["address_hex"])

def generate(repo:Path,catalog:Path)->list[dict]:
    cache={}; rows=[]
    with catalog.open(encoding="utf-8",newline="") as fh:
        for row in csv.DictReader(fh):
            key=(row["component"],row["overlay_id"])
            if key[0]=="arm7": continue
            if key not in cache: cache[key]=symbols(repo,*key)
            sym=cache[key].get(int(row["address_hex"],16),{})
            if sym.get("upstream_symbol","").startswith(LIBS): continue
            rows.append({**row,"upstream_symbol":sym.get("upstream_symbol",""),
                         "size_bytes":str(sym.get("size_bytes","")),
                         "symbol_isa":sym.get("isa",""),
                         "note":"candidate only; not a C or matching function"})
    return sorted(rows,key=rank)

def main()->int:
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("repository_root",type=Path)
    p.add_argument("--catalog",type=Path)
    p.add_argument("--output",type=Path)
    p.add_argument("--limit",type=int,default=100)
    a=p.parse_args()
    if a.limit<1:p.error("--limit must be positive")
    catalog=a.catalog or a.repository_root/"research/eur1/reports/function_candidates.csv"
    results=generate(a.repository_root,catalog)[:a.limit]
    keys=["component","overlay_id","primary_mode","address_hex","evidence",
          "bl_references_in_same_binary","entry_has_prologue","upstream_symbol",
          "size_bytes","symbol_isa","note"]
    if a.output:
        a.output.parent.mkdir(parents=True,exist_ok=True)
        with a.output.open("w",encoding="utf-8",newline="") as f:
            writer=csv.DictWriter(f,fieldnames=keys)
            writer.writeheader()
            writer.writerows(results)
    for i,x in enumerate(results[:20],1):
        print(f'{i:>2}. {x["component"]:>11} {x["address_hex"]} '
              f'refs={x["bl_references_in_same_binary"]} '
              f'symbol={x["upstream_symbol"] or "UNKNOWN"}')
    print(f"Selected {len(results)} candidates; byte matching remains unverified.")
    return 0

if __name__=="__main__":
    raise SystemExit(main())
