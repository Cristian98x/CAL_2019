#include"hal_servo.h"
#include"mcal_pwm.h"

#define rezolutie 0.04375

void Hal_vSetServA(T_F16 angle){
    
    T_F16 duty=(angle-10)*rezolutie+4;
    
    if(duty>9.6)
     {
          duty=9.6;
      }
    if(duty<6.6)
      {
            duty=6.6;
       }
    
    
    PWM1_vSetDuty(duty,1);
}

void Hal_vInitServ()
{
    PWM1_vInit();
}
