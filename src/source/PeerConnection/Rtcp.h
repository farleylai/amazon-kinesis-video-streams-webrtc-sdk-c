#ifndef __KINESIS_VIDEO_WEBRTC_CLIENT_PEERCONNECTION_RTCP__
#define __KINESIS_VIDEO_WEBRTC_CLIENT_PEERCONNECTION_RTCP__

#pragma once

#ifdef  __cplusplus
extern "C" {
#endif

STATUS onRtcpPacket(PKvsPeerConnection, PBYTE, UINT32);

#ifdef  __cplusplus
}
#endif
#endif  /* __KINESIS_VIDEO_WEBRTC_CLIENT_PEERCONNECTION_RTCP__ */
