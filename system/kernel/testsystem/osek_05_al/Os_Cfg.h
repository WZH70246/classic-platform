/* 
* Configuration of module Os (Os_Cfg.h)
* 
* Created by: 
* Configured for (MCU): Undefined MCU
* 
* Module vendor:  ArcCore
* Module version: 2.0.11
* 
* 
* Generated by Arctic Studio (http://arccore.com)
*           on Sun Oct 10 18:57:50 CEST 2010
*/


#if (OS_SW_MAJOR_VERSION != 2) 
#error "Os: Configuration file version differs from BSW version."
#endif


#ifndef OS_CFG_H_
#define OS_CFG_H_


// Alarm Id's
#define ALARM_ID_act_etask_h_full	0
#define ALARM_ID_act_etask_l_non	1
#define ALARM_ID_setev_go_etask_h_full	2
#define ALARM_ID_sys_tick_act_etask_h_full	3

// Counter Id's
#define COUNTER_ID_soft1	0
#define COUNTER_ID_system_tick	1

// Counter macros
#define OSMAXALLOWEDVALUE_soft1 65535
#define OSMAXALLOWEDVALUE_system_tick 65535


// Event masks
#define EVENT_MASK_go	1
#define EVENT_MASK_go2	2

// Isr Id's

// Resource Id's

// Linked resource id's

// Resource masks

// Task Id's
#define TASK_ID_OsIdle	0
#define TASK_ID_etask_h_full	1
#define TASK_ID_etask_l_non	2
#define TASK_ID_etask_m_full	3

// Task entry points
void OsIdle( void );
void etask_h_full( void );
void etask_l_non( void );
void etask_m_full( void );

// Schedule table id's

// Stack size
#define OS_INTERRUPT_STACK_SIZE	2048
#define OS_OSIDLE_STACK_SIZE 512

#define OS_ALARM_CNT			4 
#define OS_TASK_CNT				4
#define OS_SCHTBL_CNT			0
#define OS_COUNTER_CNT			2
#define OS_EVENTS_CNT			2
#define OS_ISRS_CNT				0
#define OS_RESOURCE_CNT			0
#define OS_LINKED_RESOURCE_CNT	0

#define CFG_OS_DEBUG				STD_OFF

#define OS_SC1 						STD_ON     
#define OS_STACK_MONITORING			STD_ON
#define OS_STATUS_EXTENDED			STD_ON
#define OS_USE_GET_SERVICE_ID		STD_ON
#define OS_USE_PARAMETER_ACCESS		STD_ON
#define OS_RES_SCHEDULER			STD_ON

#endif /*OS_CFG_H_*/