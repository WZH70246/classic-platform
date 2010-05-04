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








#ifndef COMM_TYPES_H_
#define COMM_TYPES_H_

typedef enum {
	COMM_NO_COMMUNICATION,
	COMM_SILENT_COMMUNICATION,
	COMM_FULL_COMMUNICATION,
} ComM_ModeType;

typedef enum {
	COMM_UNINIT,
	COMM_INIT,
} ComM_InitStatusType;

typedef uint8 ComM_InhibitionStatusType;


#endif /*COMM_TYPES_H_*/
