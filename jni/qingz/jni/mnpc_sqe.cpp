//-32768 ~ +32767
#define MAX_SHORT_VALUE  32500       //�������shortֵ
#define MIN_SHORT_VALUE -32500       //������Сshortֵ
#include "mnpc_sqe.h"

// ��ͨ��������ǿ��ʼ������
 short AECInit(short channel, int sample_rate, int aec_param,
		int ns_param, int agc_param, int auto_align) {

	return 1;

}


//ֻ�е�channelΪ12ʱ���Ž�in_near,����copy�� out
//ֻ�е�channelΪ2ʱ����in_far,����copy�� out
//ֻ�е�channelΪ1ʱ��out���Ϊ0
//��ͨ��������ǿ������
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


// ��ͨ��������ǿ�ͷź���
 short AECFree(short channel) {

	return 1;

}




