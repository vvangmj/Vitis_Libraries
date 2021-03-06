/*
 * Copyright 2019 Xilinx, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _XF_CHANNEL_EXTRACT_CONFIG_H_
#define _XF_CHANNEL_EXTRACT_CONFIG_H_

#include "hls_stream.h"
#include "ap_int.h"
#include "common/xf_common.hpp"
#include "common/xf_utility.hpp"
#include "imgproc/xf_channel_extract.hpp"
#include "xf_config_params.h"

// Image width and height
#define HEIGHT 128
#define WIDTH 128

#if NO
#define OUT_TYPE ap_uint<8> // ap_uinnt8_t
#define IN_TYPE ap_uint<32> // ap_uint32_t
#elif RO
#define OUT_TYPE ap_uint<64> // ap_uint64_t
#define IN_TYPE ap_uint<64>  // ap_uint256_t
#endif

void channel_extract_accel(xf::cv::Mat<XF_8UC4, HEIGHT, WIDTH, XF_NPPC1>& imgInput,
                           xf::cv::Mat<XF_8UC1, HEIGHT, WIDTH, XF_NPPC1>& imgOutput,
                           unsigned short channel);

#endif //_XF_CHANNEL_EXTRACT_CONFIG_H_
