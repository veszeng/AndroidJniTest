
//-32768 ~ +32767
#define MAX_SHORT_VALUE  32500       //�������shortֵ
#define MIN_SHORT_VALUE -32500       //������Сshortֵ
#include "stdio.h"
/* ��ͨ��������ǿ��ʼ������
//channel:  ��Чֵ1-2
//aec_param: 0��AEC�رգ�1������AEC��2��������AEC������3��������AEC���У�4��������AEC��ǿ������Ϊ4
//agc_param��-1����AECǰ�������棻0��û��������ƣ�1��2����AECǰ�������棬��AEC��������棻����Ϊ0
 */
extern short AECInit(short channel, int sample_rate, int aec_param, int ns_param, int agc_param, int auto_align); //8K - 48K

/* ��ͨ��������ǿ������
//channelΪ1-2
 */
extern short AECProc(short channel, short *in_near, short *in_far, short *out);      //8K ~ 48KHz��ÿ֡20ms����

/* ��ͨ��������ǿ�ͷź���
//channelΪ1-2
 */
extern short AECFree(short channel);




