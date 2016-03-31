#include<pusher.h>

int rtmp_tcp_packet(const char* src, int srclen, const char* header, char* dst, int* dstlen)
{
    return *dstlen;
}

int rtmp_udp_packet(const char* src, int srclen, const char* header, char* dst, int* dstlen)
{
    return *dstlen;
}

int rtmp_tcp_h264_packet(const char* h264src, int srclen, const char* header, char* dst, int* dstlen)
{
    return *dstlen;
}

int rtmp_tcp_aac_packet(const char* aacsrc, int srclen, const char* header, char* dst, int* dstlen)
{
    return *dstlen;
}

int rtmp_udp_h264_packet(const char* h264src, int srclen, const char* header, char* dst, int* dstlen)
{
    return *dstlen;
}

int rtmp_udp_aac_packet(const char* aacsrc, int srclen, const char* header, char* dst, int* dstlen)
{
    return *dstlen;
}


MuxPkt rtmppusher = 
{
    .muxer_name      = "RTMP",
    .tcp_packet      = rtmp_tcp_packet,
    .udp_packet      = rtmp_udp_packet,
    .tcp_h264_packet = rtmp_tcp_h264_packet,
    .tcp_aac_packet  = rtmp_tcp_aac_packet,
    .udp_h264_packet = rtmp_udp_h264_packet,
    .udp_aac_packet  = rtmp_udp_aac_packet,
};
