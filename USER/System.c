/*
 *  Fliename   : System.c
 *  Function   : ���ó�ʼ��ϵͳ�Ĵ���
 *  Created on : 2017��4��22��
 *  Author     : LKM
 */

#include "System.h"

/*
 * ��������System_Init
 * ����   �����ó�ʼ��ϵͳ�Ĵ���
 * ����   ����
 * ���   ����
 */
void System_Init(void)
{
	// Step 1. ��ʼ��ϵͳ����
	// PLL�����໷��, WatchDog, enable Peripheral Clocks����������ʱ�ӣ�
	   InitSysCtrl();

	// Step 2. ��ʼ��GPIO������GPIO��Ĭ��״̬
	// InitGpio();  // Skipped for this example
	   InitXintf16Gpio();	//zq

	// Step 3. ��������жϲ���ʼ��PIE������
	// ����CPU�ж�
	   DINT;

	// ��PIE���ƼĴ�����ʼ��Ϊ��Ĭ��״̬
	// Ĭ��״̬�ǽ�������PIE�жϺͱ�־
	   InitPieCtrl();

	// ����CPU�жϣ����������CPU�жϱ�־
	   IER = 0x0000;
	   IFR = 0x0000;

	// PIE ������ָ��ָ���жϷ����(ISR)������ʼ��.
	// ��ʹ�ڳ����ﲻ��Ҫʹ���жϹ��ܣ����ڵ���Ŀ��ҲҪ�� PIE ��������г�ʼ��.
	// ��������Ϊ�˱���PIE����Ĵ���.
	   InitPieVectTable();

}

