/********************************************************************************************
 * FILE DISCRIPTION
 * ------------------------------------------------------------
 *          File: Mcu_Hw.h
 *          Module:Mcu_Hw.h
 * 
 *          Description: Header file for register definition
 * ***************************************************************************************/
#ifndef Mcu_Hw.h
#define Mcu_Hw.h
/****************************************************************************************
 * INCLUDES
******************************************************************************************/
#include "Std_Types.h"

/*****************************************************************************************
 * GLOBAL DATA TYPES AND STRUCTURES 
******************************************************************************************/
typedef struct
{
    uint32 VECACT         :8;
    uint32                :3;
    uint32 RETBASE        :1;
    uint32 VECPEND        :3;
    uint32 VECPEND        :4;
    uint32                :2;
    uint32 ISRPEND        :1;
    uint32 ISRPRE         :1;
    uint32                :1;
    uint32 PENDSTCLR      :1;
    uint32 PENDSTSET      :1;
    uint32 UNPENDSV       :1;
    uint32 PENDSV         :1;
    uint32                :2;
    uint32 NMISET         :1;
  }INTCTRL_BF;

typedef union 
{   
    uint32  R;                  /*To access this register once time to write hex*/
    INTCTRL_BF B;               /*to access INTCTRL_Tag time by bitfield*/
}INTCTRL;
/*****************************************************************************************
 * GLOBAL COSTANT MACROS
******************************************************************************************/
#define CORTEXM4_PERI_BASE_ADDRESS                      0XE000E000
#define APINT                                           *((volatile uint32*)(CORTEXM4_PERI_BASE_ADDRESS+0xD0C))
#define INTCTRL                                         *((volatile INTCTRL_Tag*)(CORTEXM4_PERI_BASE_ADDRESS+0xD04))


/*****************************************************************************************
 * GLOBAL DATA PROTOTYPES 
******************************************************************************************/



#endif

/*****************************************************************************************
 * END OF FILE: Mcu_Hw.h
******************************************************************************************/
