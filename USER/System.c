/*
 *  Fliename   : System.c
 *  Function   : 配置初始化系统寄存器
 *  Created on : 2017年4月22日
 *  Author     : LKM
 */

#include "System.h"

/*
 * 函数名：System_Init
 * 描述   ：配置初始化系统寄存器
 * 输入   ：无
 * 输出   ：无
 */
void System_Init(void)
{
	// Step 1. 初始化系统控制
	// PLL（锁相环）, WatchDog, enable Peripheral Clocks（启用外设时钟）
	   InitSysCtrl();

	// Step 2. 初始化GPIO，设置GPIO的默认状态
	// InitGpio();  // Skipped for this example
	   InitXintf16Gpio();	//zq

	// Step 3. 清除所有中断并初始化PIE向量表
	// 禁用CPU中断
	   DINT;

	// 将PIE控制寄存器初始化为其默认状态
	// 默认状态是禁用所有PIE中断和标志
	   InitPieCtrl();

	// 禁用CPU中断，并清除所有CPU中断标志
	   IER = 0x0000;
	   IFR = 0x0000;

	// PIE 向量表指针指向中断服务程(ISR)完成其初始化.
	// 即使在程序里不需要使用中断功能，出于调试目的也要对 PIE 向量表进行初始化.
	// 这样做是为了避免PIE引起的错误.
	   InitPieVectTable();

}

