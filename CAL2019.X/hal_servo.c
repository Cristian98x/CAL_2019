#include"hal_servo.h"
#include"mcal_pwm.h"

#define rezolutie 0.117

void Hal_vSetServA(T_F16 angle){
    
    if(angle<65)
    {
        angle=65;
    }
    if(angle>115)
    {
        angle=115;
    }
    T_F16 duty=(angle-60)*rezolutie+4;

    
    PWM1_vSetDuty(duty,1);
}

void Hal_vInitServ()
{
    PWM1_vInit();
}
