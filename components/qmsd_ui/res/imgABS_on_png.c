#include "lvgl/lvgl.h"

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

const LV_ATTRIBUTE_MEM_ALIGN uint8_t imgABS_on_png_map[] = {
#if LV_COLOR_DEPTH == 1 || LV_COLOR_DEPTH == 8
0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0xf5,0x16,0xf5,0x71,0xf5,0xb8,0xf5,0xe7,0xf5,0xfc,0xf5,0xfc,0xf5,0xe6,0xf5,0xb7,0xf5,0x6e,0xf9,0x14,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0xf5,0xc,0xf5,0x8b,0xf5,0xf6,0xf5,0xff,0xf5,0xff,0xf5,0xff,0xf5,0xff,0xf5,0xff,0xf5,0xff,0xf5,0xff,0xf5,0xff,0xf5,0xf4,0xf5,0x86,0xf8,0xa,0x20,0x0,0x20,0x0,0x20,0x0,0xf5,0x1c,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0xf5,0x23,0xf5,0x77,0x20,0x0,0x20,0x0,0xf5,0x27,0xf5,0xd8,0xf5,0xff,0xf5,0xfe,0xf5,0xba,0xf5,0x5f,0xf9,0x24,0xd5,0x8,0xd9,0x8,0xf5,0x26,0xf5,0x62,0xf5,0xbe,0xf5,0xff,0xf5,0xff,0xf5,0xd4,0xf5,0x23,0x20,0x0,0xf5,0x89,0xf5,0xee,0xf5,0x24,0x20,0x0,0x20,0x0,0x20,0x0,0x90,0x2,0xf5,0xc7,0xf5,0xff,0xf5,0x76,0xf9,0x27,0xf5,0xe9,0xf5,0xff,0xf5,0xd8,0xf5,0x3b,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0xf5,0x3f,0xf5,0xdc,0xf5,0xff,0xf5,0xe6,0xf5,0x25,0xf5,0xb6,0xf5,0xff,0xf5,0xc6,0x90,0x2,0x20,0x0,0x20,0x0,0xf5,0x5f,0xf5,0xff,0xf5,0xe8,0xf5,0x1f,0xf5,0xd8,0xf5,0xff,0xf5,0xc1,0xf5,0xe,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0xf4,0x11,0xf5,0xc6,0xf5,0xff,0xf5,0xd3,0xf9,0x1d,0xf5,0xe8,0xf5,0xff,0xf5,0x5f,0x20,0x0,0x0,0x1,0xf5,0xd8,0xf5,0xff,0xf5,0x64,0xf5,0x8c,0xf5,0xff,0xf5,0xd8,0xf5,0xe,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0xf5,0x11,0xf5,0xdd,0xf5,0xff,0xf5,0x84,0xf5,0x65,0xf5,0xff,0xf5,0xd8,0x0,0x1,0xf5,0x3e,0xf5,0xff,0xf5,0xe7,0xf5,0x1c,0xf5,0xf7,0xf5,0xfe,0xf9,0x3a,0x20,0x0,0x20,0x0,0xf5,0x22,0xf5,0x8,0x20,0x0,0xf4,0x11,0xf5,0x22,0xf5,0x22,0xf8,0x4,0x20,0x0,0x20,0x0,0xf5,0x37,0xf5,0x33,0x20,0x0,0xf5,0x42,0xf5,0xff,0xf5,0xf3,0xf5,0x18,0xf5,0xe7,0xf5,0xff,0xf9,0x3d,0xf5,0x8b,0xf5,0xff,0xf5,0x8f,0xf5,0x73,0xf5,0xff,0xf5,0xb8,0x20,0x0,0x20,0x0,0xf5,0x19,0xf5,0xff,0xf5,0x5d,0x20,0x0,0xf5,0x7f,0xf5,0xff,0xf5,0xff,0xf5,0xd8,0xf5,0xc,0xf5,0x77,0xf5,0xff,0xf5,0xff,0xf5,0x5d,0x20,0x0,0xf5,0xc0,0xf5,0xff,0xf5,0x6a,0xf5,0x8f,0xf5,0xff,0xf5,0x8b,0xf5,0xc4,0xf5,0xff,0xf5,0x4b,0xf5,0xbb,0xf5,0xff,0xf5,0x5e,0x20,0x0,0x20,0x0,0xf5,0x55,0xf5,0xff,0xf5,0xa1,0x20,0x0,0xf5,0x7f,0xf5,0xc3,0xf5,0x6a,0xf5,0xf6,0xf5,0x48,0xf5,0xe1,0xf5,0x7f,0xf5,0x8c,0xf5,0xae,0x20,0x0,0xf5,0x66,0xf5,0xff,0xf5,0xb2,0xf5,0x4c,0xf5,0xff,0xf5,0xc4,0xf5,0xea,0xf5,0xff,0xf5,0x1f,0xf5,0xe9,0xf5,0xff,0xf5,0x22,0x20,0x0,0x20,0x0,0xf5,0x90,0xf5,0xc7,0xf5,0xd4,0x20,0x0,0xf5,0x7f,0xf5,0xae,0xf9,0x2a,0xf5,0xee,0xf5,0x3b,0xf5,0xee,0xf5,0x72,0xf5,0x8,0xf8,0x4,0x20,0x0,0xf9,0x2a,0xf5,0xff,0xf5,0xe1,0xf5,0x1f,0xf5,0xff,0xf5,0xea,0xf5,0xfc,0xf5,0xff,0xf4,0x9,0xf5,0xfe,0xf5,0xff,0xf5,0x5,0x20,0x0,0x20,0x0,0xf5,0xcc,0xf5,0x50,0xf5,0xfa,0xf5,0x19,0xf5,0x7f,0xf5,0xff,0xf5,0xff,0xf5,0xcc,0x20,0x0,0xf5,0x90,0xf5,0xff,0xf5,0xd4,0xf5,0x26,0x20,0x0,0xf9,0xd,0xf5,0xff,0xf5,0xf8,0xd5,0x8,0xf5,0xff,0xf5,0xfc,0xf5,0xfd,0xf5,0xff,0xf9,0x7,0xf5,0xfe,0xf5,0xff,0xf5,0x5,0x20,0x0,0xf4,0x11,0xf5,0xff,0xf5,0xae,0xf5,0xf2,0xf5,0x55,0xf5,0x7f,0xf5,0xd0,0xf5,0x7f,0xf5,0xe5,0xf5,0x59,0x20,0x0,0xf5,0x59,0xf5,0xdd,0xf5,0xbb,0x20,0x0,0xf9,0xd,0xf5,0xff,0xf5,0xf8,0xf9,0x5,0xf5,0xff,0xf5,0xfd,0xf5,0xee,0xf5,0xff,0xf5,0x1a,0xf5,0xe9,0xf5,0xff,0xf5,0x22,0x20,0x0,0xf5,0x48,0xf5,0xff,0xf5,0xff,0xf5,0xff,0xf5,0x90,0xf5,0x7f,0xf5,0xa1,0x20,0x0,0xf5,0xae,0xf5,0x88,0xf5,0x8c,0xf5,0xc,0xf5,0x4c,0xf5,0xdd,0x20,0x0,0xf9,0x2a,0xf5,0xff,0xf5,0xe1,0xf9,0x1a,0xf5,0xff,0xf5,0xef,0xf5,0xcc,0xf5,0xff,0xf5,0x43,0xf5,0xbb,0xf5,0xff,0xf5,0x5e,0x20,0x0,0xf5,0x88,0xf5,0xa1,0x20,0x0,0xf5,0x55,0xf5,0xcc,0xf5,0x7f,0xf5,0xf2,0xf5,0xe5,0xf5,0xff,0xf5,0x5d,0xf5,0xd8,0xf5,0xd8,0xf5,0xe5,0xf5,0xa5,0x20,0x0,0xf5,0x66,0xf5,0xff,0xf5,0xb2,0xf5,0x43,0xf5,0xff,0xf5,0xcc,0xf5,0x96,0xf5,0xff,0xf5,0x83,0xf5,0x73,0xf5,0xff,0xf5,0xb8,0x20,0x0,0xf5,0x7b,0xf5,0x48,0x20,0x0,0xf9,0x1d,0xf5,0xa1,0xf5,0x55,0xf5,0xa1,0xf5,0xa1,0xf5,0x6a,0x20,0x0,0xf5,0x26,0xf5,0xbb,0xf5,0xae,0xf5,0x19,0x20,0x0,0xf5,0xc0,0xf5,0xff,0xf5,0x6a,0xf5,0x83,0xf5,0xff,0xf5,0x95,0xf5,0x4b,0xf5,0xff,0xf5,0xda,0xf5,0x18,0xf5,0xf7,0xf5,0xfe,0xf9,0x3a,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0xf5,0x42,0xf5,0xff,0xf5,0xf3,0xf5,0x14,0xf5,0xda,0xf5,0xff,0xf5,0x4b,0xd4,0x5,0xf5,0xe6,0xf5,0xff,0xf5,0x50,0xf5,0x8c,0xf5,0xff,0xf5,0xd8,0xf5,0xe,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0xf5,0x11,0xf5,0xdd,0xf5,0xff,0xf5,0x84,0xf5,0x50,0xf5,0xff,0xf5,0xe6,0xf5,0x5,0x20,0x0,0xf5,0x74,0xf5,0xff,0xf5,0xd9,0xf5,0x14,0xf5,0xd8,0xf5,0xff,0xf5,0xc1,0xf5,0xe,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0xf4,0x11,0xf5,0xc6,0xf5,0xff,0xf5,0xd3,0xf5,0x12,0xf5,0xd9,0xf5,0xff,0xf5,0x74,0x20,0x0,0x20,0x0,0xd5,0x8,0xf5,0xda,0xf5,0xff,0xf5,0x79,0xf9,0x27,0xf5,0xe9,0xf5,0xff,0xf5,0xd8,0xf5,0x3b,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0xf5,0x3f,0xf5,0xdc,0xf5,0xff,0xf5,0xe6,0xf5,0x22,0xf5,0x98,0xf5,0xff,0xf5,0xda,0xf9,0x7,0x20,0x0,0x20,0x0,0x20,0x0,0xf5,0x39,0xf5,0xa1,0xf4,0x9,0x20,0x0,0xf5,0x27,0xf5,0xd8,0xf5,0xff,0xf5,0xfe,0xf5,0xba,0xf5,0x5f,0xf9,0x24,0xd5,0x8,0xd9,0x8,0xf5,0x26,0xf5,0x62,0xf5,0xbe,0xf5,0xff,0xf5,0xff,0xf5,0xd4,0xf5,0x23,0x0,0x1,0xf5,0x9e,0xf5,0xf9,0xf5,0x38,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0xf5,0xc,0xf5,0x8b,0xf5,0xf6,0xf5,0xff,0xf5,0xff,0xf5,0xff,0xf5,0xff,0xf5,0xff,0xf5,0xff,0xf5,0xff,0xf5,0xff,0xf5,0xf4,0xf5,0x86,0xf8,0xa,0x20,0x0,0x20,0x0,0x20,0x0,0xf5,0x33,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0xf5,0x16,0xf5,0x71,0xf5,0xb8,0xf5,0xe7,0xf5,0xfc,0xf5,0xfc,0xf5,0xe6,0xf5,0xb7,0xf5,0x6e,0xf9,0x14,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0,0x20,0x0
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP != 0
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf5,0x66,0x16,0xed,0x65,0x71,0xed,0x65,0xb8,0xed,0x65,0xe7,0xed,0x65,0xfc,0xed,0x65,0xfc,0xed,0x65,0xe6,0xed,0x65,0xb7,0xed,0x65,0x6e,0xed,0x85,0x14,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xe5,0x45,0xc,0xed,0x65,0x8b,0xed,0x65,0xf6,0xed,0x65,0xff,0xed,0x65,0xff,0xed,0x65,0xff,0xed,0x65,0xff,0xed,0x65,0xff,0xed,0x65,0xff,0xed,0x65,0xff,0xed,0x65,0xff,0xed,0x65,0xf4,0xed,0x65,0x86,0xe5,0x83,0xa,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xed,0x64,0x1c,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xe5,0x65,0x23,0xed,0x65,0x77,0x0,0x0,0x0,0x0,0x0,0x0,0xed,0x45,0x27,0xed,0x65,0xd8,0xed,0x65,0xff,0xed,0x65,0xfe,0xed,0x65,0xba,0xed,0x65,0x5f,0xed,0x85,0x24,0xdc,0xe4,0x8,0xdd,0xe4,0x8,0xed,0x65,0x26,0xed,0x45,0x62,0xed,0x65,0xbe,0xed,0x65,0xff,0xed,0x65,0xff,0xed,0x65,0xd4,0xe5,0x64,0x23,0x0,0x0,0x0,0xed,0x65,0x89,0xed,0x65,0xee,0xed,0x45,0x24,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x84,0x0,0x2,0xed,0x65,0xc7,0xed,0x65,0xff,0xed,0x65,0x76,0xed,0x85,0x27,0xed,0x65,0xe9,0xed,0x65,0xff,0xed,0x65,0xd8,0xed,0x65,0x3b,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xed,0x65,0x3f,0xed,0x65,0xdc,0xed,0x65,0xff,0xed,0x65,0xe6,0xe5,0x45,0x25,0xed,0x65,0xb6,0xed,0x65,0xff,0xed,0x65,0xc6,0x84,0x0,0x2,0x0,0x0,0x0,0x0,0x0,0x0,0xed,0x65,0x5f,0xed,0x65,0xff,0xed,0x65,0xe8,0xed,0x65,0x1f,0xed,0x65,0xd8,0xed,0x65,0xff,0xed,0x65,0xc1,0xed,0x24,0xe,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xdd,0x24,0x11,0xed,0x65,0xc6,0xed,0x65,0xff,0xed,0x65,0xd3,0xed,0x64,0x1d,0xed,0x65,0xe8,0xed,0x65,0xff,0xed,0x45,0x5f,0x0,0x0,0x0,0xf8,0x0,0x1,0xed,0x65,0xd8,0xed,0x65,0xff,0xed,0x65,0x64,0xed,0x65,0x8c,0xed,0x65,0xff,0xed,0x65,0xd8,0xed,0x24,0xe,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xed,0x25,0x11,0xed,0x65,0xdd,0xed,0x65,0xff,0xed,0x65,0x84,0xed,0x65,0x65,0xed,0x65,0xff,0xed,0x65,0xd8,0xff,0xe0,0x1,0xe5,0x65,0x3e,0xed,0x65,0xff,0xed,0x65,0xe7,0xed,0x66,0x1c,0xed,0x65,0xf7,0xed,0x65,0xfe,0xed,0x65,0x3a,0x0,0x0,0x0,0x0,0x0,0x0,0xe5,0x64,0x22,0xfc,0xe4,0x8,0x0,0x0,0x0,0xdd,0x24,0x11,0xe5,0x64,0x22,0xe5,0x64,0x22,0xfd,0xe0,0x4,0x0,0x0,0x0,0x0,0x0,0x0,0xed,0x45,0x37,0xed,0x45,0x33,0x0,0x0,0x0,0xed,0x65,0x42,0xed,0x65,0xff,0xed,0x65,0xf3,0xe5,0x45,0x18,0xed,0x65,0xe7,0xed,0x65,0xff,0xed,0x65,0x3d,0xed,0x65,0x8b,0xed,0x65,0xff,0xed,0x65,0x8f,0xed,0x65,0x73,0xed,0x65,0xff,0xed,0x65,0xb8,0x0,0x0,0x0,0x0,0x0,0x0,0xed,0x65,0x19,0xed,0x65,0xff,0xed,0x65,0x5d,0x0,0x0,0x0,0xed,0x65,0x7f,0xed,0x65,0xff,0xed,0x65,0xff,0xed,0x65,0xd8,0xe5,0x45,0xc,0xed,0x65,0x77,0xed,0x65,0xff,0xed,0x65,0xff,0xed,0x65,0x5d,0x0,0x0,0x0,0xed,0x65,0xc0,0xed,0x65,0xff,0xed,0x65,0x6a,0xed,0x65,0x8f,0xed,0x65,0xff,0xed,0x65,0x8b,0xed,0x65,0xc4,0xed,0x65,0xff,0xed,0x65,0x4b,0xed,0x65,0xbb,0xed,0x65,0xff,0xed,0x65,0x5e,0x0,0x0,0x0,0x0,0x0,0x0,0xed,0x65,0x55,0xed,0x65,0xff,0xed,0x65,0xa1,0x0,0x0,0x0,0xed,0x65,0x7f,0xed,0x65,0xc3,0xed,0x65,0x6a,0xed,0x65,0xf6,0xed,0x65,0x48,0xed,0x65,0xe1,0xed,0x65,0x7f,0xed,0x65,0x8c,0xed,0x65,0xae,0x0,0x0,0x0,0xed,0x65,0x66,0xed,0x65,0xff,0xed,0x65,0xb2,0xed,0x65,0x4c,0xed,0x65,0xff,0xed,0x65,0xc4,0xed,0x65,0xea,0xed,0x65,0xff,0xe5,0x65,0x1f,0xed,0x65,0xe9,0xed,0x65,0xff,0xed,0x64,0x22,0x0,0x0,0x0,0x0,0x0,0x0,0xed,0x65,0x90,0xed,0x65,0xc7,0xed,0x65,0xd4,0x0,0x0,0x0,0xed,0x65,0x7f,0xed,0x65,0xae,0xed,0x65,0x2a,0xed,0x65,0xee,0xed,0x65,0x3b,0xed,0x65,0xee,0xed,0x65,0x72,0xfc,0xe4,0x8,0xfd,0xe0,0x4,0x0,0x0,0x0,0xed,0x65,0x2a,0xed,0x65,0xff,0xed,0x65,0xe1,0xed,0x65,0x1f,0xed,0x65,0xff,0xed,0x65,0xea,0xed,0x65,0xfc,0xed,0x65,0xff,0xfd,0x43,0x9,0xed,0x65,0xfe,0xed,0x65,0xff,0xfc,0xc6,0x5,0x0,0x0,0x0,0x0,0x0,0x0,0xed,0x65,0xcc,0xed,0x65,0x50,0xed,0x65,0xfa,0xed,0x65,0x19,0xed,0x65,0x7f,0xed,0x65,0xff,0xed,0x65,0xff,0xed,0x65,0xcc,0x0,0x0,0x0,0xed,0x65,0x90,0xed,0x65,0xff,0xed,0x65,0xd4,0xed,0x65,0x26,0x0,0x0,0x0,0xed,0x85,0xd,0xed,0x65,0xff,0xed,0x65,0xf8,0xdc,0xe4,0x8,0xed,0x65,0xff,0xed,0x65,0xfc,0xed,0x65,0xfd,0xed,0x65,0xff,0xfd,0xa4,0x7,0xed,0x65,0xfe,0xed,0x65,0xff,0xfc,0xc6,0x5,0x0,0x0,0x0,0xdd,0x24,0x11,0xed,0x65,0xff,0xed,0x65,0xae,0xed,0x65,0xf2,0xed,0x65,0x55,0xed,0x65,0x7f,0xed,0x65,0xd0,0xed,0x65,0x7f,0xed,0x65,0xe5,0xed,0x45,0x59,0x0,0x0,0x0,0xed,0x45,0x59,0xed,0x65,0xdd,0xed,0x65,0xbb,0x0,0x0,0x0,0xed,0x85,0xd,0xed,0x65,0xff,0xed,0x65,0xf8,0xfe,0x46,0x5,0xed,0x65,0xff,0xed,0x65,0xfd,0xed,0x65,0xee,0xed,0x65,0xff,0xed,0x25,0x1a,0xed,0x65,0xe9,0xed,0x65,0xff,0xed,0x64,0x22,0x0,0x0,0x0,0xed,0x65,0x48,0xed,0x65,0xff,0xed,0x65,0xff,0xed,0x65,0xff,0xed,0x65,0x90,0xed,0x65,0x7f,0xed,0x65,0xa1,0x0,0x0,0x0,0xed,0x65,0xae,0xed,0x65,0x88,0xed,0x65,0x8c,0xe5,0x45,0xc,0xed,0x65,0x4c,0xed,0x65,0xdd,0x0,0x0,0x0,0xed,0x65,0x2a,0xed,0x65,0xff,0xed,0x65,0xe1,0xed,0x85,0x1a,0xed,0x65,0xff,0xed,0x65,0xef,0xed,0x65,0xcc,0xed,0x65,0xff,0xed,0x45,0x43,0xed,0x65,0xbb,0xed,0x65,0xff,0xed,0x65,0x5e,0x0,0x0,0x0,0xed,0x65,0x88,0xed,0x65,0xa1,0x0,0x0,0x0,0xed,0x65,0x55,0xed,0x65,0xcc,0xed,0x65,0x7f,0xed,0x65,0xf2,0xed,0x65,0xe5,0xed,0x65,0xff,0xed,0x65,0x5d,0xed,0x65,0xd8,0xed,0x65,0xd8,0xed,0x65,0xe5,0xed,0x65,0xa5,0x0,0x0,0x0,0xed,0x65,0x66,0xed,0x65,0xff,0xed,0x65,0xb2,0xed,0x65,0x43,0xed,0x65,0xff,0xed,0x65,0xcc,0xed,0x65,0x96,0xed,0x65,0xff,0xed,0x65,0x83,0xed,0x65,0x73,0xed,0x65,0xff,0xed,0x65,0xb8,0x0,0x0,0x0,0xed,0x65,0x7b,0xed,0x65,0x48,0x0,0x0,0x0,0xed,0x65,0x1d,0xed,0x65,0xa1,0xed,0x65,0x55,0xed,0x65,0xa1,0xed,0x65,0xa1,0xed,0x65,0x6a,0x0,0x0,0x0,0xed,0x65,0x26,0xed,0x65,0xbb,0xed,0x65,0xae,0xed,0x65,0x19,0x0,0x0,0x0,0xed,0x65,0xc0,0xed,0x65,0xff,0xed,0x65,0x6a,0xed,0x65,0x83,0xed,0x65,0xff,0xed,0x65,0x95,0xed,0x65,0x4b,0xed,0x65,0xff,0xed,0x65,0xda,0xf5,0x45,0x18,0xed,0x65,0xf7,0xed,0x65,0xfe,0xed,0x65,0x3a,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xed,0x65,0x42,0xed,0x65,0xff,0xed,0x65,0xf3,0xe5,0x25,0x14,0xed,0x65,0xda,0xed,0x65,0xff,0xed,0x65,0x4b,0xcc,0xc0,0x5,0xed,0x65,0xe6,0xed,0x65,0xff,0xed,0x45,0x50,0xed,0x65,0x8c,0xed,0x65,0xff,0xed,0x65,0xd8,0xed,0x24,0xe,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xed,0x25,0x11,0xed,0x65,0xdd,0xed,0x65,0xff,0xed,0x65,0x84,0xed,0x45,0x50,0xed,0x65,0xff,0xed,0x65,0xe6,0xfc,0xc6,0x5,0x0,0x0,0x0,0xed,0x65,0x74,0xed,0x65,0xff,0xed,0x65,0xd9,0xed,0x25,0x14,0xed,0x65,0xd8,0xed,0x65,0xff,0xed,0x65,0xc1,0xed,0x24,0xe,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xdd,0x24,0x11,0xed,0x65,0xc6,0xed,0x65,0xff,0xed,0x65,0xd3,0xed,0x45,0x12,0xed,0x65,0xd9,0xed,0x65,0xff,0xed,0x65,0x74,0x0,0x0,0x0,0x0,0x0,0x0,0xdc,0xe4,0x8,0xed,0x65,0xda,0xed,0x65,0xff,0xed,0x65,0x79,0xed,0x85,0x27,0xed,0x65,0xe9,0xed,0x65,0xff,0xed,0x65,0xd8,0xed,0x65,0x3b,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xed,0x65,0x3f,0xed,0x65,0xdc,0xed,0x65,0xff,0xed,0x65,0xe6,0xed,0x64,0x22,0xed,0x65,0x98,0xed,0x65,0xff,0xed,0x65,0xda,0xfd,0xa4,0x7,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xed,0x65,0x39,0xed,0x65,0xa1,0xe5,0x43,0x9,0x0,0x0,0x0,0xed,0x45,0x27,0xed,0x65,0xd8,0xed,0x65,0xff,0xed,0x65,0xfe,0xed,0x65,0xba,0xed,0x65,0x5f,0xed,0x85,0x24,0xdc,0xe4,0x8,0xdd,0xe4,0x8,0xed,0x65,0x26,0xed,0x45,0x62,0xed,0x65,0xbe,0xed,0x65,0xff,0xed,0x65,0xff,0xed,0x65,0xd4,0xe5,0x64,0x23,0xff,0xe0,0x1,0xed,0x65,0x9e,0xed,0x65,0xf9,0xed,0x65,0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xe5,0x45,0xc,0xed,0x65,0x8b,0xed,0x65,0xf6,0xed,0x65,0xff,0xed,0x65,0xff,0xed,0x65,0xff,0xed,0x65,0xff,0xed,0x65,0xff,0xed,0x65,0xff,0xed,0x65,0xff,0xed,0x65,0xff,0xed,0x65,0xf4,0xed,0x65,0x86,0xe5,0x83,0xa,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xed,0x65,0x33,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf5,0x66,0x16,0xed,0x65,0x71,0xed,0x65,0xb8,0xed,0x65,0xe7,0xed,0x65,0xfc,0xed,0x65,0xfc,0xed,0x65,0xe6,0xed,0x65,0xb7,0xed,0x65,0x6e,0xed,0x85,0x14,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP == 0
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x66,0xf5,0x16,0x65,0xed,0x71,0x65,0xed,0xb8,0x65,0xed,0xe7,0x65,0xed,0xfc,0x65,0xed,0xfc,0x65,0xed,0xe6,0x65,0xed,0xb7,0x65,0xed,0x6e,0x85,0xed,0x14,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x45,0xe5,0xc,0x65,0xed,0x8b,0x65,0xed,0xf6,0x65,0xed,0xff,0x65,0xed,0xff,0x65,0xed,0xff,0x65,0xed,0xff,0x65,0xed,0xff,0x65,0xed,0xff,0x65,0xed,0xff,0x65,0xed,0xff,0x65,0xed,0xf4,0x65,0xed,0x86,0x83,0xe5,0xa,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x64,0xed,0x1c,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x65,0xe5,0x23,0x65,0xed,0x77,0x0,0x0,0x0,0x0,0x0,0x0,0x45,0xed,0x27,0x65,0xed,0xd8,0x65,0xed,0xff,0x65,0xed,0xfe,0x65,0xed,0xba,0x65,0xed,0x5f,0x85,0xed,0x24,0xe4,0xdc,0x8,0xe4,0xdd,0x8,0x65,0xed,0x26,0x45,0xed,0x62,0x65,0xed,0xbe,0x65,0xed,0xff,0x65,0xed,0xff,0x65,0xed,0xd4,0x64,0xe5,0x23,0x0,0x0,0x0,0x65,0xed,0x89,0x65,0xed,0xee,0x45,0xed,0x24,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x84,0x2,0x65,0xed,0xc7,0x65,0xed,0xff,0x65,0xed,0x76,0x85,0xed,0x27,0x65,0xed,0xe9,0x65,0xed,0xff,0x65,0xed,0xd8,0x65,0xed,0x3b,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x65,0xed,0x3f,0x65,0xed,0xdc,0x65,0xed,0xff,0x65,0xed,0xe6,0x45,0xe5,0x25,0x65,0xed,0xb6,0x65,0xed,0xff,0x65,0xed,0xc6,0x0,0x84,0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x65,0xed,0x5f,0x65,0xed,0xff,0x65,0xed,0xe8,0x65,0xed,0x1f,0x65,0xed,0xd8,0x65,0xed,0xff,0x65,0xed,0xc1,0x24,0xed,0xe,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x24,0xdd,0x11,0x65,0xed,0xc6,0x65,0xed,0xff,0x65,0xed,0xd3,0x64,0xed,0x1d,0x65,0xed,0xe8,0x65,0xed,0xff,0x45,0xed,0x5f,0x0,0x0,0x0,0x0,0xf8,0x1,0x65,0xed,0xd8,0x65,0xed,0xff,0x65,0xed,0x64,0x65,0xed,0x8c,0x65,0xed,0xff,0x65,0xed,0xd8,0x24,0xed,0xe,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x25,0xed,0x11,0x65,0xed,0xdd,0x65,0xed,0xff,0x65,0xed,0x84,0x65,0xed,0x65,0x65,0xed,0xff,0x65,0xed,0xd8,0xe0,0xff,0x1,0x65,0xe5,0x3e,0x65,0xed,0xff,0x65,0xed,0xe7,0x66,0xed,0x1c,0x65,0xed,0xf7,0x65,0xed,0xfe,0x65,0xed,0x3a,0x0,0x0,0x0,0x0,0x0,0x0,0x64,0xe5,0x22,0xe4,0xfc,0x8,0x0,0x0,0x0,0x24,0xdd,0x11,0x64,0xe5,0x22,0x64,0xe5,0x22,0xe0,0xfd,0x4,0x0,0x0,0x0,0x0,0x0,0x0,0x45,0xed,0x37,0x45,0xed,0x33,0x0,0x0,0x0,0x65,0xed,0x42,0x65,0xed,0xff,0x65,0xed,0xf3,0x45,0xe5,0x18,0x65,0xed,0xe7,0x65,0xed,0xff,0x65,0xed,0x3d,0x65,0xed,0x8b,0x65,0xed,0xff,0x65,0xed,0x8f,0x65,0xed,0x73,0x65,0xed,0xff,0x65,0xed,0xb8,0x0,0x0,0x0,0x0,0x0,0x0,0x65,0xed,0x19,0x65,0xed,0xff,0x65,0xed,0x5d,0x0,0x0,0x0,0x65,0xed,0x7f,0x65,0xed,0xff,0x65,0xed,0xff,0x65,0xed,0xd8,0x45,0xe5,0xc,0x65,0xed,0x77,0x65,0xed,0xff,0x65,0xed,0xff,0x65,0xed,0x5d,0x0,0x0,0x0,0x65,0xed,0xc0,0x65,0xed,0xff,0x65,0xed,0x6a,0x65,0xed,0x8f,0x65,0xed,0xff,0x65,0xed,0x8b,0x65,0xed,0xc4,0x65,0xed,0xff,0x65,0xed,0x4b,0x65,0xed,0xbb,0x65,0xed,0xff,0x65,0xed,0x5e,0x0,0x0,0x0,0x0,0x0,0x0,0x65,0xed,0x55,0x65,0xed,0xff,0x65,0xed,0xa1,0x0,0x0,0x0,0x65,0xed,0x7f,0x65,0xed,0xc3,0x65,0xed,0x6a,0x65,0xed,0xf6,0x65,0xed,0x48,0x65,0xed,0xe1,0x65,0xed,0x7f,0x65,0xed,0x8c,0x65,0xed,0xae,0x0,0x0,0x0,0x65,0xed,0x66,0x65,0xed,0xff,0x65,0xed,0xb2,0x65,0xed,0x4c,0x65,0xed,0xff,0x65,0xed,0xc4,0x65,0xed,0xea,0x65,0xed,0xff,0x65,0xe5,0x1f,0x65,0xed,0xe9,0x65,0xed,0xff,0x64,0xed,0x22,0x0,0x0,0x0,0x0,0x0,0x0,0x65,0xed,0x90,0x65,0xed,0xc7,0x65,0xed,0xd4,0x0,0x0,0x0,0x65,0xed,0x7f,0x65,0xed,0xae,0x65,0xed,0x2a,0x65,0xed,0xee,0x65,0xed,0x3b,0x65,0xed,0xee,0x65,0xed,0x72,0xe4,0xfc,0x8,0xe0,0xfd,0x4,0x0,0x0,0x0,0x65,0xed,0x2a,0x65,0xed,0xff,0x65,0xed,0xe1,0x65,0xed,0x1f,0x65,0xed,0xff,0x65,0xed,0xea,0x65,0xed,0xfc,0x65,0xed,0xff,0x43,0xfd,0x9,0x65,0xed,0xfe,0x65,0xed,0xff,0xc6,0xfc,0x5,0x0,0x0,0x0,0x0,0x0,0x0,0x65,0xed,0xcc,0x65,0xed,0x50,0x65,0xed,0xfa,0x65,0xed,0x19,0x65,0xed,0x7f,0x65,0xed,0xff,0x65,0xed,0xff,0x65,0xed,0xcc,0x0,0x0,0x0,0x65,0xed,0x90,0x65,0xed,0xff,0x65,0xed,0xd4,0x65,0xed,0x26,0x0,0x0,0x0,0x85,0xed,0xd,0x65,0xed,0xff,0x65,0xed,0xf8,0xe4,0xdc,0x8,0x65,0xed,0xff,0x65,0xed,0xfc,0x65,0xed,0xfd,0x65,0xed,0xff,0xa4,0xfd,0x7,0x65,0xed,0xfe,0x65,0xed,0xff,0xc6,0xfc,0x5,0x0,0x0,0x0,0x24,0xdd,0x11,0x65,0xed,0xff,0x65,0xed,0xae,0x65,0xed,0xf2,0x65,0xed,0x55,0x65,0xed,0x7f,0x65,0xed,0xd0,0x65,0xed,0x7f,0x65,0xed,0xe5,0x45,0xed,0x59,0x0,0x0,0x0,0x45,0xed,0x59,0x65,0xed,0xdd,0x65,0xed,0xbb,0x0,0x0,0x0,0x85,0xed,0xd,0x65,0xed,0xff,0x65,0xed,0xf8,0x46,0xfe,0x5,0x65,0xed,0xff,0x65,0xed,0xfd,0x65,0xed,0xee,0x65,0xed,0xff,0x25,0xed,0x1a,0x65,0xed,0xe9,0x65,0xed,0xff,0x64,0xed,0x22,0x0,0x0,0x0,0x65,0xed,0x48,0x65,0xed,0xff,0x65,0xed,0xff,0x65,0xed,0xff,0x65,0xed,0x90,0x65,0xed,0x7f,0x65,0xed,0xa1,0x0,0x0,0x0,0x65,0xed,0xae,0x65,0xed,0x88,0x65,0xed,0x8c,0x45,0xe5,0xc,0x65,0xed,0x4c,0x65,0xed,0xdd,0x0,0x0,0x0,0x65,0xed,0x2a,0x65,0xed,0xff,0x65,0xed,0xe1,0x85,0xed,0x1a,0x65,0xed,0xff,0x65,0xed,0xef,0x65,0xed,0xcc,0x65,0xed,0xff,0x45,0xed,0x43,0x65,0xed,0xbb,0x65,0xed,0xff,0x65,0xed,0x5e,0x0,0x0,0x0,0x65,0xed,0x88,0x65,0xed,0xa1,0x0,0x0,0x0,0x65,0xed,0x55,0x65,0xed,0xcc,0x65,0xed,0x7f,0x65,0xed,0xf2,0x65,0xed,0xe5,0x65,0xed,0xff,0x65,0xed,0x5d,0x65,0xed,0xd8,0x65,0xed,0xd8,0x65,0xed,0xe5,0x65,0xed,0xa5,0x0,0x0,0x0,0x65,0xed,0x66,0x65,0xed,0xff,0x65,0xed,0xb2,0x65,0xed,0x43,0x65,0xed,0xff,0x65,0xed,0xcc,0x65,0xed,0x96,0x65,0xed,0xff,0x65,0xed,0x83,0x65,0xed,0x73,0x65,0xed,0xff,0x65,0xed,0xb8,0x0,0x0,0x0,0x65,0xed,0x7b,0x65,0xed,0x48,0x0,0x0,0x0,0x65,0xed,0x1d,0x65,0xed,0xa1,0x65,0xed,0x55,0x65,0xed,0xa1,0x65,0xed,0xa1,0x65,0xed,0x6a,0x0,0x0,0x0,0x65,0xed,0x26,0x65,0xed,0xbb,0x65,0xed,0xae,0x65,0xed,0x19,0x0,0x0,0x0,0x65,0xed,0xc0,0x65,0xed,0xff,0x65,0xed,0x6a,0x65,0xed,0x83,0x65,0xed,0xff,0x65,0xed,0x95,0x65,0xed,0x4b,0x65,0xed,0xff,0x65,0xed,0xda,0x45,0xf5,0x18,0x65,0xed,0xf7,0x65,0xed,0xfe,0x65,0xed,0x3a,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x65,0xed,0x42,0x65,0xed,0xff,0x65,0xed,0xf3,0x25,0xe5,0x14,0x65,0xed,0xda,0x65,0xed,0xff,0x65,0xed,0x4b,0xc0,0xcc,0x5,0x65,0xed,0xe6,0x65,0xed,0xff,0x45,0xed,0x50,0x65,0xed,0x8c,0x65,0xed,0xff,0x65,0xed,0xd8,0x24,0xed,0xe,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x25,0xed,0x11,0x65,0xed,0xdd,0x65,0xed,0xff,0x65,0xed,0x84,0x45,0xed,0x50,0x65,0xed,0xff,0x65,0xed,0xe6,0xc6,0xfc,0x5,0x0,0x0,0x0,0x65,0xed,0x74,0x65,0xed,0xff,0x65,0xed,0xd9,0x25,0xed,0x14,0x65,0xed,0xd8,0x65,0xed,0xff,0x65,0xed,0xc1,0x24,0xed,0xe,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x24,0xdd,0x11,0x65,0xed,0xc6,0x65,0xed,0xff,0x65,0xed,0xd3,0x45,0xed,0x12,0x65,0xed,0xd9,0x65,0xed,0xff,0x65,0xed,0x74,0x0,0x0,0x0,0x0,0x0,0x0,0xe4,0xdc,0x8,0x65,0xed,0xda,0x65,0xed,0xff,0x65,0xed,0x79,0x85,0xed,0x27,0x65,0xed,0xe9,0x65,0xed,0xff,0x65,0xed,0xd8,0x65,0xed,0x3b,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x65,0xed,0x3f,0x65,0xed,0xdc,0x65,0xed,0xff,0x65,0xed,0xe6,0x64,0xed,0x22,0x65,0xed,0x98,0x65,0xed,0xff,0x65,0xed,0xda,0xa4,0xfd,0x7,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x65,0xed,0x39,0x65,0xed,0xa1,0x43,0xe5,0x9,0x0,0x0,0x0,0x45,0xed,0x27,0x65,0xed,0xd8,0x65,0xed,0xff,0x65,0xed,0xfe,0x65,0xed,0xba,0x65,0xed,0x5f,0x85,0xed,0x24,0xe4,0xdc,0x8,0xe4,0xdd,0x8,0x65,0xed,0x26,0x45,0xed,0x62,0x65,0xed,0xbe,0x65,0xed,0xff,0x65,0xed,0xff,0x65,0xed,0xd4,0x64,0xe5,0x23,0xe0,0xff,0x1,0x65,0xed,0x9e,0x65,0xed,0xf9,0x65,0xed,0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x45,0xe5,0xc,0x65,0xed,0x8b,0x65,0xed,0xf6,0x65,0xed,0xff,0x65,0xed,0xff,0x65,0xed,0xff,0x65,0xed,0xff,0x65,0xed,0xff,0x65,0xed,0xff,0x65,0xed,0xff,0x65,0xed,0xff,0x65,0xed,0xf4,0x65,0xed,0x86,0x83,0xe5,0xa,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x65,0xed,0x33,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x66,0xf5,0x16,0x65,0xed,0x71,0x65,0xed,0xb8,0x65,0xed,0xe7,0x65,0xed,0xfc,0x65,0xed,0xfc,0x65,0xed,0xe6,0x65,0xed,0xb7,0x65,0xed,0x6e,0x85,0xed,0x14,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0
#endif
#if LV_COLOR_DEPTH == 32
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x2e,0xae,0xf3,0x16,0x2b,0xae,0xed,0x71,0x2b,0xaf,0xed,0xb8,0x2b,0xae,0xed,0xe7,0x2b,0xae,0xed,0xfc,0x2b,0xae,0xed,0xfc,0x2a,0xae,0xed,0xe6,0x2a,0xae,0xed,0xb7,0x2a,0xae,0xec,0x6e,0x26,0xb3,0xf2,0x14,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x2a,0xaa,0xea,0xc,0x2a,0xae,0xed,0x8b,0x2a,0xae,0xec,0xf6,0x2b,0xae,0xed,0xff,0x2b,0xae,0xed,0xff,0x2b,0xae,0xed,0xff,0x2b,0xae,0xed,0xff,0x2b,0xae,0xed,0xff,0x2b,0xae,0xed,0xff,0x2b,0xae,0xed,0xff,0x2b,0xae,0xed,0xff,0x2b,0xaf,0xed,0xf4,0x2a,0xaf,0xee,0x86,0x1a,0xb3,0xe6,0xa,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x24,0xad,0xed,0x1c,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x2c,0xaf,0xe9,0x23,0x2b,0xae,0xec,0x77,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x27,0xaa,0xeb,0x27,0x2a,0xaf,0xed,0xd8,0x2b,0xae,0xed,0xff,0x2b,0xae,0xed,0xfe,0x2b,0xae,0xed,0xba,0x2b,0xae,0xef,0x5f,0x2b,0xb1,0xf1,0x24,0x20,0x9f,0xdf,0x8,0x20,0xbf,0xdf,0x8,0x28,0xae,0xeb,0x26,0x2a,0xac,0xed,0x62,0x2b,0xad,0xec,0xbe,0x2b,0xae,0xed,0xff,0x2b,0xae,0xed,0xff,0x2a,0xae,0xed,0xd4,0x24,0xaf,0xe9,0x23,0x0,0x0,0x0,0x0,0x2b,0xad,0xec,0x89,0x2b,0xaf,0xee,0xee,0x2b,0xaa,0xf1,0x24,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x80,0x80,0x2,0x2a,0xae,0xed,0xc7,0x2b,0xae,0xed,0xff,0x2b,0xad,0xec,0x76,0x27,0xb1,0xeb,0x27,0x2b,0xae,0xed,0xe9,0x2b,0xae,0xed,0xff,0x2a,0xaf,0xed,0xd8,0x27,0xad,0xee,0x3b,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x28,0xae,0xef,0x3f,0x2b,0xae,0xee,0xdc,0x2b,0xae,0xed,0xff,0x2a,0xae,0xec,0xe6,0x29,0xac,0xea,0x25,0x2a,0xae,0xed,0xb6,0x2b,0xae,0xed,0xff,0x2a,0xae,0xed,0xc6,0x0,0x80,0x80,0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x2b,0xae,0xec,0x5f,0x2b,0xae,0xed,0xff,0x2b,0xae,0xed,0xe8,0x29,0xad,0xef,0x1f,0x2a,0xaf,0xed,0xd8,0x2b,0xae,0xed,0xff,0x2a,0xad,0xed,0xc1,0x24,0xa4,0xed,0xe,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1e,0xa5,0xe1,0x11,0x2a,0xae,0xed,0xc6,0x2b,0xae,0xed,0xff,0x2a,0xae,0xed,0xd3,0x23,0xb0,0xed,0x1d,0x2b,0xae,0xec,0xe8,0x2b,0xae,0xed,0xff,0x2b,0xac,0xec,0x5f,0x0,0x0,0x0,0x0,0x0,0x0,0xff,0x1,0x2a,0xaf,0xed,0xd8,0x2b,0xae,0xed,0xff,0x2b,0xad,0xed,0x64,0x2a,0xad,0xed,0x8c,0x2b,0xae,0xed,0xff,0x2a,0xaf,0xed,0xd8,0x24,0xa4,0xed,0xe,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x2d,0xa5,0xf0,0x11,0x2b,0xae,0xee,0xdd,0x2b,0xae,0xed,0xff,0x2b,0xae,0xee,0x84,0x2b,0xae,0xed,0x65,0x2b,0xae,0xed,0xff,0x2a,0xae,0xec,0xd8,0x0,0xff,0xff,0x1,0x29,0xad,0xea,0x3e,0x2b,0xae,0xed,0xff,0x2b,0xad,0xec,0xe7,0x2e,0xad,0xed,0x1c,0x2a,0xad,0xec,0xf7,0x2b,0xae,0xed,0xfe,0x28,0xb0,0xed,0x3a,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x25,0xad,0xe9,0x22,0x20,0x9f,0xff,0x8,0x0,0x0,0x0,0x0,0x1e,0xa5,0xe1,0x11,0x25,0xad,0xe9,0x22,0x25,0xad,0xe9,0x22,0x0,0xbf,0xff,0x4,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x2a,0xac,0xec,0x37,0x28,0xaa,0xeb,0x33,0x0,0x0,0x0,0x0,0x2b,0xae,0xec,0x42,0x2b,0xae,0xed,0xff,0x2b,0xae,0xed,0xf3,0x2a,0xaa,0xea,0x18,0x2b,0xad,0xec,0xe7,0x2b,0xae,0xed,0xff,0x2a,0xb0,0xee,0x3d,0x2a,0xae,0xee,0x8b,0x2b,0xae,0xed,0xff,0x2b,0xaf,0xed,0x8f,0x2a,0xad,0xed,0x73,0x2b,0xae,0xed,0xff,0x2b,0xad,0xed,0xb8,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x29,0xad,0xeb,0x19,0x2b,0xae,0xed,0xff,0x29,0xad,0xec,0x5d,0x0,0x0,0x0,0x0,0x2a,0xaf,0xed,0x7f,0x2b,0xae,0xed,0xff,0x2b,0xae,0xed,0xff,0x2a,0xaf,0xed,0xd8,0x2a,0xaa,0xea,0xc,0x2b,0xae,0xec,0x77,0x2b,0xae,0xed,0xff,0x2b,0xae,0xed,0xff,0x29,0xad,0xef,0x5d,0x0,0x0,0x0,0x0,0x2a,0xae,0xee,0xc0,0x2b,0xae,0xed,0xff,0x2b,0xad,0xee,0x6a,0x2b,0xad,0xed,0x8f,0x2b,0xae,0xed,0xff,0x2a,0xae,0xed,0x8b,0x2b,0xae,0xed,0xc4,0x2b,0xae,0xed,0xff,0x29,0xad,0xee,0x4b,0x2a,0xad,0xec,0xbb,0x2b,0xae,0xed,0xff,0x2b,0xae,0xec,0x5e,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x2a,0xae,0xed,0x55,0x2b,0xae,0xed,0xff,0x2b,0xae,0xee,0xa1,0x0,0x0,0x0,0x0,0x2a,0xaf,0xed,0x7f,0x2a,0xae,0xed,0xc3,0x2b,0xad,0xec,0x6a,0x2a,0xae,0xed,0xf6,0x2b,0xae,0xed,0x48,0x2b,0xad,0xed,0xe1,0x2a,0xaf,0xed,0x7f,0x2a,0xad,0xed,0x8c,0x2b,0xad,0xec,0xae,0x0,0x0,0x0,0x0,0x2a,0xad,0xeb,0x66,0x2b,0xae,0xed,0xff,0x2b,0xad,0xee,0xb2,0x2c,0xae,0xeb,0x4c,0x2b,0xae,0xed,0xff,0x2b,0xae,0xee,0xc4,0x2a,0xae,0xee,0xea,0x2b,0xae,0xed,0xff,0x29,0xad,0xe6,0x1f,0x2b,0xae,0xed,0xe9,0x2b,0xae,0xed,0xff,0x25,0xad,0xf0,0x22,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x2b,0xae,0xed,0x90,0x2a,0xae,0xed,0xc7,0x2a,0xae,0xed,0xd4,0x0,0x0,0x0,0x0,0x2a,0xaf,0xed,0x7f,0x2b,0xad,0xed,0xae,0x2b,0xb0,0xed,0x2a,0x2b,0xae,0xed,0xee,0x2b,0xad,0xee,0x3b,0x2b,0xae,0xed,0xee,0x2a,0xae,0xed,0x72,0x20,0x9f,0xff,0x8,0x0,0xbf,0xff,0x4,0x0,0x0,0x0,0x0,0x2b,0xb0,0xed,0x2a,0x2b,0xae,0xed,0xff,0x2b,0xad,0xed,0xe1,0x29,0xad,0xef,0x1f,0x2b,0xae,0xed,0xff,0x2a,0xae,0xee,0xea,0x2b,0xae,0xed,0xfc,0x2b,0xae,0xed,0xff,0x1c,0xaa,0xff,0x9,0x2a,0xae,0xed,0xfe,0x2b,0xae,0xed,0xff,0x33,0x99,0xff,0x5,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x2a,0xae,0xec,0xcc,0x29,0xaf,0xef,0x50,0x2b,0xae,0xee,0xfa,0x29,0xad,0xeb,0x19,0x2a,0xaf,0xed,0x7f,0x2b,0xae,0xed,0xff,0x2b,0xae,0xed,0xff,0x2a,0xae,0xec,0xcc,0x0,0x0,0x0,0x0,0x2b,0xae,0xed,0x90,0x2b,0xae,0xed,0xff,0x2a,0xae,0xed,0xd4,0x28,0xae,0xeb,0x26,0x0,0x0,0x0,0x0,0x27,0xb1,0xeb,0xd,0x2b,0xae,0xed,0xff,0x2b,0xae,0xec,0xf8,0x20,0x9f,0xdf,0x8,0x2b,0xae,0xed,0xff,0x2b,0xae,0xed,0xfc,0x2a,0xae,0xed,0xfd,0x2b,0xae,0xed,0xff,0x24,0xb6,0xff,0x7,0x2a,0xae,0xed,0xfe,0x2b,0xae,0xed,0xff,0x33,0x99,0xff,0x5,0x0,0x0,0x0,0x0,0x1e,0xa5,0xe1,0x11,0x2b,0xae,0xed,0xff,0x2b,0xad,0xed,0xae,0x2a,0xae,0xed,0xf2,0x2a,0xae,0xed,0x55,0x2a,0xaf,0xed,0x7f,0x2b,0xae,0xed,0xd0,0x2a,0xaf,0xed,0x7f,0x2a,0xae,0xed,0xe5,0x2b,0xac,0xee,0x59,0x0,0x0,0x0,0x0,0x2b,0xac,0xee,0x59,0x2b,0xad,0xed,0xdd,0x2a,0xad,0xec,0xbb,0x0,0x0,0x0,0x0,0x27,0xb1,0xeb,0xd,0x2b,0xae,0xed,0xff,0x2b,0xae,0xec,0xf8,0x33,0xcc,0xff,0x5,0x2b,0xae,0xed,0xff,0x2a,0xad,0xed,0xfd,0x2b,0xaf,0xed,0xee,0x2b,0xae,0xed,0xff,0x27,0xa7,0xeb,0x1a,0x2b,0xae,0xed,0xe9,0x2b,0xae,0xed,0xff,0x25,0xad,0xf0,0x22,0x0,0x0,0x0,0x0,0x2b,0xae,0xed,0x48,0x2b,0xae,0xed,0xff,0x2b,0xae,0xed,0xff,0x2b,0xae,0xed,0xff,0x2b,0xae,0xed,0x90,0x2a,0xaf,0xed,0x7f,0x2b,0xae,0xee,0xa1,0x0,0x0,0x0,0x0,0x2b,0xad,0xed,0xae,0x2b,0xae,0xec,0x88,0x2a,0xad,0xed,0x8c,0x2a,0xaa,0xea,0xc,0x2c,0xae,0xee,0x4c,0x2b,0xae,0xed,0xdd,0x0,0x0,0x0,0x0,0x2b,0xb0,0xed,0x2a,0x2b,0xae,0xed,0xff,0x2b,0xad,0xed,0xe1,0x27,0xb1,0xeb,0x1a,0x2b,0xae,0xed,0xff,0x2b,0xae,0xed,0xef,0x2a,0xae,0xec,0xcc,0x2b,0xae,0xed,0xff,0x2a,0xab,0xec,0x43,0x2a,0xad,0xec,0xbb,0x2b,0xae,0xed,0xff,0x2b,0xae,0xec,0x5e,0x0,0x0,0x0,0x0,0x2b,0xad,0xec,0x88,0x2b,0xae,0xee,0xa1,0x0,0x0,0x0,0x0,0x2a,0xae,0xed,0x55,0x2a,0xae,0xec,0xcc,0x2a,0xaf,0xed,0x7f,0x2a,0xae,0xed,0xf2,0x2a,0xae,0xed,0xe5,0x2b,0xae,0xed,0xff,0x29,0xad,0xef,0x5d,0x2a,0xae,0xed,0xd8,0x2a,0xae,0xed,0xd8,0x2a,0xae,0xed,0xe5,0x2b,0xaf,0xee,0xa5,0x0,0x0,0x0,0x0,0x2a,0xad,0xeb,0x66,0x2b,0xae,0xed,0xff,0x2b,0xad,0xee,0xb2,0x2a,0xaf,0xec,0x43,0x2b,0xae,0xed,0xff,0x2a,0xae,0xec,0xcc,0x2b,0xad,0xec,0x96,0x2b,0xae,0xed,0xff,0x2b,0xad,0xec,0x83,0x2a,0xad,0xed,0x73,0x2b,0xae,0xed,0xff,0x2b,0xad,0xed,0xb8,0x0,0x0,0x0,0x0,0x29,0xae,0xec,0x7b,0x2b,0xae,0xed,0x48,0x0,0x0,0x0,0x0,0x2c,0xb0,0xed,0x1d,0x2b,0xae,0xee,0xa1,0x2a,0xae,0xed,0x55,0x2b,0xae,0xee,0xa1,0x2b,0xae,0xee,0xa1,0x2b,0xad,0xec,0x6a,0x0,0x0,0x0,0x0,0x28,0xae,0xeb,0x26,0x2a,0xad,0xec,0xbb,0x2b,0xad,0xed,0xae,0x29,0xad,0xeb,0x19,0x0,0x0,0x0,0x0,0x2a,0xae,0xee,0xc0,0x2b,0xae,0xed,0xff,0x2b,0xad,0xee,0x6a,0x2b,0xad,0xec,0x83,0x2b,0xae,0xed,0xff,0x2b,0xad,0xec,0x95,0x29,0xad,0xee,0x4b,0x2b,0xae,0xed,0xff,0x2a,0xae,0xed,0xda,0x2a,0xaa,0xf4,0x18,0x2a,0xad,0xec,0xf7,0x2b,0xae,0xed,0xfe,0x28,0xb0,0xed,0x3a,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x2b,0xae,0xec,0x42,0x2b,0xae,0xed,0xff,0x2b,0xae,0xed,0xf3,0x26,0xa6,0xe6,0x14,0x2b,0xae,0xed,0xda,0x2b,0xae,0xed,0xff,0x29,0xad,0xee,0x4b,0x0,0x99,0xcc,0x5,0x2a,0xae,0xed,0xe6,0x2b,0xae,0xed,0xff,0x29,0xac,0xec,0x50,0x2a,0xad,0xed,0x8c,0x2b,0xae,0xed,0xff,0x2a,0xaf,0xed,0xd8,0x24,0xa4,0xed,0xe,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x2d,0xa5,0xf0,0x11,0x2b,0xae,0xee,0xdd,0x2b,0xae,0xed,0xff,0x2b,0xae,0xee,0x84,0x29,0xac,0xec,0x50,0x2b,0xae,0xed,0xff,0x2a,0xae,0xec,0xe6,0x33,0x99,0xff,0x5,0x0,0x0,0x0,0x0,0x2a,0xae,0xed,0x74,0x2b,0xae,0xed,0xff,0x2a,0xae,0xed,0xd9,0x26,0xa6,0xf2,0x14,0x2a,0xaf,0xed,0xd8,0x2b,0xae,0xed,0xff,0x2a,0xad,0xed,0xc1,0x24,0xa4,0xed,0xe,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1e,0xa5,0xe1,0x11,0x2a,0xae,0xed,0xc6,0x2b,0xae,0xed,0xff,0x2a,0xae,0xed,0xd3,0x2b,0xaa,0xf1,0x12,0x2a,0xae,0xec,0xd9,0x2b,0xae,0xed,0xff,0x2a,0xae,0xed,0x74,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x20,0x9f,0xdf,0x8,0x2a,0xae,0xed,0xda,0x2b,0xae,0xed,0xff,0x2a,0xad,0xee,0x79,0x27,0xb1,0xeb,0x27,0x2b,0xae,0xed,0xe9,0x2b,0xae,0xed,0xff,0x2a,0xaf,0xed,0xd8,0x27,0xad,0xee,0x3b,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x28,0xae,0xef,0x3f,0x2b,0xae,0xee,0xdc,0x2b,0xae,0xed,0xff,0x2a,0xae,0xec,0xe6,0x25,0xad,0xf0,0x22,0x2a,0xae,0xed,0x98,0x2b,0xae,0xed,0xff,0x2b,0xae,0xed,0xda,0x24,0xb6,0xff,0x7,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x28,0xae,0xed,0x39,0x2b,0xae,0xee,0xa1,0x1c,0xaa,0xe3,0x9,0x0,0x0,0x0,0x0,0x27,0xaa,0xeb,0x27,0x2a,0xaf,0xed,0xd8,0x2b,0xae,0xed,0xff,0x2b,0xae,0xed,0xfe,0x2b,0xae,0xed,0xba,0x2b,0xae,0xef,0x5f,0x2b,0xb1,0xf1,0x24,0x20,0x9f,0xdf,0x8,0x20,0xbf,0xdf,0x8,0x28,0xae,0xeb,0x26,0x2a,0xac,0xed,0x62,0x2b,0xad,0xec,0xbe,0x2b,0xae,0xed,0xff,0x2b,0xae,0xed,0xff,0x2a,0xae,0xed,0xd4,0x24,0xaf,0xe9,0x23,0x0,0xff,0xff,0x1,0x2a,0xae,0xed,0x9e,0x2b,0xae,0xed,0xf9,0x29,0xad,0xed,0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x2a,0xaa,0xea,0xc,0x2a,0xae,0xed,0x8b,0x2a,0xae,0xec,0xf6,0x2b,0xae,0xed,0xff,0x2b,0xae,0xed,0xff,0x2b,0xae,0xed,0xff,0x2b,0xae,0xed,0xff,0x2b,0xae,0xed,0xff,0x2b,0xae,0xed,0xff,0x2b,0xae,0xed,0xff,0x2b,0xae,0xed,0xff,0x2b,0xaf,0xed,0xf4,0x2a,0xaf,0xee,0x86,0x1a,0xb3,0xe6,0xa,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x28,0xaf,0xeb,0x33,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x2e,0xae,0xf3,0x16,0x2b,0xae,0xed,0x71,0x2b,0xaf,0xed,0xb8,0x2b,0xae,0xed,0xe7,0x2b,0xae,0xed,0xfc,0x2b,0xae,0xed,0xfc,0x2a,0xae,0xed,0xe6,0x2a,0xae,0xed,0xb7,0x2a,0xae,0xec,0x6e,0x26,0xb3,0xf2,0x14,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0
#endif
};

lv_img_dsc_t imgABS_on_png = {
.header.always_zero = 0,
.header.w = 28,
.header.h = 22,
.data_size = 616 * LV_IMG_PX_SIZE_ALPHA_BYTE,
.header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
.data = imgABS_on_png_map,
};