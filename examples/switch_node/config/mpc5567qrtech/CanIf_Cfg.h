/*
* Configuration of module: CanIf (CanIf_Cfg.h)
*
* Created by:              Arccore AB
* Copyright:               
*
* Configured for (MCU):    MPC5567
*
* Module vendor:           ArcCore
* Generator version:       2.0.5
*
* Generated by Arctic Studio (http://arccore.com) 
*           on Thu Mar 10 10:50:24 CET 2011
*/


#if !(((CANIF_SW_MAJOR_VERSION == 1) && (CANIF_SW_MINOR_VERSION == 3)) )
#error CanIf: Configuration file expected BSW module version to be 1.3.*
#endif


#ifndef CANIF_CFG_H_
#define CANIF_CFG_H_

#include "Can.h"


#define CANIF_VERSION_INFO_API              STD_ON
#define CANIF_DEV_ERROR_DETECT			    STD_ON
#define CANIF_DLC_CHECK                     STD_ON
#define CANIF_ARC_RUNTIME_PDU_CONFIGURATION	STD_OFF
#define CANIF_MULITPLE_DRIVER_SUPPORT       STD_OFF  // Not supported
#define CANIF_READRXPDU_DATA_API			STD_OFF  // Not supported
#define CANIF_READRXPDU_NOTIFY_STATUS_API	STD_OFF  // Not supported
#define CANIF_READTXPDU_NOTIFY_STATUS_API	STD_OFF  // Not supported
#define CANIF_SETDYNAMICTXID_API            STD_OFF  // Not supported
#define CANIF_WAKEUP_EVENT_API			    STD_OFF  // Not supported
#define CANIF_TRANSCEIVER_API               STD_OFF  // Not supported
#define CANIF_TRANSMIT_CANCELLATION         STD_OFF  // Not supported



#define CANIF_PDU_ID_LedCommandTx		0

// Identifiers for the elements in CanIfControllerConfig[]
// This is the ConfigurationIndex in CanIf_InitController()
typedef enum {
	CANIF_CHANNEL_0_CONFIG_0,
	CANIF_CHANNEL_CONFIGURATION_CNT
} CanIf_Arc_ConfigurationIndexType;

typedef enum {
	CANIF_CHANNEL_0,
	CANIF_CHANNEL_CNT
} CanIf_Arc_ChannelIdType;

#define CANIF_CONTROLLER_ID_Controller_1	CANIF_CHANNEL_0


#include "CanIf_ConfigTypes.h"


extern CanIf_ConfigType CanIf_Config;

#endif

