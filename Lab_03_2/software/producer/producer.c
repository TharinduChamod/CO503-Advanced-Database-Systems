/*
 * 	Template of producer application using FIFO
 *
 
*/

#include "FIFO_1.h"



void delay(int n);
int producer();


int main()
{
	printf("Starting main....\n");

	alt_u32 start_time, end_time;

	alt_timestamp_start();

	start_time = alt_timestamp();

	producer();

	end_time = alt_timestamp();

	printf("Time taken for Write Operation: %.2lu ms\n", 1000*((unsigned long)(end_time-start_time))/((unsigned long)alt_timestamp_freq()));
	while(1) { }

	return 0;
}

int producer()
{
	printf("Producer starting..\n");

	FIFO_1_INIT(); // Initialize the FIFO

	int j = 5;
	while(j<=500)
	{
		delay(100000);
		WRITE_FIFO_1(&j); // Write to the producer-consumer fifo
		delay(100000);

		printf("Producer sent [%i]\n",j);
		j+=10;
	}

	printf("Producer finished..\n");
	return 0;
}


void delay(int n)
{
	int i;
	for(i=n; i>0; i--)
	{
		continue;
	}
}
