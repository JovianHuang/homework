/*
* =========================================================================== *
* @Author:		JovianHuang
* @Student ID:	416125000301
* @Filename:	homework_05_02.c
* @Description:	A homework which requires that the program be written to
				print the calendar of 2018, which is given the month
* @Version:		1.4.0.180412_beta
* =========================================================================== *
*/
#include <stdio.h>

const int arrDaysPerMonth[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
int findFirstDay(int);
void printCalendar(int);

int main(int argc, char const *argv[])
{
	int month;
	scanf("%d", &month); 

	printCalendar(month);

	return 0;
}

int findFirstDay(int month)
{
	int i;
	int days = 1;

	// To find the first day of this month is which days?
	for (i = 0; i < month - 1; i++)
		days += arrDaysPerMonth[i];

	return days % 7;	// To find what day is it that day?
}

void printCalendar(int month)
{
	printf("Sun\tMon\tTues\tWed\tThur\tFri\tSat\n"); // Header

	int firstday = findFirstDay(month);
	int lastday = arrDaysPerMonth[month - 1];
	int count = 0;	// To control replace a newline
	int i;

	for (i = 0; i < firstday; i++)
	{
		printf("\t");
		count++;
	}

	for (i = 1; i <= lastday; i++)
	{
		printf("%-d\t", i);
		count++;
		if (!(count % 7))
		{	// Replace a newline after printed 7 date
			printf("\n");
			count = 0;
		}
	}
}