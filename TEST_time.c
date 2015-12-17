#include <stdio.h>
#include <time.h>

int main(void) 
{
	int hour, minute, second;
	struct tm current_time;
	long int sse = time(0);

	localtime_r(&sse, &current_time);

	hour = current_time.tm_hour;
	minute = current_time.tm_min;
	second = current_time.tm_sec;

	printf("The current time is %02d:%02d:%02d\n", hour, minute, second);
}
