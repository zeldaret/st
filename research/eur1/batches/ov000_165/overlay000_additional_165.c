/* The Legend of Zelda: Spirit Tracks, Europe Rev 1 (BKIP)
 * ARM9 overlay 0: 165 independently translated C function bodies.
 * 121 are confirmed empty BX LR functions, and 44 are non-empty.
 * All object-code bytes verified with Clang ARMv5TE -O2, not CodeWarrior.
 * Research only: provisional ABI and C++ ownership; not linked to DS build.
 * No ROM/game assets/assembly are redistributed here.
 */
#include <stdint.h>
#include <stddef.h>

/* #001 0x02051F90, 4 original instruction bytes, empty */
void st_ov000_02051F90(void) {}

/* #002 0x02057C34, 4 original instruction bytes, empty */
void st_ov000_02057C34(void) {}

/* #003 0x02058E20, 4 original instruction bytes, empty */
void st_ov000_02058E20(void) {}

/* #004 0x0205A11C, 4 original instruction bytes, empty */
void st_ov000_0205A11C(void) {}

/* #005 0x0205A160, 4 original instruction bytes, empty */
void st_ov000_0205A160(void) {}

/* #006 0x0205BE34, 16 original instruction bytes, manual_reconstructed */
void st_ov000_0205BE34(void *p,unsigned int n){ *(unsigned short*)p=(unsigned short)n; ((unsigned char*)p)[2]=31; }

/* #007 0x02060FC4, 4 original instruction bytes, empty */
void st_ov000_02060FC4(void) {}

/* #008 0x02061038, 4 original instruction bytes, empty */
void st_ov000_02061038(void) {}

/* #009 0x0206103C, 4 original instruction bytes, empty */
void st_ov000_0206103C(void) {}

/* #010 0x020616E0, 4 original instruction bytes, empty */
void st_ov000_020616E0(void) {}

/* #011 0x020616E4, 4 original instruction bytes, empty */
void st_ov000_020616E4(void) {}

/* #012 0x020616E8, 4 original instruction bytes, empty */
void st_ov000_020616E8(void) {}

/* #013 0x020616EC, 4 original instruction bytes, empty */
void st_ov000_020616EC(void) {}

/* #014 0x020616F0, 4 original instruction bytes, empty */
void st_ov000_020616F0(void) {}

/* #015 0x020616F4, 4 original instruction bytes, empty */
void st_ov000_020616F4(void) {}

/* #016 0x020616F8, 4 original instruction bytes, empty */
void st_ov000_020616F8(void) {}

/* #017 0x020616FC, 4 original instruction bytes, empty */
void st_ov000_020616FC(void) {}

/* #018 0x02061764, 4 original instruction bytes, empty */
void st_ov000_02061764(void) {}

/* #019 0x02061768, 4 original instruction bytes, empty */
void st_ov000_02061768(void) {}

/* #020 0x02061ADC, 4 original instruction bytes, empty */
void st_ov000_02061ADC(void) {}

/* #021 0x02061AE0, 4 original instruction bytes, empty */
void st_ov000_02061AE0(void) {}

/* #022 0x02061CCC, 4 original instruction bytes, empty */
void st_ov000_02061CCC(void) {}

/* #023 0x02061CD0, 4 original instruction bytes, empty */
void st_ov000_02061CD0(void) {}

/* #024 0x02061CD4, 4 original instruction bytes, empty */
void st_ov000_02061CD4(void) {}

/* #025 0x02061CD8, 4 original instruction bytes, empty */
void st_ov000_02061CD8(void) {}

/* #026 0x02061CDC, 4 original instruction bytes, empty */
void st_ov000_02061CDC(void) {}

/* #027 0x02062DD8, 4 original instruction bytes, empty */
void st_ov000_02062DD8(void) {}

/* #028 0x020647D4, 4 original instruction bytes, empty */
void st_ov000_020647D4(void) {}

/* #029 0x02065E84, 4 original instruction bytes, empty */
void st_ov000_02065E84(void) {}

/* #030 0x0206618C, 4 original instruction bytes, empty */
void st_ov000_0206618C(void) {}

/* #031 0x020669CC, 4 original instruction bytes, empty */
void st_ov000_020669CC(void) {}

/* #032 0x020669D8, 4 original instruction bytes, empty */
void st_ov000_020669D8(void) {}

/* #033 0x02067C98, 4 original instruction bytes, empty */
void st_ov000_02067C98(void) {}

/* #034 0x02068680, 4 original instruction bytes, empty */
void st_ov000_02068680(void) {}

/* #035 0x02068698, 4 original instruction bytes, empty */
void st_ov000_02068698(void) {}

/* #036 0x020696A4, 4 original instruction bytes, empty */
void st_ov000_020696A4(void) {}

/* #037 0x0206A830, 4 original instruction bytes, empty */
void st_ov000_0206A830(void) {}

/* #038 0x0206A848, 4 original instruction bytes, empty */
void st_ov000_0206A848(void) {}

/* #039 0x0206D198, 20 original instruction bytes, manual_reconstructed */
unsigned int st_ov000_0206D198(const void *p){const unsigned int*q=*(const unsigned int*const*)p;return q?q[2]:0;}

/* #040 0x02070E74, 4 original instruction bytes, empty */
void st_ov000_02070E74(void) {}

/* #041 0x02073164, 4 original instruction bytes, empty */
void st_ov000_02073164(void) {}

/* #042 0x0207317C, 4 original instruction bytes, empty */
void st_ov000_0207317C(void) {}

/* #043 0x02073188, 20 original instruction bytes, manual_reconstructed */
void st_ov000_02073188(void *p){volatile unsigned char*q=(volatile unsigned char*)p;q[4]=0;q[5]=0;*(volatile unsigned int*)(q+8)=0;}

/* #044 0x0207319C, 4 original instruction bytes, empty */
void st_ov000_0207319C(void) {}

/* #045 0x020731A0, 4 original instruction bytes, empty */
void st_ov000_020731A0(void) {}

/* #046 0x020731B8, 4 original instruction bytes, empty */
void st_ov000_020731B8(void) {}

/* #047 0x020731BC, 4 original instruction bytes, empty */
void st_ov000_020731BC(void) {}

/* #048 0x020731C0, 4 original instruction bytes, empty */
void st_ov000_020731C0(void) {}

/* #049 0x020731C4, 4 original instruction bytes, empty */
void st_ov000_020731C4(void) {}

/* #050 0x02078D2C, 4 original instruction bytes, empty */
void st_ov000_02078D2C(void) {}

/* #051 0x02078D64, 4 original instruction bytes, empty */
void st_ov000_02078D64(void) {}

/* #052 0x02079324, 4 original instruction bytes, empty */
void st_ov000_02079324(void) {}

/* #053 0x0207933C, 4 original instruction bytes, empty */
void st_ov000_0207933C(void) {}

/* #054 0x02079340, 4 original instruction bytes, empty */
void st_ov000_02079340(void) {}

/* #055 0x02079344, 4 original instruction bytes, empty */
void st_ov000_02079344(void) {}

/* #056 0x02079348, 4 original instruction bytes, empty */
void st_ov000_02079348(void) {}

/* #057 0x0207934C, 4 original instruction bytes, empty */
void st_ov000_0207934C(void) {}

/* #058 0x02079350, 4 original instruction bytes, empty */
void st_ov000_02079350(void) {}

/* #059 0x0207B740, 16 original instruction bytes, manual_reconstructed */
void st_ov000_0207B740(void *p){++*(volatile unsigned short*)((unsigned char*)p+8);}

/* #060 0x0207BB14, 16 original instruction bytes, manual_reconstructed */
void st_ov000_0207BB14(unsigned int *p){p[0]=0;p[1]=0;}

/* #061 0x0207C018, 4 original instruction bytes, empty */
void st_ov000_0207C018(void) {}

/* #062 0x0207C030, 4 original instruction bytes, empty */
void st_ov000_0207C030(void) {}

/* #063 0x0207E9BC, 20 original instruction bytes, manual_reconstructed */
void st_ov000_0207E9BC(unsigned int *p){p[0]=0;p[1]=0;p[2]=0;}

/* #064 0x0207EEB4, 4 original instruction bytes, empty */
void st_ov000_0207EEB4(void) {}

/* #065 0x0207F508, 20 original instruction bytes, manual_reconstructed */
void st_ov000_0207F508(void *p){volatile short*q=(volatile short*)p;q[9]=-1;q[10]=-1;q[11]=-1;}

/* #066 0x0207FD44, 4 original instruction bytes, empty */
void st_ov000_0207FD44(void) {}

/* #067 0x0207FD48, 4 original instruction bytes, empty */
void st_ov000_0207FD48(void) {}

/* #068 0x0207FDAC, 4 original instruction bytes, empty */
void st_ov000_0207FDAC(void) {}

/* #069 0x020810E8, 4 original instruction bytes, empty */
void st_ov000_020810E8(void) {}

/* #070 0x02081168, 4 original instruction bytes, empty */
void st_ov000_02081168(void) {}

/* #071 0x02081D8C, 4 original instruction bytes, empty */
void st_ov000_02081D8C(void) {}

/* #072 0x02082364, 4 original instruction bytes, empty */
void st_ov000_02082364(void) {}

/* #073 0x02089920, 4 original instruction bytes, empty */
void st_ov000_02089920(void) {}

/* #074 0x0208A13C, 16 original instruction bytes, manual_reconstructed */
void st_ov000_0208A13C(void*p,unsigned int n){*(unsigned int*)p=n;((unsigned char*)p)[4]=0;}

/* #075 0x0208F900, 4 original instruction bytes, empty */
void st_ov000_0208F900(void) {}

/* #076 0x0208F918, 4 original instruction bytes, empty */
void st_ov000_0208F918(void) {}

/* #077 0x02090810, 4 original instruction bytes, empty */
void st_ov000_02090810(void) {}

/* #078 0x02090814, 4 original instruction bytes, empty */
void st_ov000_02090814(void) {}

/* #079 0x02096D10, 4 original instruction bytes, empty */
void st_ov000_02096D10(void) {}

/* #080 0x02097864, 4 original instruction bytes, empty */
void st_ov000_02097864(void) {}

/* #081 0x02097868, 4 original instruction bytes, empty */
void st_ov000_02097868(void) {}

/* #082 0x0209786C, 4 original instruction bytes, empty */
void st_ov000_0209786C(void) {}

/* #083 0x020984C4, 4 original instruction bytes, empty */
void st_ov000_020984C4(void) {}

/* #084 0x020984DC, 4 original instruction bytes, empty */
void st_ov000_020984DC(void) {}

/* #085 0x02098504, 4 original instruction bytes, empty */
void st_ov000_02098504(void) {}

/* #086 0x02098508, 4 original instruction bytes, empty */
void st_ov000_02098508(void) {}

/* #087 0x0209850C, 4 original instruction bytes, empty */
void st_ov000_0209850C(void) {}

/* #088 0x02098510, 4 original instruction bytes, empty */
void st_ov000_02098510(void) {}

/* #089 0x02098514, 4 original instruction bytes, empty */
void st_ov000_02098514(void) {}

/* #090 0x02098518, 4 original instruction bytes, empty */
void st_ov000_02098518(void) {}

/* #091 0x02099A60, 16 original instruction bytes, manual_reconstructed */
void st_ov000_02099A60(void*p){volatile unsigned short*q=(volatile unsigned short*)p;q[5]=0;q[4]=0;}

/* #092 0x0209AFA4, 4 original instruction bytes, empty */
void st_ov000_0209AFA4(void) {}

/* #093 0x0209C9F0, 4 original instruction bytes, empty */
void st_ov000_0209C9F0(void) {}

/* #094 0x0209C9F4, 4 original instruction bytes, empty */
void st_ov000_0209C9F4(void) {}

/* #095 0x0209C9F8, 4 original instruction bytes, empty */
void st_ov000_0209C9F8(void) {}

/* #096 0x0209CB98, 4 original instruction bytes, empty */
void st_ov000_0209CB98(void) {}

/* #097 0x0209CB9C, 4 original instruction bytes, empty */
void st_ov000_0209CB9C(void) {}

/* #098 0x0209D030, 4 original instruction bytes, empty */
void st_ov000_0209D030(void) {}

/* #099 0x0209D0E8, 4 original instruction bytes, empty */
void st_ov000_0209D0E8(void) {}

/* #100 0x0209D100, 4 original instruction bytes, empty */
void st_ov000_0209D100(void) {}

/* #101 0x0209D10C, 4 original instruction bytes, empty */
void st_ov000_0209D10C(void) {}

/* #102 0x0209D220, 8 original instruction bytes, return_constant */
unsigned int st_ov000_0209D220(void) { return 1u; }

/* #103 0x0209D228, 4 original instruction bytes, empty */
void st_ov000_0209D228(void) {}

/* #104 0x0209D238, 8 original instruction bytes, return_constant */
unsigned int st_ov000_0209D238(void) { return 0u; }

/* #105 0x0209DAB4, 4 original instruction bytes, empty */
void st_ov000_0209DAB4(void) {}

/* #106 0x0209DAC4, 8 original instruction bytes, return_constant */
unsigned int st_ov000_0209DAC4(void) { return 1u; }

/* #107 0x0209DBC8, 8 original instruction bytes, return_constant */
unsigned int st_ov000_0209DBC8(void) { return 0u; }

/* #108 0x0209DBD0, 8 original instruction bytes, return_constant */
unsigned int st_ov000_0209DBD0(void) { return 0u; }

/* #109 0x0209DCD0, 4 original instruction bytes, empty */
void st_ov000_0209DCD0(void) {}

/* #110 0x020A2668, 4 original instruction bytes, empty */
void st_ov000_020A2668(void) {}

/* #111 0x020A2968, 8 original instruction bytes, return_constant */
unsigned int st_ov000_020A2968(void) { return 12u; }

/* #112 0x020A29B4, 8 original instruction bytes, return_constant */
unsigned int st_ov000_020A29B4(void) { return 13u; }

/* #113 0x020A2FC4, 8 original instruction bytes, return_constant */
unsigned int st_ov000_020A2FC4(void) { return 12u; }

/* #114 0x020A3010, 8 original instruction bytes, return_constant */
unsigned int st_ov000_020A3010(void) { return 13u; }

/* #115 0x020A3964, 8 original instruction bytes, return_constant */
unsigned int st_ov000_020A3964(void) { return 16u; }

/* #116 0x020A396C, 8 original instruction bytes, return_constant */
unsigned int st_ov000_020A396C(void) { return 7u; }

/* #117 0x020A4710, 8 original instruction bytes, return_constant */
unsigned int st_ov000_020A4710(void) { return 5u; }

/* #118 0x020A4C14, 16 original instruction bytes, manual_reconstructed */
void st_ov000_020A4C14(void*p){volatile unsigned char*q=(volatile unsigned char*)p;q[452]=0;q[704]=0;}

/* #119 0x020A4E3C, 16 original instruction bytes, manual_reconstructed */
void st_ov000_020A4E3C(volatile unsigned int*p){p[3]=0;p[9]=0;}

/* #120 0x020A4E6C, 16 original instruction bytes, manual_reconstructed */
void st_ov000_020A4E6C(volatile unsigned int*p){p[3]=0;p[9]=0;}

/* #121 0x020A50F8, 4 original instruction bytes, empty */
void st_ov000_020A50F8(void) {}

/* #122 0x020A514C, 4 original instruction bytes, empty */
void st_ov000_020A514C(void) {}

/* #123 0x020A5150, 4 original instruction bytes, empty */
void st_ov000_020A5150(void) {}

/* #124 0x020A5154, 4 original instruction bytes, empty */
void st_ov000_020A5154(void) {}

/* #125 0x020A5164, 4 original instruction bytes, empty */
void st_ov000_020A5164(void) {}

/* #126 0x020A5168, 4 original instruction bytes, empty */
void st_ov000_020A5168(void) {}

/* #127 0x020A566C, 4 original instruction bytes, empty */
void st_ov000_020A566C(void) {}

/* #128 0x020A5678, 8 original instruction bytes, return_constant */
unsigned int st_ov000_020A5678(void) { return 0u; }

/* #129 0x020A5680, 8 original instruction bytes, return_constant */
unsigned int st_ov000_020A5680(void) { return 0u; }

/* #130 0x020A5764, 20 original instruction bytes, manual_reconstructed */
void st_ov000_020A5764(volatile unsigned int*p){p[0]=0;p[1]=0;p[2]=0;}

/* #131 0x020A5778, 4 original instruction bytes, empty */
void st_ov000_020A5778(void) {}

/* #132 0x020A5A68, 8 original instruction bytes, return_constant */
unsigned int st_ov000_020A5A68(void) { return 0u; }

/* #133 0x020A5D70, 4 original instruction bytes, empty */
void st_ov000_020A5D70(void) {}

/* #134 0x020A5F1C, 4 original instruction bytes, empty */
void st_ov000_020A5F1C(void) {}

/* #135 0x020A5F20, 4 original instruction bytes, empty */
void st_ov000_020A5F20(void) {}

/* #136 0x020A5F24, 4 original instruction bytes, empty */
void st_ov000_020A5F24(void) {}

/* #137 0x020A5F28, 4 original instruction bytes, empty */
void st_ov000_020A5F28(void) {}

/* #138 0x020A5F2C, 4 original instruction bytes, empty */
void st_ov000_020A5F2C(void) {}

/* #139 0x020A5F30, 4 original instruction bytes, empty */
void st_ov000_020A5F30(void) {}

/* #140 0x020A6168, 16 original instruction bytes, manual_reconstructed */
void st_ov000_020A6168(volatile unsigned int*p){p[0]=0;p[1]=0;}

/* #141 0x020A6180, 4 original instruction bytes, empty */
void st_ov000_020A6180(void) {}

/* #142 0x020A6190, 8 original instruction bytes, return_constant */
unsigned int st_ov000_020A6190(void) { return 2u; }

/* #143 0x020A62E8, 4 original instruction bytes, empty */
void st_ov000_020A62E8(void) {}

/* #144 0x020A6458, 16 original instruction bytes, manual_reconstructed */
void st_ov000_020A6458(void*p,const void*q){const unsigned int*r=*(const unsigned int*const*)((const unsigned char*)q+8);*(unsigned int*)((unsigned char*)p+20)=*r;}

/* #145 0x020A6670, 4 original instruction bytes, empty */
void st_ov000_020A6670(void) {}

/* #146 0x020A6B6C, 4 original instruction bytes, empty */
void st_ov000_020A6B6C(void) {}

/* #147 0x020A7738, 8 original instruction bytes, return_constant */
unsigned int st_ov000_020A7738(void) { return 6u; }

/* #148 0x020A7740, 8 original instruction bytes, return_constant */
unsigned int st_ov000_020A7740(void) { return 5u; }

/* #149 0x020A8434, 8 original instruction bytes, return_constant */
unsigned int st_ov000_020A8434(void) { return 1u; }

/* #150 0x020A8AE4, 20 original instruction bytes, manual_reconstructed */
unsigned int st_ov000_020A8AE4(const void *p){const unsigned int *q=*(const unsigned int*const*)((const unsigned char*)p+32);return q? q[0] : 0u;}

/* #151 0x020A8AF8, 20 original instruction bytes, manual_reconstructed */
unsigned int st_ov000_020A8AF8(const void *p){const unsigned int *q=*(const unsigned int*const*)((const unsigned char*)p+32);return q? q[1] : 0u;}

/* #152 0x020A8B0C, 20 original instruction bytes, manual_reconstructed */
unsigned int st_ov000_020A8B0C(const void *p){const unsigned int *q=*(const unsigned int*const*)((const unsigned char*)p+32);return q? q[3] : 0u;}

/* #153 0x020A8B20, 20 original instruction bytes, manual_reconstructed */
unsigned int st_ov000_020A8B20(const void *p){const unsigned int *q=*(const unsigned int*const*)((const unsigned char*)p+32);return q? q[4] : 0u;}

/* #154 0x020A8DF4, 4 original instruction bytes, empty */
void st_ov000_020A8DF4(void) {}

/* #155 0x020A8FA8, 8 original instruction bytes, return_constant */
unsigned int st_ov000_020A8FA8(void) { return 1u; }

/* #156 0x020A8FB0, 8 original instruction bytes, return_constant */
unsigned int st_ov000_020A8FB0(void) { return 1u; }

/* #157 0x020A8FB8, 8 original instruction bytes, return_constant */
unsigned int st_ov000_020A8FB8(void) { return 123u; }

/* #158 0x020A91A0, 4 original instruction bytes, empty */
void st_ov000_020A91A0(void) {}

/* #159 0x020A91F4, 8 original instruction bytes, return_constant */
unsigned int st_ov000_020A91F4(void) { return 1u; }

/* #160 0x020A9204, 8 original instruction bytes, return_constant */
unsigned int st_ov000_020A9204(void) { return 1u; }

/* #161 0x020A9294, 4 original instruction bytes, empty */
void st_ov000_020A9294(void) {}

/* #162 0x020A9298, 4 original instruction bytes, empty */
void st_ov000_020A9298(void) {}

/* #163 0x020A9628, 4 original instruction bytes, empty */
void st_ov000_020A9628(void) {}

/* #164 0x020A9850, 8 original instruction bytes, return_constant */
unsigned int st_ov000_020A9850(void) { return 1u; }

/* #165 0x020A9944, 4 original instruction bytes, empty */
void st_ov000_020A9944(void) {}
