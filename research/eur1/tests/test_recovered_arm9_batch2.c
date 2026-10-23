/* Host-only semantic checks; no byte matching or DS game execution implied. */
#include <assert.h>
#include <stdint.h>
#include <string.h>
#include "../src/recovered_arm9_batch2.c"
static unsigned calls;
static uint32_t a0,a1,mode;
uint32_t research_external_0201ADFC(uint32_t a,uint32_t b,uint32_t m)
{
    calls++; a0=a; a1=b; mode=m; return 0x11U+m;
}
int main(void)
{
    assert(research_0201AEAC(3,4)==0x11U && calls==1 && a0==3 && a1==4 && mode==0);
    assert(research_0201AEBC(5,6)==0x12U && calls==2 && a0==5 && a1==6 && mode==1);
    assert(research_0201BDC0()==0);
    uint32_t slot=0;
    assert(research_0201BE08(&slot,42)==1 && slot==42);
    assert(research_0201BE08(&slot,14)==0 && slot==42);
    uint8_t bytes[48];
    memset(bytes,0xAA,sizeof(bytes));
    research_0201BE20(bytes);
    assert(bytes[4]==1 && bytes[3]==0xAA && bytes[5]==0xAA);
    memset(bytes,0xAA,sizeof(bytes));
    research_0201BBCC(bytes,0xA1B2C3D4U,0xBEEFU);
    assert(bytes[0x0D]==0xD4 && bytes[0x0E]==0);
    assert(*(uint16_t *)(void *)(bytes+0x10)==0xBEEF &&
           *(uint16_t *)(void *)(bytes+0x20)==0);
    memset(bytes,0xAA,sizeof(bytes));
    research_0201C494(bytes,0xFAFFU);
    assert(bytes[6]==0xFF && bytes[7]==1 && bytes[8]==1 &&
           bytes[5]==0xAA && bytes[9]==0xAA);
    memset(bytes,0xAA,sizeof(bytes));
    research_0201C4A8(bytes);
    assert(memcmp(bytes,(uint8_t[]){16,0,0,16,0,0},6)==0 &&
           bytes[6]==0xAA);
    bytes[2]=4; bytes[5]=7;
    research_0201C4D8(bytes,0,9,3);
    assert(bytes[0]==16 && bytes[1]==0 && bytes[2]==4);
    research_0201C4D8(bytes,0,9,4);
    assert(bytes[0]==9 && bytes[1]==7 && bytes[2]==4);
    research_0201C4D8(bytes,1,20,-1);
    assert(bytes[3]==16 && bytes[4]==0 && bytes[5]==7);
    research_0201C504(bytes,1,21,22,9);
    assert(bytes[3]==21 && bytes[4]==22 && bytes[5]==9);
    research_0201C504(bytes,1,99,99,8);
    assert(bytes[3]==21 && bytes[4]==22 && bytes[5]==9);
    return 0;
}
