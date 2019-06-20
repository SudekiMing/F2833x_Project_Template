/*
 *  Fliename   : LED.c
 *  Function   : ����LED�õ���I/O��
 *  Created on : 2017��4��15��
 *  Author     : LKM
 */

#include "LED.h"

/*
 * ��������LED_GPIO_Config
 * ����   ������LED�õ���I/O��
 * ����   ����
 * ���   ����
 */
void LED_GPIO_Config(void)
{
   EALLOW;

   GpioCtrlRegs.GPAMUX1.bit.GPIO0 = 0; // GPIO0 = GPIO0 ͨ��I/O��
   GpioCtrlRegs.GPADIR.bit.GPIO0 = 1;  // GPIO0 ����Ϊ�����
   GpioCtrlRegs.GPAMUX1.bit.GPIO1 = 0; // GPIO1 = GPIO1 ͨ��I/O��
   GpioCtrlRegs.GPADIR.bit.GPIO1 = 1;  // GPIO1 ����Ϊ�����
   GpioCtrlRegs.GPAMUX1.bit.GPIO2 = 0; // GPIO2 = GPIO2 ͨ��I/O��
   GpioCtrlRegs.GPADIR.bit.GPIO2 = 1;  // GPIO2 ����Ϊ�����
   GpioCtrlRegs.GPAMUX1.bit.GPIO3 = 0; // GPIO3 = GPIO3 ͨ��I/O��
   GpioCtrlRegs.GPADIR.bit.GPIO3 = 1;  // GPIO3 ����Ϊ�����
   GpioCtrlRegs.GPAMUX1.bit.GPIO4 = 0; // GPIO4 = GPIO4 ͨ��I/O��
   GpioCtrlRegs.GPADIR.bit.GPIO4 = 1;  // GPIO4 ����Ϊ�����

   EDIS;

   /*��ʽ1*/
   //�ر����еĵƣ���ʽ1
   GpioDataRegs.GPADAT.bit.GPIO0 = 1;
   DELAY_US(10);
   GpioDataRegs.GPADAT.bit.GPIO1 = 1;
   DELAY_US(10);
   GpioDataRegs.GPADAT.bit.GPIO2 = 1;
   DELAY_US(10);
   GpioDataRegs.GPADAT.bit.GPIO3 = 1;
   DELAY_US(10);
   GpioDataRegs.GPADAT.bit.GPIO4 = 1;

   /*��ʽ2*/
  /* //�ر����еĵƣ����ߵ�ƽϨ�𣬷�ʽ2
   GpioDataRegs.GPASET.bit.GPIO0 = 1;
   GpioDataRegs.GPASET.bit.GPIO1 = 1;
   GpioDataRegs.GPASET.bit.GPIO2 = 1;
   GpioDataRegs.GPASET.bit.GPIO3 = 1;
   GpioDataRegs.GPASET.bit.GPIO4 = 1;*/

}
//===========================================================================
// No more.
//===========================================================================

