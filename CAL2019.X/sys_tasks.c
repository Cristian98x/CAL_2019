/* 
 * File:   sys_tasks.h
 * Author: Cristian T. A.
 *
 * Created on August 17, 2018, 1:26 PM
 */

#include "general.h"
#include "sys_tasks.h"

#include "mcal_init.h"
#include "asw_com.h"
#include"rte.h"
#include"asw_move.h"
#include "light_sig.h"

T_U16 a = 0;

void TASK_Inits()
{
    MCAL_vInit();
    GPIO_u8SetPortPin(PORT_A, 10, DIGITAL ,OUTPUT);
    ASW_MotInit();
    ADC_vInit();
    
}

void TASK_1ms()
{
    
}

void TASK_5ms()
{
   // lowBattery();
    
}

void TASK_10ms()
{   
    
}

void TASK_100ms()
{ 
   // if(a==1)
   // {
   //     vDoHandleLight();
   //     a=0;
 //   }
 //   else{
  //      a++;
 //   }
   // ASW_MoveLineF();
    if(bObs==1)
    {
        GPIO_u8WritePortPin(PORT_A, 10, 1);
    }
    else 
    { 
        GPIO_u8WritePortPin(PORT_A, 10, 0);
    }
}

void TASK_500ms()
{ 
    
}

void TASK_1000ms()
{
  //  a = !a;
  //  GPIO_u8WritePortPin(PORT_A, 10, a);
   // ASW_Move();
   // ASW_Servo();
    
}