#include"asw_move.h"
#include"rte.h"

void ASW_Move(){
    RTE_vSetMotDir(0);
    RTE_vSetMotSpeed(30);
    
 }
   

void ASW_MotInit(){
    RTE_vMotInit();
}

void ASW_Servo()
{
   //RTE_vInitServ();
  // RTE_vSetServA(117);
   T_F16 time=0;
   if(time<=10)
   {
       RTE_vSetServA(45);
       time=time+10;
   }
   else if(time>10)
   {
       RTE_vSetServA(110);
       time=0;
   }
   
}

void ASW_MoveLineF()
{
    RTE_vSetMotDir(0);
    T_U16 val;
    val=RTE_u16GetLineFollower();
    
    if(val==63)
    {
        RTE_vSetMotSpeed(0);
    }
    else
    {
        RTE_vSetMotSpeed(30);
    }
    
}