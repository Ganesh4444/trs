#include<reg51.h>
sbit led = P1^0;
//void delay(a)
//{
//	int i,j;
//	for(i = 0;i<a;i++)
//	for(j = 0;j<a;j++);
//}

void ext_int_init()
{
	EA = 1;
	EX0 = 1;
	IT0 = 0;    //falling edge
}
void External0_ISR()interrupt 0
{
	 //delay(200);
	led =~led;
}

void main()
{
	ext_int_init();
	while(1)
	{
	}
}