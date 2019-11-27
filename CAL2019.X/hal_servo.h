/* 
 * File:   hal_servo.h
 * Author: student
 *
 * Created on November 27, 2019, 6:13 PM
 */
#include"general.h"
#ifndef HAL_SERVO_H
#define	HAL_SERVO_H

#ifdef	__cplusplus
extern "C" {
#endif

    extern void Hal_vSetServA(T_F16 angle);
    extern void Hal_vInitServ();



#ifdef	__cplusplus
}
#endif

#endif	/* HAL_SERVO_H */

