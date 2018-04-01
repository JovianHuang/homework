/*
* =========================================================================== *
* @Author:		JovianHuang
* @Student ID:	416125000301
* @Filename:	homework_04_04.c
* @Description:	A homework which requires that the program be written to
				solve problems about the calendar.
* @Version:		1.2.0.180401_ahpla
* =========================================================================== *
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int year, month, day, i;
	int days = 0;
	scanf("%d%d%d", &year, &month, &day);

	// Declare two arrays that stores the number of days in each month
	int arrMonth_inLeap[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int arrMonth_inCom[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	if ((!(year%4)) && year%100 || !(year%400))
	{
		for (i = 0; i < month - 1; i++)
			days = days + arrMonth_inLeap[i];
		days = days + day;
	}
	else
	{
		for (i = 0; i < month - 1; i++)
			days = days + arrMonth_inCom[i];
		days = days + day;
	}

	printf("%d, ", days);

	switch (days % 7)
	{
		case 1: printf("Monday\n");		break;
		case 2: printf("Tuesday\n");	break;
		case 3: printf("Wednesday\n");	break;
		case 4: printf("Thursday\n");	break;
		case 5: printf("Friday\n");		break;
		case 6: printf("Saturday\n");	break;
		case 0: printf("Sunday\n");
	}

	return 0;
}