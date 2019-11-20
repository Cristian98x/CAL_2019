/* 
 * File:   hal_dc.h
 * Author: student
 *
 * Created on November 20, 2019, 6:14 PM
 */
#include"general.h"
#ifndef HAL_DC_H
#define	HAL_DC_H

#ifdef	__cplusplus
extern "C" {
#endif


    extern void Hal_vSetMotDir(T_U8 dir);
    extern void Hal_vSetMotSpeed(T_F16 speed);
    extern void Hal_vMotInit();

#ifdef	__cplusplus
}
#endif

#endif	/* HAL_DC_H */

