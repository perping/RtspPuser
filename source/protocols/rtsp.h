#ifndef RTSP_H
#define RTSP_H

typedef struct RtpHeader
{
    /**//* byte 0 */  
    unsigned char csrc_len:4;        /**//* expect 0 */  
    unsigned char extension:1;        /**//* expect 1, see RTP_OP below */  
    unsigned char padding:1;        /**//* expect 0 */  
    unsigned char version:2;        /**//* expect 2 */  
    /**//* byte 1 */  
    unsigned char payload:7;        /**//* RTP_PAYLOAD_RTSP */  
    unsigned char marker:1;        /**//* expect 1 */  
    /**//* bytes 2, 3 */  
    unsigned short seq_no;              
    /**//* bytes 4-7 */  
    unsigned  long timestamp;          
    /**//* bytes 8-11 */  
    unsigned long ssrc;            /**//* stream number is used here. */
  
}RtpHeader;

typedef struct {  
    //byte 0  
    unsigned char TYPE:5;  
    unsigned char NRI:2;  
    unsigned char F:1;      
  
}NALU_Header; /**//* 1 BYTES */  
  
typedef struct {  
    //byte 0  
    unsigned char TYPE:5;  
    unsigned char NRI:2;   
    unsigned char F:1;      
}FU_Indicator; /**//* 1 BYTES */  
  
typedef struct {  
    //byte 0  
    unsigned char TYPE:5;  
    unsigned char R:1;  
    unsigned char E:1;  
    unsigned char S:1;      
}FU_Header; /**//* 1 BYTES */  

typedef struct RtcpHeader
{
}RtcpHeader;

#endif
