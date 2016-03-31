#include<pusher.h>

int hls_tcp_packet(const char* src, int srclen, const char* header, char* dst, int* dstlen)
{
    return *dstlen;
}

int hls_udp_packet(const char* src, int srclen, const char* header, char* dst, int* dstlen)
{
    return *dstlen;
}

int hls_tcp_h264_packet(const char* h264src, int srclen, const char* header, char* dst, int* dstlen)
{
    return *dstlen;
}

int hls_tcp_aac_packet(const char* aacsrc, int srclen, const char* header, char* dst, int* dstlen)
{
    return *dstlen;
}

int hls_udp_h264_packet(const char* h264src, int srclen, const char* header, char* dst, int* dstlen)
{
    return *dstlen;
}

int hls_udp_aac_packet(const char* aacsrc, int srclen, const char* header, char* dst, int* dstlen)
{
    return *dstlen;
}


MuxPkt hlspusher = 
{
    .muxer_name      = "HLS",
    .tcp_packet      = hls_tcp_packet,
    .udp_packet      = hls_udp_packet,
    .tcp_h264_packet = hls_tcp_h264_packet,
    .tcp_aac_packet  = hls_tcp_aac_packet,
    .udp_h264_packet = hls_udp_h264_packet,
    .udp_aac_packet  = hls_udp_aac_packet,
};
