#ifndef TOUCHPANEL_H  
#define TOUCHPANEL_H  
  
#define MS_TS_MSG21XX_X_MAX                480  
#define MS_TS_MSG21XX_Y_MAX                800  

#define CUST_EINT_TOUCH_PANEL_TYPE	1
#define TPD_CLOSE_POWER_IN_SLEEP
#define TPD_POWER_SOURCE_CUSTOM         MT6323_POWER_LDO_DEFAULT
  
  
#define MAX_TOUCH_FINGER	2
#define REPORT_PACKET_LENGTH	8
  
#define TPD_HAVE_BUTTON
#define TPD_BUTTON_HEIGHT   	(100)
#define TPD_KEY_COUNT           3
#define TPD_KEYS                {KEY_BACK, KEY_HOMEPAGE, KEY_MENU}
//#define TPD_KEYS_DIM            {{90,864,120,TPD_BUTTON_HEIGH},{270,864,120,TPD_BUTTON_HEIGH},{450,864,120,TPD_BUTTON_HEIGH}}
#define TPD_KEYS_DIM            {{90,864,120,100},{270,864,120,100},{450,864,120,100}}
//#define TPD_KEYS_DIM            {{40,880,80,50},{200,880,80,50},{360,880,80,50}}  
  
#endif
