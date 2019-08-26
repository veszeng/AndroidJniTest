//-32768 ~ +32767
#define MAX_SHORT_VALUE  32500       //允许最大short值
#define MIN_SHORT_VALUE -32500       //允许最小short值
#include "mnpc_sqe.h"

// 多通道语音增强初始化函数
 short AECInit(short channel, int sample_rate, int aec_param,
		int ns_param, int agc_param, int auto_align) {

	return 1;

}


//只有当channel为12时，才将in_near,数据copy到 out
//只有当channel为2时，将in_far,数据copy到 out
//只有当channel为1时，out输出为0
//多通道语音增强处理函数
 short AECProc(short channel, short *in_near, short *in_far, short *out) {
	switch (channel) {
	case 1:
		*out = 0;
		break;
	case 2:
		*out = *in_far;
		break;
	case 12:
		*out = *in_near;
		break;
	}
	return 1;
}


// 多通道语音增强释放函数
 short AECFree(short channel) {

	return 1;

}




