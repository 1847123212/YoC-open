/*
 * Copyright (C) 2019-2020 Alibaba Group Holding Limited
 */
#ifndef _AUI_CLOUD_MIT_H_
#define _AUI_CLOUD_MIT_H_

#include <stdint.h>
#include <yoc/aui_cloud.h>

/**
 * asrʹ��MIT��
 *
 * @param aui aui����ָ��
 */
void aui_asr_register_mit(aui_t *aui, aui_asr_cb_t cb, void *priv);

/**
 * ttsʹ��MIT��
 *
 * @param aui aui����ָ��
 */
void aui_tts_register_mit(aui_t *aui, aui_tts_cb_t cb, void *priv);
#endif
