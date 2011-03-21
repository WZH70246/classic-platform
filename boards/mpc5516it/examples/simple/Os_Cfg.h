/*
* Configuration of module: Os (Os_Cfg.h)
*
* Created by:              
* Copyright:               
*
* Configured for (MCU):    MPC551x
*
* Module vendor:           ArcCore
* Generator version:       2.0.22
*
* Generated by Arctic Studio (http://arccore.com) 
*           on Mon Mar 21 17:15:43 CET 2011
*/


#if !(((OS_SW_MAJOR_VERSION == 2) && (OS_SW_MINOR_VERSION == 0)) )
#error Os: Configuration file expected BSW module version to be 2.0.*
#endif



#ifndef OS_CFG_H_
#define OS_CFG_H_

// Application Id's
#define APPLICATION_ID_OsApplication1  0

// Alarm Id's
#define ALARM_ID_Alarm1	0

// Counter Id's
#define COUNTER_ID_Counter1	0

// Counter macros
#define OSMAXALLOWEDVALUE_Counter1 65535


// Event masks
#define EVENT_MASK_Event1	1
#define EVENT_MASK_Event2	2

// Isr Id's

// Resource Id's

// Linked resource id's

// Resource masks

// Task Id's
#define TASK_ID_OsIdle	0
#define TASK_ID_bTask3	1
#define TASK_ID_eTask1	2
#define TASK_ID_eTask2	3

// Task entry points
void OsIdle( void );
void bTask3( void );
void eTask1( void );
void eTask2( void );

// Schedule table id's

// Stack size
#define OS_INTERRUPT_STACK_SIZE	2048
#define OS_OSIDLE_STACK_SIZE 512

#define OS_ALARM_CNT			1 
#define OS_TASK_CNT				4
#define OS_SCHTBL_CNT			0
#define OS_COUNTER_CNT			1
#define OS_EVENTS_CNT			2
//#define OS_ISRS_CNT			0
#define OS_RESOURCE_CNT			0
#define OS_LINKED_RESOURCE_CNT	0
#define OS_APPLICATION_CNT		1
#define OS_SERVICE_CNT			0  /* ARCTICSTUDIO_GENERATOR_TODO */
#define CFG_OS_DEBUG				STD_OFF

#define OS_SC1 						STD_ON	/* NOT CONFIGURABLE IN TOOLS */
#define OS_USE_APPLICATIONS			STD_ON
#define OS_USE_MEMORY_PROT			STD_OFF	/* NOT CONFIGURABLE IN TOOLS */
#define OS_USE_TASK_TIMING_PROT		STD_OFF	/* NOT CONFIGURABLE IN TOOLS */
#define OS_USE_ISR_TIMING_PROT		STD_OFF	/* NOT CONFIGURABLE IN TOOLS */
//#define OS_SC3 					STD_ON	/* NOT CONFIGURABLE IN TOOLS */  
#define OS_STACK_MONITORING			STD_ON
#define OS_STATUS_EXTENDED			STD_ON
#define OS_USE_GET_SERVICE_ID		STD_ON
#define OS_USE_PARAMETER_ACCESS		STD_ON
#define OS_RES_SCHEDULER			STD_ON	/* NOT CONFIGURABLE IN TOOLS */

#define OS_ISR_CNT			0
#define OS_ISR2_CNT 		0
#define OS_ISR1_CNT			0

/* New */
#define OS_ISR_MAX_CNT		10	/* NOT CONFIGURABLE IN TOOLS */


#endif /*OS_CFG_H_*/
