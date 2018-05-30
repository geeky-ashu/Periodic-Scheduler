#include "osKernel.h"

#define QUANTA	5

uint32_t count0,count1,count2;

void Task0(void)
{
	while(1)
	{
		count0++;
	}
	
}


void Task1(void)
{
	while(1)
	{
		count1++;
	}
	
}


void Task2(void)
{
	while(1)
	{
		count2++;
	}
	
}


int main(void)
{
	osKernelInit();
	osKernelAddThreads(&Task0,&Task1,&Task2);
	osKernelLaunch(QUANTA);
}

