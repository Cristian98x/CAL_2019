/* 
 * File:   rte.h
 * Author: student
 *
 * Created on November 20, 2019, 6:34 PM
 */
#include"hal_dc.h"
#include"xc.h"
#include"hal_servo.h"
#ifndef RTE_H
#define	RTE_H

#ifdef	__cplusplus
extern "C" {
#endif

#define RTE_vSetMotDir Hal_vSetMotDir
#define RTE_vMotInit Hal_vMotInit
#define RTE_vSetMotSpeed Hal_vSetMotSpeed
#define RTE_vSetServA Hal_vSetServA
#define RTE_vInitServ Hal_vInitServ
    


#ifdef	__cplusplus
}
#endif

#endif	/* RTE_H */

