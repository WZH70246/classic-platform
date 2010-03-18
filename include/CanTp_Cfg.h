/* -------------------------------- Arctic Core ------------------------------
 * Arctic Core - the open source AUTOSAR platform http://arccore.com
 *
 * Copyright (C) 2009  ArcCore AB <contact@arccore.com>
 *
 * This source code is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 as published by the
 * Free Software Foundation; See <http://www.gnu.org/licenses/old-licenses/gpl-2.0.txt>.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 * -------------------------------- Arctic Core ------------------------------*/


#ifndef CANTP_CFG_H_
#define CANTP_CFG_H_

#include "CanTp_Types.h"

#define MAIN_FUNCTION_PERIOD_TIME_MS	1000
#define CONVERT_MS_TO_MAIN_CYCLES(x) 	100

//#define CANTP_RX_NSDU_CONFIG_LIST_CNT	3
//#define CANTP_TX_NSDU_CONFIG_LIST_CNT	3

#define CANTP_NSDU_CONFIG_LIST_SIZE		6 //CANTP_RX_NSDU_CONFIG_LIST_CNT + CANTP_TX_NSDU_CONFIG_LIST_CNT
#define CANTP_NSDU_RUNTIME_LIST_SIZE	6 // Number of local channels, see CanTp266.

#define FRTP_CANCEL_TRANSMIT_REQUEST 	STD_ON
#define CANTP_VERSION_INFO_API          STD_ON   /**< Build version info API */
#define CANTP_DEV_ERROR_DETECT          STD_ON   /**< Enable Development Error Trace */
#define CANTP_DEV_ERROR_DETECT			STD_ON

extern CanTp_ConfigType CanTpConfig;
extern const CanTp_RxNSduType CanTpRxNSduConfigList[];
extern const CanTp_TxNSduType CanTpTxNSduConfigList[];
extern const CanTp_NSduType CanTpNSduConfigList[];

#endif /* CANTP_CFG_H_ */
