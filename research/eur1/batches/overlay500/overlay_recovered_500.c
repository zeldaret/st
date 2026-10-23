/* The Legend of Zelda: Spirit Tracks, Europe Rev 1 (BKIP) */
/* Research: 500 independent ARM9 overlay functions, not in official DS build. */
/* Clang ARMv5TE -O2 generated sections verified exact vs supplied ROM. */
/* 211 non-empty and 289 originally empty BX LR functions. */
/* Signatures are provisional. No original CodeWarrior matching is claimed. */
/* No ROM content, assembly or Nintendo asset is embedded. */
#include <stdint.h>
#include <stddef.h>
/* ===== Original Nintendo DS ARM9 overlay 000 ===== */
/* #001 0x02051F90 / 4 bytes / empty / upstream_symbol */
void st_ov000_02051F90(void) {}
/* #002 0x02057C34 / 4 bytes / empty / upstream_symbol */
void st_ov000_02057C34(void) {}
/* #003 0x02058E20 / 4 bytes / empty / upstream_symbol */
void st_ov000_02058E20(void) {}
/* #004 0x0205A11C / 4 bytes / empty / upstream_symbol */
void st_ov000_0205A11C(void) {}
/* #005 0x0205A160 / 4 bytes / empty / upstream_symbol */
void st_ov000_0205A160(void) {}
/* #006 0x0205BE34 / 16 bytes / manual_reconstructed / upstream_symbol */
void st_ov000_0205BE34(void *p,unsigned int n){ *(unsigned short*)p=(unsigned short)n; ((unsigned char*)p)[2]=31; }
/* #007 0x02060FC4 / 4 bytes / empty / upstream_symbol */
void st_ov000_02060FC4(void) {}
/* #008 0x02061038 / 4 bytes / empty / upstream_symbol */
void st_ov000_02061038(void) {}
/* #009 0x0206103C / 4 bytes / empty / upstream_symbol */
void st_ov000_0206103C(void) {}
/* #010 0x020616E0 / 4 bytes / empty / upstream_symbol */
void st_ov000_020616E0(void) {}
/* #011 0x020616E4 / 4 bytes / empty / upstream_symbol */
void st_ov000_020616E4(void) {}
/* #012 0x020616E8 / 4 bytes / empty / upstream_symbol */
void st_ov000_020616E8(void) {}
/* #013 0x020616EC / 4 bytes / empty / upstream_symbol */
void st_ov000_020616EC(void) {}
/* #014 0x020616F0 / 4 bytes / empty / upstream_symbol */
void st_ov000_020616F0(void) {}
/* #015 0x020616F4 / 4 bytes / empty / upstream_symbol */
void st_ov000_020616F4(void) {}
/* #016 0x020616F8 / 4 bytes / empty / upstream_symbol */
void st_ov000_020616F8(void) {}
/* #017 0x020616FC / 4 bytes / empty / upstream_symbol */
void st_ov000_020616FC(void) {}
/* #018 0x02061764 / 4 bytes / empty / upstream_symbol */
void st_ov000_02061764(void) {}
/* #019 0x02061768 / 4 bytes / empty / upstream_symbol */
void st_ov000_02061768(void) {}
/* #020 0x02061ADC / 4 bytes / empty / upstream_symbol */
void st_ov000_02061ADC(void) {}
/* #021 0x02061AE0 / 4 bytes / empty / upstream_symbol */
void st_ov000_02061AE0(void) {}
/* #022 0x02061CCC / 4 bytes / empty / upstream_symbol */
void st_ov000_02061CCC(void) {}
/* #023 0x02061CD0 / 4 bytes / empty / upstream_symbol */
void st_ov000_02061CD0(void) {}
/* #024 0x02061CD4 / 4 bytes / empty / upstream_symbol */
void st_ov000_02061CD4(void) {}
/* #025 0x02061CD8 / 4 bytes / empty / upstream_symbol */
void st_ov000_02061CD8(void) {}
/* #026 0x02061CDC / 4 bytes / empty / upstream_symbol */
void st_ov000_02061CDC(void) {}
/* #027 0x02062DD8 / 4 bytes / empty / upstream_symbol */
void st_ov000_02062DD8(void) {}
/* #028 0x020647D4 / 4 bytes / empty / upstream_symbol */
void st_ov000_020647D4(void) {}
/* #029 0x02065E84 / 4 bytes / empty / upstream_symbol */
void st_ov000_02065E84(void) {}
/* #030 0x0206618C / 4 bytes / empty / upstream_symbol */
void st_ov000_0206618C(void) {}
/* #031 0x020669CC / 4 bytes / empty / upstream_symbol */
void st_ov000_020669CC(void) {}
/* #032 0x020669D8 / 4 bytes / empty / upstream_symbol */
void st_ov000_020669D8(void) {}
/* #033 0x02067C98 / 4 bytes / empty / upstream_symbol */
void st_ov000_02067C98(void) {}
/* #034 0x02068680 / 4 bytes / empty / upstream_symbol */
void st_ov000_02068680(void) {}
/* #035 0x02068698 / 4 bytes / empty / upstream_symbol */
void st_ov000_02068698(void) {}
/* #036 0x020696A4 / 4 bytes / empty / upstream_symbol */
void st_ov000_020696A4(void) {}
/* #037 0x0206A830 / 4 bytes / empty / upstream_symbol */
void st_ov000_0206A830(void) {}
/* #038 0x0206A848 / 4 bytes / empty / upstream_symbol */
void st_ov000_0206A848(void) {}
/* #039 0x0206D198 / 20 bytes / manual_reconstructed / upstream_symbol */
unsigned int st_ov000_0206D198(const void *p){const unsigned int*q=*(const unsigned int*const*)p;return q?q[2]:0;}
/* #040 0x02070E74 / 4 bytes / empty / upstream_symbol */
void st_ov000_02070E74(void) {}
/* #041 0x02073164 / 4 bytes / empty / upstream_symbol */
void st_ov000_02073164(void) {}
/* #042 0x0207317C / 4 bytes / empty / upstream_symbol */
void st_ov000_0207317C(void) {}
/* #043 0x02073188 / 20 bytes / manual_reconstructed / upstream_symbol */
void st_ov000_02073188(void *p){volatile unsigned char*q=(volatile unsigned char*)p;q[4]=0;q[5]=0;*(volatile unsigned int*)(q+8)=0;}
/* #044 0x0207319C / 4 bytes / empty / upstream_symbol */
void st_ov000_0207319C(void) {}
/* #045 0x020731A0 / 4 bytes / empty / upstream_symbol */
void st_ov000_020731A0(void) {}
/* #046 0x020731B8 / 4 bytes / empty / upstream_symbol */
void st_ov000_020731B8(void) {}
/* #047 0x020731BC / 4 bytes / empty / upstream_symbol */
void st_ov000_020731BC(void) {}
/* #048 0x020731C0 / 4 bytes / empty / upstream_symbol */
void st_ov000_020731C0(void) {}
/* #049 0x020731C4 / 4 bytes / empty / upstream_symbol */
void st_ov000_020731C4(void) {}
/* #050 0x02078D2C / 4 bytes / empty / upstream_symbol */
void st_ov000_02078D2C(void) {}
/* #051 0x02078D64 / 4 bytes / empty / upstream_symbol */
void st_ov000_02078D64(void) {}
/* #052 0x02079324 / 4 bytes / empty / upstream_symbol */
void st_ov000_02079324(void) {}
/* #053 0x0207933C / 4 bytes / empty / upstream_symbol */
void st_ov000_0207933C(void) {}
/* #054 0x02079340 / 4 bytes / empty / upstream_symbol */
void st_ov000_02079340(void) {}
/* #055 0x02079344 / 4 bytes / empty / upstream_symbol */
void st_ov000_02079344(void) {}
/* #056 0x02079348 / 4 bytes / empty / upstream_symbol */
void st_ov000_02079348(void) {}
/* #057 0x0207934C / 4 bytes / empty / upstream_symbol */
void st_ov000_0207934C(void) {}
/* #058 0x02079350 / 4 bytes / empty / upstream_symbol */
void st_ov000_02079350(void) {}
/* #059 0x0207B740 / 16 bytes / manual_reconstructed / upstream_symbol */
void st_ov000_0207B740(void *p){++*(volatile unsigned short*)((unsigned char*)p+8);}
/* #060 0x0207BB14 / 16 bytes / manual_reconstructed / upstream_symbol */
void st_ov000_0207BB14(unsigned int *p){p[0]=0;p[1]=0;}
/* #061 0x0207C018 / 4 bytes / empty / upstream_symbol */
void st_ov000_0207C018(void) {}
/* #062 0x0207C030 / 4 bytes / empty / upstream_symbol */
void st_ov000_0207C030(void) {}
/* #063 0x0207E9BC / 20 bytes / manual_reconstructed / upstream_symbol */
void st_ov000_0207E9BC(unsigned int *p){p[0]=0;p[1]=0;p[2]=0;}
/* #064 0x0207EEB4 / 4 bytes / empty / upstream_symbol */
void st_ov000_0207EEB4(void) {}
/* #065 0x0207F508 / 20 bytes / manual_reconstructed / upstream_symbol */
void st_ov000_0207F508(void *p){volatile short*q=(volatile short*)p;q[9]=-1;q[10]=-1;q[11]=-1;}
/* #066 0x0207FD44 / 4 bytes / empty / upstream_symbol */
void st_ov000_0207FD44(void) {}
/* #067 0x0207FD48 / 4 bytes / empty / upstream_symbol */
void st_ov000_0207FD48(void) {}
/* #068 0x0207FDAC / 4 bytes / empty / upstream_symbol */
void st_ov000_0207FDAC(void) {}
/* #069 0x020810E8 / 4 bytes / empty / upstream_symbol */
void st_ov000_020810E8(void) {}
/* #070 0x02081168 / 4 bytes / empty / upstream_symbol */
void st_ov000_02081168(void) {}
/* #071 0x02081D8C / 4 bytes / empty / upstream_symbol */
void st_ov000_02081D8C(void) {}
/* #072 0x02082364 / 4 bytes / empty / upstream_symbol */
void st_ov000_02082364(void) {}
/* #073 0x02089920 / 4 bytes / empty / upstream_symbol */
void st_ov000_02089920(void) {}
/* #074 0x0208A13C / 16 bytes / manual_reconstructed / upstream_symbol */
void st_ov000_0208A13C(void*p,unsigned int n){*(unsigned int*)p=n;((unsigned char*)p)[4]=0;}
/* #075 0x0208F900 / 4 bytes / empty / upstream_symbol */
void st_ov000_0208F900(void) {}
/* #076 0x0208F918 / 4 bytes / empty / upstream_symbol */
void st_ov000_0208F918(void) {}
/* #077 0x02090810 / 4 bytes / empty / upstream_symbol */
void st_ov000_02090810(void) {}
/* #078 0x02090814 / 4 bytes / empty / upstream_symbol */
void st_ov000_02090814(void) {}
/* #079 0x02096D10 / 4 bytes / empty / upstream_symbol */
void st_ov000_02096D10(void) {}
/* #080 0x02097864 / 4 bytes / empty / upstream_symbol */
void st_ov000_02097864(void) {}
/* #081 0x02097868 / 4 bytes / empty / upstream_symbol */
void st_ov000_02097868(void) {}
/* #082 0x0209786C / 4 bytes / empty / upstream_symbol */
void st_ov000_0209786C(void) {}
/* #083 0x020984C4 / 4 bytes / empty / upstream_symbol */
void st_ov000_020984C4(void) {}
/* #084 0x020984DC / 4 bytes / empty / upstream_symbol */
void st_ov000_020984DC(void) {}
/* #085 0x02098504 / 4 bytes / empty / upstream_symbol */
void st_ov000_02098504(void) {}
/* #086 0x02098508 / 4 bytes / empty / upstream_symbol */
void st_ov000_02098508(void) {}
/* #087 0x0209850C / 4 bytes / empty / upstream_symbol */
void st_ov000_0209850C(void) {}
/* #088 0x02098510 / 4 bytes / empty / upstream_symbol */
void st_ov000_02098510(void) {}
/* #089 0x02098514 / 4 bytes / empty / upstream_symbol */
void st_ov000_02098514(void) {}
/* #090 0x02098518 / 4 bytes / empty / upstream_symbol */
void st_ov000_02098518(void) {}
/* #091 0x02099A60 / 16 bytes / manual_reconstructed / upstream_symbol */
void st_ov000_02099A60(void*p){volatile unsigned short*q=(volatile unsigned short*)p;q[5]=0;q[4]=0;}
/* #092 0x0209AFA4 / 4 bytes / empty / upstream_symbol */
void st_ov000_0209AFA4(void) {}
/* #093 0x0209C9F0 / 4 bytes / empty / upstream_symbol */
void st_ov000_0209C9F0(void) {}
/* #094 0x0209C9F4 / 4 bytes / empty / upstream_symbol */
void st_ov000_0209C9F4(void) {}
/* #095 0x0209C9F8 / 4 bytes / empty / upstream_symbol */
void st_ov000_0209C9F8(void) {}
/* #096 0x0209CB98 / 4 bytes / empty / upstream_symbol */
void st_ov000_0209CB98(void) {}
/* #097 0x0209CB9C / 4 bytes / empty / upstream_symbol */
void st_ov000_0209CB9C(void) {}
/* #098 0x0209D030 / 4 bytes / empty / upstream_symbol */
void st_ov000_0209D030(void) {}
/* #099 0x0209D0E8 / 4 bytes / empty / upstream_symbol */
void st_ov000_0209D0E8(void) {}
/* #100 0x0209D100 / 4 bytes / empty / upstream_symbol */
void st_ov000_0209D100(void) {}
/* #101 0x0209D10C / 4 bytes / empty / upstream_symbol */
void st_ov000_0209D10C(void) {}
/* #102 0x0209D220 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov000_0209D220(void) { return 1u; }
/* #103 0x0209D228 / 4 bytes / empty / upstream_symbol */
void st_ov000_0209D228(void) {}
/* #104 0x0209D238 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov000_0209D238(void) { return 0u; }
/* #105 0x0209DAB4 / 4 bytes / empty / upstream_symbol */
void st_ov000_0209DAB4(void) {}
/* #106 0x0209DAC4 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov000_0209DAC4(void) { return 1u; }
/* #107 0x0209DBC8 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov000_0209DBC8(void) { return 0u; }
/* #108 0x0209DBD0 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov000_0209DBD0(void) { return 0u; }
/* #109 0x0209DCD0 / 4 bytes / empty / upstream_symbol */
void st_ov000_0209DCD0(void) {}
/* #110 0x020A2668 / 4 bytes / empty / upstream_symbol */
void st_ov000_020A2668(void) {}
/* #111 0x020A2968 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov000_020A2968(void) { return 12u; }
/* #112 0x020A29B4 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov000_020A29B4(void) { return 13u; }
/* #113 0x020A2FC4 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov000_020A2FC4(void) { return 12u; }
/* #114 0x020A3010 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov000_020A3010(void) { return 13u; }
/* #115 0x020A3964 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov000_020A3964(void) { return 16u; }
/* #116 0x020A396C / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov000_020A396C(void) { return 7u; }
/* #117 0x020A4710 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov000_020A4710(void) { return 5u; }
/* #118 0x020A4C14 / 16 bytes / manual_reconstructed / upstream_symbol */
void st_ov000_020A4C14(void*p){volatile unsigned char*q=(volatile unsigned char*)p;q[452]=0;q[704]=0;}
/* #119 0x020A4E3C / 16 bytes / manual_reconstructed / upstream_symbol */
void st_ov000_020A4E3C(volatile unsigned int*p){p[3]=0;p[9]=0;}
/* #120 0x020A4E6C / 16 bytes / manual_reconstructed / upstream_symbol */
void st_ov000_020A4E6C(volatile unsigned int*p){p[3]=0;p[9]=0;}
/* #121 0x020A50F8 / 4 bytes / empty / upstream_symbol */
void st_ov000_020A50F8(void) {}
/* #122 0x020A514C / 4 bytes / empty / upstream_symbol */
void st_ov000_020A514C(void) {}
/* #123 0x020A5150 / 4 bytes / empty / upstream_symbol */
void st_ov000_020A5150(void) {}
/* #124 0x020A5154 / 4 bytes / empty / upstream_symbol */
void st_ov000_020A5154(void) {}
/* #125 0x020A5164 / 4 bytes / empty / upstream_symbol */
void st_ov000_020A5164(void) {}
/* #126 0x020A5168 / 4 bytes / empty / upstream_symbol */
void st_ov000_020A5168(void) {}
/* #127 0x020A566C / 4 bytes / empty / upstream_symbol */
void st_ov000_020A566C(void) {}
/* #128 0x020A5678 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov000_020A5678(void) { return 0u; }
/* #129 0x020A5680 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov000_020A5680(void) { return 0u; }
/* #130 0x020A5764 / 20 bytes / manual_reconstructed / upstream_symbol */
void st_ov000_020A5764(volatile unsigned int*p){p[0]=0;p[1]=0;p[2]=0;}
/* #131 0x020A5778 / 4 bytes / empty / upstream_symbol */
void st_ov000_020A5778(void) {}
/* #132 0x020A5A68 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov000_020A5A68(void) { return 0u; }
/* #133 0x020A5D70 / 4 bytes / empty / upstream_symbol */
void st_ov000_020A5D70(void) {}
/* #134 0x020A5F1C / 4 bytes / empty / upstream_symbol */
void st_ov000_020A5F1C(void) {}
/* #135 0x020A5F20 / 4 bytes / empty / upstream_symbol */
void st_ov000_020A5F20(void) {}
/* #136 0x020A5F24 / 4 bytes / empty / upstream_symbol */
void st_ov000_020A5F24(void) {}
/* #137 0x020A5F28 / 4 bytes / empty / upstream_symbol */
void st_ov000_020A5F28(void) {}
/* #138 0x020A5F2C / 4 bytes / empty / upstream_symbol */
void st_ov000_020A5F2C(void) {}
/* #139 0x020A5F30 / 4 bytes / empty / upstream_symbol */
void st_ov000_020A5F30(void) {}
/* #140 0x020A6168 / 16 bytes / manual_reconstructed / upstream_symbol */
void st_ov000_020A6168(volatile unsigned int*p){p[0]=0;p[1]=0;}
/* #141 0x020A6180 / 4 bytes / empty / upstream_symbol */
void st_ov000_020A6180(void) {}
/* #142 0x020A6190 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov000_020A6190(void) { return 2u; }
/* #143 0x020A62E8 / 4 bytes / empty / upstream_symbol */
void st_ov000_020A62E8(void) {}
/* #144 0x020A6458 / 16 bytes / manual_reconstructed / upstream_symbol */
void st_ov000_020A6458(void*p,const void*q){const unsigned int*r=*(const unsigned int*const*)((const unsigned char*)q+8);*(unsigned int*)((unsigned char*)p+20)=*r;}
/* #145 0x020A6670 / 4 bytes / empty / upstream_symbol */
void st_ov000_020A6670(void) {}
/* #146 0x020A6B6C / 4 bytes / empty / upstream_symbol */
void st_ov000_020A6B6C(void) {}
/* #147 0x020A7738 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov000_020A7738(void) { return 6u; }
/* #148 0x020A7740 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov000_020A7740(void) { return 5u; }
/* #149 0x020A8434 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov000_020A8434(void) { return 1u; }
/* #150 0x020A8AE4 / 20 bytes / manual_reconstructed / upstream_symbol */
unsigned int st_ov000_020A8AE4(const void *p){const unsigned int *q=*(const unsigned int*const*)((const unsigned char*)p+32);return q? q[0] : 0u;}
/* #151 0x020A8AF8 / 20 bytes / manual_reconstructed / upstream_symbol */
unsigned int st_ov000_020A8AF8(const void *p){const unsigned int *q=*(const unsigned int*const*)((const unsigned char*)p+32);return q? q[1] : 0u;}
/* #152 0x020A8B0C / 20 bytes / manual_reconstructed / upstream_symbol */
unsigned int st_ov000_020A8B0C(const void *p){const unsigned int *q=*(const unsigned int*const*)((const unsigned char*)p+32);return q? q[3] : 0u;}
/* #153 0x020A8B20 / 20 bytes / manual_reconstructed / upstream_symbol */
unsigned int st_ov000_020A8B20(const void *p){const unsigned int *q=*(const unsigned int*const*)((const unsigned char*)p+32);return q? q[4] : 0u;}
/* #154 0x020A8DF4 / 4 bytes / empty / upstream_symbol */
void st_ov000_020A8DF4(void) {}
/* #155 0x020A8FA8 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov000_020A8FA8(void) { return 1u; }
/* #156 0x020A8FB0 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov000_020A8FB0(void) { return 1u; }
/* #157 0x020A8FB8 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov000_020A8FB8(void) { return 123u; }
/* #158 0x020A91A0 / 4 bytes / empty / upstream_symbol */
void st_ov000_020A91A0(void) {}
/* #159 0x020A91F4 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov000_020A91F4(void) { return 1u; }
/* #160 0x020A9204 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov000_020A9204(void) { return 1u; }
/* #161 0x020A9294 / 4 bytes / empty / upstream_symbol */
void st_ov000_020A9294(void) {}
/* #162 0x020A9298 / 4 bytes / empty / upstream_symbol */
void st_ov000_020A9298(void) {}
/* #163 0x020A9628 / 4 bytes / empty / upstream_symbol */
void st_ov000_020A9628(void) {}
/* #164 0x020A9850 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov000_020A9850(void) { return 1u; }
/* #165 0x020A9944 / 4 bytes / empty / upstream_symbol */
void st_ov000_020A9944(void) {}
/* ===== Original Nintendo DS ARM9 overlay 003 ===== */
/* #166 0x020B81FC / 4 bytes / empty / BL_target */
void st_ov003_020B81FC(void) {}
/* ===== Original Nintendo DS ARM9 overlay 004 ===== */
/* #167 0x020B6580 / 4 bytes / empty / BL_target */
void st_ov004_020B6580(void) {}
/* ===== Original Nintendo DS ARM9 overlay 007 ===== */
/* #168 0x020B669C / 4 bytes / empty / BL_target */
void st_ov007_020B669C(void) {}
/* #169 0x020B775C / 4 bytes / empty / BL_target */
void st_ov007_020B775C(void) {}
/* #170 0x020B7868 / 8 bytes / write_word / BL_target */
void st_ov007_020B7868(void* p, unsigned int value) { *(unsigned int*)((unsigned char*)p+56) = value; }
/* ===== Original Nintendo DS ARM9 overlay 016 ===== */
/* #171 0x020B6644 / 4 bytes / empty / BL_target */
void st_ov016_020B6644(void) {}
/* #172 0x020B6648 / 12 bytes / set_word / BL_target */
void st_ov016_020B6648(void *p) { *(unsigned int*)((unsigned char*)p+4) = 0u; }
/* #173 0x020B7B7C / 8 bytes / write_byte / BL_target */
void st_ov016_020B7B7C(void* p, unsigned int value) { ((unsigned char*)p)[27] = (unsigned char)value; }
/* #174 0x020B81B4 / 8 bytes / write_byte / BL_target */
void st_ov016_020B81B4(void* p, unsigned int value) { ((unsigned char*)p)[27] = (unsigned char)value; }
/* ===== Original Nintendo DS ARM9 overlay 017 ===== */
/* #175 0x020C0208 / 4 bytes / empty / BL_target */
void st_ov017_020C0208(void) {}
/* #176 0x020C3A30 / 8 bytes / write_word / BL_target */
void st_ov017_020C3A30(void* p, unsigned int value) { *(unsigned int*)((unsigned char*)p+0) = value; }
/* ===== Original Nintendo DS ARM9 overlay 019 ===== */
/* #177 0x020C4AE8 / 4 bytes / empty / upstream_symbol */
void st_ov019_020C4AE8(void) {}
/* #178 0x020C4B1C / 4 bytes / empty / upstream_symbol */
void st_ov019_020C4B1C(void) {}
/* #179 0x020C4B20 / 4 bytes / empty / upstream_symbol */
void st_ov019_020C4B20(void) {}
/* #180 0x020C5078 / 4 bytes / empty / upstream_symbol */
void st_ov019_020C5078(void) {}
/* #181 0x020C6C54 / 4 bytes / empty / upstream_symbol */
void st_ov019_020C6C54(void) {}
/* #182 0x020C6CDC / 4 bytes / empty / upstream_symbol */
void st_ov019_020C6CDC(void) {}
/* #183 0x020C6D48 / 4 bytes / empty / upstream_symbol */
void st_ov019_020C6D48(void) {}
/* #184 0x020C6D4C / 4 bytes / empty / upstream_symbol */
void st_ov019_020C6D4C(void) {}
/* #185 0x020C8134 / 4 bytes / empty / upstream_symbol */
void st_ov019_020C8134(void) {}
/* #186 0x020CB2A8 / 4 bytes / empty / upstream_symbol */
void st_ov019_020CB2A8(void) {}
/* #187 0x020CB2AC / 4 bytes / empty / upstream_symbol */
void st_ov019_020CB2AC(void) {}
/* #188 0x020CC8B4 / 12 bytes / read_nested_byte / BL_target */
unsigned int st_ov019_020CC8B4(const void *p) { const unsigned char *q = *(const unsigned char * const*)((const unsigned char*)p+44); return q[32]; }
/* ===== Original Nintendo DS ARM9 overlay 020 ===== */
/* #189 0x020C6B7C / 4 bytes / empty / upstream_symbol */
void st_ov020_020C6B7C(void) {}
/* #190 0x020C71D8 / 12 bytes / set_word / upstream_symbol */
void st_ov020_020C71D8(void *p) { *(unsigned int*)((unsigned char*)p+24) = 0u; }
/* #191 0x020C7200 / 12 bytes / set_word / upstream_symbol */
void st_ov020_020C7200(void *p) { *(unsigned int*)((unsigned char*)p+24) = 0u; }
/* #192 0x020C737C / 4 bytes / empty / upstream_symbol */
void st_ov020_020C737C(void) {}
/* #193 0x020C7380 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov020_020C7380(void) { return 0u; }
/* #194 0x020C7388 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov020_020C7388(void) { return 0u; }
/* #195 0x020C7390 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov020_020C7390(void) { return 0u; }
/* #196 0x020C742C / 4 bytes / empty / upstream_symbol */
void st_ov020_020C742C(void) {}
/* #197 0x020C7430 / 4 bytes / empty / upstream_symbol */
void st_ov020_020C7430(void) {}
/* #198 0x020C8428 / 4 bytes / empty / upstream_symbol */
void st_ov020_020C8428(void) {}
/* #199 0x020C842C / 4 bytes / empty / upstream_symbol */
void st_ov020_020C842C(void) {}
/* #200 0x020C8440 / 12 bytes / set_byte / upstream_symbol */
void st_ov020_020C8440(void *p) { ((unsigned char*)p)[45] = 0u; }
/* #201 0x020C844C / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov020_020C844C(void) { return 0u; }
/* #202 0x020C8454 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov020_020C8454(void) { return 0u; }
/* #203 0x020C845C / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov020_020C845C(void) { return 0u; }
/* #204 0x020C8464 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov020_020C8464(void) { return 0u; }
/* #205 0x020C846C / 8 bytes / read_byte / upstream_symbol */
unsigned int st_ov020_020C846C(const void* p) { return *((const unsigned char*)p+45); }
/* #206 0x020C8474 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov020_020C8474(void) { return 0u; }
/* #207 0x020C847C / 4 bytes / empty / upstream_symbol */
void st_ov020_020C847C(void) {}
/* #208 0x020C8480 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov020_020C8480(void) { return 0u; }
/* #209 0x020C8534 / 4 bytes / empty / upstream_symbol */
void st_ov020_020C8534(void) {}
/* #210 0x020C9564 / 12 bytes / set_word / upstream_symbol */
void st_ov020_020C9564(void *p) { *(unsigned int*)((unsigned char*)p+0) = 0u; }
/* #211 0x020C9570 / 4 bytes / empty / upstream_symbol */
void st_ov020_020C9570(void) {}
/* #212 0x020C9574 / 12 bytes / set_word / upstream_symbol */
void st_ov020_020C9574(void *p) { *(unsigned int*)((unsigned char*)p+0) = 0u; }
/* #213 0x020C97D4 / 4 bytes / empty / upstream_symbol */
void st_ov020_020C97D4(void) {}
/* #214 0x020CE208 / 4 bytes / empty / upstream_symbol */
void st_ov020_020CE208(void) {}
/* #215 0x020CE20C / 4 bytes / empty / upstream_symbol */
void st_ov020_020CE20C(void) {}
/* #216 0x020DA438 / 4 bytes / empty / upstream_symbol */
void st_ov020_020DA438(void) {}
/* #217 0x020DAB10 / 8 bytes / return_not_constant / upstream_symbol */
unsigned int st_ov020_020DAB10(void) { return 4294967295u; }
/* #218 0x020DB048 / 4 bytes / empty / upstream_symbol */
void st_ov020_020DB048(void) {}
/* ===== Original Nintendo DS ARM9 overlay 021 ===== */
/* #219 0x020EF4C4 / 4 bytes / empty / upstream_symbol */
void st_ov021_020EF4C4(void) {}
/* #220 0x020F01BC / 12 bytes / set_word / upstream_symbol */
void st_ov021_020F01BC(void *p) { *(unsigned int*)((unsigned char*)p+0) = 0u; }
/* #221 0x020F12AC / 4 bytes / empty / upstream_symbol */
void st_ov021_020F12AC(void) {}
/* #222 0x020F1910 / 4 bytes / empty / upstream_symbol */
void st_ov021_020F1910(void) {}
/* #223 0x020F2B58 / 4 bytes / empty / upstream_symbol */
void st_ov021_020F2B58(void) {}
/* #224 0x020F2CB4 / 4 bytes / empty / upstream_symbol */
void st_ov021_020F2CB4(void) {}
/* #225 0x020F3340 / 4 bytes / empty / upstream_symbol */
void st_ov021_020F3340(void) {}
/* #226 0x020F39A4 / 4 bytes / empty / upstream_symbol */
void st_ov021_020F39A4(void) {}
/* #227 0x020F4C98 / 4 bytes / empty / upstream_symbol */
void st_ov021_020F4C98(void) {}
/* #228 0x020F4C9C / 4 bytes / empty / upstream_symbol */
void st_ov021_020F4C9C(void) {}
/* #229 0x020F4CA0 / 4 bytes / empty / upstream_symbol */
void st_ov021_020F4CA0(void) {}
/* #230 0x020F4CD0 / 12 bytes / set_word / upstream_symbol */
void st_ov021_020F4CD0(void *p) { *(unsigned int*)((unsigned char*)p+72) = 15u; }
/* #231 0x020F6374 / 4 bytes / empty / upstream_symbol */
void st_ov021_020F6374(void) {}
/* #232 0x020FB6A4 / 4 bytes / empty / upstream_symbol */
void st_ov021_020FB6A4(void) {}
/* #233 0x020FB6BC / 4 bytes / empty / upstream_symbol */
void st_ov021_020FB6BC(void) {}
/* #234 0x020FB790 / 4 bytes / empty / upstream_symbol */
void st_ov021_020FB790(void) {}
/* #235 0x020FB794 / 4 bytes / empty / upstream_symbol */
void st_ov021_020FB794(void) {}
/* #236 0x020FB798 / 4 bytes / empty / upstream_symbol */
void st_ov021_020FB798(void) {}
/* #237 0x020FB79C / 4 bytes / empty / upstream_symbol */
void st_ov021_020FB79C(void) {}
/* #238 0x020FB7A0 / 4 bytes / empty / upstream_symbol */
void st_ov021_020FB7A0(void) {}
/* #239 0x020FBFAC / 4 bytes / empty / upstream_symbol */
void st_ov021_020FBFAC(void) {}
/* #240 0x020FDD30 / 4 bytes / empty / upstream_symbol */
void st_ov021_020FDD30(void) {}
/* #241 0x020FF65C / 4 bytes / empty / upstream_symbol */
void st_ov021_020FF65C(void) {}
/* #242 0x02100514 / 4 bytes / empty / upstream_symbol */
void st_ov021_02100514(void) {}
/* #243 0x02100518 / 4 bytes / empty / upstream_symbol */
void st_ov021_02100518(void) {}
/* #244 0x0210051C / 4 bytes / empty / upstream_symbol */
void st_ov021_0210051C(void) {}
/* #245 0x02100520 / 4 bytes / empty / upstream_symbol */
void st_ov021_02100520(void) {}
/* ===== Original Nintendo DS ARM9 overlay 023 ===== */
/* #246 0x020EF99C / 4 bytes / empty / BL_target */
void st_ov023_020EF99C(void) {}
/* #247 0x020EF9A0 / 4 bytes / empty / BL_target */
void st_ov023_020EF9A0(void) {}
/* ===== Original Nintendo DS ARM9 overlay 024 ===== */
/* #248 0x020C4E78 / 4 bytes / empty / upstream_symbol */
void st_ov024_020C4E78(void) {}
/* #249 0x020C4E90 / 4 bytes / empty / upstream_symbol */
void st_ov024_020C4E90(void) {}
/* #250 0x020C4E94 / 12 bytes / set_byte / upstream_symbol */
void st_ov024_020C4E94(void *p) { ((unsigned char*)p)[4] = 1u; }
/* #251 0x020C4EA0 / 12 bytes / set_byte / upstream_symbol */
void st_ov024_020C4EA0(void *p) { ((unsigned char*)p)[4] = 0u; }
/* #252 0x020C4EAC / 4 bytes / empty / upstream_symbol */
void st_ov024_020C4EAC(void) {}
/* #253 0x020C4EB0 / 4 bytes / empty / upstream_symbol */
void st_ov024_020C4EB0(void) {}
/* #254 0x020C4EB4 / 4 bytes / empty / upstream_symbol */
void st_ov024_020C4EB4(void) {}
/* #255 0x020C4EB8 / 4 bytes / empty / upstream_symbol */
void st_ov024_020C4EB8(void) {}
/* #256 0x020C4EBC / 4 bytes / empty / upstream_symbol */
void st_ov024_020C4EBC(void) {}
/* #257 0x020C4EC0 / 8 bytes / read_byte / upstream_symbol */
unsigned int st_ov024_020C4EC0(const void* p) { return *((const unsigned char*)p+4); }
/* #258 0x020C4FDC / 8 bytes / read_byte / upstream_symbol */
unsigned int st_ov024_020C4FDC(const void* p) { return *((const unsigned char*)p+258); }
/* #259 0x020C5180 / 8 bytes / write_byte / upstream_symbol */
void st_ov024_020C5180(void* p, unsigned int value) { ((unsigned char*)p)[27] = (unsigned char)value; }
/* #260 0x020C55BC / 8 bytes / write_word / upstream_symbol */
void st_ov024_020C55BC(void* p, unsigned int value) { *(unsigned int*)((unsigned char*)p+340) = value; }
/* #261 0x020C6D40 / 12 bytes / read_nested_word / upstream_symbol */
unsigned int st_ov024_020C6D40(const void *p) { const unsigned char *q = *(const unsigned char * const*)((const unsigned char*)p+404); return *(const unsigned int*)(q+12); }
/* #262 0x020C83F4 / 4 bytes / empty / upstream_symbol */
void st_ov024_020C83F4(void) {}
/* #263 0x020C8848 / 12 bytes / set_word / upstream_symbol */
void st_ov024_020C8848(void *p) { *(unsigned int*)((unsigned char*)p+12) = 0u; }
/* #264 0x020CB2BC / 4 bytes / empty / upstream_symbol */
void st_ov024_020CB2BC(void) {}
/* #265 0x020CB5E8 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov024_020CB5E8(void) { return 0u; }
/* #266 0x020CB5F0 / 4 bytes / empty / upstream_symbol */
void st_ov024_020CB5F0(void) {}
/* #267 0x020CB5F4 / 4 bytes / empty / upstream_symbol */
void st_ov024_020CB5F4(void) {}
/* #268 0x020CB634 / 4 bytes / empty / upstream_symbol */
void st_ov024_020CB634(void) {}
/* #269 0x020CB900 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov024_020CB900(void) { return 30u; }
/* #270 0x020CCCC8 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov024_020CCCC8(void) { return 0u; }
/* #271 0x020CF9A8 / 4 bytes / empty / upstream_symbol */
void st_ov024_020CF9A8(void) {}
/* #272 0x020CFAF0 / 4 bytes / empty / upstream_symbol */
void st_ov024_020CFAF0(void) {}
/* #273 0x020D00A8 / 4 bytes / empty / upstream_symbol */
void st_ov024_020D00A8(void) {}
/* #274 0x020D2638 / 4 bytes / empty / upstream_symbol */
void st_ov024_020D2638(void) {}
/* #275 0x020D263C / 4 bytes / empty / upstream_symbol */
void st_ov024_020D263C(void) {}
/* #276 0x020D3180 / 4 bytes / empty / upstream_symbol */
void st_ov024_020D3180(void) {}
/* #277 0x020D3184 / 4 bytes / empty / upstream_symbol */
void st_ov024_020D3184(void) {}
/* #278 0x020D45A8 / 8 bytes / read_word / upstream_symbol */
unsigned int st_ov024_020D45A8(const void* p) { return *(const unsigned int*)((const unsigned char*)p+16); }
/* #279 0x020D4640 / 8 bytes / read_word / upstream_symbol */
unsigned int st_ov024_020D4640(const void* p) { return *(const unsigned int*)((const unsigned char*)p+0); }
/* #280 0x020D5610 / 4 bytes / empty / upstream_symbol */
void st_ov024_020D5610(void) {}
/* #281 0x020D5E30 / 8 bytes / write_word / upstream_symbol */
void st_ov024_020D5E30(void* p, unsigned int value) { *(unsigned int*)((unsigned char*)p+24) = value; }
/* ===== Original Nintendo DS ARM9 overlay 026 ===== */
/* #282 0x020D90F0 / 4 bytes / empty / upstream_symbol */
void st_ov026_020D90F0(void) {}
/* #283 0x020DC57C / 4 bytes / empty / upstream_symbol */
void st_ov026_020DC57C(void) {}
/* #284 0x020DEB8C / 12 bytes / read_nested_byte / upstream_symbol */
unsigned int st_ov026_020DEB8C(const void *p) { const unsigned char *q = *(const unsigned char * const*)((const unsigned char*)p+88); return q[852]; }
/* #285 0x020E1B80 / 4 bytes / empty / upstream_symbol */
void st_ov026_020E1B80(void) {}
/* #286 0x020E1B9C / 4 bytes / empty / upstream_symbol */
void st_ov026_020E1B9C(void) {}
/* #287 0x020E2B40 / 4 bytes / empty / upstream_symbol */
void st_ov026_020E2B40(void) {}
/* #288 0x020E5154 / 4 bytes / empty / upstream_symbol */
void st_ov026_020E5154(void) {}
/* #289 0x020E7090 / 8 bytes / write_word / upstream_symbol */
void st_ov026_020E7090(void* p, unsigned int value) { *(unsigned int*)((unsigned char*)p+508) = value; }
/* #290 0x020E7178 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov026_020E7178(void) { return 0u; }
/* #291 0x020E775C / 4 bytes / empty / upstream_symbol */
void st_ov026_020E775C(void) {}
/* #292 0x020E7760 / 4 bytes / empty / upstream_symbol */
void st_ov026_020E7760(void) {}
/* #293 0x020E7B94 / 4 bytes / empty / upstream_symbol */
void st_ov026_020E7B94(void) {}
/* #294 0x020E7C7C / 4 bytes / empty / upstream_symbol */
void st_ov026_020E7C7C(void) {}
/* #295 0x020E7D3C / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov026_020E7D3C(void) { return 31u; }
/* #296 0x020E7DD4 / 4 bytes / empty / upstream_symbol */
void st_ov026_020E7DD4(void) {}
/* #297 0x020E7EBC / 4 bytes / empty / upstream_symbol */
void st_ov026_020E7EBC(void) {}
/* #298 0x020E7FA0 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov026_020E7FA0(void) { return 0u; }
/* #299 0x020E80CC / 12 bytes / read_nested_word / upstream_symbol */
unsigned int st_ov026_020E80CC(const void *p) { const unsigned char *q = *(const unsigned char * const*)((const unsigned char*)p+12); return *(const unsigned int*)(q+60); }
/* #300 0x020E87AC / 4 bytes / empty / upstream_symbol */
void st_ov026_020E87AC(void) {}
/* #301 0x020E9328 / 4 bytes / empty / upstream_symbol */
void st_ov026_020E9328(void) {}
/* #302 0x020E9C08 / 4 bytes / empty / upstream_symbol */
void st_ov026_020E9C08(void) {}
/* #303 0x020EA304 / 4 bytes / empty / upstream_symbol */
void st_ov026_020EA304(void) {}
/* #304 0x020EA31C / 4 bytes / empty / upstream_symbol */
void st_ov026_020EA31C(void) {}
/* #305 0x020EA534 / 8 bytes / read_word / upstream_symbol */
unsigned int st_ov026_020EA534(const void* p) { return *(const unsigned int*)((const unsigned char*)p+36); }
/* #306 0x020EA54C / 12 bytes / indexed_read / upstream_symbol */
unsigned int st_ov026_020EA54C(const unsigned int*base,unsigned int idx) { return base[idx+9]; }
/* #307 0x020EA558 / 8 bytes / read_word / upstream_symbol */
unsigned int st_ov026_020EA558(const void* p) { return *(const unsigned int*)((const unsigned char*)p+24); }
/* #308 0x020EA7D0 / 8 bytes / read_word / upstream_symbol */
unsigned int st_ov026_020EA7D0(const void* p) { return *(const unsigned int*)((const unsigned char*)p+32); }
/* #309 0x020EA7E8 / 12 bytes / indexed_read / upstream_symbol */
unsigned int st_ov026_020EA7E8(const unsigned int*base,unsigned int idx) { return base[idx+8]; }
/* #310 0x020EA7F4 / 8 bytes / read_word / upstream_symbol */
unsigned int st_ov026_020EA7F4(const void* p) { return *(const unsigned int*)((const unsigned char*)p+20); }
/* #311 0x020EA8D4 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov026_020EA8D4(void) { return 4096u; }
/* #312 0x020EAEC8 / 4 bytes / empty / upstream_symbol */
void st_ov026_020EAEC8(void) {}
/* #313 0x020EAEE0 / 4 bytes / empty / upstream_symbol */
void st_ov026_020EAEE0(void) {}
/* #314 0x020ED070 / 12 bytes / set_byte / upstream_symbol */
void st_ov026_020ED070(void *p) { ((unsigned char*)p)[2388] = 0u; }
/* #315 0x020F0DB8 / 4 bytes / empty / upstream_symbol */
void st_ov026_020F0DB8(void) {}
/* #316 0x020F1F04 / 4 bytes / empty / upstream_symbol */
void st_ov026_020F1F04(void) {}
/* #317 0x020F29E8 / 4 bytes / empty / upstream_symbol */
void st_ov026_020F29E8(void) {}
/* #318 0x020F2A00 / 4 bytes / empty / upstream_symbol */
void st_ov026_020F2A00(void) {}
/* #319 0x020F3428 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov026_020F3428(void) { return 0u; }
/* #320 0x020F3570 / 4 bytes / empty / upstream_symbol */
void st_ov026_020F3570(void) {}
/* #321 0x020F3B14 / 8 bytes / write_word / upstream_symbol */
void st_ov026_020F3B14(void* p, unsigned int value) { *(unsigned int*)((unsigned char*)p+292) = value; }
/* #322 0x020F3B1C / 8 bytes / write_word / upstream_symbol */
void st_ov026_020F3B1C(void* p, unsigned int value) { *(unsigned int*)((unsigned char*)p+288) = value; }
/* #323 0x020F3B40 / 8 bytes / read_word / upstream_symbol */
unsigned int st_ov026_020F3B40(const void* p) { return *(const unsigned int*)((const unsigned char*)p+312); }
/* #324 0x020F3B48 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov026_020F3B48(void) { return 1u; }
/* #325 0x020F3F28 / 4 bytes / empty / upstream_symbol */
void st_ov026_020F3F28(void) {}
/* #326 0x020F410C / 8 bytes / read_word / upstream_symbol */
unsigned int st_ov026_020F410C(const void* p) { return *(const unsigned int*)((const unsigned char*)p+216); }
/* #327 0x020F4114 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov026_020F4114(void) { return 1u; }
/* #328 0x020F446C / 8 bytes / write_word / upstream_symbol */
void st_ov026_020F446C(void* p, unsigned int value) { *(unsigned int*)((unsigned char*)p+1032) = value; }
/* #329 0x020F4484 / 8 bytes / read_word / upstream_symbol */
unsigned int st_ov026_020F4484(const void* p) { return *(const unsigned int*)((const unsigned char*)p+216); }
/* #330 0x020F47F8 / 8 bytes / read_word / upstream_symbol */
unsigned int st_ov026_020F47F8(const void* p) { return *(const unsigned int*)((const unsigned char*)p+216); }
/* #331 0x020F4E08 / 4 bytes / empty / upstream_symbol */
void st_ov026_020F4E08(void) {}
/* #332 0x020F5054 / 4 bytes / empty / upstream_symbol */
void st_ov026_020F5054(void) {}
/* #333 0x020F506C / 4 bytes / empty / upstream_symbol */
void st_ov026_020F506C(void) {}
/* #334 0x020F5384 / 4 bytes / empty / upstream_symbol */
void st_ov026_020F5384(void) {}
/* #335 0x020F53D8 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov026_020F53D8(void) { return 0u; }
/* #336 0x020F53E0 / 4 bytes / empty / upstream_symbol */
void st_ov026_020F53E0(void) {}
/* #337 0x020F5484 / 4 bytes / empty / upstream_symbol */
void st_ov026_020F5484(void) {}
/* #338 0x020F5488 / 12 bytes / set_word / upstream_symbol */
void st_ov026_020F5488(void *p) { *(unsigned int*)((unsigned char*)p+128) = 0u; }
/* #339 0x020F7638 / 8 bytes / read_word / upstream_symbol */
unsigned int st_ov026_020F7638(const void* p) { return *(const unsigned int*)((const unsigned char*)p+16); }
/* #340 0x020F7818 / 12 bytes / set_byte / upstream_symbol */
void st_ov026_020F7818(void *p) { ((unsigned char*)p)[34] = 0u; }
/* #341 0x020F7824 / 4 bytes / empty / upstream_symbol */
void st_ov026_020F7824(void) {}
/* #342 0x020F7828 / 4 bytes / empty / upstream_symbol */
void st_ov026_020F7828(void) {}
/* #343 0x020F782C / 4 bytes / empty / upstream_symbol */
void st_ov026_020F782C(void) {}
/* #344 0x020F7838 / 4 bytes / empty / upstream_symbol */
void st_ov026_020F7838(void) {}
/* #345 0x020F783C / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov026_020F783C(void) { return 0u; }
/* #346 0x020F7844 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov026_020F7844(void) { return 4u; }
/* #347 0x020F784C / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov026_020F784C(void) { return 0u; }
/* #348 0x020F7854 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov026_020F7854(void) { return 0u; }
/* #349 0x020F785C / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov026_020F785C(void) { return 0u; }
/* #350 0x020F9FE4 / 8 bytes / pointer_offset / upstream_symbol */
unsigned char* st_ov026_020F9FE4(unsigned char* p) { return p + 68u; }
/* #351 0x020F9FEC / 8 bytes / pointer_offset / upstream_symbol */
unsigned char* st_ov026_020F9FEC(unsigned char* p) { return p + 116u; }
/* #352 0x020FA4B0 / 12 bytes / indexed_read / upstream_symbol */
unsigned int st_ov026_020FA4B0(const unsigned int*base,unsigned int idx) { return base[idx+115]; }
/* #353 0x020FA4BC / 8 bytes / read_word / upstream_symbol */
unsigned int st_ov026_020FA4BC(const void* p) { return *(const unsigned int*)((const unsigned char*)p+456); }
/* #354 0x020FBC1C / 4 bytes / empty / upstream_symbol */
void st_ov026_020FBC1C(void) {}
/* #355 0x020FBC20 / 4 bytes / empty / upstream_symbol */
void st_ov026_020FBC20(void) {}
/* #356 0x020FEAC4 / 12 bytes / set_word / upstream_symbol */
void st_ov026_020FEAC4(void *p) { *(unsigned int*)((unsigned char*)p+0) = 0u; }
/* #357 0x020FFF34 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov026_020FFF34(void) { return 82u; }
/* #358 0x02104370 / 4 bytes / empty / upstream_symbol */
void st_ov026_02104370(void) {}
/* #359 0x021043AC / 4 bytes / empty / upstream_symbol */
void st_ov026_021043AC(void) {}
/* #360 0x02104BBC / 4 bytes / empty / upstream_symbol */
void st_ov026_02104BBC(void) {}
/* #361 0x021050EC / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov026_021050EC(void) { return 1u; }
/* #362 0x02105134 / 8 bytes / write_word / upstream_symbol */
void st_ov026_02105134(void* p, unsigned int value) { *(unsigned int*)((unsigned char*)p+244) = value; }
/* #363 0x02105468 / 4 bytes / empty / upstream_symbol */
void st_ov026_02105468(void) {}
/* #364 0x02105850 / 4 bytes / empty / upstream_symbol */
void st_ov026_02105850(void) {}
/* #365 0x021068E4 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov026_021068E4(void) { return 1000u; }
/* #366 0x02106B60 / 12 bytes / set_word / upstream_symbol */
void st_ov026_02106B60(void *p) { *(unsigned int*)((unsigned char*)p+0) = 0u; }
/* #367 0x02106BA4 / 4 bytes / empty / upstream_symbol */
void st_ov026_02106BA4(void) {}
/* #368 0x02106BA8 / 4 bytes / empty / upstream_symbol */
void st_ov026_02106BA8(void) {}
/* #369 0x02106BAC / 8 bytes / write_word / upstream_symbol */
void st_ov026_02106BAC(void* p, unsigned int value) { *(unsigned int*)((unsigned char*)p+12) = value; }
/* #370 0x02107728 / 4 bytes / empty / upstream_symbol */
void st_ov026_02107728(void) {}
/* #371 0x0210772C / 4 bytes / empty / upstream_symbol */
void st_ov026_0210772C(void) {}
/* #372 0x021077E4 / 4 bytes / empty / upstream_symbol */
void st_ov026_021077E4(void) {}
/* #373 0x02108DC4 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov026_02108DC4(void) { return 2u; }
/* #374 0x02108DCC / 8 bytes / pointer_offset / upstream_symbol */
unsigned char* st_ov026_02108DCC(unsigned char* p) { return p + 280u; }
/* #375 0x02109348 / 4 bytes / empty / upstream_symbol */
void st_ov026_02109348(void) {}
/* #376 0x0210934C / 4 bytes / empty / upstream_symbol */
void st_ov026_0210934C(void) {}
/* #377 0x02109350 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov026_02109350(void) { return 0u; }
/* #378 0x02109718 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov026_02109718(void) { return 0u; }
/* #379 0x02109720 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov026_02109720(void) { return 0u; }
/* #380 0x02109728 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov026_02109728(void) { return 0u; }
/* #381 0x0210A444 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov026_0210A444(void) { return 0u; }
/* #382 0x0210A44C / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov026_0210A44C(void) { return 0u; }
/* #383 0x0210AC5C / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov026_0210AC5C(void) { return 2u; }
/* #384 0x0210AE64 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov026_0210AE64(void) { return 245760u; }
/* #385 0x0210AE6C / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov026_0210AE6C(void) { return 58u; }
/* #386 0x0210AE74 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov026_0210AE74(void) { return 38u; }
/* #387 0x0210B430 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov026_0210B430(void) { return 1u; }
/* #388 0x0210B438 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov026_0210B438(void) { return 58u; }
/* #389 0x0210B440 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov026_0210B440(void) { return 0u; }
/* #390 0x0210B9CC / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov026_0210B9CC(void) { return 1u; }
/* #391 0x0210C200 / 4 bytes / empty / BL_target */
void st_ov026_0210C200(void) {}
/* #392 0x0210C370 / 4 bytes / empty / BL_target */
void st_ov026_0210C370(void) {}
/* #393 0x02111E70 / 4 bytes / empty / BL_target */
void st_ov026_02111E70(void) {}
/* #394 0x02115FB4 / 8 bytes / return_constant / BL_target */
unsigned int st_ov026_02115FB4(void) { return 12288u; }
/* #395 0x02116840 / 8 bytes / write_word / BL_target */
void st_ov026_02116840(void* p, unsigned int value) { *(unsigned int*)((unsigned char*)p+148) = value; }
/* #396 0x0212C254 / 4 bytes / empty / BL_target */
void st_ov026_0212C254(void) {}
/* #397 0x02130290 / 4 bytes / empty / BL_target */
void st_ov026_02130290(void) {}
/* #398 0x021314D4 / 8 bytes / write_word / BL_target */
void st_ov026_021314D4(void* p, unsigned int value) { *(unsigned int*)((unsigned char*)p+16) = value; }
/* #399 0x02132288 / 8 bytes / return_constant / BL_target */
unsigned int st_ov026_02132288(void) { return 193u; }
/* ===== Original Nintendo DS ARM9 overlay 027 ===== */
/* #400 0x02141DD8 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov027_02141DD8(void) { return 0u; }
/* #401 0x02141DE0 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov027_02141DE0(void) { return 1u; }
/* #402 0x02141DE8 / 4 bytes / empty / upstream_symbol */
void st_ov027_02141DE8(void) {}
/* #403 0x021427D4 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov027_021427D4(void) { return 0u; }
/* #404 0x02142AF0 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov027_02142AF0(void) { return 0u; }
/* #405 0x02142DF0 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov027_02142DF0(void) { return 0u; }
/* #406 0x021430A8 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov027_021430A8(void) { return 0u; }
/* #407 0x021434D4 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov027_021434D4(void) { return 0u; }
/* #408 0x021434DC / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov027_021434DC(void) { return 1u; }
/* #409 0x021434E4 / 4 bytes / empty / upstream_symbol */
void st_ov027_021434E4(void) {}
/* #410 0x02143788 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov027_02143788(void) { return 245760u; }
/* #411 0x02143790 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov027_02143790(void) { return 0u; }
/* #412 0x02143798 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov027_02143798(void) { return 0u; }
/* #413 0x02143F00 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov027_02143F00(void) { return 1u; }
/* #414 0x02144894 / 8 bytes / return_constant / upstream_symbol */
unsigned int st_ov027_02144894(void) { return 0u; }
/* #415 0x02144FEC / 4 bytes / empty / upstream_symbol */
void st_ov027_02144FEC(void) {}
/* #416 0x02145068 / 4 bytes / empty / upstream_symbol */
void st_ov027_02145068(void) {}
/* #417 0x02145078 / 4 bytes / empty / upstream_symbol */
void st_ov027_02145078(void) {}
/* #418 0x02145B54 / 4 bytes / empty / upstream_symbol */
void st_ov027_02145B54(void) {}
/* #419 0x02146D38 / 4 bytes / empty / upstream_symbol */
void st_ov027_02146D38(void) {}
/* ===== Original Nintendo DS ARM9 overlay 030 ===== */
/* #420 0x0214E538 / 4 bytes / empty / BL_target */
void st_ov030_0214E538(void) {}
/* ===== Original Nintendo DS ARM9 overlay 031 ===== */
/* #421 0x020F1998 / 12 bytes / set_word / BL_target */
void st_ov031_020F1998(void *p) { *(unsigned int*)((unsigned char*)p+44) = 0u; }
/* #422 0x020F64A4 / 8 bytes / return_constant / BL_target */
unsigned int st_ov031_020F64A4(void) { return 1u; }
/* #423 0x020F64AC / 8 bytes / return_constant / BL_target */
unsigned int st_ov031_020F64AC(void) { return 1u; }
/* #424 0x020F64B4 / 8 bytes / read_byte / BL_target */
unsigned int st_ov031_020F64B4(const void* p) { return *((const unsigned char*)p+24); }
/* #425 0x020F7514 / 12 bytes / set_byte / BL_target */
void st_ov031_020F7514(void *p) { ((unsigned char*)p)[472] = 1u; }
/* #426 0x020F7520 / 12 bytes / set_byte / BL_target */
void st_ov031_020F7520(void *p) { ((unsigned char*)p)[472] = 0u; }
/* #427 0x020F9C24 / 4 bytes / empty / BL_target */
void st_ov031_020F9C24(void) {}
/* #428 0x020FAFE0 / 4 bytes / empty / BL_target */
void st_ov031_020FAFE0(void) {}
/* #429 0x0210C168 / 4 bytes / empty / BL_target */
void st_ov031_0210C168(void) {}
/* #430 0x0210C16C / 4 bytes / empty / BL_target */
void st_ov031_0210C16C(void) {}
/* #431 0x0210CD58 / 4 bytes / empty / BL_target */
void st_ov031_0210CD58(void) {}
/* ===== Original Nintendo DS ARM9 overlay 033 ===== */
/* #432 0x02119184 / 4 bytes / empty / BL_target */
void st_ov033_02119184(void) {}
/* #433 0x0211924C / 12 bytes / set_word / BL_target */
void st_ov033_0211924C(void *p) { *(unsigned int*)((unsigned char*)p+0) = 1u; }
/* #434 0x02119258 / 12 bytes / set_word / BL_target */
void st_ov033_02119258(void *p) { *(unsigned int*)((unsigned char*)p+2140) = 0u; }
/* #435 0x0211BE34 / 8 bytes / return_constant / BL_target */
unsigned int st_ov033_0211BE34(void) { return 2112u; }
/* ===== Original Nintendo DS ARM9 overlay 036 ===== */
/* #436 0x021208E8 / 8 bytes / read_byte / BL_target */
unsigned int st_ov036_021208E8(const void* p) { return *((const unsigned char*)p+54); }
/* ===== Original Nintendo DS ARM9 overlay 037 ===== */
/* #437 0x0211AD08 / 8 bytes / return_constant / BL_target */
unsigned int st_ov037_0211AD08(void) { return 4096u; }
/* #438 0x0211AD58 / 8 bytes / return_constant / BL_target */
unsigned int st_ov037_0211AD58(void) { return 0u; }
/* #439 0x0211B53C / 8 bytes / write_byte / BL_target */
void st_ov037_0211B53C(void* p, unsigned int value) { ((unsigned char*)p)[610] = (unsigned char)value; }
/* #440 0x0211E494 / 8 bytes / write_word / BL_target */
void st_ov037_0211E494(void* p, unsigned int value) { *(unsigned int*)((unsigned char*)p+804) = value; }
/* #441 0x0211E5C8 / 8 bytes / write_byte / BL_target */
void st_ov037_0211E5C8(void* p, unsigned int value) { ((unsigned char*)p)[810] = (unsigned char)value; }
/* #442 0x021205D8 / 8 bytes / write_word / BL_target */
void st_ov037_021205D8(void* p, unsigned int value) { *(unsigned int*)((unsigned char*)p+764) = value; }
/* #443 0x0212070C / 8 bytes / write_byte / BL_target */
void st_ov037_0212070C(void* p, unsigned int value) { ((unsigned char*)p)[772] = (unsigned char)value; }
/* ===== Original Nintendo DS ARM9 overlay 046 ===== */
/* #444 0x02127CB8 / 12 bytes / set_byte / BL_target */
void st_ov046_02127CB8(void *p) { ((unsigned char*)p)[418] = 0u; }
/* ===== Original Nintendo DS ARM9 overlay 049 ===== */
/* #445 0x02132740 / 4 bytes / empty / BL_target */
void st_ov049_02132740(void) {}
/* ===== Original Nintendo DS ARM9 overlay 055 ===== */
/* #446 0x0213D188 / 4 bytes / empty / BL_target */
void st_ov055_0213D188(void) {}
/* ===== Original Nintendo DS ARM9 overlay 056 ===== */
/* #447 0x0213DE00 / 8 bytes / read_byte / BL_target */
unsigned int st_ov056_0213DE00(const void* p) { return *((const unsigned char*)p+686); }
/* #448 0x0213E350 / 8 bytes / read_byte / BL_target */
unsigned int st_ov056_0213E350(const void* p) { return *((const unsigned char*)p+118); }
/* ===== Original Nintendo DS ARM9 overlay 058 ===== */
/* #449 0x021521AC / 4 bytes / empty / BL_target */
void st_ov058_021521AC(void) {}
/* #450 0x02152F48 / 12 bytes / set_word / BL_target */
void st_ov058_02152F48(void *p) { *(unsigned int*)((unsigned char*)p+12) = 3u; }
/* ===== Original Nintendo DS ARM9 overlay 059 ===== */
/* #451 0x02158ACC / 8 bytes / return_constant / BL_target */
unsigned int st_ov059_02158ACC(void) { return 10u; }
/* ===== Original Nintendo DS ARM9 overlay 062 ===== */
/* #452 0x0215C198 / 4 bytes / empty / BL_target */
void st_ov062_0215C198(void) {}
/* ===== Original Nintendo DS ARM9 overlay 063 ===== */
/* #453 0x021622C8 / 4 bytes / empty / BL_target */
void st_ov063_021622C8(void) {}
/* ===== Original Nintendo DS ARM9 overlay 064 ===== */
/* #454 0x02159244 / 8 bytes / write_byte / BL_target */
void st_ov064_02159244(void* p, unsigned int value) { ((unsigned char*)p)[27] = (unsigned char)value; }
/* ===== Original Nintendo DS ARM9 overlay 066 ===== */
/* #455 0x021580D8 / 12 bytes / set_word / BL_target */
void st_ov066_021580D8(void *p) { *(unsigned int*)((unsigned char*)p+56) = 0u; }
/* #456 0x0215AD88 / 8 bytes / write_word / BL_target */
void st_ov066_0215AD88(void* p, unsigned int value) { *(unsigned int*)((unsigned char*)p+48) = value; }
/* ===== Original Nintendo DS ARM9 overlay 068 ===== */
/* #457 0x02158DA4 / 12 bytes / set_word / BL_target */
void st_ov068_02158DA4(void *p) { *(unsigned int*)((unsigned char*)p+44) = 164u; }
/* #458 0x0215DEEC / 4 bytes / empty / BL_target */
void st_ov068_0215DEEC(void) {}
/* #459 0x02160F08 / 12 bytes / set_word / BL_target */
void st_ov068_02160F08(void *p) { *(unsigned int*)((unsigned char*)p+56) = 0u; }
/* #460 0x02161E00 / 8 bytes / write_byte / BL_target */
void st_ov068_02161E00(void* p, unsigned int value) { ((unsigned char*)p)[284] = (unsigned char)value; }
/* ===== Original Nintendo DS ARM9 overlay 070 ===== */
/* #461 0x02140B5C / 8 bytes / write_word / BL_target */
void st_ov070_02140B5C(void* p, unsigned int value) { *(unsigned int*)((unsigned char*)p+24) = value; }
/* #462 0x021437F8 / 4 bytes / empty / BL_target */
void st_ov070_021437F8(void) {}
/* #463 0x02144054 / 4 bytes / empty / BL_target */
void st_ov070_02144054(void) {}
/* #464 0x0214C078 / 4 bytes / empty / BL_target */
void st_ov070_0214C078(void) {}
/* ===== Original Nintendo DS ARM9 overlay 071 ===== */
/* #465 0x02159A58 / 8 bytes / return_constant / BL_target */
unsigned int st_ov071_02159A58(void) { return 4096u; }
/* #466 0x0215BE14 / 4 bytes / empty / BL_target */
void st_ov071_0215BE14(void) {}
/* ===== Original Nintendo DS ARM9 overlay 072 ===== */
/* #467 0x02150DBC / 12 bytes / nested_pointer_offset / BL_target */
unsigned char* st_ov072_02150DBC(const void *p) { unsigned char *q = *(unsigned char*const*)((const unsigned char*)p+152); return q+8192u; }
/* ===== Original Nintendo DS ARM9 overlay 073 ===== */
/* #468 0x0216256C / 8 bytes / read_byte / BL_target */
unsigned int st_ov073_0216256C(const void* p) { return *((const unsigned char*)p+1284); }
/* #469 0x021635A0 / 8 bytes / write_word / BL_target */
void st_ov073_021635A0(void* p, unsigned int value) { *(unsigned int*)((unsigned char*)p+164) = value; }
/* ===== Original Nintendo DS ARM9 overlay 075 ===== */
/* #470 0x0215BD28 / 8 bytes / return_constant / BL_target */
unsigned int st_ov075_0215BD28(void) { return 0u; }
/* ===== Original Nintendo DS ARM9 overlay 084 ===== */
/* #471 0x0215E7F0 / 4 bytes / empty / BL_target */
void st_ov084_0215E7F0(void) {}
/* ===== Original Nintendo DS ARM9 overlay 088 ===== */
/* #472 0x02167D94 / 4 bytes / empty / BL_target */
void st_ov088_02167D94(void) {}
/* #473 0x02167D98 / 4 bytes / empty / BL_target */
void st_ov088_02167D98(void) {}
/* #474 0x02167DAC / 4 bytes / empty / BL_target */
void st_ov088_02167DAC(void) {}
/* #475 0x02168660 / 4 bytes / empty / BL_target */
void st_ov088_02168660(void) {}
/* #476 0x02168664 / 4 bytes / empty / BL_target */
void st_ov088_02168664(void) {}
/* #477 0x02168668 / 4 bytes / empty / BL_target */
void st_ov088_02168668(void) {}
/* #478 0x0216866C / 4 bytes / empty / BL_target */
void st_ov088_0216866C(void) {}
/* #479 0x02168680 / 4 bytes / empty / BL_target */
void st_ov088_02168680(void) {}
/* #480 0x0216BD58 / 4 bytes / empty / BL_target */
void st_ov088_0216BD58(void) {}
/* #481 0x0216D480 / 8 bytes / return_constant / BL_target */
unsigned int st_ov088_0216D480(void) { return 200u; }
/* #482 0x0216D488 / 8 bytes / return_constant / BL_target */
unsigned int st_ov088_0216D488(void) { return 600u; }
/* #483 0x0216D490 / 8 bytes / return_constant / BL_target */
unsigned int st_ov088_0216D490(void) { return 250u; }
/* #484 0x0216F990 / 8 bytes / read_word / BL_target */
unsigned int st_ov088_0216F990(const void* p) { return *(const unsigned int*)((const unsigned char*)p+48); }
/* #485 0x021730EC / 12 bytes / set_byte / BL_target */
void st_ov088_021730EC(void *p) { ((unsigned char*)p)[27] = 0u; }
/* ===== Original Nintendo DS ARM9 overlay 089 ===== */
/* #486 0x02167D34 / 4 bytes / empty / BL_target */
void st_ov089_02167D34(void) {}
/* #487 0x021697A0 / 4 bytes / empty / BL_target */
void st_ov089_021697A0(void) {}
/* #488 0x0216BFA8 / 8 bytes / read_word / BL_target */
unsigned int st_ov089_0216BFA8(const void* p) { return *(const unsigned int*)((const unsigned char*)p+28); }
/* #489 0x0216BFC0 / 8 bytes / read_word / BL_target */
unsigned int st_ov089_0216BFC0(const void* p) { return *(const unsigned int*)((const unsigned char*)p+32); }
/* #490 0x0217058C / 8 bytes / return_constant / BL_target */
unsigned int st_ov089_0217058C(void) { return 13u; }
/* ===== Original Nintendo DS ARM9 overlay 091 ===== */
/* #491 0x02166088 / 8 bytes / write_word / BL_target */
void st_ov091_02166088(void* p, unsigned int value) { *(unsigned int*)((unsigned char*)p+16) = value; }
/* #492 0x021668DC / 8 bytes / write_word / BL_target */
void st_ov091_021668DC(void* p, unsigned int value) { *(unsigned int*)((unsigned char*)p+16) = value; }
/* ===== Original Nintendo DS ARM9 overlay 092 ===== */
/* #493 0x02174608 / 12 bytes / nested_pointer_offset / BL_target */
unsigned char* st_ov092_02174608(const void *p) { unsigned char *q = *(unsigned char*const*)((const unsigned char*)p+316); return q+28u; }
/* ===== Original Nintendo DS ARM9 overlay 093 ===== */
/* #494 0x021661A8 / 12 bytes / read_nested_byte / BL_target */
unsigned int st_ov093_021661A8(const void *p) { const unsigned char *q = *(const unsigned char * const*)((const unsigned char*)p+0); return q[232]; }
/* #495 0x02171B54 / 12 bytes / set_byte / BL_target */
void st_ov093_02171B54(void *p) { ((unsigned char*)p)[75] = 1u; }
/* #496 0x02171EDC / 12 bytes / nested_pointer_offset / BL_target */
unsigned char* st_ov093_02171EDC(const void *p) { unsigned char *q = *(unsigned char*const*)((const unsigned char*)p+48); return q+8u; }
/* #497 0x02172560 / 8 bytes / read_word / BL_target */
unsigned int st_ov093_02172560(const void* p) { return *(const unsigned int*)((const unsigned char*)p+152); }
/* #498 0x021729E8 / 8 bytes / pointer_offset / BL_target */
unsigned char* st_ov093_021729E8(unsigned char* p) { return p + 232u; }
/* #499 0x021729F0 / 8 bytes / read_byte / BL_target */
unsigned int st_ov093_021729F0(const void* p) { return *((const unsigned char*)p+0); }
/* #500 0x02172E94 / 8 bytes / pointer_offset / BL_target */
unsigned char* st_ov093_02172E94(unsigned char* p) { return p + 92u; }
