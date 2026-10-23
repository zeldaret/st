/* Zelda Spirit Tracks EUR1 - isolated ARMv5TE Clang byte-verified C functions. */
/* RESEARCH ONLY: Not CodeWarrior-matching, may lack ABI/semantic context. */
/* Compile exactly one function per object with -DPROBE_<ADDRESS>. */
#if defined(PROBE_02013FEC)
void st_02013FEC(unsigned int *base, unsigned int idx, unsigned int v) { base[idx+3] = v; }
#elif defined(PROBE_02014FE0)
unsigned int st_02014FE0(void) { return 2u; }
#elif defined(PROBE_020167A8)
void st_020167A8(void) {}
#elif defined(PROBE_02017774)
unsigned int st_02017774(void) { return 1u; }
#elif defined(PROBE_0201777C)
unsigned int st_0201777C(void) { return 0u; }
#elif defined(PROBE_02017784)
unsigned int st_02017784(void) { return 0u; }
#elif defined(PROBE_020177B0)
void st_020177B0(void) {}
#elif defined(PROBE_020177C8)
void st_020177C8(void) {}
#elif defined(PROBE_020177E4)
unsigned int st_020177E4(void) { return 0u; }
#elif defined(PROBE_020179A4)
void st_020179A4(void) {}
#elif defined(PROBE_02017C34)
unsigned int st_02017C34(void) { return 0u; }
#elif defined(PROBE_02018388)
void st_02018388(void) {}
#elif defined(PROBE_0201838C)
void st_0201838C(void) {}
#elif defined(PROBE_02018390)
void st_02018390(void) {}
#elif defined(PROBE_02018394)
void st_02018394(void) {}
#elif defined(PROBE_02018398)
void st_02018398(void) {}
#elif defined(PROBE_0201839C)
unsigned int st_0201839C(void) { return 1u; }
#elif defined(PROBE_020186A4)
void st_020186A4(void) {}
#elif defined(PROBE_020186F4)
void st_020186F4(void) {}
#elif defined(PROBE_020186F8)
unsigned int st_020186F8(const unsigned int *base, unsigned int idx) { return base[idx+1]; }
#elif defined(PROBE_0201BAE4)
unsigned int st_0201BAE4(void) { return 1u; }
#elif defined(PROBE_0201BD88)
void st_0201BD88(void) {}
#elif defined(PROBE_0201BD8C)
void st_0201BD8C(void) {}
#elif defined(PROBE_0201BE20)
void st_0201BE20(void *p) { ((unsigned char *)p)[4] = 1u; }
#elif defined(PROBE_0201CD68)
void st_0201CD68(void) {}
#elif defined(PROBE_0201EC30)
unsigned int st_0201EC30(const void *p) { return *(const unsigned int *)((const unsigned char *)p + 16); }
#elif defined(PROBE_0201F5BC)
unsigned int st_0201F5BC(const void *p) { return *(const unsigned int *)((const unsigned char *)p + 328); }
#elif defined(PROBE_020203D0)
void st_020203D0(void) {}
#elif defined(PROBE_020203D4)
void st_020203D4(void) {}
#elif defined(PROBE_020203D8)
void st_020203D8(void) {}
#elif defined(PROBE_0202052C)
unsigned int st_0202052C(const void *p) { return *((const unsigned char *)p + 24); }
#elif defined(PROBE_02020534)
void st_02020534(void *p, unsigned int v) { *(unsigned int *)((unsigned char *)*(void **)((unsigned char *)p+4)+36) = v; }
#elif defined(PROBE_02020DE0)
unsigned int st_02020DE0(void) { return 1u; }
#elif defined(PROBE_02021BEC)
void st_02021BEC(void *p, unsigned int v) { ((unsigned char *)p)[936] = (unsigned char)v; }
#elif defined(PROBE_02021C3C)
void st_02021C3C(void *p, unsigned int v) { *(unsigned int *)((unsigned char *)p+944) = v; }
#elif defined(PROBE_02021E00)
unsigned int st_02021E00(const void *p) { return *(const unsigned int *)((const unsigned char *)p + 8); }
#elif defined(PROBE_02021F44)
void st_02021F44(void *p) { ((unsigned char *)p)[4] = 1u; }
#elif defined(PROBE_02022884)
unsigned int st_02022884(void) { return 0u; }
#elif defined(PROBE_0202288C)
void st_0202288C(void) {}
#elif defined(PROBE_02022890)
void st_02022890(void) {}
#elif defined(PROBE_02022894)
void st_02022894(void) {}
#elif defined(PROBE_02022898)
void st_02022898(void) {}
#elif defined(PROBE_0202B56C)
unsigned int st_0202B56C(const void *p) { return *(const unsigned int *)((const unsigned char *)p + 56); }
#elif defined(PROBE_0202D45C)
unsigned int st_0202D45C(void) { return 1u; }
#elif defined(PROBE_020338EC)
void st_020338EC(void) {}
#elif defined(PROBE_02033E50)
void st_02033E50(void) {}
#elif defined(PROBE_02038CD0)
void st_02038CD0(void) {}
#elif defined(PROBE_02038CD4)
void st_02038CD4(void) {}
#elif defined(PROBE_02038CEC)
unsigned int st_02038CEC(const void *p) { return *(const unsigned int *)((const unsigned char *)p + 4); }
#elif defined(PROBE_0203B920)
void st_0203B920(void) {}
#elif defined(PROBE_0203B930)
void st_0203B930(void) {}
#elif defined(PROBE_0203B934)
void st_0203B934(void) {}
#elif defined(PROBE_0203B938)
unsigned int st_0203B938(void) { return 0u; }
#elif defined(PROBE_0203B940)
void st_0203B940(void) {}
#elif defined(PROBE_0203B9D8)
unsigned int st_0203B9D8(void) { return 0u; }
#elif defined(PROBE_0203C9E0)
void st_0203C9E0(void) {}
#elif defined(PROBE_0203D26C)
void st_0203D26C(void) {}
#elif defined(PROBE_0203DA40)
void st_0203DA40(void) {}
#else
#error "Define one PROBE_<ADDRESS> to build an isolated function."
#endif
