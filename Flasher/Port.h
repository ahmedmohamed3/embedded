#ifndef PORT_H
#define PORT_H
//initializing the functions 
void onInit();
void run();
void flash();
//defining the global variables 
sbit LED= P3^0;
sbit BUTTON= P2^0;
#define LCD P2;
#endif 