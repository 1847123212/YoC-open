/*
 * Copyright (C) 2019-2020 Alibaba Group Holding Limited
 */

#ifndef __MIC_PORT_H__
#define __MIC_PORT_H__

#include <aos/aos.h>
#include <ulog/ulog.h>
#include <yoc/mic.h>

#define MIC_EVENT_VAD_FLAG (1 << 0)
#define MIC_EVENT_KWS_FLAG (1 << 1)
#define MIC_EVENT_ALL_FLAG (MIC_EVENT_VAD_FLAG | MIC_EVENT_KWS_FLAG)

typedef struct mic_ops {
    int (*init)(mic_t *mic, mic_event_t mic_event); //ģ���ʼ��
    int (*deinit)(mic_t *mic); //ȥ��ʼ��
    int (*start)(mic_t *mic); //����ģ��
    int (*stop)(mic_t *mic); //ֹͣģ��
    
    int (*set_param)(mic_t *mic, mic_param_t *param); // pcm��������
    int (*ai_ctl)(mic_t *mic, int cmd, void *param);  // vad��aec�Ȳ�������

    int (*event_control)(mic_t *mic, int flag); // �¼�����
    
    int (*audio_control)(mic_t *mic, int enable, int timeout); // ���뵽�㷨����Ƶ���ƿ���
    int (*pcm_data_control)(mic_t *mic, int type, int enable);//���ݻ�������
    
    int (*debug_control)(mic_t *mic, int level);//����ʹ�ܿ���   
    int (*kws_wakeup)(mic_t *mic, int en); //ǿ�ƻ���
} mic_ops_t;

int mic_ops_register(mic_ops_t *ops);

#endif
