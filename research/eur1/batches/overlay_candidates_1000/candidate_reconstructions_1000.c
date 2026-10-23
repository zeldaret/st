/* Spirit Tracks EUR Rev 1, ARM9 overlay code: 1,000 C test snippets. */
/* EVERY C body emits the same machine-code span as the local original ROM under Clang. */
/* WARNING: Byte equality does NOT guarantee these are 1,000 separate functions. */
/* Entries tagged post_return_candidate or unconfirmed_possible_epilogue */
/* can be control-flow blocks INSIDE larger original DS functions. */
/* CodeWarrior matching, ABI type recovery and DS source integration NOT DONE. */
#include <stdint.h>
#include <stddef.h>
/* #0001 Overlay 000 0x020575D0: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov000_020575D0(void) { return 0u; }
/* #0002 Overlay 000 0x020575F8: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov000_020575F8(void) { return 0u; }
/* #0003 Overlay 000 0x02057D64: write_word; post_return_candidate */
void st_ov000_02057D64(void* p, unsigned int value) { *(unsigned int*)((unsigned char*)p+60) = value; }
/* #0004 Overlay 000 0x02059D24: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov000_02059D24(void) { return 1u; }
/* #0005 Overlay 000 0x02059D64: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov000_02059D64(void) { return 0u; }
/* #0006 Overlay 000 0x0205AAD4: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov000_0205AAD4(void) { return 1u; }
/* #0007 Overlay 000 0x0205AB50: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov000_0205AB50(void) { return 0u; }
/* #0008 Overlay 000 0x0205B21C: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov000_0205B21C(void) { return 1u; }
/* #0009 Overlay 000 0x0205B670: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov000_0205B670(void) { return 0u; }
/* #0010 Overlay 000 0x0205C7FC: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov000_0205C7FC(void) { return 4u; }
/* #0011 Overlay 000 0x0205C874: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov000_0205C874(void) { return 4u; }
/* #0012 Overlay 000 0x0205C8CC: set_word; post_return_candidate */
void st_ov000_0205C8CC(void *p) { *(unsigned int*)((unsigned char*)p+8) = 4096u; }
/* #0013 Overlay 000 0x0205C8D8: set_word; post_return_candidate */
void st_ov000_0205C8D8(void *p) { *(unsigned int*)((unsigned char*)p+0) = 4096u; }
/* #0014 Overlay 000 0x0205D160: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov000_0205D160(void) { return 0u; }
/* #0015 Overlay 000 0x0205D168: return_constant; post_return_candidate */
unsigned int st_ov000_0205D168(void) { return 1u; }
/* #0016 Overlay 000 0x0205D21C: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov000_0205D21C(void) { return 1u; }
/* #0017 Overlay 000 0x0205D224: return_constant; post_return_candidate */
unsigned int st_ov000_0205D224(void) { return 0u; }
/* #0018 Overlay 000 0x0205D2EC: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov000_0205D2EC(void) { return 1u; }
/* #0019 Overlay 000 0x0205D2F4: return_constant; post_return_candidate */
unsigned int st_ov000_0205D2F4(void) { return 0u; }
/* #0020 Overlay 000 0x02065B80: write_word; post_return_candidate */
void st_ov000_02065B80(void* p, unsigned int value) { *(unsigned int*)((unsigned char*)p+148) = value; }
/* #0021 Overlay 000 0x0206968C: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov000_0206968C(void) { return 1u; }
/* #0022 Overlay 000 0x02069694: return_constant; post_return_candidate */
unsigned int st_ov000_02069694(void) { return 0u; }
/* #0023 Overlay 000 0x0206969C: return_constant; post_return_candidate */
unsigned int st_ov000_0206969C(void) { return 0u; }
/* #0024 Overlay 000 0x0206E7E0: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov000_0206E7E0(void) { return 0u; }
/* #0025 Overlay 000 0x02070328: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov000_02070328(void) { return 255u; }
/* #0026 Overlay 000 0x020703A4: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov000_020703A4(void) { return 0u; }
/* #0027 Overlay 000 0x0207060C: return_constant; post_return_candidate */
unsigned int st_ov000_0207060C(void) { return 0u; }
/* #0028 Overlay 000 0x020743E8: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov000_020743E8(void) { return 0u; }
/* #0029 Overlay 000 0x020743F0: return_constant; post_return_candidate */
unsigned int st_ov000_020743F0(void) { return 1u; }
/* #0030 Overlay 000 0x02077940: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov000_02077940(void) { return 0u; }
/* #0031 Overlay 000 0x0207E26C: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov000_0207E26C(void) { return 1u; }
/* #0032 Overlay 000 0x0207FCF4: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov000_0207FCF4(void) { return 1u; }
/* #0033 Overlay 000 0x02080684: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov000_02080684(void) { return 0u; }
/* #0034 Overlay 000 0x020807C0: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov000_020807C0(void) { return 0u; }
/* #0035 Overlay 000 0x02081B94: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov000_02081B94(void) { return 0u; }
/* #0036 Overlay 000 0x020843E4: return_constant; post_return_candidate */
unsigned int st_ov000_020843E4(void) { return 0u; }
/* #0037 Overlay 000 0x02085A34: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov000_02085A34(void) { return 1u; }
/* #0038 Overlay 000 0x02085A3C: return_constant; post_return_candidate */
unsigned int st_ov000_02085A3C(void) { return 0u; }
/* #0039 Overlay 000 0x02088824: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov000_02088824(void) { return 1u; }
/* #0040 Overlay 000 0x0208882C: return_constant; post_return_candidate */
unsigned int st_ov000_0208882C(void) { return 0u; }
/* #0041 Overlay 000 0x020888CC: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov000_020888CC(void) { return 0u; }
/* #0042 Overlay 000 0x0208DB48: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov000_0208DB48(void) { return 1u; }
/* #0043 Overlay 000 0x0208DB50: return_constant; post_return_candidate */
unsigned int st_ov000_0208DB50(void) { return 0u; }
/* #0044 Overlay 000 0x020907D8: return_constant; post_return_candidate */
unsigned int st_ov000_020907D8(void) { return 0u; }
/* #0045 Overlay 000 0x02091F50: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov000_02091F50(void) { return 0u; }
/* #0046 Overlay 000 0x02093190: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov000_02093190(void) { return 0u; }
/* #0047 Overlay 000 0x020936E4: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov000_020936E4(void) { return 0u; }
/* #0048 Overlay 000 0x0209379C: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov000_0209379C(void) { return 0u; }
/* #0049 Overlay 000 0x020937D8: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov000_020937D8(void) { return 0u; }
/* #0050 Overlay 000 0x02093AFC: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov000_02093AFC(void) { return 0u; }
/* #0051 Overlay 000 0x02093B24: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov000_02093B24(void) { return 0u; }
/* #0052 Overlay 000 0x02093BAC: return_constant; post_return_candidate */
unsigned int st_ov000_02093BAC(void) { return 0u; }
/* #0053 Overlay 000 0x020983A4: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov000_020983A4(void) { return 1u; }
/* #0054 Overlay 000 0x02098678: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov000_02098678(void) { return 1u; }
/* #0055 Overlay 000 0x020997AC: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov000_020997AC(void) { return 0u; }
/* #0056 Overlay 000 0x0209BF98: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov000_0209BF98(void) { return 1u; }
/* #0057 Overlay 000 0x0209BFA0: return_constant; post_return_candidate */
unsigned int st_ov000_0209BFA0(void) { return 0u; }
/* #0058 Overlay 000 0x0209F9A4: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov000_0209F9A4(void) { return 0u; }
/* #0059 Overlay 000 0x0209F9E0: return_not_constant; unconfirmed_possible_epilogue */
unsigned int st_ov000_0209F9E0(void) { return 4294967295u; }
/* #0060 Overlay 000 0x020A08E4: set_word; post_return_candidate */
void st_ov000_020A08E4(void *p) { *(unsigned int*)((unsigned char*)p+412) = 65536u; }
/* #0061 Overlay 000 0x020A08F0: set_word; post_return_candidate */
void st_ov000_020A08F0(void *p) { *(unsigned int*)((unsigned char*)p+412) = 131072u; }
/* #0062 Overlay 000 0x020A08FC: set_word; post_return_candidate */
void st_ov000_020A08FC(void *p) { *(unsigned int*)((unsigned char*)p+412) = 262144u; }
/* #0063 Overlay 000 0x020A0908: set_word; post_return_candidate */
void st_ov000_020A0908(void *p) { *(unsigned int*)((unsigned char*)p+412) = 524288u; }
/* #0064 Overlay 000 0x020A0914: set_word; post_return_candidate */
void st_ov000_020A0914(void *p) { *(unsigned int*)((unsigned char*)p+412) = 1048576u; }
/* #0065 Overlay 000 0x020A0920: set_word; post_return_candidate */
void st_ov000_020A0920(void *p) { *(unsigned int*)((unsigned char*)p+412) = 2097152u; }
/* #0066 Overlay 000 0x020A092C: set_word; post_return_candidate */
void st_ov000_020A092C(void *p) { *(unsigned int*)((unsigned char*)p+412) = 4194304u; }
/* #0067 Overlay 000 0x020A2940: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov000_020A2940(void) { return 4u; }
/* #0068 Overlay 000 0x020A2948: return_constant; post_return_candidate */
unsigned int st_ov000_020A2948(void) { return 5u; }
/* #0069 Overlay 000 0x020A2950: return_constant; post_return_candidate */
unsigned int st_ov000_020A2950(void) { return 6u; }
/* #0070 Overlay 000 0x020A2958: return_constant; post_return_candidate */
unsigned int st_ov000_020A2958(void) { return 7u; }
/* #0071 Overlay 000 0x020A2960: return_constant; post_return_candidate */
unsigned int st_ov000_020A2960(void) { return 0u; }
/* #0072 Overlay 000 0x020A298C: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov000_020A298C(void) { return 8u; }
/* #0073 Overlay 000 0x020A2994: return_constant; post_return_candidate */
unsigned int st_ov000_020A2994(void) { return 9u; }
/* #0074 Overlay 000 0x020A299C: return_constant; post_return_candidate */
unsigned int st_ov000_020A299C(void) { return 10u; }
/* #0075 Overlay 000 0x020A29A4: return_constant; post_return_candidate */
unsigned int st_ov000_020A29A4(void) { return 11u; }
/* #0076 Overlay 000 0x020A29AC: return_constant; post_return_candidate */
unsigned int st_ov000_020A29AC(void) { return 0u; }
/* #0077 Overlay 000 0x020A29D8: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov000_020A29D8(void) { return 0u; }
/* #0078 Overlay 000 0x020A29E0: return_constant; post_return_candidate */
unsigned int st_ov000_020A29E0(void) { return 1u; }
/* #0079 Overlay 000 0x020A29E8: return_constant; post_return_candidate */
unsigned int st_ov000_020A29E8(void) { return 2u; }
/* #0080 Overlay 000 0x020A29F0: return_constant; post_return_candidate */
unsigned int st_ov000_020A29F0(void) { return 3u; }
/* #0081 Overlay 000 0x020A29F8: return_constant; post_return_candidate */
unsigned int st_ov000_020A29F8(void) { return 0u; }
/* #0082 Overlay 000 0x020A2A1C: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov000_020A2A1C(void) { return 1u; }
/* #0083 Overlay 000 0x020A2A24: return_constant; post_return_candidate */
unsigned int st_ov000_020A2A24(void) { return 2u; }
/* #0084 Overlay 000 0x020A2A2C: return_constant; post_return_candidate */
unsigned int st_ov000_020A2A2C(void) { return 3u; }
/* #0085 Overlay 000 0x020A2A34: return_constant; post_return_candidate */
unsigned int st_ov000_020A2A34(void) { return 4u; }
/* #0086 Overlay 000 0x020A2A3C: return_constant; post_return_candidate */
unsigned int st_ov000_020A2A3C(void) { return 0u; }
/* #0087 Overlay 000 0x020A2F9C: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov000_020A2F9C(void) { return 4u; }
/* #0088 Overlay 000 0x020A2FA4: return_constant; post_return_candidate */
unsigned int st_ov000_020A2FA4(void) { return 5u; }
/* #0089 Overlay 000 0x020A2FAC: return_constant; post_return_candidate */
unsigned int st_ov000_020A2FAC(void) { return 6u; }
/* #0090 Overlay 000 0x020A2FB4: return_constant; post_return_candidate */
unsigned int st_ov000_020A2FB4(void) { return 7u; }
/* #0091 Overlay 000 0x020A2FBC: return_constant; post_return_candidate */
unsigned int st_ov000_020A2FBC(void) { return 0u; }
/* #0092 Overlay 000 0x020A2FE8: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov000_020A2FE8(void) { return 8u; }
/* #0093 Overlay 000 0x020A2FF0: return_constant; post_return_candidate */
unsigned int st_ov000_020A2FF0(void) { return 9u; }
/* #0094 Overlay 000 0x020A2FF8: return_constant; post_return_candidate */
unsigned int st_ov000_020A2FF8(void) { return 10u; }
/* #0095 Overlay 000 0x020A3000: return_constant; post_return_candidate */
unsigned int st_ov000_020A3000(void) { return 11u; }
/* #0096 Overlay 000 0x020A3008: return_constant; post_return_candidate */
unsigned int st_ov000_020A3008(void) { return 0u; }
/* #0097 Overlay 000 0x020A3034: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov000_020A3034(void) { return 0u; }
/* #0098 Overlay 000 0x020A303C: return_constant; post_return_candidate */
unsigned int st_ov000_020A303C(void) { return 1u; }
/* #0099 Overlay 000 0x020A3044: return_constant; post_return_candidate */
unsigned int st_ov000_020A3044(void) { return 2u; }
/* #0100 Overlay 000 0x020A304C: return_constant; post_return_candidate */
unsigned int st_ov000_020A304C(void) { return 3u; }
/* #0101 Overlay 000 0x020A3054: return_constant; post_return_candidate */
unsigned int st_ov000_020A3054(void) { return 0u; }
/* #0102 Overlay 000 0x020A3078: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov000_020A3078(void) { return 1u; }
/* #0103 Overlay 000 0x020A3080: return_constant; post_return_candidate */
unsigned int st_ov000_020A3080(void) { return 2u; }
/* #0104 Overlay 000 0x020A3088: return_constant; post_return_candidate */
unsigned int st_ov000_020A3088(void) { return 3u; }
/* #0105 Overlay 000 0x020A3090: return_constant; post_return_candidate */
unsigned int st_ov000_020A3090(void) { return 4u; }
/* #0106 Overlay 000 0x020A3098: return_constant; post_return_candidate */
unsigned int st_ov000_020A3098(void) { return 0u; }
/* #0107 Overlay 000 0x020A30D0: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov000_020A30D0(void) { return 0u; }
/* #0108 Overlay 000 0x020A4D20: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov000_020A4D20(void) { return 1u; }
/* #0109 Overlay 000 0x020A86F0: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov000_020A86F0(void) { return 0u; }
/* #0110 Overlay 000 0x020A8940: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov000_020A8940(void) { return 0u; }
/* #0111 Overlay 000 0x020A896C: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov000_020A896C(void) { return 0u; }
/* #0112 Overlay 000 0x020A89C0: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov000_020A89C0(void) { return 1u; }
/* #0113 Overlay 000 0x020A8A54: return_constant; post_return_candidate */
unsigned int st_ov000_020A8A54(void) { return 0u; }
/* #0114 Overlay 000 0x020A9C70: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov000_020A9C70(void) { return 0u; }
/* #0115 Overlay 000 0x020A9CDC: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov000_020A9CDC(void) { return 0u; }
/* #0116 Overlay 001 0x020C17D4: return_constant; post_return_candidate */
unsigned int st_ov001_020C17D4(void) { return 0u; }
/* #0117 Overlay 003 0x020B754C: empty; local_function_pointer */
void st_ov003_020B754C(void) {}
/* #0118 Overlay 003 0x020B7864: empty; local_function_pointer */
void st_ov003_020B7864(void) {}
/* #0119 Overlay 003 0x020B7B60: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov003_020B7B60(void) { return 0u; }
/* #0120 Overlay 003 0x020B7BD0: empty; local_function_pointer */
void st_ov003_020B7BD0(void) {}
/* #0121 Overlay 003 0x020B8348: empty; local_function_pointer */
void st_ov003_020B8348(void) {}
/* #0122 Overlay 003 0x020B834C: empty; local_function_pointer */
void st_ov003_020B834C(void) {}
/* #0123 Overlay 003 0x020B8584: empty; local_function_pointer */
void st_ov003_020B8584(void) {}
/* #0124 Overlay 003 0x020B87C0: empty; local_function_pointer */
void st_ov003_020B87C0(void) {}
/* #0125 Overlay 003 0x020B87C4: empty; local_function_pointer */
void st_ov003_020B87C4(void) {}
/* #0126 Overlay 003 0x020B8970: return_constant; local_function_pointer */
unsigned int st_ov003_020B8970(void) { return 0u; }
/* #0127 Overlay 004 0x020B8060: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov004_020B8060(void) { return 1u; }
/* #0128 Overlay 004 0x020B80DC: return_not_constant; unconfirmed_possible_epilogue */
unsigned int st_ov004_020B80DC(void) { return 4294967295u; }
/* #0129 Overlay 005 0x020B7284: empty; local_function_pointer */
void st_ov005_020B7284(void) {}
/* #0130 Overlay 007 0x020B6684: empty; local_function_pointer */
void st_ov007_020B6684(void) {}
/* #0131 Overlay 007 0x020B6688: empty; local_function_pointer */
void st_ov007_020B6688(void) {}
/* #0132 Overlay 007 0x020B66A0: empty; local_function_pointer */
void st_ov007_020B66A0(void) {}
/* #0133 Overlay 007 0x020B66D4: empty; local_function_pointer */
void st_ov007_020B66D4(void) {}
/* #0134 Overlay 007 0x020B676C: empty; local_function_pointer */
void st_ov007_020B676C(void) {}
/* #0135 Overlay 007 0x020B6C04: empty; local_function_pointer */
void st_ov007_020B6C04(void) {}
/* #0136 Overlay 007 0x020B7050: empty; local_function_pointer */
void st_ov007_020B7050(void) {}
/* #0137 Overlay 007 0x020B7388: empty; local_function_pointer */
void st_ov007_020B7388(void) {}
/* #0138 Overlay 009 0x020B6770: read_byte; post_return_candidate */
unsigned int st_ov009_020B6770(const void* p) { return *((const unsigned char*)p+371); }
/* #0139 Overlay 009 0x020B6794: return_constant; post_return_candidate */
unsigned int st_ov009_020B6794(void) { return 0u; }
/* #0140 Overlay 009 0x020B679C: write_byte; post_return_candidate */
void st_ov009_020B679C(void* p, unsigned int value) { ((unsigned char*)p)[372] = (unsigned char)value; }
/* #0141 Overlay 011 0x020B7744: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov011_020B7744(void) { return 0u; }
/* #0142 Overlay 011 0x020B8E54: return_not_constant; unconfirmed_possible_epilogue */
unsigned int st_ov011_020B8E54(void) { return 4294967295u; }
/* #0143 Overlay 011 0x020B8E88: return_not_constant; unconfirmed_possible_epilogue */
unsigned int st_ov011_020B8E88(void) { return 4294967295u; }
/* #0144 Overlay 015 0x020B6D30: return_constant; post_return_candidate */
unsigned int st_ov015_020B6D30(void) { return 0u; }
/* #0145 Overlay 015 0x020B73D4: empty; local_function_pointer */
void st_ov015_020B73D4(void) {}
/* #0146 Overlay 016 0x020B75BC: empty; local_function_pointer */
void st_ov016_020B75BC(void) {}
/* #0147 Overlay 017 0x020C3A38: return_constant; local_function_pointer */
unsigned int st_ov017_020C3A38(void) { return 1u; }
/* #0148 Overlay 018 0x020C4EA8: empty; local_function_pointer */
void st_ov018_020C4EA8(void) {}
/* #0149 Overlay 019 0x020CB2A0: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov019_020CB2A0(void) { return 0u; }
/* #0150 Overlay 019 0x020CB618: empty; local_function_pointer */
void st_ov019_020CB618(void) {}
/* #0151 Overlay 019 0x020CDC9C: empty; local_function_pointer */
void st_ov019_020CDC9C(void) {}
/* #0152 Overlay 019 0x020CE778: return_constant; post_return_candidate */
unsigned int st_ov019_020CE778(void) { return 0u; }
/* #0153 Overlay 019 0x020CE7C8: return_constant; post_return_candidate */
unsigned int st_ov019_020CE7C8(void) { return 0u; }
/* #0154 Overlay 019 0x020CE804: return_constant; post_return_candidate */
unsigned int st_ov019_020CE804(void) { return 0u; }
/* #0155 Overlay 019 0x020CEAAC: empty; local_function_pointer */
void st_ov019_020CEAAC(void) {}
/* #0156 Overlay 019 0x020CEAB0: empty; local_function_pointer */
void st_ov019_020CEAB0(void) {}
/* #0157 Overlay 019 0x020CFD8C: empty; local_function_pointer */
void st_ov019_020CFD8C(void) {}
/* #0158 Overlay 019 0x020D011C: empty; local_function_pointer */
void st_ov019_020D011C(void) {}
/* #0159 Overlay 020 0x020C6E70: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov020_020C6E70(void) { return 1u; }
/* #0160 Overlay 020 0x020C7468: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov020_020C7468(void) { return 1u; }
/* #0161 Overlay 020 0x020C7470: return_constant; post_return_candidate */
unsigned int st_ov020_020C7470(void) { return 0u; }
/* #0162 Overlay 020 0x020C813C: return_constant; post_return_candidate */
unsigned int st_ov020_020C813C(void) { return 0u; }
/* #0163 Overlay 020 0x020CDB48: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov020_020CDB48(void) { return 0u; }
/* #0164 Overlay 020 0x020CDB78: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov020_020CDB78(void) { return 0u; }
/* #0165 Overlay 020 0x020CDBA8: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov020_020CDBA8(void) { return 0u; }
/* #0166 Overlay 020 0x020CFB1C: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov020_020CFB1C(void) { return 0u; }
/* #0167 Overlay 020 0x020CFB38: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov020_020CFB38(void) { return 0u; }
/* #0168 Overlay 020 0x020CFB40: return_constant; post_return_candidate */
unsigned int st_ov020_020CFB40(void) { return 1u; }
/* #0169 Overlay 020 0x020D26D8: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov020_020D26D8(void) { return 0u; }
/* #0170 Overlay 020 0x020D3300: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov020_020D3300(void) { return 1u; }
/* #0171 Overlay 020 0x020D331C: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov020_020D331C(void) { return 1u; }
/* #0172 Overlay 020 0x020D3350: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov020_020D3350(void) { return 1u; }
/* #0173 Overlay 020 0x020D3358: return_constant; post_return_candidate */
unsigned int st_ov020_020D3358(void) { return 0u; }
/* #0174 Overlay 020 0x020D3360: return_constant; post_return_candidate */
unsigned int st_ov020_020D3360(void) { return 0u; }
/* #0175 Overlay 020 0x020D3DFC: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov020_020D3DFC(void) { return 0u; }
/* #0176 Overlay 020 0x020D3E04: return_constant; post_return_candidate */
unsigned int st_ov020_020D3E04(void) { return 1u; }
/* #0177 Overlay 020 0x020D5D20: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov020_020D5D20(void) { return 0u; }
/* #0178 Overlay 020 0x020D5D38: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov020_020D5D38(void) { return 0u; }
/* #0179 Overlay 020 0x020D8244: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov020_020D8244(void) { return 0u; }
/* #0180 Overlay 020 0x020D8438: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov020_020D8438(void) { return 1u; }
/* #0181 Overlay 020 0x020D9AB8: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov020_020D9AB8(void) { return 0u; }
/* #0182 Overlay 021 0x020F444C: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov021_020F444C(void) { return 0u; }
/* #0183 Overlay 021 0x020F4490: return_constant; post_return_candidate */
unsigned int st_ov021_020F4490(void) { return 0u; }
/* #0184 Overlay 021 0x020F454C: return_constant; post_return_candidate */
unsigned int st_ov021_020F454C(void) { return 0u; }
/* #0185 Overlay 021 0x020F4630: return_constant; post_return_candidate */
unsigned int st_ov021_020F4630(void) { return 0u; }
/* #0186 Overlay 021 0x020F5E78: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov021_020F5E78(void) { return 1u; }
/* #0187 Overlay 021 0x020F63DC: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov021_020F63DC(void) { return 0u; }
/* #0188 Overlay 021 0x020F8608: return_not_constant; unconfirmed_possible_epilogue */
unsigned int st_ov021_020F8608(void) { return 4294967295u; }
/* #0189 Overlay 021 0x02100524: empty; local_function_pointer */
void st_ov021_02100524(void) {}
/* #0190 Overlay 021 0x02101050: empty; local_function_pointer */
void st_ov021_02101050(void) {}
/* #0191 Overlay 021 0x02102CB0: empty; local_function_pointer */
void st_ov021_02102CB0(void) {}
/* #0192 Overlay 021 0x02103A34: empty; local_function_pointer */
void st_ov021_02103A34(void) {}
/* #0193 Overlay 022 0x020E9F40: empty; local_function_pointer */
void st_ov022_020E9F40(void) {}
/* #0194 Overlay 022 0x020EA0B0: empty; local_function_pointer */
void st_ov022_020EA0B0(void) {}
/* #0195 Overlay 022 0x020EA4D4: empty; local_function_pointer */
void st_ov022_020EA4D4(void) {}
/* #0196 Overlay 022 0x020EAA44: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov022_020EAA44(void) { return 0u; }
/* #0197 Overlay 023 0x020E9F50: empty; local_function_pointer */
void st_ov023_020E9F50(void) {}
/* #0198 Overlay 023 0x020EF0A0: set_word; local_function_pointer */
void st_ov023_020EF0A0(void *p) { *(unsigned int*)((unsigned char*)p+0) = 0u; }
/* #0199 Overlay 023 0x020EF304: empty; local_function_pointer */
void st_ov023_020EF304(void) {}
/* #0200 Overlay 023 0x020EF3D8: set_byte; local_function_pointer */
void st_ov023_020EF3D8(void *p) { ((unsigned char*)p)[4] = 1u; }
/* #0201 Overlay 023 0x020EF3E4: set_byte; local_function_pointer */
void st_ov023_020EF3E4(void *p) { ((unsigned char*)p)[4] = 0u; }
/* #0202 Overlay 023 0x020EF3F0: read_byte; local_function_pointer */
unsigned int st_ov023_020EF3F0(const void* p) { return *((const unsigned char*)p+4); }
/* #0203 Overlay 023 0x020EF3F8: return_constant; local_function_pointer */
unsigned int st_ov023_020EF3F8(void) { return 0u; }
/* #0204 Overlay 023 0x020EF410: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov023_020EF410(void) { return 0u; }
/* #0205 Overlay 023 0x020F1460: empty; local_function_pointer */
void st_ov023_020F1460(void) {}
/* #0206 Overlay 023 0x020F1464: return_constant; local_function_pointer */
unsigned int st_ov023_020F1464(void) { return 1u; }
/* #0207 Overlay 023 0x020F196C: empty; local_function_pointer */
void st_ov023_020F196C(void) {}
/* #0208 Overlay 024 0x020C737C: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov024_020C737C(void) { return 1u; }
/* #0209 Overlay 024 0x020C7384: return_constant; post_return_candidate */
unsigned int st_ov024_020C7384(void) { return 0u; }
/* #0210 Overlay 024 0x020CBAAC: return_constant; post_return_candidate */
unsigned int st_ov024_020CBAAC(void) { return 0u; }
/* #0211 Overlay 024 0x020CBAB4: return_constant; post_return_candidate */
unsigned int st_ov024_020CBAB4(void) { return 0u; }
/* #0212 Overlay 024 0x020CBABC: return_constant; post_return_candidate */
unsigned int st_ov024_020CBABC(void) { return 0u; }
/* #0213 Overlay 024 0x020CBAC4: return_constant; post_return_candidate */
unsigned int st_ov024_020CBAC4(void) { return 0u; }
/* #0214 Overlay 024 0x020CBACC: return_constant; post_return_candidate */
unsigned int st_ov024_020CBACC(void) { return 0u; }
/* #0215 Overlay 024 0x020CD620: read_byte; post_return_candidate */
unsigned int st_ov024_020CD620(const void* p) { return *((const unsigned char*)p+40); }
/* #0216 Overlay 024 0x020CD628: read_byte; post_return_candidate */
unsigned int st_ov024_020CD628(const void* p) { return *((const unsigned char*)p+72); }
/* #0217 Overlay 024 0x020CD630: read_byte; post_return_candidate */
unsigned int st_ov024_020CD630(const void* p) { return *((const unsigned char*)p+48); }
/* #0218 Overlay 024 0x020CD638: return_constant; post_return_candidate */
unsigned int st_ov024_020CD638(void) { return 0u; }
/* #0219 Overlay 024 0x020D0FD0: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov024_020D0FD0(void) { return 1u; }
/* #0220 Overlay 024 0x020D0FD8: return_constant; post_return_candidate */
unsigned int st_ov024_020D0FD8(void) { return 0u; }
/* #0221 Overlay 024 0x020D1B88: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov024_020D1B88(void) { return 2u; }
/* #0222 Overlay 024 0x020D1B90: return_constant; post_return_candidate */
unsigned int st_ov024_020D1B90(void) { return 0u; }
/* #0223 Overlay 024 0x020D1B98: return_constant; post_return_candidate */
unsigned int st_ov024_020D1B98(void) { return 3u; }
/* #0224 Overlay 024 0x020D1BA0: return_constant; post_return_candidate */
unsigned int st_ov024_020D1BA0(void) { return 1u; }
/* #0225 Overlay 024 0x020D1BA8: return_constant; post_return_candidate */
unsigned int st_ov024_020D1BA8(void) { return 4u; }
/* #0226 Overlay 024 0x020D1BB0: return_constant; post_return_candidate */
unsigned int st_ov024_020D1BB0(void) { return 4u; }
/* #0227 Overlay 024 0x020D1D34: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov024_020D1D34(void) { return 1u; }
/* #0228 Overlay 024 0x020D1D3C: return_constant; post_return_candidate */
unsigned int st_ov024_020D1D3C(void) { return 4u; }
/* #0229 Overlay 024 0x020D1D44: return_constant; post_return_candidate */
unsigned int st_ov024_020D1D44(void) { return 16u; }
/* #0230 Overlay 024 0x020D1D4C: return_constant; post_return_candidate */
unsigned int st_ov024_020D1D4C(void) { return 64u; }
/* #0231 Overlay 024 0x020D1D54: return_constant; post_return_candidate */
unsigned int st_ov024_020D1D54(void) { return 0u; }
/* #0232 Overlay 024 0x020D2038: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov024_020D2038(void) { return 1u; }
/* #0233 Overlay 024 0x020D2040: return_constant; post_return_candidate */
unsigned int st_ov024_020D2040(void) { return 16u; }
/* #0234 Overlay 024 0x020D2048: return_constant; post_return_candidate */
unsigned int st_ov024_020D2048(void) { return 64u; }
/* #0235 Overlay 024 0x020D2050: return_constant; post_return_candidate */
unsigned int st_ov024_020D2050(void) { return 4u; }
/* #0236 Overlay 024 0x020D2058: return_constant; post_return_candidate */
unsigned int st_ov024_020D2058(void) { return 128u; }
/* #0237 Overlay 024 0x020D2060: return_constant; post_return_candidate */
unsigned int st_ov024_020D2060(void) { return 2u; }
/* #0238 Overlay 024 0x020D2068: return_constant; post_return_candidate */
unsigned int st_ov024_020D2068(void) { return 32u; }
/* #0239 Overlay 024 0x020D2070: return_constant; post_return_candidate */
unsigned int st_ov024_020D2070(void) { return 8u; }
/* #0240 Overlay 024 0x020D2078: return_constant; post_return_candidate */
unsigned int st_ov024_020D2078(void) { return 0u; }
/* #0241 Overlay 024 0x020D22E8: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov024_020D22E8(void) { return 1u; }
/* #0242 Overlay 024 0x020D22F0: return_constant; post_return_candidate */
unsigned int st_ov024_020D22F0(void) { return 0u; }
/* #0243 Overlay 024 0x020D32D0: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov024_020D32D0(void) { return 6u; }
/* #0244 Overlay 024 0x020D32D8: return_constant; post_return_candidate */
unsigned int st_ov024_020D32D8(void) { return 7u; }
/* #0245 Overlay 024 0x020D32E0: return_constant; post_return_candidate */
unsigned int st_ov024_020D32E0(void) { return 8u; }
/* #0246 Overlay 024 0x020D32E8: return_constant; post_return_candidate */
unsigned int st_ov024_020D32E8(void) { return 9u; }
/* #0247 Overlay 024 0x020D32F0: return_constant; post_return_candidate */
unsigned int st_ov024_020D32F0(void) { return 10u; }
/* #0248 Overlay 024 0x020D32F8: return_constant; post_return_candidate */
unsigned int st_ov024_020D32F8(void) { return 11u; }
/* #0249 Overlay 024 0x020D3300: return_constant; post_return_candidate */
unsigned int st_ov024_020D3300(void) { return 12u; }
/* #0250 Overlay 024 0x020D3308: return_constant; post_return_candidate */
unsigned int st_ov024_020D3308(void) { return 13u; }
/* #0251 Overlay 024 0x020D3310: return_constant; post_return_candidate */
unsigned int st_ov024_020D3310(void) { return 1u; }
/* #0252 Overlay 024 0x020D3B4C: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov024_020D3B4C(void) { return 0u; }
/* #0253 Overlay 024 0x020D3B78: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov024_020D3B78(void) { return 0u; }
/* #0254 Overlay 024 0x020D3F24: return_not_constant; unconfirmed_possible_epilogue */
unsigned int st_ov024_020D3F24(void) { return 4294967295u; }
/* #0255 Overlay 024 0x020D3F48: return_not_constant; unconfirmed_possible_epilogue */
unsigned int st_ov024_020D3F48(void) { return 4294967295u; }
/* #0256 Overlay 024 0x020D4264: return_not_constant; unconfirmed_possible_epilogue */
unsigned int st_ov024_020D4264(void) { return 4294967295u; }
/* #0257 Overlay 024 0x020D4638: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov024_020D4638(void) { return 0u; }
/* #0258 Overlay 024 0x020D4CE0: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov024_020D4CE0(void) { return 24u; }
/* #0259 Overlay 024 0x020D4CE8: return_constant; post_return_candidate */
unsigned int st_ov024_020D4CE8(void) { return 24u; }
/* #0260 Overlay 024 0x020D4CF0: return_constant; post_return_candidate */
unsigned int st_ov024_020D4CF0(void) { return 25u; }
/* #0261 Overlay 024 0x020D4CF8: return_constant; post_return_candidate */
unsigned int st_ov024_020D4CF8(void) { return 26u; }
/* #0262 Overlay 024 0x020D4D00: return_constant; post_return_candidate */
unsigned int st_ov024_020D4D00(void) { return 27u; }
/* #0263 Overlay 024 0x020D4D08: return_constant; post_return_candidate */
unsigned int st_ov024_020D4D08(void) { return 28u; }
/* #0264 Overlay 024 0x020D4D10: return_constant; post_return_candidate */
unsigned int st_ov024_020D4D10(void) { return 63u; }
/* #0265 Overlay 024 0x020D4FAC: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov024_020D4FAC(void) { return 0u; }
/* #0266 Overlay 024 0x020D4FB4: return_constant; post_return_candidate */
unsigned int st_ov024_020D4FB4(void) { return 0u; }
/* #0267 Overlay 024 0x020D5450: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov024_020D5450(void) { return 0u; }
/* #0268 Overlay 024 0x020D5500: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov024_020D5500(void) { return 0u; }
/* #0269 Overlay 024 0x020D5508: return_constant; post_return_candidate */
unsigned int st_ov024_020D5508(void) { return 1u; }
/* #0270 Overlay 024 0x020D5510: return_constant; post_return_candidate */
unsigned int st_ov024_020D5510(void) { return 2u; }
/* #0271 Overlay 024 0x020D5518: return_constant; post_return_candidate */
unsigned int st_ov024_020D5518(void) { return 3u; }
/* #0272 Overlay 024 0x020D5520: return_constant; post_return_candidate */
unsigned int st_ov024_020D5520(void) { return 4u; }
/* #0273 Overlay 024 0x020D5528: return_not_constant; post_return_candidate */
unsigned int st_ov024_020D5528(void) { return 4294967295u; }
/* #0274 Overlay 024 0x020D5D94: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov024_020D5D94(void) { return 1u; }
/* #0275 Overlay 024 0x020D5D9C: return_constant; post_return_candidate */
unsigned int st_ov024_020D5D9C(void) { return 0u; }
/* #0276 Overlay 024 0x020D653C: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov024_020D653C(void) { return 0u; }
/* #0277 Overlay 024 0x020D6840: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov024_020D6840(void) { return 1u; }
/* #0278 Overlay 024 0x020D6848: return_constant; post_return_candidate */
unsigned int st_ov024_020D6848(void) { return 0u; }
/* #0279 Overlay 025 0x020C4C5C: empty; local_function_pointer */
void st_ov025_020C4C5C(void) {}
/* #0280 Overlay 025 0x020C5240: empty; local_function_pointer */
void st_ov025_020C5240(void) {}
/* #0281 Overlay 026 0x020D9A2C: pointer_offset; post_return_candidate */
unsigned char* st_ov026_020D9A2C(unsigned char* p) { return p + 24u; }
/* #0282 Overlay 026 0x020D9A58: pointer_offset; post_return_candidate */
unsigned char* st_ov026_020D9A58(unsigned char* p) { return p + 48u; }
/* #0283 Overlay 026 0x020D9A60: pointer_offset; post_return_candidate */
unsigned char* st_ov026_020D9A60(unsigned char* p) { return p + 60u; }
/* #0284 Overlay 026 0x020D9A8C: pointer_offset; post_return_candidate */
unsigned char* st_ov026_020D9A8C(unsigned char* p) { return p + 84u; }
/* #0285 Overlay 026 0x020D9A94: pointer_offset; post_return_candidate */
unsigned char* st_ov026_020D9A94(unsigned char* p) { return p + 96u; }
/* #0286 Overlay 026 0x020D9AC0: pointer_offset; post_return_candidate */
unsigned char* st_ov026_020D9AC0(unsigned char* p) { return p + 120u; }
/* #0287 Overlay 026 0x020D9AC8: pointer_offset; post_return_candidate */
unsigned char* st_ov026_020D9AC8(unsigned char* p) { return p + 132u; }
/* #0288 Overlay 026 0x020D9AD0: return_constant; post_return_candidate */
unsigned int st_ov026_020D9AD0(void) { return 0u; }
/* #0289 Overlay 026 0x020DA60C: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov026_020DA60C(void) { return 1u; }
/* #0290 Overlay 026 0x020DA614: return_constant; post_return_candidate */
unsigned int st_ov026_020DA614(void) { return 0u; }
/* #0291 Overlay 026 0x020DB1F4: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov026_020DB1F4(void) { return 1u; }
/* #0292 Overlay 026 0x020DB1FC: return_constant; post_return_candidate */
unsigned int st_ov026_020DB1FC(void) { return 0u; }
/* #0293 Overlay 026 0x020DBBFC: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov026_020DBBFC(void) { return 1u; }
/* #0294 Overlay 026 0x020DBC04: return_constant; post_return_candidate */
unsigned int st_ov026_020DBC04(void) { return 0u; }
/* #0295 Overlay 026 0x020E02D4: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov026_020E02D4(void) { return 1u; }
/* #0296 Overlay 026 0x020E7B40: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov026_020E7B40(void) { return 1u; }
/* #0297 Overlay 026 0x020E7B50: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov026_020E7B50(void) { return 0u; }
/* #0298 Overlay 026 0x020E87A4: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov026_020E87A4(void) { return 1u; }
/* #0299 Overlay 026 0x020E87B8: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov026_020E87B8(void) { return 1u; }
/* #0300 Overlay 026 0x020E883C: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov026_020E883C(void) { return 1u; }
/* #0301 Overlay 026 0x020E8A70: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov026_020E8A70(void) { return 1u; }
/* #0302 Overlay 026 0x020E9198: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov026_020E9198(void) { return 1u; }
/* #0303 Overlay 026 0x020E9644: return_constant; post_return_candidate */
unsigned int st_ov026_020E9644(void) { return 0u; }
/* #0304 Overlay 026 0x020E9774: return_constant; post_return_candidate */
unsigned int st_ov026_020E9774(void) { return 7u; }
/* #0305 Overlay 026 0x020EA3E4: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov026_020EA3E4(void) { return 0u; }
/* #0306 Overlay 026 0x020EA448: return_constant; post_return_candidate */
unsigned int st_ov026_020EA448(void) { return 0u; }
/* #0307 Overlay 026 0x020EC6C0: return_not_constant; unconfirmed_possible_epilogue */
unsigned int st_ov026_020EC6C0(void) { return 4294967295u; }
/* #0308 Overlay 026 0x020EEECC: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov026_020EEECC(void) { return 1u; }
/* #0309 Overlay 026 0x020F11B4: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov026_020F11B4(void) { return 1u; }
/* #0310 Overlay 026 0x020F11BC: return_constant; post_return_candidate */
unsigned int st_ov026_020F11BC(void) { return 0u; }
/* #0311 Overlay 026 0x020F4C44: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov026_020F4C44(void) { return 0u; }
/* #0312 Overlay 026 0x020F4C78: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov026_020F4C78(void) { return 0u; }
/* #0313 Overlay 026 0x020F6448: return_constant; post_return_candidate */
unsigned int st_ov026_020F6448(void) { return 0u; }
/* #0314 Overlay 026 0x020F6568: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov026_020F6568(void) { return 1u; }
/* #0315 Overlay 026 0x020F6570: return_constant; post_return_candidate */
unsigned int st_ov026_020F6570(void) { return 0u; }
/* #0316 Overlay 026 0x020F6578: return_constant; post_return_candidate */
unsigned int st_ov026_020F6578(void) { return 1u; }
/* #0317 Overlay 026 0x020F6580: return_not_constant; post_return_candidate */
unsigned int st_ov026_020F6580(void) { return 4294967295u; }
/* #0318 Overlay 026 0x020F6D7C: return_constant; post_return_candidate */
unsigned int st_ov026_020F6D7C(void) { return 3u; }
/* #0319 Overlay 026 0x020F6D84: return_constant; post_return_candidate */
unsigned int st_ov026_020F6D84(void) { return 0u; }
/* #0320 Overlay 026 0x020F6DA8: return_constant; post_return_candidate */
unsigned int st_ov026_020F6DA8(void) { return 2u; }
/* #0321 Overlay 026 0x020F6DB0: return_constant; post_return_candidate */
unsigned int st_ov026_020F6DB0(void) { return 0u; }
/* #0322 Overlay 026 0x020F6DD4: return_constant; post_return_candidate */
unsigned int st_ov026_020F6DD4(void) { return 3u; }
/* #0323 Overlay 026 0x020F6DDC: return_constant; post_return_candidate */
unsigned int st_ov026_020F6DDC(void) { return 2u; }
/* #0324 Overlay 026 0x020F6E00: return_constant; post_return_candidate */
unsigned int st_ov026_020F6E00(void) { return 3u; }
/* #0325 Overlay 026 0x020F6E08: return_constant; post_return_candidate */
unsigned int st_ov026_020F6E08(void) { return 0u; }
/* #0326 Overlay 026 0x020F7DD4: return_constant; post_return_candidate */
unsigned int st_ov026_020F7DD4(void) { return 0u; }
/* #0327 Overlay 026 0x020FBC10: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov026_020FBC10(void) { return 0u; }
/* #0328 Overlay 026 0x02109A2C: return_constant; post_return_candidate */
unsigned int st_ov026_02109A2C(void) { return 0u; }
/* #0329 Overlay 026 0x02109F3C: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov026_02109F3C(void) { return 0u; }
/* #0330 Overlay 026 0x0210A664: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov026_0210A664(void) { return 0u; }
/* #0331 Overlay 026 0x0210AEC0: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov026_0210AEC0(void) { return 0u; }
/* #0332 Overlay 026 0x0210B2FC: return_constant; local_function_pointer */
unsigned int st_ov026_0210B2FC(void) { return 245760u; }
/* #0333 Overlay 026 0x0210B320: return_constant; local_function_pointer */
unsigned int st_ov026_0210B320(void) { return 1u; }
/* #0334 Overlay 026 0x0210B428: return_constant; local_function_pointer */
unsigned int st_ov026_0210B428(void) { return 1u; }
/* #0335 Overlay 026 0x0210B470: return_constant; local_function_pointer */
unsigned int st_ov026_0210B470(void) { return 0u; }
/* #0336 Overlay 026 0x0210B9C4: return_constant; local_function_pointer */
unsigned int st_ov026_0210B9C4(void) { return 0u; }
/* #0337 Overlay 026 0x0210B9D4: empty; local_function_pointer */
void st_ov026_0210B9D4(void) {}
/* #0338 Overlay 026 0x0210BA3C: return_constant; local_function_pointer */
unsigned int st_ov026_0210BA3C(void) { return 0u; }
/* #0339 Overlay 026 0x0210BAA4: return_constant; local_function_pointer */
unsigned int st_ov026_0210BAA4(void) { return 0u; }
/* #0340 Overlay 026 0x0210BEB0: return_constant; local_function_pointer */
unsigned int st_ov026_0210BEB0(void) { return 3u; }
/* #0341 Overlay 026 0x0210C0A8: set_byte; local_function_pointer */
void st_ov026_0210C0A8(void *p) { ((unsigned char*)p)[77] = 1u; }
/* #0342 Overlay 026 0x0210C0B4: set_byte; local_function_pointer */
void st_ov026_0210C0B4(void *p) { ((unsigned char*)p)[77] = 0u; }
/* #0343 Overlay 026 0x0210E2F4: empty; local_function_pointer */
void st_ov026_0210E2F4(void) {}
/* #0344 Overlay 026 0x0210EB20: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov026_0210EB20(void) { return 0u; }
/* #0345 Overlay 026 0x0210ED6C: return_constant; local_function_pointer */
unsigned int st_ov026_0210ED6C(void) { return 245760u; }
/* #0346 Overlay 026 0x0210F14C: write_word; local_function_pointer */
void st_ov026_0210F14C(void* p, unsigned int value) { *(unsigned int*)((unsigned char*)p+220) = value; }
/* #0347 Overlay 026 0x0210F1CC: return_constant; local_function_pointer */
unsigned int st_ov026_0210F1CC(void) { return 1u; }
/* #0348 Overlay 026 0x0210F384: return_constant; local_function_pointer */
unsigned int st_ov026_0210F384(void) { return 25u; }
/* #0349 Overlay 026 0x0210F424: return_constant; local_function_pointer */
unsigned int st_ov026_0210F424(void) { return 1u; }
/* #0350 Overlay 026 0x021102E8: empty; local_function_pointer */
void st_ov026_021102E8(void) {}
/* #0351 Overlay 026 0x021106BC: empty; local_function_pointer */
void st_ov026_021106BC(void) {}
/* #0352 Overlay 026 0x021106C0: empty; local_function_pointer */
void st_ov026_021106C0(void) {}
/* #0353 Overlay 026 0x02110F84: return_constant; post_return_candidate */
unsigned int st_ov026_02110F84(void) { return 13u; }
/* #0354 Overlay 026 0x02111A94: return_constant; local_function_pointer */
unsigned int st_ov026_02111A94(void) { return 1u; }
/* #0355 Overlay 026 0x02112DDC: empty; local_function_pointer */
void st_ov026_02112DDC(void) {}
/* #0356 Overlay 026 0x0211679C: empty; local_function_pointer */
void st_ov026_0211679C(void) {}
/* #0357 Overlay 026 0x02117374: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov026_02117374(void) { return 0u; }
/* #0358 Overlay 026 0x0211AD5C: write_word; local_function_pointer */
void st_ov026_0211AD5C(void* p, unsigned int value) { *(unsigned int*)((unsigned char*)p+148) = value; }
/* #0359 Overlay 026 0x0211C6E8: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov026_0211C6E8(void) { return 1u; }
/* #0360 Overlay 026 0x0211C6F0: return_constant; post_return_candidate */
unsigned int st_ov026_0211C6F0(void) { return 2u; }
/* #0361 Overlay 026 0x0211C73C: return_constant; post_return_candidate */
unsigned int st_ov026_0211C73C(void) { return 5u; }
/* #0362 Overlay 026 0x0211C744: return_constant; post_return_candidate */
unsigned int st_ov026_0211C744(void) { return 4u; }
/* #0363 Overlay 026 0x0211C74C: return_constant; post_return_candidate */
unsigned int st_ov026_0211C74C(void) { return 6u; }
/* #0364 Overlay 026 0x0211C754: return_constant; post_return_candidate */
unsigned int st_ov026_0211C754(void) { return 0u; }
/* #0365 Overlay 026 0x0211CD48: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov026_0211CD48(void) { return 0u; }
/* #0366 Overlay 026 0x0211D0EC: empty; local_function_pointer */
void st_ov026_0211D0EC(void) {}
/* #0367 Overlay 026 0x0211D0F0: empty; local_function_pointer */
void st_ov026_0211D0F0(void) {}
/* #0368 Overlay 026 0x0211DD08: empty; local_function_pointer */
void st_ov026_0211DD08(void) {}
/* #0369 Overlay 026 0x0211E004: empty; local_function_pointer */
void st_ov026_0211E004(void) {}
/* #0370 Overlay 026 0x0211E008: empty; local_function_pointer */
void st_ov026_0211E008(void) {}
/* #0371 Overlay 026 0x0211E044: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov026_0211E044(void) { return 0u; }
/* #0372 Overlay 026 0x0211E04C: return_constant; post_return_candidate */
unsigned int st_ov026_0211E04C(void) { return 1u; }
/* #0373 Overlay 026 0x0211E054: return_constant; post_return_candidate */
unsigned int st_ov026_0211E054(void) { return 2u; }
/* #0374 Overlay 026 0x0211E05C: return_constant; post_return_candidate */
unsigned int st_ov026_0211E05C(void) { return 3u; }
/* #0375 Overlay 026 0x0211E064: return_constant; post_return_candidate */
unsigned int st_ov026_0211E064(void) { return 4u; }
/* #0376 Overlay 026 0x0211EFD0: return_constant; local_function_pointer */
unsigned int st_ov026_0211EFD0(void) { return 1u; }
/* #0377 Overlay 026 0x0211FD00: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov026_0211FD00(void) { return 1u; }
/* #0378 Overlay 026 0x0211FD08: return_constant; post_return_candidate */
unsigned int st_ov026_0211FD08(void) { return 2u; }
/* #0379 Overlay 026 0x0211FD10: return_constant; post_return_candidate */
unsigned int st_ov026_0211FD10(void) { return 0u; }
/* #0380 Overlay 026 0x02120F60: empty; local_function_pointer */
void st_ov026_02120F60(void) {}
/* #0381 Overlay 026 0x02121B08: empty; local_function_pointer */
void st_ov026_02121B08(void) {}
/* #0382 Overlay 026 0x02121BC0: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov026_02121BC0(void) { return 0u; }
/* #0383 Overlay 026 0x02121F48: empty; local_function_pointer */
void st_ov026_02121F48(void) {}
/* #0384 Overlay 026 0x021224E8: return_constant; local_function_pointer */
unsigned int st_ov026_021224E8(void) { return 1u; }
/* #0385 Overlay 026 0x021236DC: read_word; local_function_pointer */
unsigned int st_ov026_021236DC(const void* p) { return *(const unsigned int*)((const unsigned char*)p+124); }
/* #0386 Overlay 026 0x02124334: empty; local_function_pointer */
void st_ov026_02124334(void) {}
/* #0387 Overlay 026 0x021273C0: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov026_021273C0(void) { return 0u; }
/* #0388 Overlay 026 0x021280B0: return_constant; local_function_pointer */
unsigned int st_ov026_021280B0(void) { return 0u; }
/* #0389 Overlay 026 0x0212859C: empty; local_function_pointer */
void st_ov026_0212859C(void) {}
/* #0390 Overlay 026 0x0212B2E0: return_constant; local_function_pointer */
unsigned int st_ov026_0212B2E0(void) { return 1u; }
/* #0391 Overlay 026 0x0212BDB0: return_constant; local_function_pointer */
unsigned int st_ov026_0212BDB0(void) { return 1u; }
/* #0392 Overlay 026 0x0212D444: empty; local_function_pointer */
void st_ov026_0212D444(void) {}
/* #0393 Overlay 026 0x0212E8EC: set_word; post_return_candidate */
void st_ov026_0212E8EC(void *p) { *(unsigned int*)((unsigned char*)p+4) = 4u; }
/* #0394 Overlay 026 0x0212E8F8: set_word; post_return_candidate */
void st_ov026_0212E8F8(void *p) { *(unsigned int*)((unsigned char*)p+4) = 2u; }
/* #0395 Overlay 026 0x0212E904: set_word; post_return_candidate */
void st_ov026_0212E904(void *p) { *(unsigned int*)((unsigned char*)p+4) = 1u; }
/* #0396 Overlay 026 0x0212E940: set_word; post_return_candidate */
void st_ov026_0212E940(void *p) { *(unsigned int*)((unsigned char*)p+4) = 4u; }
/* #0397 Overlay 026 0x0212E94C: set_word; post_return_candidate */
void st_ov026_0212E94C(void *p) { *(unsigned int*)((unsigned char*)p+4) = 3u; }
/* #0398 Overlay 026 0x0212E958: set_word; post_return_candidate */
void st_ov026_0212E958(void *p) { *(unsigned int*)((unsigned char*)p+4) = 3u; }
/* #0399 Overlay 026 0x0212E964: set_word; post_return_candidate */
void st_ov026_0212E964(void *p) { *(unsigned int*)((unsigned char*)p+4) = 0u; }
/* #0400 Overlay 026 0x0212FED4: return_constant; post_return_candidate */
unsigned int st_ov026_0212FED4(void) { return 0u; }
/* #0401 Overlay 026 0x0212FF18: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov026_0212FF18(void) { return 0u; }
/* #0402 Overlay 026 0x0212FF70: fourth_parameter; post_return_candidate */
unsigned int st_ov026_0212FF70(unsigned int a,unsigned int b,unsigned int c,unsigned int d) { return d; }
/* #0403 Overlay 026 0x0212FFDC: return_constant; post_return_candidate */
unsigned int st_ov026_0212FFDC(void) { return 0u; }
/* #0404 Overlay 026 0x02130B38: return_constant; local_function_pointer */
unsigned int st_ov026_02130B38(void) { return 1u; }
/* #0405 Overlay 026 0x02130D1C: return_constant; local_function_pointer */
unsigned int st_ov026_02130D1C(void) { return 7u; }
/* #0406 Overlay 026 0x02130E24: return_constant; local_function_pointer */
unsigned int st_ov026_02130E24(void) { return 11u; }
/* #0407 Overlay 026 0x02133FF8: empty; local_function_pointer */
void st_ov026_02133FF8(void) {}
/* #0408 Overlay 026 0x02135288: empty; local_function_pointer */
void st_ov026_02135288(void) {}
/* #0409 Overlay 028 0x021457F0: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov028_021457F0(void) { return 0u; }
/* #0410 Overlay 028 0x02145C90: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov028_02145C90(void) { return 0u; }
/* #0411 Overlay 028 0x021465E0: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov028_021465E0(void) { return 0u; }
/* #0412 Overlay 029 0x02146238: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov029_02146238(void) { return 0u; }
/* #0413 Overlay 031 0x020DD758: return_constant; post_return_candidate */
unsigned int st_ov031_020DD758(void) { return 1u; }
/* #0414 Overlay 031 0x020E0DF8: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov031_020E0DF8(void) { return 0u; }
/* #0415 Overlay 031 0x020E9EA4: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov031_020E9EA4(void) { return 1u; }
/* #0416 Overlay 031 0x020E9EAC: return_constant; post_return_candidate */
unsigned int st_ov031_020E9EAC(void) { return 0u; }
/* #0417 Overlay 031 0x020EF560: empty; upstream_symbol */
void st_ov031_020EF560(void) {}
/* #0418 Overlay 031 0x020F19A4: empty; local_function_pointer */
void st_ov031_020F19A4(void) {}
/* #0419 Overlay 031 0x020F1A88: empty; local_function_pointer */
void st_ov031_020F1A88(void) {}
/* #0420 Overlay 031 0x020F5A00: return_constant; local_function_pointer */
unsigned int st_ov031_020F5A00(void) { return 4096u; }
/* #0421 Overlay 031 0x020F5A08: write_word; post_return_candidate */
void st_ov031_020F5A08(void* p, unsigned int value) { *(unsigned int*)((unsigned char*)p+252) = value; }
/* #0422 Overlay 031 0x020F5C58: set_word; post_return_candidate */
void st_ov031_020F5C58(void *p) { *(unsigned int*)((unsigned char*)p+52) = 65536u; }
/* #0423 Overlay 031 0x020F5C64: set_word; post_return_candidate */
void st_ov031_020F5C64(void *p) { *(unsigned int*)((unsigned char*)p+52) = 131072u; }
/* #0424 Overlay 031 0x020F5C70: set_word; post_return_candidate */
void st_ov031_020F5C70(void *p) { *(unsigned int*)((unsigned char*)p+52) = 262144u; }
/* #0425 Overlay 031 0x020F5C7C: set_word; post_return_candidate */
void st_ov031_020F5C7C(void *p) { *(unsigned int*)((unsigned char*)p+52) = 524288u; }
/* #0426 Overlay 031 0x020F5C88: set_word; post_return_candidate */
void st_ov031_020F5C88(void *p) { *(unsigned int*)((unsigned char*)p+52) = 1048576u; }
/* #0427 Overlay 031 0x020F5C94: set_word; post_return_candidate */
void st_ov031_020F5C94(void *p) { *(unsigned int*)((unsigned char*)p+52) = 2097152u; }
/* #0428 Overlay 031 0x020F5CA0: set_word; post_return_candidate */
void st_ov031_020F5CA0(void *p) { *(unsigned int*)((unsigned char*)p+52) = 4194304u; }
/* #0429 Overlay 031 0x020F62C0: return_constant; local_function_pointer */
unsigned int st_ov031_020F62C0(void) { return 1u; }
/* #0430 Overlay 031 0x020F62C8: empty; local_function_pointer */
void st_ov031_020F62C8(void) {}
/* #0431 Overlay 031 0x020F62CC: empty; local_function_pointer */
void st_ov031_020F62CC(void) {}
/* #0432 Overlay 031 0x020F76C4: return_constant; local_function_pointer */
unsigned int st_ov031_020F76C4(void) { return 0u; }
/* #0433 Overlay 031 0x020F771C: return_constant; local_function_pointer */
unsigned int st_ov031_020F771C(void) { return 0u; }
/* #0434 Overlay 031 0x020F7794: return_constant; local_function_pointer */
unsigned int st_ov031_020F7794(void) { return 0u; }
/* #0435 Overlay 031 0x020F8B5C: set_byte; local_function_pointer */
void st_ov031_020F8B5C(void *p) { ((unsigned char*)p)[344] = 1u; }
/* #0436 Overlay 031 0x020F8B68: empty; local_function_pointer */
void st_ov031_020F8B68(void) {}
/* #0437 Overlay 031 0x020F903C: empty; local_function_pointer */
void st_ov031_020F903C(void) {}
/* #0438 Overlay 031 0x020FA598: empty; local_function_pointer */
void st_ov031_020FA598(void) {}
/* #0439 Overlay 031 0x020FA794: empty; local_function_pointer */
void st_ov031_020FA794(void) {}
/* #0440 Overlay 031 0x020FAED8: set_byte; local_function_pointer */
void st_ov031_020FAED8(void *p) { ((unsigned char*)p)[240] = 1u; }
/* #0441 Overlay 031 0x020FB848: write_word; local_function_pointer */
void st_ov031_020FB848(void* p, unsigned int value) { *(unsigned int*)((unsigned char*)p+148) = value; }
/* #0442 Overlay 031 0x020FBCB8: empty; local_function_pointer */
void st_ov031_020FBCB8(void) {}
/* #0443 Overlay 031 0x020FC584: empty; local_function_pointer */
void st_ov031_020FC584(void) {}
/* #0444 Overlay 031 0x020FCC80: empty; local_function_pointer */
void st_ov031_020FCC80(void) {}
/* #0445 Overlay 031 0x020FCCA0: return_constant; local_function_pointer */
unsigned int st_ov031_020FCCA0(void) { return 0u; }
/* #0446 Overlay 031 0x020FCE28: empty; local_function_pointer */
void st_ov031_020FCE28(void) {}
/* #0447 Overlay 031 0x020FCE2C: empty; local_function_pointer */
void st_ov031_020FCE2C(void) {}
/* #0448 Overlay 031 0x020FCF18: empty; local_function_pointer */
void st_ov031_020FCF18(void) {}
/* #0449 Overlay 031 0x020FCF1C: empty; local_function_pointer */
void st_ov031_020FCF1C(void) {}
/* #0450 Overlay 031 0x020FD0A4: empty; local_function_pointer */
void st_ov031_020FD0A4(void) {}
/* #0451 Overlay 031 0x020FD1A4: return_constant; local_function_pointer */
unsigned int st_ov031_020FD1A4(void) { return 1u; }
/* #0452 Overlay 031 0x020FD1AC: return_constant; local_function_pointer */
unsigned int st_ov031_020FD1AC(void) { return 0u; }
/* #0453 Overlay 031 0x020FD1B4: empty; local_function_pointer */
void st_ov031_020FD1B4(void) {}
/* #0454 Overlay 031 0x020FD1B8: empty; local_function_pointer */
void st_ov031_020FD1B8(void) {}
/* #0455 Overlay 031 0x020FD1BC: empty; local_function_pointer */
void st_ov031_020FD1BC(void) {}
/* #0456 Overlay 031 0x020FEC88: return_constant; local_function_pointer */
unsigned int st_ov031_020FEC88(void) { return 0u; }
/* #0457 Overlay 031 0x020FEC90: return_constant; local_function_pointer */
unsigned int st_ov031_020FEC90(void) { return 0u; }
/* #0458 Overlay 031 0x020FEF18: empty; local_function_pointer */
void st_ov031_020FEF18(void) {}
/* #0459 Overlay 031 0x020FEF1C: empty; local_function_pointer */
void st_ov031_020FEF1C(void) {}
/* #0460 Overlay 031 0x020FF3FC: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov031_020FF3FC(void) { return 0u; }
/* #0461 Overlay 031 0x020FFF0C: pointer_offset; local_function_pointer */
unsigned char* st_ov031_020FFF0C(unsigned char* p) { return p + 168u; }
/* #0462 Overlay 031 0x020FFF2C: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov031_020FFF2C(void) { return 1u; }
/* #0463 Overlay 031 0x020FFF44: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov031_020FFF44(void) { return 0u; }
/* #0464 Overlay 031 0x020FFFBC: return_constant; local_function_pointer */
unsigned int st_ov031_020FFFBC(void) { return 0u; }
/* #0465 Overlay 031 0x020FFFC4: return_constant; local_function_pointer */
unsigned int st_ov031_020FFFC4(void) { return 0u; }
/* #0466 Overlay 031 0x021002D8: empty; local_function_pointer */
void st_ov031_021002D8(void) {}
/* #0467 Overlay 031 0x021002DC: empty; local_function_pointer */
void st_ov031_021002DC(void) {}
/* #0468 Overlay 031 0x021002E0: empty; local_function_pointer */
void st_ov031_021002E0(void) {}
/* #0469 Overlay 031 0x0210053C: empty; local_function_pointer */
void st_ov031_0210053C(void) {}
/* #0470 Overlay 031 0x02100540: empty; local_function_pointer */
void st_ov031_02100540(void) {}
/* #0471 Overlay 031 0x02100B58: empty; local_function_pointer */
void st_ov031_02100B58(void) {}
/* #0472 Overlay 031 0x02100EA0: empty; local_function_pointer */
void st_ov031_02100EA0(void) {}
/* #0473 Overlay 031 0x021030C0: return_constant; local_function_pointer */
unsigned int st_ov031_021030C0(void) { return 1u; }
/* #0474 Overlay 031 0x02104068: return_constant; local_function_pointer */
unsigned int st_ov031_02104068(void) { return 1u; }
/* #0475 Overlay 031 0x02104070: return_constant; local_function_pointer */
unsigned int st_ov031_02104070(void) { return 0u; }
/* #0476 Overlay 031 0x02104458: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov031_02104458(void) { return 0u; }
/* #0477 Overlay 031 0x02104794: read_byte; local_function_pointer */
unsigned int st_ov031_02104794(const void* p) { return *((const unsigned char*)p+344); }
/* #0478 Overlay 031 0x0210479C: read_byte; local_function_pointer */
unsigned int st_ov031_0210479C(const void* p) { return *((const unsigned char*)p+344); }
/* #0479 Overlay 031 0x02104824: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov031_02104824(void) { return 0u; }
/* #0480 Overlay 031 0x02106DC8: read_word; local_function_pointer */
unsigned int st_ov031_02106DC8(const void* p) { return *(const unsigned int*)((const unsigned char*)p+124); }
/* #0481 Overlay 031 0x02106DD0: read_word; local_function_pointer */
unsigned int st_ov031_02106DD0(const void* p) { return *(const unsigned int*)((const unsigned char*)p+252); }
/* #0482 Overlay 031 0x02106F10: return_constant; local_function_pointer */
unsigned int st_ov031_02106F10(void) { return 1u; }
/* #0483 Overlay 031 0x02106FC0: write_word; local_function_pointer */
void st_ov031_02106FC0(void* p, unsigned int value) { *(unsigned int*)((unsigned char*)p+148) = value; }
/* #0484 Overlay 031 0x021087C4: return_constant; post_return_candidate */
unsigned int st_ov031_021087C4(void) { return 0u; }
/* #0485 Overlay 031 0x021087CC: return_constant; post_return_candidate */
unsigned int st_ov031_021087CC(void) { return 1u; }
/* #0486 Overlay 031 0x0210880C: return_constant; post_return_candidate */
unsigned int st_ov031_0210880C(void) { return 0u; }
/* #0487 Overlay 031 0x02108828: return_constant; post_return_candidate */
unsigned int st_ov031_02108828(void) { return 1u; }
/* #0488 Overlay 031 0x02109A9C: empty; local_function_pointer */
void st_ov031_02109A9C(void) {}
/* #0489 Overlay 031 0x02109FE8: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov031_02109FE8(void) { return 0u; }
/* #0490 Overlay 031 0x0210AA88: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov031_0210AA88(void) { return 0u; }
/* #0491 Overlay 031 0x0210AAE4: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov031_0210AAE4(void) { return 0u; }
/* #0492 Overlay 031 0x0210BAF0: empty; local_function_pointer */
void st_ov031_0210BAF0(void) {}
/* #0493 Overlay 031 0x0210C2A8: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov031_0210C2A8(void) { return 1u; }
/* #0494 Overlay 031 0x0210D6EC: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov031_0210D6EC(void) { return 1u; }
/* #0495 Overlay 031 0x0210DE58: empty; local_function_pointer */
void st_ov031_0210DE58(void) {}
/* #0496 Overlay 031 0x0210EAD8: set_word; local_function_pointer */
void st_ov031_0210EAD8(void *p) { *(unsigned int*)((unsigned char*)p+12) = 0u; }
/* #0497 Overlay 031 0x0210FD14: empty; local_function_pointer */
void st_ov031_0210FD14(void) {}
/* #0498 Overlay 032 0x0211F330: empty; local_function_pointer */
void st_ov032_0211F330(void) {}
/* #0499 Overlay 033 0x0211997C: empty; local_function_pointer */
void st_ov033_0211997C(void) {}
/* #0500 Overlay 034 0x02119ED0: set_word; local_function_pointer */
void st_ov034_02119ED0(void *p) { *(unsigned int*)((unsigned char*)p+0) = 0u; }
/* #0501 Overlay 034 0x0211E958: empty; local_function_pointer */
void st_ov034_0211E958(void) {}
/* #0502 Overlay 034 0x0211E980: empty; local_function_pointer */
void st_ov034_0211E980(void) {}
/* #0503 Overlay 034 0x0211EDA8: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov034_0211EDA8(void) { return 0u; }
/* #0504 Overlay 034 0x02121A30: return_constant; local_function_pointer */
unsigned int st_ov034_02121A30(void) { return 0u; }
/* #0505 Overlay 034 0x02122324: return_constant; local_function_pointer */
unsigned int st_ov034_02122324(void) { return 1u; }
/* #0506 Overlay 035 0x02119AC0: return_constant; local_function_pointer */
unsigned int st_ov035_02119AC0(void) { return 1u; }
/* #0507 Overlay 035 0x0211A8EC: set_word; local_function_pointer */
void st_ov035_0211A8EC(void *p) { *(unsigned int*)((unsigned char*)p+728) = 0u; }
/* #0508 Overlay 035 0x0211B048: empty; local_function_pointer */
void st_ov035_0211B048(void) {}
/* #0509 Overlay 035 0x0211B04C: empty; local_function_pointer */
void st_ov035_0211B04C(void) {}
/* #0510 Overlay 035 0x0211B050: empty; local_function_pointer */
void st_ov035_0211B050(void) {}
/* #0511 Overlay 035 0x0211B378: empty; local_function_pointer */
void st_ov035_0211B378(void) {}
/* #0512 Overlay 035 0x0211E190: set_word; local_function_pointer */
void st_ov035_0211E190(void *p) { *(unsigned int*)((unsigned char*)p+792) = 0u; }
/* #0513 Overlay 035 0x021203E0: empty; local_function_pointer */
void st_ov035_021203E0(void) {}
/* #0514 Overlay 035 0x02120810: return_constant; post_return_candidate */
unsigned int st_ov035_02120810(void) { return 0u; }
/* #0515 Overlay 036 0x0211BB4C: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov036_0211BB4C(void) { return 87u; }
/* #0516 Overlay 036 0x0211BB54: return_constant; post_return_candidate */
unsigned int st_ov036_0211BB54(void) { return 69u; }
/* #0517 Overlay 036 0x0211BB5C: return_constant; post_return_candidate */
unsigned int st_ov036_0211BB5C(void) { return 68u; }
/* #0518 Overlay 036 0x0211BB64: return_constant; post_return_candidate */
unsigned int st_ov036_0211BB64(void) { return 86u; }
/* #0519 Overlay 036 0x0211BB6C: return_constant; post_return_candidate */
unsigned int st_ov036_0211BB6C(void) { return 66u; }
/* #0520 Overlay 036 0x0211BB74: return_constant; post_return_candidate */
unsigned int st_ov036_0211BB74(void) { return 0u; }
/* #0521 Overlay 036 0x0211BE14: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov036_0211BE14(void) { return 87u; }
/* #0522 Overlay 036 0x0211BE1C: return_constant; post_return_candidate */
unsigned int st_ov036_0211BE1C(void) { return 69u; }
/* #0523 Overlay 036 0x0211BE24: return_constant; post_return_candidate */
unsigned int st_ov036_0211BE24(void) { return 68u; }
/* #0524 Overlay 036 0x0211BE2C: return_constant; post_return_candidate */
unsigned int st_ov036_0211BE2C(void) { return 1u; }
/* #0525 Overlay 036 0x0211BE78: return_constant; post_return_candidate */
unsigned int st_ov036_0211BE78(void) { return 0u; }
/* #0526 Overlay 036 0x0211D308: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov036_0211D308(void) { return 18u; }
/* #0527 Overlay 036 0x0211D310: return_constant; post_return_candidate */
unsigned int st_ov036_0211D310(void) { return 8u; }
/* #0528 Overlay 036 0x0211D318: return_constant; post_return_candidate */
unsigned int st_ov036_0211D318(void) { return 9u; }
/* #0529 Overlay 036 0x0211D320: return_constant; post_return_candidate */
unsigned int st_ov036_0211D320(void) { return 10u; }
/* #0530 Overlay 036 0x0211D328: return_constant; post_return_candidate */
unsigned int st_ov036_0211D328(void) { return 11u; }
/* #0531 Overlay 036 0x0211D330: return_constant; post_return_candidate */
unsigned int st_ov036_0211D330(void) { return 19u; }
/* #0532 Overlay 036 0x0211D338: return_constant; post_return_candidate */
unsigned int st_ov036_0211D338(void) { return 6u; }
/* #0533 Overlay 036 0x0211D340: return_constant; post_return_candidate */
unsigned int st_ov036_0211D340(void) { return 7u; }
/* #0534 Overlay 036 0x0211D348: return_constant; post_return_candidate */
unsigned int st_ov036_0211D348(void) { return 5u; }
/* #0535 Overlay 036 0x0211D350: return_constant; post_return_candidate */
unsigned int st_ov036_0211D350(void) { return 3u; }
/* #0536 Overlay 036 0x0211D358: return_constant; post_return_candidate */
unsigned int st_ov036_0211D358(void) { return 2u; }
/* #0537 Overlay 036 0x0211D360: return_constant; post_return_candidate */
unsigned int st_ov036_0211D360(void) { return 4u; }
/* #0538 Overlay 036 0x0211D368: return_constant; post_return_candidate */
unsigned int st_ov036_0211D368(void) { return 13u; }
/* #0539 Overlay 036 0x0211D390: return_constant; post_return_candidate */
unsigned int st_ov036_0211D390(void) { return 0u; }
/* #0540 Overlay 036 0x0211DE38: empty; upstream_symbol */
void st_ov036_0211DE38(void) {}
/* #0541 Overlay 036 0x0211DE4C: empty; upstream_symbol */
void st_ov036_0211DE4C(void) {}
/* #0542 Overlay 036 0x0211E028: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov036_0211E028(void) { return 0u; }
/* #0543 Overlay 036 0x0211E10C: empty; upstream_symbol */
void st_ov036_0211E10C(void) {}
/* #0544 Overlay 036 0x02120110: empty; upstream_symbol */
void st_ov036_02120110(void) {}
/* #0545 Overlay 036 0x02120254: empty; upstream_symbol */
void st_ov036_02120254(void) {}
/* #0546 Overlay 036 0x0212036C: empty; upstream_symbol */
void st_ov036_0212036C(void) {}
/* #0547 Overlay 036 0x0212048C: empty; upstream_symbol */
void st_ov036_0212048C(void) {}
/* #0548 Overlay 038 0x0211E3E8: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov038_0211E3E8(void) { return 0u; }
/* #0549 Overlay 038 0x0211E418: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov038_0211E418(void) { return 0u; }
/* #0550 Overlay 038 0x0211E464: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov038_0211E464(void) { return 0u; }
/* #0551 Overlay 038 0x0211E7E0: empty; local_function_pointer */
void st_ov038_0211E7E0(void) {}
/* #0552 Overlay 038 0x0211EB24: return_constant; post_return_candidate */
unsigned int st_ov038_0211EB24(void) { return 0u; }
/* #0553 Overlay 038 0x0211EC44: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov038_0211EC44(void) { return 0u; }
/* #0554 Overlay 038 0x0211EC4C: return_constant; local_function_pointer */
unsigned int st_ov038_0211EC4C(void) { return 0u; }
/* #0555 Overlay 038 0x0211EC98: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov038_0211EC98(void) { return 0u; }
/* #0556 Overlay 038 0x0211F170: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov038_0211F170(void) { return 0u; }
/* #0557 Overlay 038 0x0211F17C: return_constant; local_function_pointer */
unsigned int st_ov038_0211F17C(void) { return 43008u; }
/* #0558 Overlay 039 0x0211BDA8: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov039_0211BDA8(void) { return 0u; }
/* #0559 Overlay 039 0x0211BDB0: return_constant; post_return_candidate */
unsigned int st_ov039_0211BDB0(void) { return 1u; }
/* #0560 Overlay 039 0x0211BDB8: return_constant; post_return_candidate */
unsigned int st_ov039_0211BDB8(void) { return 2u; }
/* #0561 Overlay 039 0x0211BDC0: return_constant; post_return_candidate */
unsigned int st_ov039_0211BDC0(void) { return 3u; }
/* #0562 Overlay 039 0x0211BDC8: return_constant; post_return_candidate */
unsigned int st_ov039_0211BDC8(void) { return 4u; }
/* #0563 Overlay 039 0x0211BDD0: return_constant; post_return_candidate */
unsigned int st_ov039_0211BDD0(void) { return 0u; }
/* #0564 Overlay 040 0x021261EC: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov040_021261EC(void) { return 24576u; }
/* #0565 Overlay 040 0x021261F4: return_constant; post_return_candidate */
unsigned int st_ov040_021261F4(void) { return 8192u; }
/* #0566 Overlay 040 0x02126210: return_constant; post_return_candidate */
unsigned int st_ov040_02126210(void) { return 0u; }
/* #0567 Overlay 041 0x02128AAC: empty; local_function_pointer */
void st_ov041_02128AAC(void) {}
/* #0568 Overlay 041 0x02128B30: set_word; local_function_pointer */
void st_ov041_02128B30(void *p) { *(unsigned int*)((unsigned char*)p+56) = 0u; }
/* #0569 Overlay 041 0x0212A88C: empty; local_function_pointer */
void st_ov041_0212A88C(void) {}
/* #0570 Overlay 041 0x0212AA38: return_constant; local_function_pointer */
unsigned int st_ov041_0212AA38(void) { return 1u; }
/* #0571 Overlay 041 0x0212AB74: empty; local_function_pointer */
void st_ov041_0212AB74(void) {}
/* #0572 Overlay 041 0x0212BA88: empty; local_function_pointer */
void st_ov041_0212BA88(void) {}
/* #0573 Overlay 041 0x0212C9A0: set_word; local_function_pointer */
void st_ov041_0212C9A0(void *p) { *(unsigned int*)((unsigned char*)p+0) = 0u; }
/* #0574 Overlay 041 0x0212D478: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov041_0212D478(void) { return 0u; }
/* #0575 Overlay 042 0x0212BA20: empty; local_function_pointer */
void st_ov042_0212BA20(void) {}
/* #0576 Overlay 043 0x02127198: empty; local_function_pointer */
void st_ov043_02127198(void) {}
/* #0577 Overlay 043 0x021271E8: empty; local_function_pointer */
void st_ov043_021271E8(void) {}
/* #0578 Overlay 044 0x021238D8: set_word; local_function_pointer */
void st_ov044_021238D8(void *p) { *(unsigned int*)((unsigned char*)p+0) = 0u; }
/* #0579 Overlay 044 0x0212951C: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov044_0212951C(void) { return 0u; }
/* #0580 Overlay 044 0x0212AEB4: empty; local_function_pointer */
void st_ov044_0212AEB4(void) {}
/* #0581 Overlay 044 0x0212C1B4: empty; local_function_pointer */
void st_ov044_0212C1B4(void) {}
/* #0582 Overlay 044 0x0212CADC: empty; local_function_pointer */
void st_ov044_0212CADC(void) {}
/* #0583 Overlay 044 0x0212CC80: empty; local_function_pointer */
void st_ov044_0212CC80(void) {}
/* #0584 Overlay 045 0x02123DEC: empty; local_function_pointer */
void st_ov045_02123DEC(void) {}
/* #0585 Overlay 045 0x021248E4: empty; local_function_pointer */
void st_ov045_021248E4(void) {}
/* #0586 Overlay 045 0x02126C4C: empty; local_function_pointer */
void st_ov045_02126C4C(void) {}
/* #0587 Overlay 045 0x021278E4: set_word; local_function_pointer */
void st_ov045_021278E4(void *p) { *(unsigned int*)((unsigned char*)p+0) = 0u; }
/* #0588 Overlay 045 0x02129404: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov045_02129404(void) { return 0u; }
/* #0589 Overlay 045 0x02129464: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov045_02129464(void) { return 0u; }
/* #0590 Overlay 046 0x02123A14: empty; local_function_pointer */
void st_ov046_02123A14(void) {}
/* #0591 Overlay 046 0x02124E34: set_word; local_function_pointer */
void st_ov046_02124E34(void *p) { *(unsigned int*)((unsigned char*)p+0) = 0u; }
/* #0592 Overlay 046 0x02127E08: return_constant; local_function_pointer */
unsigned int st_ov046_02127E08(void) { return 1u; }
/* #0593 Overlay 046 0x0212839C: empty; local_function_pointer */
void st_ov046_0212839C(void) {}
/* #0594 Overlay 046 0x02128DD0: return_constant; local_function_pointer */
unsigned int st_ov046_02128DD0(void) { return 1u; }
/* #0595 Overlay 046 0x02129320: empty; local_function_pointer */
void st_ov046_02129320(void) {}
/* #0596 Overlay 047 0x021348CC: set_word; local_function_pointer */
void st_ov047_021348CC(void *p) { *(unsigned int*)((unsigned char*)p+160) = 0u; }
/* #0597 Overlay 047 0x02135364: return_constant; local_function_pointer */
unsigned int st_ov047_02135364(void) { return 1u; }
/* #0598 Overlay 048 0x02130CD8: return_constant; local_function_pointer */
unsigned int st_ov048_02130CD8(void) { return 0u; }
/* #0599 Overlay 048 0x02130CE0: return_constant; local_function_pointer */
unsigned int st_ov048_02130CE0(void) { return 0u; }
/* #0600 Overlay 048 0x02131EF4: return_constant; local_function_pointer */
unsigned int st_ov048_02131EF4(void) { return 1u; }
/* #0601 Overlay 048 0x02133640: return_constant; local_function_pointer */
unsigned int st_ov048_02133640(void) { return 1u; }
/* #0602 Overlay 048 0x021375B4: empty; local_function_pointer */
void st_ov048_021375B4(void) {}
/* #0603 Overlay 049 0x021346F8: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov049_021346F8(void) { return 0u; }
/* #0604 Overlay 049 0x02134734: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov049_02134734(void) { return 0u; }
/* #0605 Overlay 049 0x02134770: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov049_02134770(void) { return 0u; }
/* #0606 Overlay 049 0x021354B0: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov049_021354B0(void) { return 0u; }
/* #0607 Overlay 049 0x021354EC: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov049_021354EC(void) { return 0u; }
/* #0608 Overlay 049 0x02135528: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov049_02135528(void) { return 0u; }
/* #0609 Overlay 050 0x02131610: empty; local_function_pointer */
void st_ov050_02131610(void) {}
/* #0610 Overlay 050 0x0213205C: empty; local_function_pointer */
void st_ov050_0213205C(void) {}
/* #0611 Overlay 050 0x02132800: empty; local_function_pointer */
void st_ov050_02132800(void) {}
/* #0612 Overlay 050 0x021367A4: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov050_021367A4(void) { return 1u; }
/* #0613 Overlay 051 0x02136CDC: return_constant; local_function_pointer */
unsigned int st_ov051_02136CDC(void) { return 0u; }
/* #0614 Overlay 051 0x02136D84: set_word; local_function_pointer */
void st_ov051_02136D84(void *p) { *(unsigned int*)((unsigned char*)p+0) = 0u; }
/* #0615 Overlay 052 0x02133268: set_word; local_function_pointer */
void st_ov052_02133268(void *p) { *(unsigned int*)((unsigned char*)p+0) = 0u; }
/* #0616 Overlay 052 0x02133BD8: empty; local_function_pointer */
void st_ov052_02133BD8(void) {}
/* #0617 Overlay 052 0x02133C28: empty; local_function_pointer */
void st_ov052_02133C28(void) {}
/* #0618 Overlay 052 0x02133FE0: empty; local_function_pointer */
void st_ov052_02133FE0(void) {}
/* #0619 Overlay 053 0x0213954C: return_constant; local_function_pointer */
unsigned int st_ov053_0213954C(void) { return 0u; }
/* #0620 Overlay 053 0x0213BAEC: empty; local_function_pointer */
void st_ov053_0213BAEC(void) {}
/* #0621 Overlay 053 0x0213BC70: empty; local_function_pointer */
void st_ov053_0213BC70(void) {}
/* #0622 Overlay 054 0x0213CEC0: empty; local_function_pointer */
void st_ov054_0213CEC0(void) {}
/* #0623 Overlay 054 0x0213CF28: empty; local_function_pointer */
void st_ov054_0213CF28(void) {}
/* #0624 Overlay 055 0x0213B144: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov055_0213B144(void) { return 0u; }
/* #0625 Overlay 055 0x0213B14C: return_constant; post_return_candidate */
unsigned int st_ov055_0213B14C(void) { return 0u; }
/* #0626 Overlay 056 0x0213977C: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov056_0213977C(void) { return 0u; }
/* #0627 Overlay 056 0x02139784: return_constant; post_return_candidate */
unsigned int st_ov056_02139784(void) { return 1u; }
/* #0628 Overlay 056 0x0213978C: return_constant; post_return_candidate */
unsigned int st_ov056_0213978C(void) { return 2u; }
/* #0629 Overlay 056 0x02139794: return_constant; post_return_candidate */
unsigned int st_ov056_02139794(void) { return 3u; }
/* #0630 Overlay 056 0x0213979C: return_constant; post_return_candidate */
unsigned int st_ov056_0213979C(void) { return 4u; }
/* #0631 Overlay 056 0x021398A8: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov056_021398A8(void) { return 0u; }
/* #0632 Overlay 056 0x021398B0: return_constant; post_return_candidate */
unsigned int st_ov056_021398B0(void) { return 1u; }
/* #0633 Overlay 056 0x021398B8: return_constant; post_return_candidate */
unsigned int st_ov056_021398B8(void) { return 2u; }
/* #0634 Overlay 056 0x021398C0: return_constant; post_return_candidate */
unsigned int st_ov056_021398C0(void) { return 3u; }
/* #0635 Overlay 056 0x021398C8: return_constant; post_return_candidate */
unsigned int st_ov056_021398C8(void) { return 4u; }
/* #0636 Overlay 056 0x021398D0: return_constant; post_return_candidate */
unsigned int st_ov056_021398D0(void) { return 0u; }
/* #0637 Overlay 056 0x02139BD8: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov056_02139BD8(void) { return 1u; }
/* #0638 Overlay 056 0x02139BE0: return_constant; post_return_candidate */
unsigned int st_ov056_02139BE0(void) { return 1u; }
/* #0639 Overlay 056 0x02139BE8: return_constant; post_return_candidate */
unsigned int st_ov056_02139BE8(void) { return 1u; }
/* #0640 Overlay 056 0x02139BF0: return_constant; post_return_candidate */
unsigned int st_ov056_02139BF0(void) { return 1u; }
/* #0641 Overlay 056 0x02139BF8: return_constant; post_return_candidate */
unsigned int st_ov056_02139BF8(void) { return 1u; }
/* #0642 Overlay 056 0x02139C00: return_constant; post_return_candidate */
unsigned int st_ov056_02139C00(void) { return 1u; }
/* #0643 Overlay 056 0x02139C08: return_constant; post_return_candidate */
unsigned int st_ov056_02139C08(void) { return 1u; }
/* #0644 Overlay 056 0x02139C10: return_constant; post_return_candidate */
unsigned int st_ov056_02139C10(void) { return 1u; }
/* #0645 Overlay 056 0x02139C18: return_constant; post_return_candidate */
unsigned int st_ov056_02139C18(void) { return 1u; }
/* #0646 Overlay 056 0x02139C20: return_constant; post_return_candidate */
unsigned int st_ov056_02139C20(void) { return 1u; }
/* #0647 Overlay 056 0x02139C28: return_constant; post_return_candidate */
unsigned int st_ov056_02139C28(void) { return 1u; }
/* #0648 Overlay 056 0x02139C30: return_constant; post_return_candidate */
unsigned int st_ov056_02139C30(void) { return 1u; }
/* #0649 Overlay 056 0x02139C38: return_constant; post_return_candidate */
unsigned int st_ov056_02139C38(void) { return 1u; }
/* #0650 Overlay 056 0x02139C40: return_constant; post_return_candidate */
unsigned int st_ov056_02139C40(void) { return 1u; }
/* #0651 Overlay 056 0x02139C48: return_constant; post_return_candidate */
unsigned int st_ov056_02139C48(void) { return 1u; }
/* #0652 Overlay 056 0x02139C50: return_constant; post_return_candidate */
unsigned int st_ov056_02139C50(void) { return 1u; }
/* #0653 Overlay 056 0x02139C58: return_constant; post_return_candidate */
unsigned int st_ov056_02139C58(void) { return 1u; }
/* #0654 Overlay 056 0x02139DB8: return_constant; post_return_candidate */
unsigned int st_ov056_02139DB8(void) { return 8192u; }
/* #0655 Overlay 056 0x02139DC0: return_constant; post_return_candidate */
unsigned int st_ov056_02139DC0(void) { return 1u; }
/* #0656 Overlay 056 0x02139DC8: return_constant; post_return_candidate */
unsigned int st_ov056_02139DC8(void) { return 8192u; }
/* #0657 Overlay 056 0x02139DD0: return_constant; post_return_candidate */
unsigned int st_ov056_02139DD0(void) { return 10240u; }
/* #0658 Overlay 056 0x02139DD8: return_constant; post_return_candidate */
unsigned int st_ov056_02139DD8(void) { return 8192u; }
/* #0659 Overlay 056 0x02139DE0: return_constant; post_return_candidate */
unsigned int st_ov056_02139DE0(void) { return 8192u; }
/* #0660 Overlay 056 0x02139DE8: return_constant; post_return_candidate */
unsigned int st_ov056_02139DE8(void) { return 8192u; }
/* #0661 Overlay 056 0x02139DF0: return_constant; post_return_candidate */
unsigned int st_ov056_02139DF0(void) { return 8192u; }
/* #0662 Overlay 056 0x02139E00: return_constant; post_return_candidate */
unsigned int st_ov056_02139E00(void) { return 8192u; }
/* #0663 Overlay 056 0x02139E08: return_constant; post_return_candidate */
unsigned int st_ov056_02139E08(void) { return 10240u; }
/* #0664 Overlay 056 0x02139E18: return_constant; post_return_candidate */
unsigned int st_ov056_02139E18(void) { return 8192u; }
/* #0665 Overlay 056 0x02139E28: return_constant; post_return_candidate */
unsigned int st_ov056_02139E28(void) { return 8192u; }
/* #0666 Overlay 056 0x02139F9C: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov056_02139F9C(void) { return 0u; }
/* #0667 Overlay 056 0x02139FA4: return_constant; post_return_candidate */
unsigned int st_ov056_02139FA4(void) { return 1u; }
/* #0668 Overlay 056 0x02139FAC: return_constant; post_return_candidate */
unsigned int st_ov056_02139FAC(void) { return 0u; }
/* #0669 Overlay 056 0x02139FB4: return_constant; post_return_candidate */
unsigned int st_ov056_02139FB4(void) { return 0u; }
/* #0670 Overlay 056 0x02139FBC: return_constant; post_return_candidate */
unsigned int st_ov056_02139FBC(void) { return 1u; }
/* #0671 Overlay 056 0x02139FC4: return_constant; post_return_candidate */
unsigned int st_ov056_02139FC4(void) { return 0u; }
/* #0672 Overlay 056 0x02139FCC: return_constant; post_return_candidate */
unsigned int st_ov056_02139FCC(void) { return 1u; }
/* #0673 Overlay 056 0x02139FD4: return_constant; post_return_candidate */
unsigned int st_ov056_02139FD4(void) { return 1u; }
/* #0674 Overlay 056 0x02139FDC: return_constant; post_return_candidate */
unsigned int st_ov056_02139FDC(void) { return 1u; }
/* #0675 Overlay 056 0x02139FE4: return_constant; post_return_candidate */
unsigned int st_ov056_02139FE4(void) { return 1u; }
/* #0676 Overlay 056 0x02139FEC: return_constant; post_return_candidate */
unsigned int st_ov056_02139FEC(void) { return 1u; }
/* #0677 Overlay 056 0x02139FF4: return_constant; post_return_candidate */
unsigned int st_ov056_02139FF4(void) { return 1u; }
/* #0678 Overlay 056 0x02139FFC: return_constant; post_return_candidate */
unsigned int st_ov056_02139FFC(void) { return 1u; }
/* #0679 Overlay 056 0x0213A004: return_constant; post_return_candidate */
unsigned int st_ov056_0213A004(void) { return 1u; }
/* #0680 Overlay 056 0x0213A00C: return_constant; post_return_candidate */
unsigned int st_ov056_0213A00C(void) { return 0u; }
/* #0681 Overlay 056 0x0213A014: return_constant; post_return_candidate */
unsigned int st_ov056_0213A014(void) { return 1u; }
/* #0682 Overlay 056 0x0213A180: return_constant; post_return_candidate */
unsigned int st_ov056_0213A180(void) { return 5120u; }
/* #0683 Overlay 056 0x0213A1F0: return_constant; post_return_candidate */
unsigned int st_ov056_0213A1F0(void) { return 5120u; }
/* #0684 Overlay 056 0x0213A1F8: return_constant; post_return_candidate */
unsigned int st_ov056_0213A1F8(void) { return 2048u; }
/* #0685 Overlay 056 0x0213AC30: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov056_0213AC30(void) { return 0u; }
/* #0686 Overlay 057 0x0213A1E0: set_byte; local_function_pointer */
void st_ov057_0213A1E0(void *p) { ((unsigned char*)p)[156] = 0u; }
/* #0687 Overlay 057 0x0213A660: empty; local_function_pointer */
void st_ov057_0213A660(void) {}
/* #0688 Overlay 057 0x0213B9A0: empty; local_function_pointer */
void st_ov057_0213B9A0(void) {}
/* #0689 Overlay 058 0x02145F78: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov058_02145F78(void) { return 0u; }
/* #0690 Overlay 058 0x02145F80: return_constant; post_return_candidate */
unsigned int st_ov058_02145F80(void) { return 1u; }
/* #0691 Overlay 058 0x02145F88: return_constant; post_return_candidate */
unsigned int st_ov058_02145F88(void) { return 2u; }
/* #0692 Overlay 058 0x02145F90: return_constant; post_return_candidate */
unsigned int st_ov058_02145F90(void) { return 3u; }
/* #0693 Overlay 058 0x02145F98: return_constant; post_return_candidate */
unsigned int st_ov058_02145F98(void) { return 4u; }
/* #0694 Overlay 058 0x02145FA0: return_constant; post_return_candidate */
unsigned int st_ov058_02145FA0(void) { return 0u; }
/* #0695 Overlay 058 0x02148E10: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov058_02148E10(void) { return 0u; }
/* #0696 Overlay 058 0x0214F99C: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov058_0214F99C(void) { return 0u; }
/* #0697 Overlay 059 0x02158454: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov059_02158454(void) { return 0u; }
/* #0698 Overlay 059 0x02161B58: pointer_offset; post_return_candidate */
unsigned char* st_ov059_02161B58(unsigned char* p) { return p + 13u; }
/* #0699 Overlay 059 0x02161F28: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov059_02161F28(void) { return 0u; }
/* #0700 Overlay 059 0x02162238: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov059_02162238(void) { return 0u; }
/* #0701 Overlay 059 0x021624F0: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov059_021624F0(void) { return 0u; }
/* #0702 Overlay 059 0x021627A8: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov059_021627A8(void) { return 0u; }
/* #0703 Overlay 059 0x02162A60: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov059_02162A60(void) { return 0u; }
/* #0704 Overlay 059 0x02162D54: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov059_02162D54(void) { return 0u; }
/* #0705 Overlay 060 0x0215D3E4: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov060_0215D3E4(void) { return 0u; }
/* #0706 Overlay 060 0x0215D8F4: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov060_0215D8F4(void) { return 0u; }
/* #0707 Overlay 060 0x0215DA64: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov060_0215DA64(void) { return 0u; }
/* #0708 Overlay 060 0x0215E26C: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov060_0215E26C(void) { return 0u; }
/* #0709 Overlay 060 0x0215E7E8: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov060_0215E7E8(void) { return 0u; }
/* #0710 Overlay 060 0x0215E9FC: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov060_0215E9FC(void) { return 0u; }
/* #0711 Overlay 061 0x0215807C: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov061_0215807C(void) { return 0u; }
/* #0712 Overlay 061 0x02158284: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov061_02158284(void) { return 0u; }
/* #0713 Overlay 061 0x02158410: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov061_02158410(void) { return 0u; }
/* #0714 Overlay 061 0x02158534: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov061_02158534(void) { return 0u; }
/* #0715 Overlay 061 0x02158658: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov061_02158658(void) { return 0u; }
/* #0716 Overlay 061 0x021594D8: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov061_021594D8(void) { return 0u; }
/* #0717 Overlay 061 0x02159634: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov061_02159634(void) { return 0u; }
/* #0718 Overlay 062 0x021580AC: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov062_021580AC(void) { return 0u; }
/* #0719 Overlay 062 0x021581D0: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov062_021581D0(void) { return 0u; }
/* #0720 Overlay 062 0x021582F4: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov062_021582F4(void) { return 0u; }
/* #0721 Overlay 062 0x02158418: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov062_02158418(void) { return 0u; }
/* #0722 Overlay 062 0x02158C14: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov062_02158C14(void) { return 0u; }
/* #0723 Overlay 062 0x02159BD0: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov062_02159BD0(void) { return 0u; }
/* #0724 Overlay 062 0x0215A5C8: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov062_0215A5C8(void) { return 0u; }
/* #0725 Overlay 062 0x0215B5BC: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov062_0215B5BC(void) { return 0u; }
/* #0726 Overlay 062 0x0215BA4C: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov062_0215BA4C(void) { return 0u; }
/* #0727 Overlay 062 0x0215BBA0: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov062_0215BBA0(void) { return 0u; }
/* #0728 Overlay 062 0x0215BCF4: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov062_0215BCF4(void) { return 0u; }
/* #0729 Overlay 062 0x0215BE48: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov062_0215BE48(void) { return 0u; }
/* #0730 Overlay 063 0x0215D5AC: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov063_0215D5AC(void) { return 0u; }
/* #0731 Overlay 063 0x0215D5B4: return_constant; post_return_candidate */
unsigned int st_ov063_0215D5B4(void) { return 1u; }
/* #0732 Overlay 063 0x0215D5BC: return_constant; post_return_candidate */
unsigned int st_ov063_0215D5BC(void) { return 2u; }
/* #0733 Overlay 063 0x0215D5C4: return_constant; post_return_candidate */
unsigned int st_ov063_0215D5C4(void) { return 3u; }
/* #0734 Overlay 063 0x0215D5CC: return_constant; post_return_candidate */
unsigned int st_ov063_0215D5CC(void) { return 4u; }
/* #0735 Overlay 063 0x0215D5D4: return_constant; post_return_candidate */
unsigned int st_ov063_0215D5D4(void) { return 5u; }
/* #0736 Overlay 064 0x02158B5C: empty; local_function_pointer */
void st_ov064_02158B5C(void) {}
/* #0737 Overlay 064 0x02158B60: empty; local_function_pointer */
void st_ov064_02158B60(void) {}
/* #0738 Overlay 064 0x02158BCC: return_constant; local_function_pointer */
unsigned int st_ov064_02158BCC(void) { return 1u; }
/* #0739 Overlay 064 0x02159100: empty; local_function_pointer */
void st_ov064_02159100(void) {}
/* #0740 Overlay 064 0x02159328: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov064_02159328(void) { return 0u; }
/* #0741 Overlay 064 0x02159334: return_constant; local_function_pointer */
unsigned int st_ov064_02159334(void) { return 43008u; }
/* #0742 Overlay 064 0x02159454: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov064_02159454(void) { return 0u; }
/* #0743 Overlay 064 0x02159578: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov064_02159578(void) { return 0u; }
/* #0744 Overlay 064 0x0215A0B0: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov064_0215A0B0(void) { return 0u; }
/* #0745 Overlay 064 0x0215A228: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov064_0215A228(void) { return 0u; }
/* #0746 Overlay 065 0x02158F6C: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov065_02158F6C(void) { return 0u; }
/* #0747 Overlay 065 0x02159090: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov065_02159090(void) { return 0u; }
/* #0748 Overlay 065 0x021591B4: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov065_021591B4(void) { return 0u; }
/* #0749 Overlay 065 0x021592D8: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov065_021592D8(void) { return 0u; }
/* #0750 Overlay 065 0x021593FC: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov065_021593FC(void) { return 0u; }
/* #0751 Overlay 065 0x02159520: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov065_02159520(void) { return 0u; }
/* #0752 Overlay 065 0x021597B0: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov065_021597B0(void) { return 0u; }
/* #0753 Overlay 065 0x02159E74: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov065_02159E74(void) { return 0u; }
/* #0754 Overlay 066 0x0215C620: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov066_0215C620(void) { return 0u; }
/* #0755 Overlay 066 0x0215C920: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov066_0215C920(void) { return 0u; }
/* #0756 Overlay 066 0x0215CBC0: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov066_0215CBC0(void) { return 0u; }
/* #0757 Overlay 066 0x0215D018: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov066_0215D018(void) { return 0u; }
/* #0758 Overlay 066 0x0215D16C: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov066_0215D16C(void) { return 0u; }
/* #0759 Overlay 067 0x02159F34: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov067_02159F34(void) { return 0u; }
/* #0760 Overlay 067 0x0215A058: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov067_0215A058(void) { return 0u; }
/* #0761 Overlay 067 0x0215B8B4: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov067_0215B8B4(void) { return 1u; }
/* #0762 Overlay 068 0x0215E654: return_constant; post_return_candidate */
unsigned int st_ov068_0215E654(void) { return 0u; }
/* #0763 Overlay 068 0x02160764: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov068_02160764(void) { return 0u; }
/* #0764 Overlay 068 0x021608B4: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov068_021608B4(void) { return 0u; }
/* #0765 Overlay 068 0x02160A04: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov068_02160A04(void) { return 0u; }
/* #0766 Overlay 068 0x02160B54: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov068_02160B54(void) { return 0u; }
/* #0767 Overlay 069 0x02159520: empty; local_function_pointer */
void st_ov069_02159520(void) {}
/* #0768 Overlay 069 0x0215A068: empty; local_function_pointer */
void st_ov069_0215A068(void) {}
/* #0769 Overlay 069 0x0215A230: empty; local_function_pointer */
void st_ov069_0215A230(void) {}
/* #0770 Overlay 069 0x0215A234: empty; local_function_pointer */
void st_ov069_0215A234(void) {}
/* #0771 Overlay 069 0x0215A238: empty; local_function_pointer */
void st_ov069_0215A238(void) {}
/* #0772 Overlay 069 0x0215A6F8: empty; local_function_pointer */
void st_ov069_0215A6F8(void) {}
/* #0773 Overlay 069 0x0215AB14: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov069_0215AB14(void) { return 1u; }
/* #0774 Overlay 070 0x02140E64: read_word; post_return_candidate */
unsigned int st_ov070_02140E64(const void* p) { return *(const unsigned int*)((const unsigned char*)p+20); }
/* #0775 Overlay 070 0x02143ACC: return_constant; post_return_candidate */
unsigned int st_ov070_02143ACC(void) { return 36u; }
/* #0776 Overlay 070 0x02143AD4: return_constant; post_return_candidate */
unsigned int st_ov070_02143AD4(void) { return 37u; }
/* #0777 Overlay 070 0x02143ADC: return_constant; post_return_candidate */
unsigned int st_ov070_02143ADC(void) { return 35u; }
/* #0778 Overlay 070 0x02145024: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov070_02145024(void) { return 0u; }
/* #0779 Overlay 070 0x02145370: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov070_02145370(void) { return 0u; }
/* #0780 Overlay 070 0x0214A304: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov070_0214A304(void) { return 0u; }
/* #0781 Overlay 070 0x0214A360: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov070_0214A360(void) { return 0u; }
/* #0782 Overlay 070 0x0214B304: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov070_0214B304(void) { return 0u; }
/* #0783 Overlay 071 0x02159D5C: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov071_02159D5C(void) { return 0u; }
/* #0784 Overlay 071 0x0215AC4C: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov071_0215AC4C(void) { return 0u; }
/* #0785 Overlay 071 0x02161C04: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov071_02161C04(void) { return 0u; }
/* #0786 Overlay 072 0x02150DC8: return_constant; local_function_pointer */
unsigned int st_ov072_02150DC8(void) { return 0u; }
/* #0787 Overlay 072 0x02151CA4: return_constant; post_return_candidate */
unsigned int st_ov072_02151CA4(void) { return 0u; }
/* #0788 Overlay 072 0x02151CAC: return_constant; post_return_candidate */
unsigned int st_ov072_02151CAC(void) { return 16384u; }
/* #0789 Overlay 072 0x02151CB4: return_constant; post_return_candidate */
unsigned int st_ov072_02151CB4(void) { return 0u; }
/* #0790 Overlay 072 0x02151F68: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov072_02151F68(void) { return 3u; }
/* #0791 Overlay 072 0x02151F70: return_constant; post_return_candidate */
unsigned int st_ov072_02151F70(void) { return 5u; }
/* #0792 Overlay 072 0x02151F78: return_constant; post_return_candidate */
unsigned int st_ov072_02151F78(void) { return 6u; }
/* #0793 Overlay 072 0x02151F80: return_constant; post_return_candidate */
unsigned int st_ov072_02151F80(void) { return 7u; }
/* #0794 Overlay 072 0x02151F88: return_constant; post_return_candidate */
unsigned int st_ov072_02151F88(void) { return 0u; }
/* #0795 Overlay 073 0x02162484: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov073_02162484(void) { return 1u; }
/* #0796 Overlay 073 0x021624AC: return_constant; post_return_candidate */
unsigned int st_ov073_021624AC(void) { return 1u; }
/* #0797 Overlay 073 0x021624B4: return_constant; post_return_candidate */
unsigned int st_ov073_021624B4(void) { return 1u; }
/* #0798 Overlay 073 0x021624BC: return_constant; post_return_candidate */
unsigned int st_ov073_021624BC(void) { return 1u; }
/* #0799 Overlay 073 0x02162560: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov073_02162560(void) { return 0u; }
/* #0800 Overlay 073 0x02163378: set_word; local_function_pointer */
void st_ov073_02163378(void *p) { *(unsigned int*)((unsigned char*)p+0) = 0u; }
/* #0801 Overlay 075 0x02150D8C: return_constant; local_function_pointer */
unsigned int st_ov075_02150D8C(void) { return 0u; }
/* #0802 Overlay 075 0x02153608: return_constant; post_return_candidate */
unsigned int st_ov075_02153608(void) { return 1u; }
/* #0803 Overlay 075 0x0215362C: return_constant; post_return_candidate */
unsigned int st_ov075_0215362C(void) { return 9u; }
/* #0804 Overlay 075 0x02153650: return_constant; post_return_candidate */
unsigned int st_ov075_02153650(void) { return 10u; }
/* #0805 Overlay 075 0x0215B550: return_constant; post_return_candidate */
unsigned int st_ov075_0215B550(void) { return 1u; }
/* #0806 Overlay 075 0x0215B574: return_constant; post_return_candidate */
unsigned int st_ov075_0215B574(void) { return 12u; }
/* #0807 Overlay 075 0x0215B598: return_constant; post_return_candidate */
unsigned int st_ov075_0215B598(void) { return 13u; }
/* #0808 Overlay 075 0x0215E028: set_word; local_function_pointer */
void st_ov075_0215E028(void *p) { *(unsigned int*)((unsigned char*)p+0) = 0u; }
/* #0809 Overlay 075 0x02160B74: return_constant; local_function_pointer */
unsigned int st_ov075_02160B74(void) { return 12u; }
/* #0810 Overlay 076 0x02151DD8: empty; local_function_pointer */
void st_ov076_02151DD8(void) {}
/* #0811 Overlay 077 0x02157088: set_word; local_function_pointer */
void st_ov077_02157088(void *p) { *(unsigned int*)((unsigned char*)p+0) = 0u; }
/* #0812 Overlay 077 0x02158DB4: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov077_02158DB4(void) { return 0u; }
/* #0813 Overlay 077 0x0215AB68: empty; local_function_pointer */
void st_ov077_0215AB68(void) {}
/* #0814 Overlay 077 0x0215AF50: empty; local_function_pointer */
void st_ov077_0215AF50(void) {}
/* #0815 Overlay 078 0x0215D268: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov078_0215D268(void) { return 0u; }
/* #0816 Overlay 078 0x0215D2C8: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov078_0215D2C8(void) { return 0u; }
/* #0817 Overlay 079 0x02152560: empty; local_function_pointer */
void st_ov079_02152560(void) {}
/* #0818 Overlay 079 0x02155BA8: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov079_02155BA8(void) { return 0u; }
/* #0819 Overlay 079 0x02156DE8: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov079_02156DE8(void) { return 0u; }
/* #0820 Overlay 079 0x021570A4: empty; local_function_pointer */
void st_ov079_021570A4(void) {}
/* #0821 Overlay 079 0x021572F4: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov079_021572F4(void) { return 0u; }
/* #0822 Overlay 079 0x02157300: return_constant; local_function_pointer */
unsigned int st_ov079_02157300(void) { return 43008u; }
/* #0823 Overlay 080 0x0215C37C: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov080_0215C37C(void) { return 0u; }
/* #0824 Overlay 080 0x0215C384: return_constant; post_return_candidate */
unsigned int st_ov080_0215C384(void) { return 1u; }
/* #0825 Overlay 080 0x0215C38C: return_constant; post_return_candidate */
unsigned int st_ov080_0215C38C(void) { return 2u; }
/* #0826 Overlay 080 0x0215C394: return_constant; post_return_candidate */
unsigned int st_ov080_0215C394(void) { return 3u; }
/* #0827 Overlay 080 0x0215C39C: return_constant; post_return_candidate */
unsigned int st_ov080_0215C39C(void) { return 4u; }
/* #0828 Overlay 080 0x0215C3A4: return_constant; post_return_candidate */
unsigned int st_ov080_0215C3A4(void) { return 5u; }
/* #0829 Overlay 080 0x0215C3AC: return_constant; post_return_candidate */
unsigned int st_ov080_0215C3AC(void) { return 6u; }
/* #0830 Overlay 080 0x0215C3B4: return_constant; post_return_candidate */
unsigned int st_ov080_0215C3B4(void) { return 7u; }
/* #0831 Overlay 080 0x0215C3BC: return_constant; post_return_candidate */
unsigned int st_ov080_0215C3BC(void) { return 8u; }
/* #0832 Overlay 080 0x0215C3C4: return_constant; post_return_candidate */
unsigned int st_ov080_0215C3C4(void) { return 9u; }
/* #0833 Overlay 080 0x0215C3CC: return_constant; post_return_candidate */
unsigned int st_ov080_0215C3CC(void) { return 10u; }
/* #0834 Overlay 080 0x0215C3D4: return_constant; post_return_candidate */
unsigned int st_ov080_0215C3D4(void) { return 11u; }
/* #0835 Overlay 080 0x0215C3DC: return_not_constant; post_return_candidate */
unsigned int st_ov080_0215C3DC(void) { return 4294967295u; }
/* #0836 Overlay 080 0x0215CA4C: set_word; local_function_pointer */
void st_ov080_0215CA4C(void *p) { *(unsigned int*)((unsigned char*)p+0) = 0u; }
/* #0837 Overlay 080 0x0215D798: empty; local_function_pointer */
void st_ov080_0215D798(void) {}
/* #0838 Overlay 080 0x0215EB78: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov080_0215EB78(void) { return 0u; }
/* #0839 Overlay 080 0x0215EBD8: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov080_0215EBD8(void) { return 0u; }
/* #0840 Overlay 080 0x0215EDC4: empty; local_function_pointer */
void st_ov080_0215EDC4(void) {}
/* #0841 Overlay 080 0x0215EE34: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov080_0215EE34(void) { return 0u; }
/* #0842 Overlay 081 0x02151610: empty; local_function_pointer */
void st_ov081_02151610(void) {}
/* #0843 Overlay 081 0x021525BC: return_constant; local_function_pointer */
unsigned int st_ov081_021525BC(void) { return 1u; }
/* #0844 Overlay 081 0x021526F0: empty; local_function_pointer */
void st_ov081_021526F0(void) {}
/* #0845 Overlay 082 0x02157A18: empty; local_function_pointer */
void st_ov082_02157A18(void) {}
/* #0846 Overlay 082 0x02157A38: empty; local_function_pointer */
void st_ov082_02157A38(void) {}
/* #0847 Overlay 082 0x02157AC0: empty; local_function_pointer */
void st_ov082_02157AC0(void) {}
/* #0848 Overlay 082 0x02157ADC: empty; local_function_pointer */
void st_ov082_02157ADC(void) {}
/* #0849 Overlay 082 0x02157AF8: return_constant; local_function_pointer */
unsigned int st_ov082_02157AF8(void) { return 8192u; }
/* #0850 Overlay 082 0x02157CAC: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov082_02157CAC(void) { return 0u; }
/* #0851 Overlay 083 0x02157260: empty; local_function_pointer */
void st_ov083_02157260(void) {}
/* #0852 Overlay 083 0x0215C420: empty; local_function_pointer */
void st_ov083_0215C420(void) {}
/* #0853 Overlay 084 0x0215B120: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov084_0215B120(void) { return 0u; }
/* #0854 Overlay 084 0x0215DB24: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov084_0215DB24(void) { return 1u; }
/* #0855 Overlay 084 0x021606D8: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov084_021606D8(void) { return 1u; }
/* #0856 Overlay 084 0x021608AC: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov084_021608AC(void) { return 0u; }
/* #0857 Overlay 084 0x0216090C: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov084_0216090C(void) { return 0u; }
/* #0858 Overlay 085 0x02150FE4: write_word; local_function_pointer */
void st_ov085_02150FE4(void* p, unsigned int value) { *(unsigned int*)((unsigned char*)p+148) = value; }
/* #0859 Overlay 086 0x0215467C: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov086_0215467C(void) { return 0u; }
/* #0860 Overlay 086 0x0215DDAC: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov086_0215DDAC(void) { return 0u; }
/* #0861 Overlay 086 0x0215E6F8: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov086_0215E6F8(void) { return 0u; }
/* #0862 Overlay 086 0x0215E754: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov086_0215E754(void) { return 0u; }
/* #0863 Overlay 087 0x0215CD10: empty; local_function_pointer */
void st_ov087_0215CD10(void) {}
/* #0864 Overlay 087 0x02161434: empty; local_function_pointer */
void st_ov087_02161434(void) {}
/* #0865 Overlay 087 0x021614B0: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov087_021614B0(void) { return 0u; }
/* #0866 Overlay 087 0x0216184C: empty; local_function_pointer */
void st_ov087_0216184C(void) {}
/* #0867 Overlay 087 0x02161D4C: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov087_02161D4C(void) { return 0u; }
/* #0868 Overlay 087 0x02161DAC: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov087_02161DAC(void) { return 0u; }
/* #0869 Overlay 088 0x02168368: set_byte; post_return_candidate */
void st_ov088_02168368(void *p) { ((unsigned char*)p)[216] = 1u; }
/* #0870 Overlay 088 0x02168374: set_byte; post_return_candidate */
void st_ov088_02168374(void *p) { ((unsigned char*)p)[216] = 0u; }
/* #0871 Overlay 088 0x02168380: set_byte; post_return_candidate */
void st_ov088_02168380(void *p) { ((unsigned char*)p)[217] = 1u; }
/* #0872 Overlay 088 0x0216838C: set_byte; post_return_candidate */
void st_ov088_0216838C(void *p) { ((unsigned char*)p)[217] = 0u; }
/* #0873 Overlay 088 0x02168398: set_byte; post_return_candidate */
void st_ov088_02168398(void *p) { ((unsigned char*)p)[219] = 1u; }
/* #0874 Overlay 088 0x021683A4: set_byte; post_return_candidate */
void st_ov088_021683A4(void *p) { ((unsigned char*)p)[219] = 0u; }
/* #0875 Overlay 088 0x021683B0: set_byte; post_return_candidate */
void st_ov088_021683B0(void *p) { ((unsigned char*)p)[218] = 1u; }
/* #0876 Overlay 088 0x021683BC: set_byte; post_return_candidate */
void st_ov088_021683BC(void *p) { ((unsigned char*)p)[218] = 0u; }
/* #0877 Overlay 088 0x02168ABC: empty; upstream_symbol */
void st_ov088_02168ABC(void) {}
/* #0878 Overlay 088 0x02168B30: set_word; post_return_candidate */
void st_ov088_02168B30(void *p) { *(unsigned int*)((unsigned char*)p+60) = 1u; }
/* #0879 Overlay 088 0x02168B3C: set_byte; post_return_candidate */
void st_ov088_02168B3C(void *p) { ((unsigned char*)p)[105] = 1u; }
/* #0880 Overlay 088 0x02168B48: set_word; post_return_candidate */
void st_ov088_02168B48(void *p) { *(unsigned int*)((unsigned char*)p+68) = 0u; }
/* #0881 Overlay 088 0x02168B54: set_word; post_return_candidate */
void st_ov088_02168B54(void *p) { *(unsigned int*)((unsigned char*)p+68) = 1u; }
/* #0882 Overlay 088 0x02168B60: set_word; post_return_candidate */
void st_ov088_02168B60(void *p) { *(unsigned int*)((unsigned char*)p+68) = 3u; }
/* #0883 Overlay 088 0x0216A1E0: empty; upstream_symbol */
void st_ov088_0216A1E0(void) {}
/* #0884 Overlay 088 0x0216A498: empty; upstream_symbol */
void st_ov088_0216A498(void) {}
/* #0885 Overlay 088 0x0216A4BC: empty; upstream_symbol */
void st_ov088_0216A4BC(void) {}
/* #0886 Overlay 088 0x0216D0CC: empty; upstream_symbol */
void st_ov088_0216D0CC(void) {}
/* #0887 Overlay 088 0x0216F5B4: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov088_0216F5B4(void) { return 0u; }
/* #0888 Overlay 088 0x02170090: empty; upstream_symbol */
void st_ov088_02170090(void) {}
/* #0889 Overlay 088 0x0217014C: empty; upstream_symbol */
void st_ov088_0217014C(void) {}
/* #0890 Overlay 088 0x021708F4: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov088_021708F4(void) { return 0u; }
/* #0891 Overlay 088 0x02170CE8: return_constant; upstream_symbol */
unsigned int st_ov088_02170CE8(void) { return 0u; }
/* #0892 Overlay 088 0x02170D6C: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov088_02170D6C(void) { return 0u; }
/* #0893 Overlay 088 0x02171198: return_constant; upstream_symbol */
unsigned int st_ov088_02171198(void) { return 0u; }
/* #0894 Overlay 088 0x021714C4: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov088_021714C4(void) { return 0u; }
/* #0895 Overlay 088 0x021716F8: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov088_021716F8(void) { return 0u; }
/* #0896 Overlay 088 0x02171928: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov088_02171928(void) { return 0u; }
/* #0897 Overlay 088 0x02171B3C: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov088_02171B3C(void) { return 0u; }
/* #0898 Overlay 088 0x02171C5C: empty; upstream_symbol */
void st_ov088_02171C5C(void) {}
/* #0899 Overlay 088 0x02171C74: empty; upstream_symbol */
void st_ov088_02171C74(void) {}
/* #0900 Overlay 088 0x02171C78: return_constant; upstream_symbol */
unsigned int st_ov088_02171C78(void) { return 0u; }
/* #0901 Overlay 088 0x02171E78: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov088_02171E78(void) { return 0u; }
/* #0902 Overlay 088 0x0217208C: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov088_0217208C(void) { return 0u; }
/* #0903 Overlay 088 0x0217240C: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov088_0217240C(void) { return 0u; }
/* #0904 Overlay 088 0x02172418: return_constant; upstream_symbol */
unsigned int st_ov088_02172418(void) { return 0u; }
/* #0905 Overlay 088 0x02172724: empty; upstream_symbol */
void st_ov088_02172724(void) {}
/* #0906 Overlay 088 0x02173498: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov088_02173498(void) { return 0u; }
/* #0907 Overlay 088 0x02173A88: return_constant; post_return_candidate */
unsigned int st_ov088_02173A88(void) { return 0u; }
/* #0908 Overlay 088 0x02173BC4: return_constant; post_return_candidate */
unsigned int st_ov088_02173BC4(void) { return 0u; }
/* #0909 Overlay 088 0x021742C8: write_word; upstream_symbol */
void st_ov088_021742C8(void* p, unsigned int value) { *(unsigned int*)((unsigned char*)p+28) = value; }
/* #0910 Overlay 088 0x0217431C: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov088_0217431C(void) { return 1u; }
/* #0911 Overlay 088 0x02174324: return_constant; post_return_candidate */
unsigned int st_ov088_02174324(void) { return 0u; }
/* #0912 Overlay 088 0x0217432C: return_constant; post_return_candidate */
unsigned int st_ov088_0217432C(void) { return 0u; }
/* #0913 Overlay 088 0x02174388: write_byte; upstream_symbol */
void st_ov088_02174388(void* p, unsigned int value) { ((unsigned char*)p)[36] = (unsigned char)value; }
/* #0914 Overlay 089 0x02165A50: empty; upstream_symbol */
void st_ov089_02165A50(void) {}
/* #0915 Overlay 089 0x02165A68: empty; upstream_symbol */
void st_ov089_02165A68(void) {}
/* #0916 Overlay 089 0x021664E0: empty; upstream_symbol */
void st_ov089_021664E0(void) {}
/* #0917 Overlay 089 0x021665F4: set_word; post_return_candidate */
void st_ov089_021665F4(void *p) { *(unsigned int*)((unsigned char*)p+20) = 58u; }
/* #0918 Overlay 089 0x0216A84C: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov089_0216A84C(void) { return 1u; }
/* #0919 Overlay 089 0x0216A854: return_constant; post_return_candidate */
unsigned int st_ov089_0216A854(void) { return 0u; }
/* #0920 Overlay 089 0x0216A8A8: return_constant; post_return_candidate */
unsigned int st_ov089_0216A8A8(void) { return 0u; }
/* #0921 Overlay 089 0x0216AE14: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov089_0216AE14(void) { return 0u; }
/* #0922 Overlay 090 0x021721F4: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov090_021721F4(void) { return 0u; }
/* #0923 Overlay 090 0x021728F8: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov090_021728F8(void) { return 0u; }
/* #0924 Overlay 090 0x02173488: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov090_02173488(void) { return 0u; }
/* #0925 Overlay 090 0x0217379C: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov090_0217379C(void) { return 0u; }
/* #0926 Overlay 090 0x02173B78: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov090_02173B78(void) { return 0u; }
/* #0927 Overlay 090 0x02173BC0: return_constant; post_return_candidate */
unsigned int st_ov090_02173BC0(void) { return 0u; }
/* #0928 Overlay 090 0x02174B84: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov090_02174B84(void) { return 0u; }
/* #0929 Overlay 090 0x02175490: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov090_02175490(void) { return 0u; }
/* #0930 Overlay 091 0x02169CB8: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov091_02169CB8(void) { return 0u; }
/* #0931 Overlay 091 0x02169CC0: return_constant; post_return_candidate */
unsigned int st_ov091_02169CC0(void) { return 8192u; }
/* #0932 Overlay 091 0x02169CC8: return_constant; post_return_candidate */
unsigned int st_ov091_02169CC8(void) { return 16384u; }
/* #0933 Overlay 091 0x02169CD0: return_constant; post_return_candidate */
unsigned int st_ov091_02169CD0(void) { return 24576u; }
/* #0934 Overlay 091 0x02169D08: return_constant; post_return_candidate */
unsigned int st_ov091_02169D08(void) { return 0u; }
/* #0935 Overlay 091 0x02173400: return_constant; post_return_candidate */
unsigned int st_ov091_02173400(void) { return 0u; }
/* #0936 Overlay 092 0x02167E28: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov092_02167E28(void) { return 0u; }
/* #0937 Overlay 092 0x02168130: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov092_02168130(void) { return 0u; }
/* #0938 Overlay 092 0x0216D540: empty; upstream_symbol */
void st_ov092_0216D540(void) {}
/* #0939 Overlay 092 0x0216D544: empty; upstream_symbol */
void st_ov092_0216D544(void) {}
/* #0940 Overlay 092 0x02174114: empty; upstream_symbol */
void st_ov092_02174114(void) {}
/* #0941 Overlay 092 0x02175898: set_byte; post_return_candidate */
void st_ov092_02175898(void *p) { ((unsigned char*)p)[149] = 1u; }
/* #0942 Overlay 092 0x021758A4: set_byte; post_return_candidate */
void st_ov092_021758A4(void *p) { ((unsigned char*)p)[149] = 0u; }
/* #0943 Overlay 092 0x021764D4: empty; upstream_symbol */
void st_ov092_021764D4(void) {}
/* #0944 Overlay 092 0x02176F60: empty; upstream_symbol */
void st_ov092_02176F60(void) {}
/* #0945 Overlay 092 0x0217702C: empty; upstream_symbol */
void st_ov092_0217702C(void) {}
/* #0946 Overlay 092 0x021781D0: empty; upstream_symbol */
void st_ov092_021781D0(void) {}
/* #0947 Overlay 092 0x02179EEC: empty; upstream_symbol */
void st_ov092_02179EEC(void) {}
/* #0948 Overlay 092 0x02179F1C: empty; upstream_symbol */
void st_ov092_02179F1C(void) {}
/* #0949 Overlay 092 0x0217A7B4: empty; upstream_symbol */
void st_ov092_0217A7B4(void) {}
/* #0950 Overlay 093 0x0216C9D8: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov093_0216C9D8(void) { return 1u; }
/* #0951 Overlay 093 0x02170228: empty; upstream_symbol */
void st_ov093_02170228(void) {}
/* #0952 Overlay 093 0x02170240: empty; upstream_symbol */
void st_ov093_02170240(void) {}
/* #0953 Overlay 093 0x02170754: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov093_02170754(void) { return 54u; }
/* #0954 Overlay 093 0x0217075C: return_constant; post_return_candidate */
unsigned int st_ov093_0217075C(void) { return 83u; }
/* #0955 Overlay 093 0x02170764: return_constant; post_return_candidate */
unsigned int st_ov093_02170764(void) { return 92u; }
/* #0956 Overlay 093 0x0217076C: return_constant; post_return_candidate */
unsigned int st_ov093_0217076C(void) { return 54u; }
/* #0957 Overlay 093 0x02170774: return_constant; post_return_candidate */
unsigned int st_ov093_02170774(void) { return 50u; }
/* #0958 Overlay 093 0x0217077C: empty; upstream_symbol */
void st_ov093_0217077C(void) {}
/* #0959 Overlay 093 0x02170780: empty; upstream_symbol */
void st_ov093_02170780(void) {}
/* #0960 Overlay 093 0x02170E88: empty; upstream_symbol */
void st_ov093_02170E88(void) {}
/* #0961 Overlay 093 0x02171968: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov093_02171968(void) { return 0u; }
/* #0962 Overlay 093 0x02171B0C: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov093_02171B0C(void) { return 0u; }
/* #0963 Overlay 093 0x02171B34: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov093_02171B34(void) { return 0u; }
/* #0964 Overlay 093 0x02171C0C: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov093_02171C0C(void) { return 0u; }
/* #0965 Overlay 093 0x02171F0C: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov093_02171F0C(void) { return 1u; }
/* #0966 Overlay 093 0x02171F14: return_constant; post_return_candidate */
unsigned int st_ov093_02171F14(void) { return 0u; }
/* #0967 Overlay 093 0x02171F90: return_constant; post_return_candidate */
unsigned int st_ov093_02171F90(void) { return 1u; }
/* #0968 Overlay 093 0x0217244C: empty; upstream_symbol */
void st_ov093_0217244C(void) {}
/* #0969 Overlay 093 0x02172568: empty; upstream_symbol */
void st_ov093_02172568(void) {}
/* #0970 Overlay 093 0x02173954: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov093_02173954(void) { return 0u; }
/* #0971 Overlay 093 0x021755D8: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov093_021755D8(void) { return 0u; }
/* #0972 Overlay 094 0x021662D0: empty; upstream_symbol */
void st_ov094_021662D0(void) {}
/* #0973 Overlay 094 0x02167870: empty; upstream_symbol */
void st_ov094_02167870(void) {}
/* #0974 Overlay 094 0x0216B894: empty; upstream_symbol */
void st_ov094_0216B894(void) {}
/* #0975 Overlay 094 0x0216D130: empty; upstream_symbol */
void st_ov094_0216D130(void) {}
/* #0976 Overlay 094 0x0216D158: empty; upstream_symbol */
void st_ov094_0216D158(void) {}
/* #0977 Overlay 094 0x0216D490: empty; upstream_symbol */
void st_ov094_0216D490(void) {}
/* #0978 Overlay 094 0x0216F6AC: empty; upstream_symbol */
void st_ov094_0216F6AC(void) {}
/* #0979 Overlay 094 0x02170F84: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov094_02170F84(void) { return 0u; }
/* #0980 Overlay 094 0x021710F8: empty; upstream_symbol */
void st_ov094_021710F8(void) {}
/* #0981 Overlay 094 0x02172CB4: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov094_02172CB4(void) { return 1u; }
/* #0982 Overlay 094 0x0217373C: empty; upstream_symbol */
void st_ov094_0217373C(void) {}
/* #0983 Overlay 094 0x02173A88: empty; upstream_symbol */
void st_ov094_02173A88(void) {}
/* #0984 Overlay 094 0x02174E50: empty; upstream_symbol */
void st_ov094_02174E50(void) {}
/* #0985 Overlay 094 0x0217525C: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov094_0217525C(void) { return 1u; }
/* #0986 Overlay 095 0x02179E78: set_word; upstream_symbol */
void st_ov095_02179E78(void *p) { *(unsigned int*)((unsigned char*)p+0) = 0u; }
/* #0987 Overlay 095 0x0217BEF0: return_constant; post_return_candidate */
unsigned int st_ov095_0217BEF0(void) { return 0u; }
/* #0988 Overlay 095 0x0217E4D0: return_constant; post_return_candidate */
unsigned int st_ov095_0217E4D0(void) { return 0u; }
/* #0989 Overlay 095 0x02180CF0: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov095_02180CF0(void) { return 0u; }
/* #0990 Overlay 096 0x0217AED8: empty; upstream_symbol */
void st_ov096_0217AED8(void) {}
/* #0991 Overlay 096 0x0217AEDC: empty; upstream_symbol */
void st_ov096_0217AEDC(void) {}
/* #0992 Overlay 096 0x0217AEE0: empty; upstream_symbol */
void st_ov096_0217AEE0(void) {}
/* #0993 Overlay 096 0x0217AEE4: empty; upstream_symbol */
void st_ov096_0217AEE4(void) {}
/* #0994 Overlay 096 0x0217DB74: empty; upstream_symbol */
void st_ov096_0217DB74(void) {}
/* #0995 Overlay 096 0x0217DB78: empty; upstream_symbol */
void st_ov096_0217DB78(void) {}
/* #0996 Overlay 096 0x0217DBE8: return_constant; upstream_symbol */
unsigned int st_ov096_0217DBE8(void) { return 5u; }
/* #0997 Overlay 105 0x02188C0C: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov105_02188C0C(void) { return 0u; }
/* #0998 Overlay 105 0x02188C2C: return_constant; unconfirmed_possible_epilogue */
unsigned int st_ov105_02188C2C(void) { return 0u; }
/* #0999 Overlay 106 0x02184F20: set_word; local_function_pointer */
void st_ov106_02184F20(void *p) { *(unsigned int*)((unsigned char*)p+0) = 0u; }
/* #1000 Overlay 110 0x02185F30: set_word; local_function_pointer */
void st_ov110_02185F30(void *p) { *(unsigned int*)((unsigned char*)p+0) = 0u; }
