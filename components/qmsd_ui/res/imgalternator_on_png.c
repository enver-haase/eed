#include "lvgl/lvgl.h"

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

const LV_ATTRIBUTE_MEM_ALIGN uint8_t imgalternator_on_png_map[] = {
#if LV_COLOR_DEPTH == 1 || LV_COLOR_DEPTH == 8
0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x4,0x11,0x4,0x66,0x4,0xb2,0x4,0xdf,0x4,0xf5,0x4,0xf6,0x4,0xe2,0x4,0xb7,0x4,0x70,0x4,0x16,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x4,0x70,0x4,0xec,0x4,0xff,0x4,0xff,0x4,0xff,0x4,0xff,0x4,0xff,0x4,0xff,0x4,0xff,0x4,0xff,0x4,0xf1,0x4,0x7c,0x0,0x6,0x20,0x0,0x20,0x0,0x20,0x0,0x4,0x16,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x4,0x11,0x4,0x6e,0x20,0x0,0x20,0x0,0x4,0x15,0x4,0xc2,0x4,0xff,0x4,0xff,0x4,0xc9,0x4,0x6f,0x4,0x33,0x4,0x16,0x4,0x15,0x4,0x2f,0x4,0x65,0x4,0xc1,0x4,0xff,0x4,0xff,0x4,0xd1,0x4,0x1e,0x20,0x0,0x4,0x70,0x4,0xf1,0x4,0x20,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x4,0xa6,0x4,0xff,0x4,0x87,0x4,0x15,0x4,0xd8,0x4,0xff,0x4,0xec,0x4,0x52,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x4,0x43,0x4,0xe5,0x4,0xff,0x4,0xe2,0x4,0x20,0x4,0xba,0x4,0xff,0x4,0xc5,0x20,0x0,0x20,0x0,0x20,0x0,0x4,0x48,0x4,0xff,0x4,0xf4,0x4,0x2d,0x4,0xce,0x4,0xff,0x4,0xd0,0x4,0x20,0x20,0x0,0x20,0x0,0x20,0x0,0x4,0x9,0x4,0x7f,0x4,0x5d,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x4,0x18,0x4,0xc1,0x4,0xff,0x4,0xd8,0x4,0x26,0x4,0xe4,0x4,0xff,0x4,0x68,0x20,0x0,0x20,0x0,0x4,0xcc,0x4,0xff,0x4,0x79,0x4,0x6e,0x4,0xff,0x4,0xe1,0x4,0x14,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x4,0x76,0x4,0xff,0x4,0xff,0x4,0x25,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x4,0x9,0x4,0xd4,0x4,0xff,0x4,0x82,0x4,0x58,0x4,0xff,0x4,0xe9,0x0,0x4,0x4,0x30,0x4,0xff,0x4,0xf3,0x4,0xe,0x4,0xe7,0x4,0xff,0x4,0x45,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x4,0x80,0x4,0xff,0x4,0xff,0x4,0x31,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x4,0x30,0x4,0xff,0x4,0xf4,0x4,0xd,0x4,0xdf,0x4,0xff,0x4,0x52,0x4,0x81,0x4,0xff,0x4,0x9f,0x4,0x51,0x4,0xff,0x4,0xc3,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x4,0x7f,0x4,0xff,0x4,0xff,0x4,0x31,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x4,0xab,0x4,0xff,0x4,0x69,0x4,0x80,0x4,0xff,0x4,0xa0,0x4,0xbd,0x4,0xff,0x4,0x5a,0x4,0x9b,0x4,0xff,0x4,0x62,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x4,0x7f,0x4,0xff,0x4,0xff,0x4,0x31,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x4,0x4c,0x4,0xff,0x4,0xb4,0x4,0x3b,0x4,0xff,0x4,0xda,0x4,0xe5,0x4,0xff,0x4,0x27,0x4,0xd3,0x4,0xff,0x4,0x20,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x4,0x7f,0x4,0xff,0x4,0xff,0x4,0x31,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x4,0xb,0x4,0xfb,0x4,0xe8,0x0,0x7,0x4,0xfc,0x4,0xef,0x4,0xf6,0x4,0xff,0x4,0xe,0x4,0xe7,0x4,0xfa,0x4,0x8,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x4,0x7f,0x4,0xff,0x4,0xff,0x4,0x31,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x4,0xe6,0x4,0xfa,0x0,0x2,0x4,0xeb,0x4,0xf7,0x4,0xf8,0x4,0xff,0x4,0xc,0x4,0xe8,0x4,0xf9,0x0,0x6,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x4,0x82,0x4,0xff,0x4,0xff,0x4,0x33,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x4,0xe4,0x4,0xfb,0x0,0x4,0x4,0xe8,0x4,0xf8,0x4,0xec,0x4,0xff,0x4,0x1e,0x4,0xd7,0x4,0xff,0x4,0x1b,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x4,0x5c,0x4,0xff,0x4,0xf3,0x4,0x15,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x0,0x7,0x4,0xf9,0x4,0xec,0x0,0x2,0x4,0xf8,0x4,0xf2,0x4,0xc9,0x4,0xff,0x4,0x4a,0x4,0xa3,0x4,0xff,0x4,0x5a,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x4,0x31,0x4,0x1b,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x4,0x42,0x4,0xff,0x4,0xbc,0x4,0x2c,0x4,0xff,0x4,0xe2,0x4,0x95,0x4,0xff,0x4,0x89,0x4,0x5c,0x4,0xff,0x4,0xb5,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x4,0x2a,0x4,0x17,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x4,0x9c,0x4,0xff,0x4,0x74,0x4,0x6a,0x4,0xff,0x4,0xb4,0x4,0x4a,0x4,0xff,0x4,0xe1,0x4,0x9,0x4,0xef,0x4,0xff,0x4,0x34,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x4,0x62,0x4,0xff,0x4,0xf0,0x4,0x23,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x4,0x20,0x4,0xfa,0x4,0xfa,0x4,0x15,0x4,0xc3,0x4,0xff,0x4,0x6b,0x0,0x4,0x4,0xe9,0x4,0xff,0x4,0x53,0x4,0x7e,0x4,0xff,0x4,0xd4,0x4,0x8,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x4,0xa8,0x4,0xff,0x4,0xff,0x4,0x62,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x4,0xc2,0x4,0xff,0x4,0x91,0x4,0x34,0x4,0xff,0x4,0xf9,0x4,0x12,0x20,0x0,0x4,0x6f,0x4,0xff,0x4,0xdd,0x4,0x1d,0x4,0xd9,0x4,0xff,0x4,0xbc,0x4,0x13,0x20,0x0,0x20,0x0,0x20,0x0,0x4,0x2e,0x4,0xbb,0x4,0xa8,0x4,0xc,0x20,0x0,0x20,0x0,0x20,0x0,0x4,0xb,0x4,0xa6,0x4,0xff,0x4,0xe4,0x4,0x19,0x4,0xc7,0x4,0xff,0x4,0x8e,0x20,0x0,0x20,0x0,0x20,0x0,0x4,0xd2,0x4,0xff,0x4,0x99,0x4,0x23,0x4,0xe6,0x4,0xff,0x4,0xde,0x4,0x34,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x4,0x29,0x4,0xd6,0x4,0xff,0x4,0xef,0x4,0x2e,0x4,0x8a,0x4,0xff,0x4,0xe6,0x4,0xc,0x20,0x0,0x20,0x0,0x20,0x0,0x4,0x2e,0x4,0xba,0x4,0x15,0x20,0x0,0x4,0x23,0x4,0xd9,0x4,0xff,0x4,0xfd,0x4,0xac,0x4,0x4e,0x4,0x16,0x0,0x1,0x20,0x0,0x4,0x13,0x4,0x47,0x4,0xa4,0x4,0xf9,0x4,0xff,0x4,0xe2,0x4,0x2d,0x20,0x0,0x4,0x9a,0x4,0xff,0x4,0x46,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x4,0xc,0x4,0x8c,0x4,0xf9,0x4,0xff,0x4,0xff,0x4,0xfd,0x4,0xed,0x4,0xec,0x4,0xfc,0x4,0xff,0x4,0xff,0x4,0xfd,0x4,0x9a,0x4,0x13,0x20,0x0,0x20,0x0,0x20,0x0,0x4,0x4a,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x4,0x24,0x4,0x86,0x4,0xcf,0x4,0xec,0x4,0xf7,0x4,0xf7,0x4,0xed,0x4,0xd4,0x4,0x8f,0x4,0x2c,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP != 0
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0xe0,0x11,0xf8,0xe0,0x66,0xf8,0xe0,0xb2,0xf8,0xe0,0xdf,0xf8,0xe0,0xf5,0xf8,0xe0,0xf6,0xf8,0xe0,0xe2,0xf8,0xe0,0xb7,0xf8,0xe0,0x70,0xf8,0xc0,0x16,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0xe0,0x70,0xf8,0xe0,0xec,0xf8,0xe0,0xff,0xf8,0xe0,0xff,0xf8,0xe0,0xff,0xf8,0xe0,0xff,0xf8,0xe0,0xff,0xf8,0xe0,0xff,0xf8,0xe0,0xff,0xf8,0xe0,0xff,0xf8,0xe0,0xf1,0xf8,0xe0,0x7c,0xf8,0x0,0x6,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0xc0,0x16,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0xe0,0x11,0xf8,0xe0,0x6e,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0xc0,0x15,0xf8,0xe0,0xc2,0xf8,0xe0,0xff,0xf8,0xe0,0xff,0xf8,0xe0,0xc9,0xf8,0xe0,0x6f,0xf8,0xe0,0x33,0xf8,0xc0,0x16,0xf8,0xc0,0x15,0xf8,0xe0,0x2f,0xf8,0xe0,0x65,0xf8,0xe0,0xc1,0xf8,0xe0,0xff,0xf8,0xe0,0xff,0xf8,0xe0,0xd1,0xf8,0xc0,0x1e,0x0,0x0,0x0,0xf8,0xe0,0x70,0xf8,0xe0,0xf1,0xf8,0xc0,0x20,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0xe0,0xa6,0xf8,0xe0,0xff,0xf8,0xe0,0x87,0xf8,0xc0,0x15,0xf8,0xe0,0xd8,0xf8,0xe0,0xff,0xf8,0xe0,0xec,0xf8,0xe0,0x52,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0xe0,0x43,0xf8,0xe0,0xe5,0xf8,0xe0,0xff,0xf8,0xe0,0xe2,0xf8,0xc0,0x20,0xf8,0xe0,0xba,0xf8,0xe0,0xff,0xf8,0xe0,0xc5,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0xe0,0x48,0xf8,0xe0,0xff,0xf8,0xe0,0xf4,0xf8,0xe0,0x2d,0xf8,0xe0,0xce,0xf8,0xe0,0xff,0xf8,0xe0,0xd0,0xf8,0xc0,0x20,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0xe0,0x9,0xf8,0xe0,0x7f,0xf8,0xe0,0x5d,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf9,0x0,0x18,0xf8,0xe0,0xc1,0xf8,0xe0,0xff,0xf8,0xe0,0xd8,0xf8,0xe0,0x26,0xf8,0xe0,0xe4,0xf8,0xe0,0xff,0xf8,0xe0,0x68,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0xe0,0xcc,0xf8,0xe0,0xff,0xf8,0xe0,0x79,0xf8,0xe0,0x6e,0xf8,0xe0,0xff,0xf8,0xe0,0xe1,0xf8,0xc0,0x14,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0xe0,0x76,0xf8,0xe0,0xff,0xf8,0xe0,0xff,0xf8,0xe0,0x25,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0xe0,0x9,0xf8,0xe0,0xd4,0xf8,0xe0,0xff,0xf8,0xe0,0x82,0xf8,0xe0,0x58,0xf8,0xe0,0xff,0xf8,0xe0,0xe9,0xf8,0x0,0x4,0xf8,0xe0,0x30,0xf8,0xe0,0xff,0xf8,0xe0,0xf3,0xf8,0x80,0xe,0xf8,0xe0,0xe7,0xf8,0xe0,0xff,0xf8,0xe0,0x45,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0xe0,0x80,0xf8,0xe0,0xff,0xf8,0xe0,0xff,0xf9,0x0,0x31,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0xe0,0x30,0xf8,0xe0,0xff,0xf8,0xe0,0xf4,0xf8,0xa0,0xd,0xf8,0xe0,0xdf,0xf8,0xe0,0xff,0xf8,0xe0,0x52,0xf8,0xe0,0x81,0xf8,0xe0,0xff,0xf8,0xe0,0x9f,0xf8,0xe0,0x51,0xf8,0xe0,0xff,0xf8,0xe0,0xc3,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0xe0,0x7f,0xf8,0xe0,0xff,0xf8,0xe0,0xff,0xf9,0x0,0x31,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0xe0,0xab,0xf8,0xe0,0xff,0xf8,0xe0,0x69,0xf8,0xe0,0x80,0xf8,0xe0,0xff,0xf8,0xe0,0xa0,0xf8,0xe0,0xbd,0xf8,0xe0,0xff,0xf8,0xe0,0x5a,0xf8,0xe0,0x9b,0xf8,0xe0,0xff,0xf8,0xe0,0x62,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0xe0,0x7f,0xf8,0xe0,0xff,0xf8,0xe0,0xff,0xf9,0x0,0x31,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0xe0,0x4c,0xf8,0xe0,0xff,0xf8,0xe0,0xb4,0xf8,0xe0,0x3b,0xf8,0xe0,0xff,0xf8,0xe0,0xda,0xf8,0xe0,0xe5,0xf8,0xe0,0xff,0xf8,0xc0,0x27,0xf8,0xe0,0xd3,0xf8,0xe0,0xff,0xf9,0x0,0x20,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0xe0,0x7f,0xf8,0xe0,0xff,0xf8,0xe0,0xff,0xf9,0x0,0x31,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0xc0,0xb,0xf8,0xe0,0xfb,0xf8,0xe0,0xe8,0xf8,0x0,0x7,0xf8,0xe0,0xfc,0xf8,0xe0,0xef,0xf8,0xe0,0xf6,0xf8,0xe0,0xff,0xf8,0x80,0xe,0xf8,0xe0,0xe7,0xf8,0xe0,0xfa,0xf9,0x0,0x8,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0xe0,0x7f,0xf8,0xe0,0xff,0xf8,0xe0,0xff,0xf9,0x0,0x31,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0xe0,0xe6,0xf8,0xe0,0xfa,0xf8,0x0,0x2,0xf8,0xe0,0xeb,0xf8,0xe0,0xf7,0xf8,0xe0,0xf8,0xf8,0xe0,0xff,0xf8,0xa0,0xc,0xf8,0xe0,0xe8,0xf8,0xe0,0xf9,0xf8,0x0,0x6,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0xe0,0x82,0xf8,0xe0,0xff,0xf8,0xe0,0xff,0xf8,0xe0,0x33,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0xe0,0xe4,0xf8,0xe0,0xfb,0xf8,0x0,0x4,0xf8,0xe0,0xe8,0xf8,0xe0,0xf8,0xf8,0xe0,0xec,0xf8,0xe0,0xff,0xf8,0xc0,0x1e,0xf8,0xe0,0xd7,0xf8,0xe0,0xff,0xf8,0xe0,0x1b,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0xe0,0x5c,0xf8,0xe0,0xff,0xf8,0xe0,0xf3,0xf8,0xc0,0x15,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0x0,0x7,0xf8,0xe0,0xf9,0xf8,0xe0,0xec,0xf8,0x0,0x2,0xf8,0xe0,0xf8,0xf8,0xe0,0xf2,0xf8,0xe0,0xc9,0xf8,0xe0,0xff,0xf8,0xe0,0x4a,0xf8,0xe0,0xa3,0xf8,0xe0,0xff,0xf8,0xe0,0x5a,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0xc0,0x31,0xf8,0xe0,0x1b,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf9,0x0,0x42,0xf8,0xe0,0xff,0xf8,0xe0,0xbc,0xf8,0xe0,0x2c,0xf8,0xe0,0xff,0xf8,0xe0,0xe2,0xf8,0xe0,0x95,0xf8,0xe0,0xff,0xf8,0xe0,0x89,0xf8,0xe0,0x5c,0xf8,0xe0,0xff,0xf8,0xe0,0xb5,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0xe0,0x2a,0xf8,0xa0,0x17,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0xe0,0x9c,0xf8,0xe0,0xff,0xf8,0xe0,0x74,0xf8,0xe0,0x6a,0xf8,0xe0,0xff,0xf8,0xe0,0xb4,0xf9,0x0,0x4a,0xf8,0xe0,0xff,0xf8,0xe0,0xe1,0xf8,0xe0,0x9,0xf8,0xe0,0xef,0xf8,0xe0,0xff,0xf8,0xe0,0x34,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0xe0,0x62,0xf8,0xe0,0xff,0xf8,0xe0,0xf0,0xf8,0xe0,0x23,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0xc0,0x20,0xf8,0xe0,0xfa,0xf8,0xe0,0xfa,0xf8,0xc0,0x15,0xf8,0xe0,0xc3,0xf8,0xe0,0xff,0xf8,0xe0,0x6b,0xf8,0x0,0x4,0xf8,0xe0,0xe9,0xf8,0xe0,0xff,0xf8,0xe0,0x53,0xf8,0xe0,0x7e,0xf8,0xe0,0xff,0xf8,0xe0,0xd4,0xf9,0x0,0x8,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0xe0,0xa8,0xf8,0xe0,0xff,0xf8,0xe0,0xff,0xf8,0xe0,0x62,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0xe0,0xc2,0xf8,0xe0,0xff,0xf8,0xe0,0x91,0xf8,0xe0,0x34,0xf8,0xe0,0xff,0xf8,0xe0,0xf9,0xf8,0xe0,0x12,0x0,0x0,0x0,0xf8,0xe0,0x6f,0xf8,0xe0,0xff,0xf8,0xe0,0xdd,0xf8,0xc0,0x1d,0xf8,0xe0,0xd9,0xf8,0xe0,0xff,0xf8,0xe0,0xbc,0xf8,0xe0,0x13,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0xe0,0x2e,0xf8,0xe0,0xbb,0xf8,0xe0,0xa8,0xf8,0xa0,0xc,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0xc0,0xb,0xf8,0xe0,0xa6,0xf8,0xe0,0xff,0xf8,0xe0,0xe4,0xf9,0x0,0x19,0xf8,0xe0,0xc7,0xf8,0xe0,0xff,0xf8,0xe0,0x8e,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0xe0,0xd2,0xf8,0xe0,0xff,0xf8,0xe0,0x99,0xf8,0xe0,0x23,0xf8,0xe0,0xe6,0xf8,0xe0,0xff,0xf8,0xe0,0xde,0xf8,0xe0,0x34,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0xc0,0x29,0xf8,0xe0,0xd6,0xf8,0xe0,0xff,0xf8,0xe0,0xef,0xf8,0xe0,0x2e,0xf8,0xe0,0x8a,0xf8,0xe0,0xff,0xf8,0xe0,0xe6,0xf8,0xa0,0xc,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0xe0,0x2e,0xf8,0xe0,0xba,0xf8,0xc0,0x15,0x0,0x0,0x0,0xf8,0xe0,0x23,0xf8,0xe0,0xd9,0xf8,0xe0,0xff,0xf8,0xe0,0xfd,0xf8,0xe0,0xac,0xf8,0xe0,0x4e,0xf8,0xc0,0x16,0xf8,0x0,0x1,0x0,0x0,0x0,0xf8,0xe0,0x13,0xf8,0xe0,0x47,0xf8,0xe0,0xa4,0xf8,0xe0,0xf9,0xf8,0xe0,0xff,0xf8,0xe0,0xe2,0xf8,0xe0,0x2d,0x0,0x0,0x0,0xf8,0xe0,0x9a,0xf8,0xe0,0xff,0xf8,0xe0,0x46,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0xa0,0xc,0xf8,0xe0,0x8c,0xf8,0xe0,0xf9,0xf8,0xe0,0xff,0xf8,0xe0,0xff,0xf8,0xe0,0xfd,0xf8,0xe0,0xed,0xf8,0xe0,0xec,0xf8,0xe0,0xfc,0xf8,0xe0,0xff,0xf8,0xe0,0xff,0xf8,0xe0,0xfd,0xf8,0xe0,0x9a,0xf8,0xe0,0x13,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0xe0,0x4a,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0xe0,0x24,0xf8,0xe0,0x86,0xf8,0xe0,0xcf,0xf8,0xe0,0xec,0xf8,0xe0,0xf7,0xf8,0xe0,0xf7,0xf8,0xe0,0xed,0xf8,0xe0,0xd4,0xf8,0xe0,0x8f,0xf8,0xe0,0x2c,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP == 0
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xe0,0xf8,0x11,0xe0,0xf8,0x66,0xe0,0xf8,0xb2,0xe0,0xf8,0xdf,0xe0,0xf8,0xf5,0xe0,0xf8,0xf6,0xe0,0xf8,0xe2,0xe0,0xf8,0xb7,0xe0,0xf8,0x70,0xc0,0xf8,0x16,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xe0,0xf8,0x70,0xe0,0xf8,0xec,0xe0,0xf8,0xff,0xe0,0xf8,0xff,0xe0,0xf8,0xff,0xe0,0xf8,0xff,0xe0,0xf8,0xff,0xe0,0xf8,0xff,0xe0,0xf8,0xff,0xe0,0xf8,0xff,0xe0,0xf8,0xf1,0xe0,0xf8,0x7c,0x0,0xf8,0x6,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xc0,0xf8,0x16,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xe0,0xf8,0x11,0xe0,0xf8,0x6e,0x0,0x0,0x0,0x0,0x0,0x0,0xc0,0xf8,0x15,0xe0,0xf8,0xc2,0xe0,0xf8,0xff,0xe0,0xf8,0xff,0xe0,0xf8,0xc9,0xe0,0xf8,0x6f,0xe0,0xf8,0x33,0xc0,0xf8,0x16,0xc0,0xf8,0x15,0xe0,0xf8,0x2f,0xe0,0xf8,0x65,0xe0,0xf8,0xc1,0xe0,0xf8,0xff,0xe0,0xf8,0xff,0xe0,0xf8,0xd1,0xc0,0xf8,0x1e,0x0,0x0,0x0,0xe0,0xf8,0x70,0xe0,0xf8,0xf1,0xc0,0xf8,0x20,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xe0,0xf8,0xa6,0xe0,0xf8,0xff,0xe0,0xf8,0x87,0xc0,0xf8,0x15,0xe0,0xf8,0xd8,0xe0,0xf8,0xff,0xe0,0xf8,0xec,0xe0,0xf8,0x52,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xe0,0xf8,0x43,0xe0,0xf8,0xe5,0xe0,0xf8,0xff,0xe0,0xf8,0xe2,0xc0,0xf8,0x20,0xe0,0xf8,0xba,0xe0,0xf8,0xff,0xe0,0xf8,0xc5,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xe0,0xf8,0x48,0xe0,0xf8,0xff,0xe0,0xf8,0xf4,0xe0,0xf8,0x2d,0xe0,0xf8,0xce,0xe0,0xf8,0xff,0xe0,0xf8,0xd0,0xc0,0xf8,0x20,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xe0,0xf8,0x9,0xe0,0xf8,0x7f,0xe0,0xf8,0x5d,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf9,0x18,0xe0,0xf8,0xc1,0xe0,0xf8,0xff,0xe0,0xf8,0xd8,0xe0,0xf8,0x26,0xe0,0xf8,0xe4,0xe0,0xf8,0xff,0xe0,0xf8,0x68,0x0,0x0,0x0,0x0,0x0,0x0,0xe0,0xf8,0xcc,0xe0,0xf8,0xff,0xe0,0xf8,0x79,0xe0,0xf8,0x6e,0xe0,0xf8,0xff,0xe0,0xf8,0xe1,0xc0,0xf8,0x14,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xe0,0xf8,0x76,0xe0,0xf8,0xff,0xe0,0xf8,0xff,0xe0,0xf8,0x25,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xe0,0xf8,0x9,0xe0,0xf8,0xd4,0xe0,0xf8,0xff,0xe0,0xf8,0x82,0xe0,0xf8,0x58,0xe0,0xf8,0xff,0xe0,0xf8,0xe9,0x0,0xf8,0x4,0xe0,0xf8,0x30,0xe0,0xf8,0xff,0xe0,0xf8,0xf3,0x80,0xf8,0xe,0xe0,0xf8,0xe7,0xe0,0xf8,0xff,0xe0,0xf8,0x45,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xe0,0xf8,0x80,0xe0,0xf8,0xff,0xe0,0xf8,0xff,0x0,0xf9,0x31,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xe0,0xf8,0x30,0xe0,0xf8,0xff,0xe0,0xf8,0xf4,0xa0,0xf8,0xd,0xe0,0xf8,0xdf,0xe0,0xf8,0xff,0xe0,0xf8,0x52,0xe0,0xf8,0x81,0xe0,0xf8,0xff,0xe0,0xf8,0x9f,0xe0,0xf8,0x51,0xe0,0xf8,0xff,0xe0,0xf8,0xc3,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xe0,0xf8,0x7f,0xe0,0xf8,0xff,0xe0,0xf8,0xff,0x0,0xf9,0x31,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xe0,0xf8,0xab,0xe0,0xf8,0xff,0xe0,0xf8,0x69,0xe0,0xf8,0x80,0xe0,0xf8,0xff,0xe0,0xf8,0xa0,0xe0,0xf8,0xbd,0xe0,0xf8,0xff,0xe0,0xf8,0x5a,0xe0,0xf8,0x9b,0xe0,0xf8,0xff,0xe0,0xf8,0x62,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xe0,0xf8,0x7f,0xe0,0xf8,0xff,0xe0,0xf8,0xff,0x0,0xf9,0x31,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xe0,0xf8,0x4c,0xe0,0xf8,0xff,0xe0,0xf8,0xb4,0xe0,0xf8,0x3b,0xe0,0xf8,0xff,0xe0,0xf8,0xda,0xe0,0xf8,0xe5,0xe0,0xf8,0xff,0xc0,0xf8,0x27,0xe0,0xf8,0xd3,0xe0,0xf8,0xff,0x0,0xf9,0x20,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xe0,0xf8,0x7f,0xe0,0xf8,0xff,0xe0,0xf8,0xff,0x0,0xf9,0x31,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xc0,0xf8,0xb,0xe0,0xf8,0xfb,0xe0,0xf8,0xe8,0x0,0xf8,0x7,0xe0,0xf8,0xfc,0xe0,0xf8,0xef,0xe0,0xf8,0xf6,0xe0,0xf8,0xff,0x80,0xf8,0xe,0xe0,0xf8,0xe7,0xe0,0xf8,0xfa,0x0,0xf9,0x8,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xe0,0xf8,0x7f,0xe0,0xf8,0xff,0xe0,0xf8,0xff,0x0,0xf9,0x31,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xe0,0xf8,0xe6,0xe0,0xf8,0xfa,0x0,0xf8,0x2,0xe0,0xf8,0xeb,0xe0,0xf8,0xf7,0xe0,0xf8,0xf8,0xe0,0xf8,0xff,0xa0,0xf8,0xc,0xe0,0xf8,0xe8,0xe0,0xf8,0xf9,0x0,0xf8,0x6,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xe0,0xf8,0x82,0xe0,0xf8,0xff,0xe0,0xf8,0xff,0xe0,0xf8,0x33,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xe0,0xf8,0xe4,0xe0,0xf8,0xfb,0x0,0xf8,0x4,0xe0,0xf8,0xe8,0xe0,0xf8,0xf8,0xe0,0xf8,0xec,0xe0,0xf8,0xff,0xc0,0xf8,0x1e,0xe0,0xf8,0xd7,0xe0,0xf8,0xff,0xe0,0xf8,0x1b,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xe0,0xf8,0x5c,0xe0,0xf8,0xff,0xe0,0xf8,0xf3,0xc0,0xf8,0x15,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0x7,0xe0,0xf8,0xf9,0xe0,0xf8,0xec,0x0,0xf8,0x2,0xe0,0xf8,0xf8,0xe0,0xf8,0xf2,0xe0,0xf8,0xc9,0xe0,0xf8,0xff,0xe0,0xf8,0x4a,0xe0,0xf8,0xa3,0xe0,0xf8,0xff,0xe0,0xf8,0x5a,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xc0,0xf8,0x31,0xe0,0xf8,0x1b,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf9,0x42,0xe0,0xf8,0xff,0xe0,0xf8,0xbc,0xe0,0xf8,0x2c,0xe0,0xf8,0xff,0xe0,0xf8,0xe2,0xe0,0xf8,0x95,0xe0,0xf8,0xff,0xe0,0xf8,0x89,0xe0,0xf8,0x5c,0xe0,0xf8,0xff,0xe0,0xf8,0xb5,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xe0,0xf8,0x2a,0xa0,0xf8,0x17,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xe0,0xf8,0x9c,0xe0,0xf8,0xff,0xe0,0xf8,0x74,0xe0,0xf8,0x6a,0xe0,0xf8,0xff,0xe0,0xf8,0xb4,0x0,0xf9,0x4a,0xe0,0xf8,0xff,0xe0,0xf8,0xe1,0xe0,0xf8,0x9,0xe0,0xf8,0xef,0xe0,0xf8,0xff,0xe0,0xf8,0x34,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xe0,0xf8,0x62,0xe0,0xf8,0xff,0xe0,0xf8,0xf0,0xe0,0xf8,0x23,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xc0,0xf8,0x20,0xe0,0xf8,0xfa,0xe0,0xf8,0xfa,0xc0,0xf8,0x15,0xe0,0xf8,0xc3,0xe0,0xf8,0xff,0xe0,0xf8,0x6b,0x0,0xf8,0x4,0xe0,0xf8,0xe9,0xe0,0xf8,0xff,0xe0,0xf8,0x53,0xe0,0xf8,0x7e,0xe0,0xf8,0xff,0xe0,0xf8,0xd4,0x0,0xf9,0x8,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xe0,0xf8,0xa8,0xe0,0xf8,0xff,0xe0,0xf8,0xff,0xe0,0xf8,0x62,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xe0,0xf8,0xc2,0xe0,0xf8,0xff,0xe0,0xf8,0x91,0xe0,0xf8,0x34,0xe0,0xf8,0xff,0xe0,0xf8,0xf9,0xe0,0xf8,0x12,0x0,0x0,0x0,0xe0,0xf8,0x6f,0xe0,0xf8,0xff,0xe0,0xf8,0xdd,0xc0,0xf8,0x1d,0xe0,0xf8,0xd9,0xe0,0xf8,0xff,0xe0,0xf8,0xbc,0xe0,0xf8,0x13,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xe0,0xf8,0x2e,0xe0,0xf8,0xbb,0xe0,0xf8,0xa8,0xa0,0xf8,0xc,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xc0,0xf8,0xb,0xe0,0xf8,0xa6,0xe0,0xf8,0xff,0xe0,0xf8,0xe4,0x0,0xf9,0x19,0xe0,0xf8,0xc7,0xe0,0xf8,0xff,0xe0,0xf8,0x8e,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xe0,0xf8,0xd2,0xe0,0xf8,0xff,0xe0,0xf8,0x99,0xe0,0xf8,0x23,0xe0,0xf8,0xe6,0xe0,0xf8,0xff,0xe0,0xf8,0xde,0xe0,0xf8,0x34,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xc0,0xf8,0x29,0xe0,0xf8,0xd6,0xe0,0xf8,0xff,0xe0,0xf8,0xef,0xe0,0xf8,0x2e,0xe0,0xf8,0x8a,0xe0,0xf8,0xff,0xe0,0xf8,0xe6,0xa0,0xf8,0xc,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xe0,0xf8,0x2e,0xe0,0xf8,0xba,0xc0,0xf8,0x15,0x0,0x0,0x0,0xe0,0xf8,0x23,0xe0,0xf8,0xd9,0xe0,0xf8,0xff,0xe0,0xf8,0xfd,0xe0,0xf8,0xac,0xe0,0xf8,0x4e,0xc0,0xf8,0x16,0x0,0xf8,0x1,0x0,0x0,0x0,0xe0,0xf8,0x13,0xe0,0xf8,0x47,0xe0,0xf8,0xa4,0xe0,0xf8,0xf9,0xe0,0xf8,0xff,0xe0,0xf8,0xe2,0xe0,0xf8,0x2d,0x0,0x0,0x0,0xe0,0xf8,0x9a,0xe0,0xf8,0xff,0xe0,0xf8,0x46,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xa0,0xf8,0xc,0xe0,0xf8,0x8c,0xe0,0xf8,0xf9,0xe0,0xf8,0xff,0xe0,0xf8,0xff,0xe0,0xf8,0xfd,0xe0,0xf8,0xed,0xe0,0xf8,0xec,0xe0,0xf8,0xfc,0xe0,0xf8,0xff,0xe0,0xf8,0xff,0xe0,0xf8,0xfd,0xe0,0xf8,0x9a,0xe0,0xf8,0x13,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xe0,0xf8,0x4a,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xe0,0xf8,0x24,0xe0,0xf8,0x86,0xe0,0xf8,0xcf,0xe0,0xf8,0xec,0xe0,0xf8,0xf7,0xe0,0xf8,0xf7,0xe0,0xf8,0xed,0xe0,0xf8,0xd4,0xe0,0xf8,0x8f,0xe0,0xf8,0x2c,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0
#endif
#if LV_COLOR_DEPTH == 32
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1e,0xff,0x11,0x0,0x1e,0xff,0x66,0x0,0x1e,0xff,0xb2,0x0,0x1e,0xff,0xdf,0x0,0x1d,0xff,0xf5,0x0,0x1e,0xff,0xf6,0x0,0x1d,0xff,0xe2,0x0,0x1d,0xff,0xb7,0x0,0x1e,0xff,0x70,0x0,0x17,0xff,0x16,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1e,0xff,0x70,0x0,0x1d,0xff,0xec,0x0,0x1e,0xff,0xff,0x0,0x1e,0xff,0xff,0x0,0x1e,0xff,0xff,0x0,0x1e,0xff,0xff,0x0,0x1e,0xff,0xff,0x0,0x1e,0xff,0xff,0x0,0x1e,0xff,0xff,0x0,0x1e,0xff,0xff,0x0,0x1e,0xff,0xf1,0x0,0x1d,0xff,0x7c,0x0,0x0,0xff,0x6,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x17,0xff,0x16,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1e,0xff,0x11,0x0,0x1e,0xff,0x6e,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x18,0xff,0x15,0x0,0x1e,0xff,0xc2,0x0,0x1e,0xff,0xff,0x0,0x1e,0xff,0xff,0x0,0x1d,0xff,0xc9,0x0,0x1e,0xff,0x6f,0x0,0x1e,0xff,0x33,0x0,0x17,0xff,0x16,0x0,0x18,0xff,0x15,0x0,0x1b,0xff,0x2f,0x0,0x1e,0xff,0x65,0x0,0x1d,0xff,0xc1,0x0,0x1e,0xff,0xff,0x0,0x1e,0xff,0xff,0x0,0x1d,0xff,0xd1,0x0,0x1a,0xff,0x1e,0x0,0x0,0x0,0x0,0x0,0x1e,0xff,0x70,0x0,0x1e,0xff,0xf1,0x0,0x18,0xff,0x20,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1d,0xff,0xa6,0x0,0x1e,0xff,0xff,0x0,0x1e,0xff,0x87,0x0,0x18,0xff,0x15,0x0,0x1e,0xff,0xd8,0x0,0x1e,0xff,0xff,0x0,0x1d,0xff,0xec,0x0,0x1c,0xff,0x52,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1e,0xff,0x43,0x0,0x1e,0xff,0xe5,0x0,0x1e,0xff,0xff,0x0,0x1d,0xff,0xe2,0x0,0x18,0xff,0x20,0x0,0x1e,0xff,0xba,0x0,0x1e,0xff,0xff,0x0,0x1e,0xff,0xc5,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1c,0xff,0x48,0x0,0x1e,0xff,0xff,0x0,0x1d,0xff,0xf4,0x0,0x1c,0xff,0x2d,0x0,0x1e,0xff,0xce,0x0,0x1e,0xff,0xff,0x0,0x1d,0xff,0xd0,0x0,0x18,0xff,0x20,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1c,0xff,0x9,0x0,0x1e,0xff,0x7f,0x0,0x1e,0xff,0x5d,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x20,0xff,0x18,0x0,0x1d,0xff,0xc1,0x0,0x1e,0xff,0xff,0x0,0x1e,0xff,0xd8,0x0,0x1b,0xff,0x26,0x0,0x1d,0xff,0xe4,0x0,0x1e,0xff,0xff,0x0,0x1d,0xff,0x68,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1e,0xff,0xcc,0x0,0x1e,0xff,0xff,0x0,0x1e,0xff,0x79,0x0,0x1e,0xff,0x6e,0x0,0x1e,0xff,0xff,0x0,0x1d,0xff,0xe1,0x0,0x1a,0xff,0x14,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1c,0xff,0x76,0x0,0x1e,0xff,0xff,0x0,0x1e,0xff,0xff,0x0,0x1c,0xff,0x25,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1c,0xff,0x9,0x0,0x1e,0xff,0xd4,0x0,0x1e,0xff,0xff,0x0,0x1d,0xff,0x82,0x0,0x1d,0xff,0x58,0x0,0x1e,0xff,0xff,0x0,0x1e,0xff,0xe9,0x0,0x0,0xff,0x4,0x0,0x1b,0xff,0x30,0x0,0x1e,0xff,0xff,0x0,0x1d,0xff,0xf3,0x0,0x12,0xff,0xe,0x0,0x1e,0xff,0xe7,0x0,0x1e,0xff,0xff,0x0,0x1e,0xff,0x45,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1e,0xff,0x80,0x0,0x1e,0xff,0xff,0x0,0x1e,0xff,0xff,0x0,0x1f,0xff,0x31,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1b,0xff,0x30,0x0,0x1e,0xff,0xff,0x0,0x1d,0xff,0xf4,0x0,0x14,0xff,0xd,0x0,0x1e,0xff,0xdf,0x0,0x1e,0xff,0xff,0x0,0x1c,0xff,0x52,0x0,0x1e,0xff,0x81,0x0,0x1e,0xff,0xff,0x0,0x1d,0xff,0x9f,0x0,0x1c,0xff,0x51,0x0,0x1e,0xff,0xff,0x0,0x1e,0xff,0xc3,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1e,0xff,0x7f,0x0,0x1e,0xff,0xff,0x0,0x1e,0xff,0xff,0x0,0x1f,0xff,0x31,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1e,0xff,0xab,0x0,0x1e,0xff,0xff,0x0,0x1d,0xff,0x69,0x0,0x1e,0xff,0x80,0x0,0x1e,0xff,0xff,0x0,0x1e,0xff,0xa0,0x0,0x1e,0xff,0xbd,0x0,0x1e,0xff,0xff,0x0,0x1c,0xff,0x5a,0x0,0x1e,0xff,0x9b,0x0,0x1e,0xff,0xff,0x0,0x1d,0xff,0x62,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1e,0xff,0x7f,0x0,0x1e,0xff,0xff,0x0,0x1e,0xff,0xff,0x0,0x1f,0xff,0x31,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1e,0xff,0x4c,0x0,0x1e,0xff,0xff,0x0,0x1e,0xff,0xb4,0x0,0x1e,0xff,0x3b,0x0,0x1e,0xff,0xff,0x0,0x1d,0xff,0xda,0x0,0x1e,0xff,0xe5,0x0,0x1e,0xff,0xff,0x0,0x1a,0xff,0x27,0x0,0x1d,0xff,0xd3,0x0,0x1e,0xff,0xff,0x0,0x20,0xff,0x20,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1e,0xff,0x7f,0x0,0x1e,0xff,0xff,0x0,0x1e,0xff,0xff,0x0,0x1f,0xff,0x31,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x17,0xff,0xb,0x0,0x1d,0xff,0xfb,0x0,0x1e,0xff,0xe8,0x0,0x0,0xff,0x7,0x0,0x1d,0xff,0xfc,0x0,0x1e,0xff,0xef,0x0,0x1d,0xff,0xf6,0x0,0x1e,0xff,0xff,0x0,0x12,0xff,0xe,0x0,0x1e,0xff,0xe7,0x0,0x1e,0xff,0xfa,0x0,0x20,0xff,0x8,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1e,0xff,0x7f,0x0,0x1e,0xff,0xff,0x0,0x1e,0xff,0xff,0x0,0x1f,0xff,0x31,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1e,0xff,0xe6,0x0,0x1e,0xff,0xfa,0x0,0x0,0xff,0x2,0x0,0x1d,0xff,0xeb,0x0,0x1e,0xff,0xf7,0x0,0x1e,0xff,0xf8,0x0,0x1e,0xff,0xff,0x0,0x15,0xff,0xc,0x0,0x1e,0xff,0xe8,0x0,0x1e,0xff,0xf9,0x0,0x0,0xff,0x6,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1d,0xff,0x82,0x0,0x1e,0xff,0xff,0x0,0x1e,0xff,0xff,0x0,0x1e,0xff,0x33,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1d,0xff,0xe4,0x0,0x1d,0xff,0xfb,0x0,0x0,0xff,0x4,0x0,0x1e,0xff,0xe8,0x0,0x1e,0xff,0xf8,0x0,0x1e,0xff,0xec,0x0,0x1e,0xff,0xff,0x0,0x1a,0xff,0x1e,0x0,0x1e,0xff,0xd7,0x0,0x1e,0xff,0xff,0x0,0x1c,0xff,0x1b,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1e,0xff,0x5c,0x0,0x1e,0xff,0xff,0x0,0x1d,0xff,0xf3,0x0,0x18,0xff,0x15,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xff,0x7,0x0,0x1e,0xff,0xf9,0x0,0x1d,0xff,0xec,0x0,0x0,0xff,0x2,0x0,0x1e,0xff,0xf8,0x0,0x1e,0xff,0xf2,0x0,0x1d,0xff,0xc9,0x0,0x1e,0xff,0xff,0x0,0x1c,0xff,0x4a,0x0,0x1e,0xff,0xa3,0x0,0x1e,0xff,0xff,0x0,0x1c,0xff,0x5a,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1a,0xff,0x31,0x0,0x1c,0xff,0x1b,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1f,0xff,0x42,0x0,0x1e,0xff,0xff,0x0,0x1e,0xff,0xbc,0x0,0x1d,0xff,0x2c,0x0,0x1e,0xff,0xff,0x0,0x1d,0xff,0xe2,0x0,0x1d,0xff,0x95,0x0,0x1e,0xff,0xff,0x0,0x1e,0xff,0x89,0x0,0x1e,0xff,0x5c,0x0,0x1e,0xff,0xff,0x0,0x1e,0xff,0xb5,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1e,0xff,0x2a,0x0,0x16,0xff,0x17,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1d,0xff,0x9c,0x0,0x1e,0xff,0xff,0x0,0x1d,0xff,0x74,0x0,0x1d,0xff,0x6a,0x0,0x1e,0xff,0xff,0x0,0x1e,0xff,0xb4,0x0,0x1f,0xff,0x4a,0x0,0x1e,0xff,0xff,0x0,0x1d,0xff,0xe1,0x0,0x1c,0xff,0x9,0x0,0x1e,0xff,0xef,0x0,0x1e,0xff,0xff,0x0,0x1d,0xff,0x34,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1d,0xff,0x62,0x0,0x1e,0xff,0xff,0x0,0x1e,0xff,0xf0,0x0,0x1d,0xff,0x23,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x18,0xff,0x20,0x0,0x1e,0xff,0xfa,0x0,0x1e,0xff,0xfa,0x0,0x18,0xff,0x15,0x0,0x1d,0xff,0xc3,0x0,0x1e,0xff,0xff,0x0,0x1d,0xff,0x6b,0x0,0x0,0xff,0x4,0x0,0x1e,0xff,0xe9,0x0,0x1e,0xff,0xff,0x0,0x1c,0xff,0x53,0x0,0x1c,0xff,0x7e,0x0,0x1e,0xff,0xff,0x0,0x1e,0xff,0xd4,0x0,0x20,0xff,0x8,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1e,0xff,0xa8,0x0,0x1e,0xff,0xff,0x0,0x1e,0xff,0xff,0x0,0x1d,0xff,0x62,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1e,0xff,0xc2,0x0,0x1e,0xff,0xff,0x0,0x1e,0xff,0x91,0x0,0x1d,0xff,0x34,0x0,0x1e,0xff,0xff,0x0,0x1e,0xff,0xf9,0x0,0x1c,0xff,0x12,0x0,0x0,0x0,0x0,0x0,0x1e,0xff,0x6f,0x0,0x1e,0xff,0xff,0x0,0x1e,0xff,0xdd,0x0,0x1a,0xff,0x1d,0x0,0x1d,0xff,0xd9,0x0,0x1e,0xff,0xff,0x0,0x1e,0xff,0xbc,0x0,0x1b,0xff,0x13,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1c,0xff,0x2e,0x0,0x1e,0xff,0xbb,0x0,0x1d,0xff,0xa8,0x0,0x15,0xff,0xc,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x17,0xff,0xb,0x0,0x1d,0xff,0xa6,0x0,0x1e,0xff,0xff,0x0,0x1d,0xff,0xe4,0x0,0x1f,0xff,0x19,0x0,0x1d,0xff,0xc7,0x0,0x1e,0xff,0xff,0x0,0x1d,0xff,0x8e,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1d,0xff,0xd2,0x0,0x1e,0xff,0xff,0x0,0x1e,0xff,0x99,0x0,0x1d,0xff,0x23,0x0,0x1e,0xff,0xe6,0x0,0x1e,0xff,0xff,0x0,0x1e,0xff,0xde,0x0,0x1d,0xff,0x34,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x19,0xff,0x29,0x0,0x1e,0xff,0xd6,0x0,0x1e,0xff,0xff,0x0,0x1e,0xff,0xef,0x0,0x1c,0xff,0x2e,0x0,0x1e,0xff,0x8a,0x0,0x1e,0xff,0xff,0x0,0x1e,0xff,0xe6,0x0,0x15,0xff,0xc,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1c,0xff,0x2e,0x0,0x1e,0xff,0xba,0x0,0x18,0xff,0x15,0x0,0x0,0x0,0x0,0x0,0x1d,0xff,0x23,0x0,0x1d,0xff,0xd9,0x0,0x1e,0xff,0xff,0x0,0x1d,0xff,0xfd,0x0,0x1e,0xff,0xac,0x0,0x1d,0xff,0x4e,0x0,0x17,0xff,0x16,0x0,0x0,0xff,0x1,0x0,0x0,0x0,0x0,0x0,0x1b,0xff,0x13,0x0,0x1d,0xff,0x47,0x0,0x1e,0xff,0xa4,0x0,0x1e,0xff,0xf9,0x0,0x1e,0xff,0xff,0x0,0x1d,0xff,0xe2,0x0,0x1c,0xff,0x2d,0x0,0x0,0x0,0x0,0x0,0x1e,0xff,0x9a,0x0,0x1e,0xff,0xff,0x0,0x1d,0xff,0x46,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x15,0xff,0xc,0x0,0x1d,0xff,0x8c,0x0,0x1e,0xff,0xf9,0x0,0x1e,0xff,0xff,0x0,0x1e,0xff,0xff,0x0,0x1d,0xff,0xfd,0x0,0x1e,0xff,0xed,0x0,0x1d,0xff,0xec,0x0,0x1d,0xff,0xfc,0x0,0x1e,0xff,0xff,0x0,0x1e,0xff,0xff,0x0,0x1d,0xff,0xfd,0x0,0x1e,0xff,0x9a,0x0,0x1b,0xff,0x13,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1c,0xff,0x4a,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1c,0xff,0x24,0x0,0x1d,0xff,0x86,0x0,0x1e,0xff,0xcf,0x0,0x1d,0xff,0xec,0x0,0x1e,0xff,0xf7,0x0,0x1e,0xff,0xf7,0x0,0x1e,0xff,0xed,0x0,0x1e,0xff,0xd4,0x0,0x1d,0xff,0x8f,0x0,0x1d,0xff,0x2c,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0
#endif
};

lv_img_dsc_t imgalternator_on_png = {
.header.always_zero = 0,
.header.w = 28,
.header.h = 22,
.data_size = 616 * LV_IMG_PX_SIZE_ALPHA_BYTE,
.header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
.data = imgalternator_on_png_map,
};