#ifndef __QMSD_INTERNEL_UI_CB_H
#define __QMSD_INTERNEL_UI_CB_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "lvgl.h"

#define BLOCKLY_switch_reactor_EVENT_HANDLER
void __qmsd_switch_reactor_cb(lv_obj_t* obj,lv_event_t event);

#define BLOCKLY_screen_main_SCREEN_INIT
void __qmsd_screen_main_init(void);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif //__QMSD_INTERNEL_UI_CB_H