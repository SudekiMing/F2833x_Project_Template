/*
 * LED.h
 *
 *  Created on: 2017年4月15日
 *      Author: LKM
 */

#ifndef LED_H_
#define LED_H_

#include "DSP28x_Project.h"

/*方式1*/
#define	  LED1	GpioDataRegs.GPADAT.bit.GPIO0
#define	  LED2	GpioDataRegs.GPADAT.bit.GPIO1
#define	  LED3	GpioDataRegs.GPADAT.bit.GPIO2
#define	  LED4	GpioDataRegs.GPADAT.bit.GPIO3
#define	  LED5	GpioDataRegs.GPADAT.bit.GPIO4

/*方式2*/
/*GPIOx的清零寄存器为1表明为高，LED灯被点亮
  GPIOx的置位寄存器为1表明为低，LED灯被熄灭*/
//#define	  LED1_ON	GpioDataRegs.GPACLEAR.bit.GPIO0 = 1;
//#define	  LED1_OFF	GpioDataRegs.GPASET.bit.GPIO0 = 1;
//#define	  LED2_ON	GpioDataRegs.GPACLEAR.bit.GPIO1 = 1;
//#define	  LED2_OFF	GpioDataRegs.GPASET.bit.GPIO1 = 1;
//#define	  LED3_ON	GpioDataRegs.GPACLEAR.bit.GPIO2 = 1;
//#define	  LED3_OFF	GpioDataRegs.GPASET.bit.GPIO2 = 1;
//#define	  LED4_ON	GpioDataRegs.GPACLEAR.bit.GPIO3 = 1;
//#define	  LED4_OFF	GpioDataRegs.GPASET.bit.GPIO3 = 1;
//#define	  LED5_ON	GpioDataRegs.GPACLEAR.bit.GPIO4 = 1;
//#define	  LED5_OFF	GpioDataRegs.GPASET.bit.GPIO4 = 1;


/*方式3*/
/*
采用切换寄存器方式翻转引脚状态,任意位置1 将切换翻转引脚状态，任意位清0 将不予切换
如果GPIO 某引脚已配置成数字量输出，则对GPxTOGGLE 的对应位写1 后，该引脚信号将被取反，写0 没有影响
*/

//#define LED1_TOGGLE GpioDataRegs.GPATOGGLE.bit.GPIO0 = 1;	// GPIO0电平翻转一次


void LED_GPIO_Config(void);

#endif /* LED_H_ */
