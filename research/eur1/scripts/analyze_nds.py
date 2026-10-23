#!/usr/bin/env python3
"""Audit a user-provided Nintendo DS ROM; extract code locally; produce reproducible metadata.
Requires Python 3.10+. Not a C decompiler or proof of code coverage.
Original ROM and game assets are NOT embedded in the portable reports archive.
"""
import argparse, collections, csv, hashlib, json, pathlib, re, struct, sys
from elfwrap import as_elf32_arm


def u16(b, off): return struct.unpack_from('<H', b, off)[0]
def u32(b, off): return struct.unpack_from('<I', b, off)[0]

def code_blz(b):
    """Nintendo DS backwards-LZ, with strict bounds and optional ARM9 trailer handling.
    Returns (data, compressed?, trailer size). Does not decrypt the secure area.
    """
    extra_app = None
    for extra in range(0,32,4):
        if len(b) < extra + 8: break
        pos = len(b) - extra - 8
        word, extension = struct.unpack_from('<II', b, pos)
        headlen = word >> 24; clen = word & 0xffffff
        if headlen >= 8 and clen <= len(b)-extra and len(b)-extra >= headlen and all(x==0xff for x in b[pos-(headlen-8):pos]):
            extra_app = extra; break
    if extra_app is None: return b,False,0
    trailer=b[-extra_app:] if extra_app else b''
    src=b[:-extra_app] if extra_app else b
    encoded, grow = struct.unpack_from('<II',src,len(src)-8)
    if not grow: return b,False,extra_app
    hlen=encoded>>24; clen=min(encoded & 0xffffff,len(src))
    prefix_len=len(src)-clen
    payload=src[prefix_len:len(src)-hlen]
    if grow>32*1024*1024: raise ValueError('unreasonable BLZ expansion')
    target_size = len(src)+grow-prefix_len
    output = bytearray(target_size)
    written=0; consumed=0
    while written<target_size:
        if consumed>=len(payload): raise ValueError('truncated flags stream')
        flags=payload[-1-consumed]; consumed+=1
        for mask in (0x80,0x40,0x20,0x10,0x08,0x04,0x02,0x01):
            if written>=target_size: break
            if flags & mask:
                if consumed+2 > len(payload): raise ValueError('truncated BLZ backref')
                hi=payload[-1-consumed]; lo=payload[-2-consumed]; consumed+=2
                count=(hi>>4)+3
                disp=(((hi & 0xF)<<8)|lo)+3
                if disp>written:
                    if written<2: raise ValueError('invalid backward distance')
                    disp=2
                for _ in range(count):
                    if written>=target_size: raise ValueError('output overflow')
                    output[target_size-1-written]=output[target_size-1-(written-disp)]
                    written+=1
            else:
                if consumed>=len(payload): raise ValueError('truncated BLZ literal')
                output[target_size-1-written]=payload[-1-consumed]
                consumed+=1; written+=1
    return src[:prefix_len]+bytes(output)+trailer,True,extra_app

def parse_fnt(fnt,fatcount):
    if len(fnt)<8: return [],['bad FNT']
    ndirs=u16(fnt,6)
    if ndirs>5000 or ndirs*8>len(fnt): return [],[f'bad directory count {ndirs}']
    folders=[]; problems=[]; visited=set(); files=[]
    def visit(did,prefix,depth=0):
        if did in visited or depth>40: return
        visited.add(did)
        idx=did-0xf000
        if idx<0 or idx>=ndirs: problems.append(f'bad directory {did}');return
        offset, first, parent=struct.unpack_from('<IHH',fnt,idx*8)
        fileid=first; folders.append(prefix)
        if offset>=len(fnt): problems.append(f'bad directory offset {offset}');return
        pos=offset
        while pos<len(fnt):
            typ=fnt[pos]; pos+=1
            if typ==0: break
            n=typ&0x7f
            if pos+n>len(fnt): problems.append('truncated directory entry');break
            name=fnt[pos:pos+n].decode('ascii','backslashreplace');pos+=n
            if typ&0x80:
                if pos+2>len(fnt):break
                cid=u16(fnt,pos);pos+=2
                visit(cid,prefix+name+'/',depth+1)
            else:
                if fileid>=fatcount: problems.append(f'invalid file id {fileid}')
                files.append((fileid,prefix+name));fileid+=1
    visit(0xf000,'')
    return files,problems

def candidates_arm(b,base):
    """Only candidate function entries: BL targets and typical ARM prologues (heuristic)."""
    prologues={}; calls=collections.Counter()
    for off in range(0,len(b)-3,4):
        word=u32(b,off)
        if (word & 0x0F000000) == 0x0B000000 and (word>>28) != 0xF:
            d=word & 0xffffff
            if d&0x800000:d-=0x1000000
            target=base+off+8+4*d
            if base<=target<base+len(b) and target%4==0:
                calls[target]+=1
        if (word & 0xffff0000)==0xe92d0000 and (word&0x4000):
            prologues[base+off] = 'stmdb sp!,{..lr}'
        elif (word & 0xfffff000) == 0xe52de000:
            prologues[base+off] = 'str lr,[sp,#-...]!'
    observed=sorted(set(prologues)|set(calls))
    return [(x,prologues.get(x,'bl_target'),calls.get(x,0),bool(x in prologues)) for x in observed]

def candidates_thumb(b,base):
    """Heuristic Thumb mode (16-bit PUSH patterns + 32-bit BL pair)."""
    prologues={}; calls=collections.Counter()
    for off in range(0,len(b)-3,2):
        half=u16(b,off)
        if (half & 0xFF00) == 0xB500:
            prologues[base+off] = 'push {..lr}'
        # Thumb-1 BL (11xxxx;11yyyy); signed 23-bit byte offset.
        if (half & 0xf800) == 0xf000 and (u16(b,off+2) & 0xf800)==0xf800:
            lo=u16(b,off+2)
            imm=(half & 0x7ff)<<12 | (lo & 0x7ff)<<1
            if imm & 0x400000:imm-=0x800000
            target=base+off+4+imm
            if base<=target<base+len(b) and target%2==0:calls[target]+=1
    observed=sorted(set(prologues)|set(calls))
    return [(x,prologues.get(x,'bl_target'),calls.get(x,0),bool(x in prologues)) for x in observed]

def main():
    ap=argparse.ArgumentParser();ap.add_argument('rom');ap.add_argument('--output',required=True);ap.add_argument('--extract-all-files',action='store_true',help='Extract NitroFS assets as well as executable code (may use >100 MiB)');args=ap.parse_args()
    out=pathlib.Path(args.output);(out/'reports').mkdir(parents=True,exist_ok=True); (out/'working_code').mkdir(exist_ok=True)
    rom=pathlib.Path(args.rom).read_bytes();h=rom[:0x200]
    specs={key:tuple(u32(h,o+i*4) for i in range(n)) for key,o,n in [('arm9',0x20,4),('arm7',0x30,4),('fnt',0x40,2),('fat',0x48,2),('y9',0x50,2),('y7',0x58,2)]}
    fat_off,fat_size=specs['fat'];filecount=fat_size//8
    fat=[struct.unpack_from('<II',rom,fat_off+8*i) for i in range(filecount)]
    fnt_off,fnt_size=specs['fnt'];names,fnt_errors=parse_fnt(rom[fnt_off:fnt_off+fnt_size],filecount)
    namebyid=dict(names)
    with (out/'reports'/'nitrofs_files.csv').open('w',newline='',encoding='utf-8') as f:
        w=csv.writer(f);w.writerow(['file_id','path','rom_start_hex','rom_end_hex','bytes'])
        for i,(start,end) in enumerate(fat): w.writerow([i,namebyid.get(i,''),f'{start:#x}',f'{end:#x}',end-start])
    if args.extract_all_files:
        for i,(s,e) in enumerate(fat):
            if 0<=s<=e<=len(rom):
                path=pathlib.PurePosixPath(namebyid.get(i,f'unmapped/file_{i:04}.bin'))
                if path.is_absolute() or '..' in path.parts: continue
                dest=out/'working_files'/str(path);dest.parent.mkdir(parents=True,exist_ok=True);dest.write_bytes(rom[s:e])
    yoff,ysiz=specs['y9']; records=[]; sizes=collections.Counter(); decomp_fail=[]
    if ysiz%32:raise ValueError('unrecognized ARM9 overlay table')
    for i in range(ysiz//32):
        id_,ram,size,bss,staticstart,staticend,fileid,flags=struct.unpack_from('<8I',rom,yoff+i*32)
        start,end=fat[fileid]
        chunk=rom[start:end]
        try: decoded,compressed,extra_app=code_blz(chunk)
        except Exception as e: decoded=chunk;compressed=False;extra_app=0;decomp_fail.append([id_,str(e)])
        expected=size
        records.append(dict(id=id_,file_id=fileid,ram=f'0x{ram:08X}',ram_size=size,bss=bss,rom_bytes=len(chunk),unpacked_bytes=len(decoded),declared_compressed=bool(flags&0x1000000),decoded_blz=compressed,decode_matches_ram_size=(len(decoded)==size),footer_trailer=extra_app,hash_sha1=hashlib.sha1(decoded).hexdigest(),static_init_start=f'0x{staticstart:08X}',static_init_end=f'0x{staticend:08X}'))
        (out/'working_code'/f'overlay_{id_:03d}.bin').write_bytes(decoded)
        sizes['overlays_decoded']+=int(compressed);sizes['overlays_failed']+=int(len(decoded)!=expected)
    with (out/'reports'/'overlays.csv').open('w',newline='',encoding='utf-8') as f:
        w=csv.DictWriter(f,records[0].keys());w.writeheader();w.writerows(records)
    exe={}
    for arch in ('arm9','arm7'):
        start,entry,base,compressed_size=specs[arch]
        raw=rom[start:start+compressed_size]
        try: uncompressed,was_compressed,trailer=code_blz(raw)
        except Exception as e:
            print(f'warning {arch} BLZ: {e}',file=sys.stderr);uncompressed=raw;was_compressed=False;trailer=0
        (out/'working_code'/f'{arch}.bin').write_bytes(uncompressed)
        (out/'working_code'/f'{arch}.elf').write_bytes(as_elf32_arm(uncompressed,base,entry))
        exe[arch]=dict(rom_offset=start,entry=f'0x{entry:08X}',ram_address=f'0x{base:08X}',rom_size=compressed_size,unpacked_size=len(uncompressed),decoded_blz=was_compressed,footer_trailer=trailer,sha1_unpacked=hashlib.sha1(uncompressed).hexdigest())
    summary={
        'title':h[:12].rstrip(b'\0').decode('ascii','replace'),'game_code':h[12:16].decode('ascii','replace'),'maker_code':h[16:18].decode('ascii','replace'),'rom_revision':h[0x1e],
        'rom_size_bytes':len(rom),'declared_used_size':u32(h,0x80),'sha1':hashlib.sha1(rom).hexdigest(),'sha256':hashlib.sha256(rom).hexdigest(),
        'arm9':exe['arm9'],'arm7':exe['arm7'],'overlay_arm9_count':len(records),'overlay_arm7_count':specs['y7'][1]//32,'overlay_blz_decoded':sizes['overlays_decoded'],'overlay_size_mismatches':sizes['overlays_failed'],
        'overlay_failures':decomp_fail,'fat_file_count':filecount,'filesystem_named_count':len(names),'filesystem_unmapped_count':filecount-len(names),'fnt_errors':fnt_errors,'total_named_asset_bytes':sum(fat[i][1]-fat[i][0] for i,_ in names),
        'top_file_extensions':collections.Counter(pathlib.PurePosixPath(name).suffix.lower() or '[sans extension]' for _,name in names).most_common(20),
        'sample_file_paths':[name for _,name in names[:35]],
    }
    (out/'reports'/'summary.json').write_text(json.dumps(summary,indent=2,ensure_ascii=False),encoding='utf-8')
    print(json.dumps(summary,indent=2,ensure_ascii=False))

if __name__=='__main__':main()
