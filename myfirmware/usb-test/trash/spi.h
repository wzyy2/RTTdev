#ifndef __SPI_H
#define __SPI_H
//#include "sys.h"
#include "stm32f4lib.h"
//////////////////////////////////////////////////////////////////////////////////	 
//?????????,??????,??????????
//ALIENTEK??STM32???
//SPI?? ??	   
//????@ALIENTEK
//????:www.openedv.com
//????:2012/9/9
//??:V1.0
//????,?????
//Copyright(C) ????????????? 2009-2019
//All rights reserved									  
//////////////////////////////////////////////////////////////////////////////////

 
 				  	    													  
void SPI2_Init(void);			 //???SPI?
void SPI2_SetSpeed(u8 SpeedSet); //??SPI??   
u8 SPI2_ReadWriteByte(u8 TxData);//SPI????????
#define SPI_FLASH_CS_L IO0(IOBB,PIN12)
#define SPI_FLASH_CS_H IO1(IOBB,PIN12)

#endif
