/* 
 * File:   hal_battery.h
 * Author: student
 *
 * Created on February 27, 2020, 5:36 PM
 */

#ifndef HAL_BATTERY_H
#define	HAL_BATTERY_H
#include "mcal_adc.h"
#include "general.h"
#include "general_types.h"

#ifdef	__cplusplus
extern "C" {
#endif

T_U8 Hal_readBattery();


#ifdef	__cplusplus
}
#endif

#endif	/* HAL_BATTERY_H */

