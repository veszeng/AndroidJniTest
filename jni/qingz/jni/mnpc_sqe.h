
//-32768 ~ +32767
#define MAX_SHORT_VALUE  32500       //允许最大short值
#define MIN_SHORT_VALUE -32500       //允许最小short值
#include "stdio.h"
/* 多通道语音增强初始化函数
//channel:  有效值1-2
//aec_param: 0，AEC关闭；1：线性AEC；2：非线性AEC，弱；3：非线性AEC，中；4：非线性AEC，强；建议为4
//agc_param：-1，在AEC前降低增益；0，没有增益控制；1、2，在AEC前降低增益，在AEC后提高增益；建议为0
 */
extern short AECInit(short channel, int sample_rate, int aec_param, int ns_param, int agc_param, int auto_align); //8K - 48K

/* 多通道语音增强处理函数
//channel为1-2
 */
extern short AECProc(short channel, short *in_near, short *in_far, short *out);      //8K ~ 48KHz，每帧20ms长度

/* 多通道语音增强释放函数
//channel为1-2
 */
extern short AECFree(short channel);




