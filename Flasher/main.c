#include <reg52.h>

/*
*Author: ahmed mohamed
*Desc: output 5 Volt at port 3 pin 0
*/

//initializing the functions 
void init();
void run();

//defining the global variables 
sbit LED= P3^0;
sbit BUTTON= P2^0;

void main(void){
	//initilize 
	void init();
	//do the logic 
	void run();
}
void init(){
	//the led is output and botton is input
	LED=0;
	BUTTON=1;
}
void run(){
	while(1){
		if(BUTTON==1){
			//reads the groung
			LED=1;
		}else{
			LED=0;
		}
	}
}


