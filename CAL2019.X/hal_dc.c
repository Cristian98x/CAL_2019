#include"hal_dc.h"
#include"mcal_pwm.h"

 void Hal_vSetMotDir(T_U8 dir)
{
  
    GPIO_u8WritePortPin(PORT_A, 9, dir);
}

 void Hal_vSetMotSpeed(T_F16 speed)
{
    PWM1_vSetDuty(speed,2);
}
 
 void Hal_vMotInit()
 {
    PWM1_vInit();
 }