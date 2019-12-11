#include"hal_lf.h"
#include"mcal_gpio.h"


void Hal_vSetLineFollower(BOOL bDir){
    
    GPIO_u8SetPortPin(PORT_C,0,DIGITAL,bDir);
    GPIO_u8SetPortPin(PORT_C,1,DIGITAL,bDir);  
    GPIO_u8SetPortPin(PORT_C,2,DIGITAL,bDir);
    GPIO_u8SetPortPin(PORT_C,3,DIGITAL,bDir);
    GPIO_u8SetPortPin(PORT_C,4,DIGITAL,bDir);
    GPIO_u8SetPortPin(PORT_C,5,DIGITAL,bDir);
    
}

//aplicam tensiune
void Hal_vWriteLineFollower(){
    Hal_vSetLineFollower(OUTPUT);
    GPIO_u8WritePortPin(PORT_C,0,1);
    GPIO_u8WritePortPin(PORT_C,1,1);
    GPIO_u8WritePortPin(PORT_C,2,1);
    GPIO_u8WritePortPin(PORT_C,3,1);
    GPIO_u8WritePortPin(PORT_C,4,1);
    GPIO_u8WritePortPin(PORT_C,5,1);
}


//citire valoare de pe pini
T_U16 Hal_u16GetLineFollower(){
    
    
    Hal_vWriteLineFollower();
    __delay_us(10);
    Hal_vSetLineFollower(INPUT);
    __delay_us(1000);
    return (GPIO_u16ReadPort(PORT_C)&63);
}