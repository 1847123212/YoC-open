/*
 * Copyright (C) 2019-2020 Alibaba Group Holding Limited
 */
#ifndef _AUI_CLOUD_DEMO_H_
#define _AUI_CLOUD_DEMO_H_

#include <stdint.h>
#include <yoc/aui_cloud.h>
#include <cloud_baidu.h>
#include <cloud_qq.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * asrʹ�ð�����
 *
 * @param aui aui����ָ��
 */
void aui_asr_register_aliyun(aui_t *aui, aui_asr_cb_t cb, void *priv);

#ifdef __cplusplus
}
#endif
#endif
