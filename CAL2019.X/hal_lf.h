/* 
 * File:   hal_lf.h
 * Author: student
 *
 * Created on December 11, 2019, 6:15 PM
 */

#include"general.h"
#ifndef HAL_LF_H
#define	HAL_LF_H

#ifdef	__cplusplus
extern "C" {
#endif

    extern void Hal_vSetLineFollower(BOOL bDir);
    extern void Hal_vWriteLineFollower();
    extern T_U16 Hal_u16GetLineFollower();
    



#ifdef	__cplusplus
}
#endif

#endif	/* HAL_LF_H */

