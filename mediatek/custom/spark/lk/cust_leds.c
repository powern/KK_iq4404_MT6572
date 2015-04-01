//#include <platform/cust_leds.h>
#include <cust_leds.h>
//#include <asm/arch/mt6577_pwm.h>
#include <platform/mt_pwm.h>
#include <platform/mt_gpio.h>

extern int disp_bls_set_backlight(unsigned int level);
/*
unsigned int brightness_remap( unsigned int level )
{
unsigned int mapped_level;
unsigned int  tmp_map;

#if 0 //defined( LED_INCREASE_LED_LEVEL_MTKPATCH )
  tmp_map = ( level * 255 ) / 1023;
#else
  tmp_map = level;
#endif
  if( tmp_map > 255 )
    mapped_level = 255;
  else
    mapped_level = tmp_map;

	return mapped_level;
}

//unsigned int Cust_SetBacklight(int level, int div)
//{
//    DISP_SetBacklight(brightness_mapping(level));
//    return 0;
//}

unsigned int Cust_SetBrightness(int level)
{
    bool first_set_pwm;
    if(!first_set_pwm) {                            //
     mt_set_gpio_mode(GPIO68, GPIO_MODE_01);      //   вот это
    first_set_pwm = true;                        //
    disp_bls_set_backlight( brightness_remap( level ));
    return 0;
}*/
//extern int DISP_SetBacklight(int level);

static struct cust_mt65xx_led cust_led_list[MT65XX_LED_TYPE_TOTAL] = {
	{"red",               MT65XX_LED_MODE_NONE, -1, {0}},
	{"green",             MT65XX_LED_MODE_NONE, -1, {0}},
	{"blue",              MT65XX_LED_MODE_NONE, -1, {0}},
	{"jogball-backlight", MT65XX_LED_MODE_NONE, -1, {0}},
	{"keyboard-backlight",MT65XX_LED_MODE_NONE, -1, {0}},
	{"button-backlight",  MT65XX_LED_MODE_NONE, -1, {0}},
	{"lcd-backlight",     MT65XX_LED_MODE_PWM, PWM1, {0,0,0,0,0}},
	//{"lcd-backlight",     MT65XX_LED_MODE_CUST_LCM, (int)Cust_SetBrightness, {0,0,0,0,0}},  /* PWM_BL */
	//{"lcd-backlight",     MT65XX_LED_MODE_CUST_BLS_PWM, (int)disp_bls_set_backlight, {0,0,0,0,0}}
	//{"lcd-backlight",     MT65XX_LED_MODE_CUST_BLS_PWM, (int)Cust_SetBrightness, {0,0,0,0,0}}
//>2014/02/24-Yutinf Shih.
};

struct cust_mt65xx_led *get_cust_led_list(void)
{
	return cust_led_list;
}

