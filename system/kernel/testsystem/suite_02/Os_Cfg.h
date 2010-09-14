/* 
* Configuration of module Os (Os_Cfg.h)
* 
* Created by: 
* Configured for (MCU): Undefined MCU
* 
* Module editor vendor:  ArcCore
* Module editor version: 2.0.7
* 
* 
* Generated by Arctic Studio (http://arccore.com)
*           on Tue Jun 08 08:23:43 CEST 2010
*/


#if (OS_SW_MAJOR_VERSION != 2) 
#error "Os: Configuration file version differs from BSW version."
#endif


#ifndef OS_CFG_H_
#define OS_CFG_H_


// Alarm Id's
#define ALARM_ID_Alarm1	0
#define ALARM_ID_Alarm2	1

// Counter Id's
#define COUNTER_ID_Counter1	0
#define COUNTER_ID_Counter2	1

// Counter macros
#define OSMAXALLOWEDVALUE_Counter1 65535
#define OSMAXALLOWEDVALUE_Counter2 65535


// Event masks
#define EVENT_MASK_Alarm_1	1
#define EVENT_MASK_Alarm_2	2
#define EVENT_MASK_Event1	1
#define EVENT_MASK_SchTbl_1	4
#define EVENT_MASK_SchTbl_2	8

// Isr Id's

// Resource Id's

// Linked resource id's

// Resource masks

// Task Id's
#define TASK_ID_OsIdle	0
#define TASK_ID_btask_2	1
#define TASK_ID_btask_4	2
#define TASK_ID_etask_3	3
#define TASK_ID_etask_5	4
#define TASK_ID_etask_master	5

// Task entry points
void OsIdle( void );
void btask_2( void );
void btask_4( void );
void etask_3( void );
void etask_5( void );
void etask_master( void );

// Schedule table id's
#define SCHTBL_ID_ScheduleTable_1  0
#define SCHTBL_ID_ScheduleTable_2  1

// Stack size
#define OS_INTERRUPT_STACK_SIZE	2048
#define OS_OSIDLE_STACK_SIZE 512

#define OS_ALARM_CNT			2 
#define OS_TASK_CNT				6
#define OS_SCHTBL_CNT			2
#define OS_COUNTER_CNT			2
#define OS_EVENTS_CNT			5
#define OS_ISRS_CNT				0
#define OS_RESOURCE_CNT			0
#define OS_LINKED_RESOURCE_CNT	0

#define CFG_OS_DEBUG				STD_ON

#define OS_SC1 						STD_ON     
#define OS_STACK_MONITORING			STD_ON
#define OS_STATUS_EXTENDED			STD_ON
#define OS_USE_GET_SERVICE_ID		STD_ON
#define OS_USE_PARAMETER_ACCESS		STD_ON
#define OS_RES_SCHEDULER			STD_ON

#endif /*OS_CFG_H_*/
