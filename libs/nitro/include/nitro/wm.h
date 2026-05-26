#ifndef _NITRO_WM_H
#define _NITRO_WM_H

#ifdef __cplusplus
extern "C" {
#endif

#define WM_SYSTEM_BUF_SIZE 0xf00

#define WM_ERRCODE_SUCCESS 0
#define WM_ERRCODE_FAILED 0x1
#define WM_ERRCODE_ILLEGAL_STATE 0x3
#define WM_ERRCODE_OPERATING 0x2
#define WM_ERRCODE_TIMEOUT 0x9
#define WM_ERRCODE_NO_ENTRY 0xb // may swap value with WM_ERRCODE_OVER_MAX_ENTRY
#define WM_ERRCODE_OVER_MAX_ENTRY 0xc
#define WM_ERRCODE_SEND_FAILED 0xf

#define WM_STATECODE_PARENT_START 0x0
#define WM_STATECODE_PARENT_FOUND 0x5
#define WM_STATECODE_MP_START 0xa
#define WM_STATECODE_CONNECTED 0x7
#define WM_STATECODE_BEACON_LOST 0x8
#define WM_STATECODE_DISCONNECTED 0x9
#define WM_STATECODE_PORT_RECV 0x15

#define WM_SIZE_BSSID 6
#define WM_SIZE_SSID 32

#define WM_ATTR_FLAG_ENTRY 0x1
#define WM_ATTR_FLAG_MB 0x2

#define WM_STATE_PARENT 0x7 // may swap value with WM_STATE_CHILD
#define WM_STATE_CHILD 0x8

typedef u16 WMErrCode;
typedef u16 WMStateCode;

typedef struct WMParentParam {
    /* 00 */ void *userGameInfo;
    /* 04 */ u16 userGameInfoLength;
    /* 08 */ u32 ggid;
    /* 0c */ u16 tgid;
    /* 0e */ u16 entryFlag;
    /* 10 */ u16 maxEntry;
    /* 12 */ u16 multiBootFlag;
    /* 14 */ u16 KS_Flag;
    /* 16 */ u16 CS_Flag;
    /* 18 */ u16 beaconPeriod;
    /* 1a */ u8 unk_1a[0x32 - 0x1a];
    /* 32 */ u16 channel;
    /* 34 */ u16 parentMaxSize;
    /* 36 */ u16 childMaxSize;
    /* 38 */
} WMParentParam;

typedef struct WMScanParam {
    /* 00 */ void *scanBuf;
    /* 04 */ u16 channel;
    /* 06 */ u16 maxChannelTime;
    /* 08 */ u8 bssid[WM_SIZE_BSSID];
    /* 0e */ u8 unk_0e[0x20 - 0x0e];
    /* 20 */
} WMScanParam;

typedef struct WMGameInfo {
    /* 00 */ u32 ggid;
    /* 04 */ u8 unk_04[0x07 - 0x04];
    /* 07 */ u8 attribute;
    /* 08 */ u8 unk_08[0x78];
    /* 80 */
} WMGameInfo;

typedef struct WMBssDesc {
    u16 length;
    u16 rssi;
    u8 bssid[WM_SIZE_BSSID];
    u16 ssidLength;
    u8 ssid[WM_SIZE_SSID];
    u16 capaInfo;
    struct {
        u16 basic;
        u16 support;
    } rateSet;
    u16 beaconPeriod;
    u16 dtimPeriod;
    u16 channel;
    u16 cfpPeriod;
    u16 cfpMaxDuration;
    u16 gameInfoLength;
    u16 rsv;
    WMGameInfo gameInfo;
} WMBssDesc;

typedef struct WMCallback {
    u8 unk_00[0x02 - 0x00];
    WMErrCode errcode;
} WMCallback;

typedef struct WMPortRecvCallback {
    /* 00 */ u8 unk_00[0x02 - 0x00];
    /* 02 */ WMErrCode errcode;
    /* 04 */ WMStateCode state;
    /* 08 */ u8 unk_08[0x0c - 0x08];
    /* 0c */ void *data;
    /* 10 */ u16 length;
    /* 14 */
} WMPortRecvCallback;

typedef struct WMStartMPCallback {
    /* 00 */ u8 unk_00[0x02 - 0x00];
    /* 02 */ WMErrCode errcode;
    /* 04 */ WMStateCode state;
} WMStartMPCallback;

typedef struct WMStartParentCallback {
    /* 00 */ u8 unk_00[0x02 - 0x00];
    /* 02 */ WMErrCode errcode;
    /* 04 */ u8 unk_04[0x08 - 0x04];
    /* 08 */ WMStateCode state;
    /* 0a */ u8 unk_0a[0x10 - 0x0a];
    /* 10 */ u16 aid;
} WMStartParentCallback;

typedef struct WMStartConnectCallback {
    /* 00 */ u8 unk_00[0x02 - 0x00];
    /* 02 */ WMErrCode errcode;
    /* 04 */ u8 unk_04[0x08 - 0x04];
    /* 08 */ WMStateCode state;
} WMStartConnectCallback;

typedef struct WMStartScanCallback {
    /* 00 */ u8 unk_00[0x02 - 0x00];
    /* 02 */ WMErrCode errcode;
    /* 04 */ u8 unk_04[0x08 - 0x04];
    /* 08 */ WMStateCode state;
    /* 0a */ u8 unk_0a[0x3c - 0x0a];
    /* 3c */ WMGameInfo gameInfo;
} WMStartScanCallback;

typedef struct WMPortSendCallback {
    /* 00 */ u8 unk_00[0x02 - 0x00];
    /* 02 */ WMErrCode errcode;
    /* 04 */ u8 unk_04[0x0c - 0x04];
    /* 0c */ u16 destBitmap;
    /* 0e */ u8 unk_0e[0x10 - 0x0e];
    /* 10 */ u16 sentBitmap;
    /* 12 */ u8 unk_12[0x14 - 0x12];
    /* 14 */ void *data;
    /* 18 */ u16 length;
} WMPortSendCallback;

typedef struct WMMeasureChannelCallback {
    /* 00 */ u8 unk_00[0x02 - 0x00];
    /* 02 */ WMErrCode errcode;
    /* 04 */ u8 unk_04[0x08 - 0x04];
    /* 08 */ u16 channel;
    /* 0a */ u16 ccaBusyRatio;
} WMMeasureChannelCallback;

typedef struct WMStatus {
    WMStateCode state;
    u8 unk[0x7cc];
} WMStatus;

WMErrCode WM_Initialize(void *buf, void (*callback)(void *arg), u32 param3);

WMErrCode WM_SetPortCallback(u16 port, void (*callback)(void *arg), void *param3);
void WM_SetEntry(void (*callback)(void *arg), u32 param2);
WMErrCode WM_SetParentParameter(void (*callback)(void *arg), WMParentParam *parentParam);
WMErrCode _WM_SetMPDataToPort(void (*callback)(void *arg), u32 param2, u16 *data, u32 length, u32 recvBitmap, u16 port,
                              u32 param7);
inline WMErrCode WM_SetMPDataToPort(void (*callback)(void *arg), u16 *data, u32 length, u32 recvBitmap, u16 port, u32 param6) {
    return _WM_SetMPDataToPort(callback, 0, data, length, recvBitmap, port, param6);
}

u32 WM_GetMPSendBufferSize(void);
u32 WM_GetMPReceiveBufferSize(void);
u32 WM_GetDispersionBeaconPeriod(void);
u32 WM_GetDispersionScanPeriod(void);
u32 WM_GetAllowedChannel(void);
u32 WM_GetLinkLevel(void);
u16 WM_GetNextTgid(void);

WMErrCode WM_StartParent(void (*callback)(void *arg));
WMErrCode _WM_StartConnect(void (*callback)(void *arg), WMBssDesc *bssDesc, void *param3, u32 param4, u32 param5);
inline WMErrCode WM_StartConnect(void (*callback)(void *arg), WMBssDesc *bssDesc, void *param3) {
    return _WM_StartConnect(callback, bssDesc, param3, 1, 0);
}
void WM_Disconnect(void (*callback)(void *arg), u16 aid);
WMErrCode WM_Reset(void (*callback)(void *arg));
WMErrCode WM_End(void (*callback)(void *arg));

WMErrCode WM_StartMP(void (*callback)(void *arg), u16 *recvBuf, u32 recvBufSize, u16 *sendBuf, u32 sendBufSize,
                     u32 commsPerFrame);
void WM_EndMP(void (*callback)(void *arg));

WMErrCode WM_StartScan(void (*callback)(void *arg), WMScanParam *scanParam);
WMErrCode WM_EndScan(void (*callback)(void *arg));

WMErrCode WM_MeasureChannel(void (*callback)(void *arg), u32 param2, u32 param3, u16 channel, u32 param5);

void WM_ReadStatus(WMStatus *status);

#ifdef __cplusplus
} // extern "C"
#endif

#endif
