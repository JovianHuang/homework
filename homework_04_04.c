/*
* =========================================================================== *
* @Author:		JovianHuang
* @Student ID:	416125000301
* @Filename:	homework_04_04.c
* @Description:	A homework which requires that the program be written to
				solve problems about the calendar.
* @Version:		0.1.0.180319_base
* =========================================================================== *
*/
#include <stdio.h>

// A function to judge whether it is a leap year

int main(int argc, char const *argv[])
{
	int year, month, day, i;
	int days = 0;
	scanf("%d%d%d", &year, &month, &day);

	// Declare two arrays that stores the number of days in each month
	int arrMonth_inLeap[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int arrMonth_inAvg[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	if ((!(year%4)) && year%100 || !(year%400))
	{
		i = 0;
		/* 	This initialization is necessary, or change
			the "i" in the following loop to other*/
		for (i; i < month - 1; i++)
			days = days + arrMonth_inLeap[i];
		days = days + day;
	}
	else
	{
		i = 0;
		for (i; i < month - 1; i++)
			days = days + arrMonth_inAvg[i];
		days = days + day;
	}

	printf("%d, ", days);

	switch (days % 7)
	{
		case 1: printf("Monday\n");	break;
		case 2: printf("Tuesday\n");	break;
		case 3: printf("Wednesday\n");	break;
		case 4: printf("Thursday\n");	break;
		case 5: printf("Friday\n");	break;
		case 6: printf("Saturday\n");	break;
		case 0: printf("Sunday\n");
	}


	return 0;
}
