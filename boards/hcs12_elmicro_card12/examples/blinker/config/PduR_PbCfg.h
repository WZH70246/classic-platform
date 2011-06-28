/*
* Configuration of module: PduR (PduR_PbCfg.h)
*
* Created by:              
* Copyright:               
*
* Configured for (MCU):    HCS12
*
* Module vendor:           ArcCore
* Generator version:       3.0.8
*
* Generated by Arctic Studio (http://arccore.com) 
*           on Tue Jun 28 16:58:19 CEST 2011
*/


#if !(((PDUR_SW_MAJOR_VERSION == 2) && (PDUR_SW_MINOR_VERSION == 0)) )
#error PduR: Configuration file expected BSW module version to be 2.0.*
#endif


#if defined(USE_DCM)
#include "Dcm.h"
#endif
#if defined(USE_COM)
#include "Com.h"
#endif
#if defined(USE_CANIF)
#include "CanIf.h"
#endif
#if defined(USE_CANTP)
#include "CanTp.h"
#endif

extern PduR_PBConfigType PduR_Config;

//  PduR Polite Defines.
#define PDUR_PDU_ID_FreqReq COM_PDU_ID_FreqReq
#define PDUR_REVERSE_PDU_ID_FreqReq CANIF_PDU_ID_FreqReq  
#define PDUR_PDU_ID_FreqInd CANIF_PDU_ID_FreqInd
#define PDUR_REVERSE_PDU_ID_FreqInd COM_PDU_ID_FreqInd  
