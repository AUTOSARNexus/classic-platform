/*
* Configuration of module: Dio (Dio_Lcfg.c)
*
* Created by:              
* Copyright:               
*
* Configured for (MCU):    MPC551x
*
* Module vendor:           ArcCore
* Generator version:       2.0.0
*
* Generated by Arctic Studio (http://arccore.com) 
*           on Mon Jun 13 16:26:35 CEST 2011
*/


	
#include "Dio.h"
#include "Dio_Cfg.h"

const Dio_ChannelType DioChannelConfigData[] = { 
	DIO_CHANNEL_NAME_LEDS_LED4,
	DIO_CHANNEL_NAME_LEDS_LED5,
	DIO_END_OF_LIST
};

const Dio_PortType DioPortConfigData[] = { 
	DIO_PORT_NAME_LED_PORT,  
	DIO_END_OF_LIST
};

const Dio_ChannelGroupType DioConfigData[] = { 
	{ 
	  .port = DIO_PORT_NAME_LED_PORT,
	  .mask = 48, 
	  .offset = 4, 
	},  
	{ 
	  .port = DIO_END_OF_LIST, 
	  .offset = DIO_END_OF_LIST, 
	  .mask = DIO_END_OF_LIST, 
	}
};


uint32 Dio_GetPortConfigSize(void)
{
  return sizeof(DioConfigData);
}
