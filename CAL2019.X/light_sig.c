#include"light_sig.h"
#include"sys_schedule.h"
#include"general.h"
#include "hal_battery.h"
int counter=0;
void vDoHandleLight()
{
  if(counter<10)
  {
    if(counter<6&&counter%2==1)
    {
        GPIO_u8WritePortPin(PORT_A, 10, 1);
        
    }
    else
    {
        GPIO_u8WritePortPin(PORT_A, 10, 0);
    }
   
  }
  else{
      counter=0;
  }
  counter++;
}

 void lowBattery()
 {
     
     T_U8 baterie=Hal_readBattery();
     if(baterie<=10)
     {  
       
             GPIO_u8WritePortPin(PORT_A, 10, 3);
         
     }
     if(baterie>20)
     {
         GPIO_u8WritePortPin(PORT_A, 10, 1);
     }
 }