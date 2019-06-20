/******************** (C) COPYRIGHT 2017 UPRE Team **************************
 * 文件名     ：main.c
 * 描述        ：LED流水灯，频率可调……
 * 实验平台 ：TMS320F28335开发板
 * 作者        ：LKM
 * 时间        ：2017年4月15日
**********************************************************************************/
#include "DSP28x_Project.h"
#include "System.h"
#include "LED.h"

//定时器0中断服务函数
interrupt void ISRTimer0(void);

/*
 * 函数名：main
 * 描述   ：主函数
 * 输入   ：无
 * 输出   ：无
 */
int main(void)
{

    //系统配置初始化
	System_Init();

	//LED端口初始化
    LED_GPIO_Config();

	 while(1)
	 {
         /* 方式1*/
	     LED1=~LED1;
	     DELAY_US(50000);
		 /*LED2=~LED2;        //继电器控制及LED2亮灭
		 DELAY_US(50000);*/
		 LED3=~LED3;
		 DELAY_US(50000);
		 LED4=~LED4;
		 DELAY_US(50000);
		 LED5=~LED5;
		 DELAY_US(50000);

        /* 方式2*/
/*		 LED1_ON;
		 DELAY_US(50000);
		 LED1_OFF;

//		 LED2_ON;   //请拔去跳线帽JP2，否则，继电器会工作
//		 DELAY_US(50000);
//		 LED2_OFF;

		 LED3_ON;
		 DELAY_US(50000);
		 LED3_OFF;

		 LED4_ON;
		 DELAY_US(50000);
		 LED4_OFF;

		 LED5_ON;
		 DELAY_US(50000);
		 LED5_OFF;*/

	}

}


