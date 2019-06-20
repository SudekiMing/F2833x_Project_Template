/*
 *  Fliename   : LED.c
 *  Function   : 配置LED用到的I/O口
 *  Created on : 2017年4月15日
 *  Author     : LKM
 */

#include "LED.h"

/*
 * 函数名：LED_GPIO_Config
 * 描述   ：配置LED用到的I/O口
 * 输入   ：无
 * 输出   ：无
 */
void LED_GPIO_Config(void)
{
   EALLOW;

   GpioCtrlRegs.GPAMUX1.bit.GPIO0 = 0; // GPIO0 = GPIO0 通用I/O口
   GpioCtrlRegs.GPADIR.bit.GPIO0 = 1;  // GPIO0 配置为输出口
   GpioCtrlRegs.GPAMUX1.bit.GPIO1 = 0; // GPIO1 = GPIO1 通用I/O口
   GpioCtrlRegs.GPADIR.bit.GPIO1 = 1;  // GPIO1 配置为输出口
   GpioCtrlRegs.GPAMUX1.bit.GPIO2 = 0; // GPIO2 = GPIO2 通用I/O口
   GpioCtrlRegs.GPADIR.bit.GPIO2 = 1;  // GPIO2 配置为输出口
   GpioCtrlRegs.GPAMUX1.bit.GPIO3 = 0; // GPIO3 = GPIO3 通用I/O口
   GpioCtrlRegs.GPADIR.bit.GPIO3 = 1;  // GPIO3 配置为输出口
   GpioCtrlRegs.GPAMUX1.bit.GPIO4 = 0; // GPIO4 = GPIO4 通用I/O口
   GpioCtrlRegs.GPADIR.bit.GPIO4 = 1;  // GPIO4 配置为输出口

   EDIS;

   /*方式1*/
   //关闭所有的灯，方式1
   GpioDataRegs.GPADAT.bit.GPIO0 = 1;
   DELAY_US(10);
   GpioDataRegs.GPADAT.bit.GPIO1 = 1;
   DELAY_US(10);
   GpioDataRegs.GPADAT.bit.GPIO2 = 1;
   DELAY_US(10);
   GpioDataRegs.GPADAT.bit.GPIO3 = 1;
   DELAY_US(10);
   GpioDataRegs.GPADAT.bit.GPIO4 = 1;

   /*方式2*/
  /* //关闭所有的灯，即高电平熄灭，方式2
   GpioDataRegs.GPASET.bit.GPIO0 = 1;
   GpioDataRegs.GPASET.bit.GPIO1 = 1;
   GpioDataRegs.GPASET.bit.GPIO2 = 1;
   GpioDataRegs.GPASET.bit.GPIO3 = 1;
   GpioDataRegs.GPASET.bit.GPIO4 = 1;*/

}
//===========================================================================
// No more.
//===========================================================================

