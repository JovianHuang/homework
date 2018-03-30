/*
* =========================================================================== *
* @Author:		JovianHuang
* @Student ID:	416125000301
* @Filename:	homework_180321_04.c
* @Description:	A homework which requires that the program be written to
				find the number of days of the month based on the year and
				month entered.
* @Version:		1.3.0.180321_alpha
* =========================================================================== *
*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int year, month;
	scanf("%d%d", &year, &month);

	// Declare two arrays that stores the number of days in each month
	int arrMonth_inLeap[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int arrMonth_inFrac[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	if ((!(year%4)) && year%100 || !(year%400))
		printf("%d\n", arrMonth_inLeap[month-1]);
	else
		printf("%d\n", arrMonth_inFrac[month-1]);

	return 0;
}