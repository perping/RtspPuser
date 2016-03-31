#include<pusher.h>

int rtsp_tcp_packet(const char* src, int srclen, const char* header, char* dst, int* dstlen)
{
    return *dstlen;
}

int rtsp_udp_packet(const char* src, int srclen, const char* header, char* dst, int* dstlen)
{
    return *dstlen;
}

int rtsp_tcp_h264_packet(const char* h264src, int srclen, const char* header, char* dst, int* dstlen)
{
    return *dstlen;
}

int rtsp_tcp_aac_packet(const char* aacsrc, int srclen, const char* header, char* dst, int* dstlen)
{
    return *dstlen;
}

int rtsp_udp_h264_packet(const char* h264src, int srclen, const char* header, char* dst, int* dstlen)
{
    return *dstlen;
}

int rtsp_udp_aac_packet(const char* aacsrc, int srclen, const char* header, char* dst, int* dstlen)
{
    return *dstlen;
}


MuxPkt rtsppusher = 
{
    .muxer_name      = "RTSP",
    .tcp_packet      = rtsp_tcp_packet,
    .udp_packet      = rtsp_udp_packet,
    .tcp_h264_packet = rtsp_tcp_h264_packet,
    .tcp_aac_packet  = rtsp_tcp_aac_packet,
    .udp_h264_packet = rtsp_udp_h264_packet,
    .udp_aac_packet  = rtsp_udp_aac_packet,
};
