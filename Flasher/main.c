#include <reg52.h>
#include "Port.h"
#include "Delay.h"
/*
*Author: ahmed mohamed
*Desc: output 5 Volt at port 3 pin 0
*/


void main(void){
	//initilize 
	onInit();
	//do the logic 
  run();
}
void onInit(){
	//led is output 
	LED=0;
	//button is input
	BUTTON=1;
}
void run(){
	while(1){
		if(BUTTON == 0){
			//reads the groung
			flash();
		}else{
			LED=0;
		}
	}
}

void flash(){
	delay_s(1);
	LED=1;
	delay_s(1);
	LED=0;
}
