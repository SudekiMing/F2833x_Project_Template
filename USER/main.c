/******************** (C) COPYRIGHT 2017 UPRE Team **************************
 * �ļ���     ��main.c
 * ����        ��LED��ˮ�ƣ�Ƶ�ʿɵ�����
 * ʵ��ƽ̨ ��TMS320F28335������
 * ����        ��LKM
 * ʱ��        ��2017��4��15��
**********************************************************************************/
#include "DSP28x_Project.h"
#include "System.h"
#include "LED.h"

//��ʱ��0�жϷ�����
interrupt void ISRTimer0(void);

/*
 * ��������main
 * ����   ��������
 * ����   ����
 * ���   ����
 */
int main(void)
{

    //ϵͳ���ó�ʼ��
	System_Init();

	//LED�˿ڳ�ʼ��
    LED_GPIO_Config();

	 while(1)
	 {
         /* ��ʽ1*/
	     LED1=~LED1;
	     DELAY_US(50000);
		 /*LED2=~LED2;        //�̵������Ƽ�LED2����
		 DELAY_US(50000);*/
		 LED3=~LED3;
		 DELAY_US(50000);
		 LED4=~LED4;
		 DELAY_US(50000);
		 LED5=~LED5;
		 DELAY_US(50000);

        /* ��ʽ2*/
/*		 LED1_ON;
		 DELAY_US(50000);
		 LED1_OFF;

//		 LED2_ON;   //���ȥ����ñJP2�����򣬼̵����Ṥ��
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


