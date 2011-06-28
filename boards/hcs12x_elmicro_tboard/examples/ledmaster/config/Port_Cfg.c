/*
* Configuration of module: Port (Port_Cfg.c)
*
* Created by:              
* Copyright:               
*
* Configured for (MCU):    HCS12
*
* Module vendor:           ArcCore
* Generator version:       2.0.1
*
* Generated by Arctic Studio (http://arccore.com) 
*           on Tue Jun 28 16:50:43 CEST 2011
*/

	


#include "Port.h"

#define PORT_UNDEFINED 0x00

const Port_ConfigType PortConfigData =
{
    .corePullUpRegister = 0x90,
    .coreReducedDriveRegister = 0x00,
    .modeRoutingRegister = 0x00,

      #if ( PORTA_CONFIGURABLE == STD_ON )
    .portADirection = PORT_UNDEFINED,
    .portAOutValue = PORT_UNDEFINED,
    .portAMask = PORT_UNDEFINED,
      #endif

      #if ( PORTB_CONFIGURABLE == STD_ON )
    .portBDirection = 0xFF,
    .portBOutValue = PORT_UNDEFINED,
    .portBMask = 0x0,
      #endif

      #if ( PORTE_CONFIGURABLE == STD_ON )
    .portEDirection = PORT_UNDEFINED,
    .portEOutValue = PORT_UNDEFINED,
    .portEMask = PORT_UNDEFINED,
      #endif

      #if ( PORTK_CONFIGURABLE == STD_ON )
    .portKDirection = PORT_UNDEFINED,
    .portKOutValue = PORT_UNDEFINED,
    .portKMask = PORT_UNDEFINED,
      #endif

      #if ( PORTH_CONFIGURABLE == STD_ON )
    .portHDirection = 0x0,
    .portHOutValue = 0x0,
    .portHMask = 0x0,
    .portHPullEnableRegister = 0xFF,
    .portHPullPolarityRegsiter = 0x0,
    .portHReducedDriveRegister = 0x0,
      #endif

      #if ( PORTJ_CONFIGURABLE == STD_ON )
    .portJDirection = 0x80,
    .portJOutValue = 0xC0,
    .portJMask = 0x40,
    .portJPullEnableRegister = 0x0,
    .portJPullPolarityRegsiter 0x0,
    .portJReducedDriveRegister = 0x0,
      #endif

      #if ( PORTM_CONFIGURABLE == STD_ON )
    .portMDirection = 0x0,
    .portMOutValue = 0xC3,
    .portMMask = 0x0,
    .portMPullEnableRegister = 0x0,
    .portMPullPolarityRegsiter = 0x0,
    .portMWiredModeRegsiter = PORT_UNDEFINED,
    .portMReducedDriveRegister = 0x0,
      #endif

      #if ( PORTP_CONFIGURABLE == STD_ON )
    .portPDirection = 0x3,
    .portPOutValue = 0x0,
    .portPMask = 0x0,
    .portPPullEnableRegister = 0x0,
    .portPPullPolarityRegsiter = 0x0,
    .portPReducedDriveRegister = 0x0,
      #endif

      #if ( PORTS_CONFIGURABLE == STD_ON )
    .portSDirection = 0x0,
    .portSOutValue = 0xF,
    .portSMask = 0x0,
    .portSPullEnableRegister = 0x5,
    .portSPullPolarityRegsiter = 0x0,
    .portSWiredModeRegsiter = PORT_UNDEFINED,
    .portSReducedDriveRegister = 0x0,
      #endif

      #if ( PORTT_CONFIGURABLE == STD_ON )
    .portTDirection = 0x4,
    .portTOutValue = 0x3,
    .portTMask = 0x0,
    .portTPullEnableRegister = 0x0,
    .portTPullPolarityRegsiter = 0x0,
    .portTReducedDriveRegister = 0x0,
      #endif
};


