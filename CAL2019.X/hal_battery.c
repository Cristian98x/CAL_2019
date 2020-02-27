#include "general.h"
#include "mcal_adc.h"


T_U8 Hal_readBattery()
{
    T_U16 val =ADC_u16Read(0);
    T_U8 rezolutie=0;
    T_U8 gradIncarcare=0;
    
    if(val>=7 &&val<=8.4 )
    {
        rezolutie=(100-20)/(8.4-7);
        gradIncarcare=(val-7)*rezolutie+20;
        
    }
    
    if(val>=6.5&&val<=7)
    {
        rezolutie=(20-10)/(7-6.5);
        gradIncarcare=(val-6.5)*rezolutie+10;
    }
    
    if(val>=6&&val<6.5)
    {
       rezolutie=(10)/(6.5-6);
        gradIncarcare=(val-6)*rezolutie;
    }
    return gradIncarcare;
}