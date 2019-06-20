/*
 * LED.h
 *
 *  Created on: 2017��4��15��
 *      Author: LKM
 */

#ifndef LED_H_
#define LED_H_

#include "DSP28x_Project.h"

/*��ʽ1*/
#define	  LED1	GpioDataRegs.GPADAT.bit.GPIO0
#define	  LED2	GpioDataRegs.GPADAT.bit.GPIO1
#define	  LED3	GpioDataRegs.GPADAT.bit.GPIO2
#define	  LED4	GpioDataRegs.GPADAT.bit.GPIO3
#define	  LED5	GpioDataRegs.GPADAT.bit.GPIO4

/*��ʽ2*/
/*GPIOx������Ĵ���Ϊ1����Ϊ�ߣ�LED�Ʊ�����
  GPIOx����λ�Ĵ���Ϊ1����Ϊ�ͣ�LED�Ʊ�Ϩ��*/
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


/*��ʽ3*/
/*
�����л��Ĵ�����ʽ��ת����״̬,����λ��1 ���л���ת����״̬������λ��0 �������л�
���GPIO ĳ���������ó���������������GPxTOGGLE �Ķ�Ӧλд1 �󣬸������źŽ���ȡ����д0 û��Ӱ��
*/

//#define LED1_TOGGLE GpioDataRegs.GPATOGGLE.bit.GPIO0 = 1;	// GPIO0��ƽ��תһ��


void LED_GPIO_Config(void);

#endif /* LED_H_ */
