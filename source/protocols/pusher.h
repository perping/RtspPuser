// pangerping
// 2016-03-31
#ifndef PUSHER_H
#define PUSHER_H

typedef struct MuxPkt
{
    const char* muxer_name;

    int (*tcp_packet)(const char* src, int srclen, const char* header, char* dst, int* dstlen);
    int (*udp_packet)(const char* src, int srclen, const char* header, char* dst, int* dstlen);

    int (*tcp_h264_packet)(const char* h264src, int srclen, const char* header, char* dst, int* dstlen);
    int (*tcp_aac_packet) (const char* aacsrc,  int srclen, const char* header, char* dst, int* dstlen);
    int (*udp_h264_packet)(const char* h264src, int srclen, const char* header, char* dst, int* dstlen);
    int (*udp_aac_packet) (const char* aacsrc,  int srclen, const char* header, char* dst, int* dstlen);
}MuxPkt;

extern MuxPkt rtsppusher;
extern MuxPkt rtmppusher;
extern MuxPkt hlspusher;

#endif
