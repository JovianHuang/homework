/*
* =========================================================================== *
* @Author:		JovianHuang
* @Student ID:	416125000301
* @Filename:	homework_180328_03.c
* @Description:	A homework which requires that the program be written to
				calculate how many years Chuckie will empty his account
* @Version:		1.0.0.180318_alpha
* =========================================================================== *
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	float deposit = 100;
	int years = 0;

	while (deposit > 0)
	{
		deposit += deposit * 0.08;
		deposit -= 10;
		years++;
	}
	printf("%d\n", years);

	return 0;
}
