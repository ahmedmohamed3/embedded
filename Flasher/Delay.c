#include "Delay.h"

/*
*Desc: This file provides 3 functions to simulate the timer 
*/

void delay_1ms()
{
	unsigned int temp; //this is specified based on the crystall frequency
	for(temp=120;temp>0;temp--);
}
void delay_ms(unsigned int x)
{
	unsigned int i;
	for(i=0;i<x;i++)
		delay_1ms();
}
void delay_s(unsigned int numSeconds)
{
	unsigned int x;
	unsigned int milliSeconds;
	milliSeconds=numSeconds*1000;
	for(x=0;x<milliSeconds;x++)
	{
		delay_1ms();
	}
}
