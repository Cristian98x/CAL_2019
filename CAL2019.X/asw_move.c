#include"asw_move.h"
#include"rte.h"

void ASW_Move(){
    RTE_vSetMotDir(0);
    RTE_vSetMotSpeed(30);
 }
   

void ASW_MotInit(){
    RTE_vMotInit();
}